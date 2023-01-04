#include <tree_sitter/parser.h>
#include <algorithm>
#include <vector>
#include <string>
#include <cwctype>
#include <cstring>
#include "tag.h"

namespace {

using std::vector;
using std::string;

enum TokenType {
  START_TAG_NAME,
  END_TAG_NAME,
  ERRONEOUS_END_TAG_NAME,
  SELF_CLOSING_TAG_DELIMITER,
  IMPLICIT_END_TAG,
  ENTITY,
  CDATA_START_DELIMITER,
  CDATA_END_DELIMITER,
  RAW_TEXT,
  COMMENT
};

struct Scanner {
  Scanner() {}

  unsigned serialize(char *buffer) {
    uint16_t tag_count = tags.size() > UINT16_MAX ? UINT16_MAX : tags.size();
    uint16_t serialized_tag_count = 0;

    unsigned i = sizeof(tag_count);
    std::memcpy(&buffer[i], &tag_count, sizeof(tag_count));
    i += sizeof(tag_count);

    for (; serialized_tag_count < tag_count; serialized_tag_count++) {
      Tag &tag = tags[serialized_tag_count];
      unsigned name_length = tag.name.size();
      if (name_length > UINT8_MAX) name_length = UINT8_MAX;
      if (i + 1 + name_length >= TREE_SITTER_SERIALIZATION_BUFFER_SIZE) break;
      buffer[i++] = name_length;
      tag.name.copy(&buffer[i], name_length);
      i += name_length;
    }

    std::memcpy(&buffer[0], &serialized_tag_count, sizeof(serialized_tag_count));
    return i;
  }

  void deserialize(const char *buffer, unsigned length) {
    tags.clear();
    if (length > 0) {
      unsigned i = 0;
      uint16_t tag_count, serialized_tag_count;

      std::memcpy(&serialized_tag_count, &buffer[i], sizeof(serialized_tag_count));
      i += sizeof(serialized_tag_count);

      std::memcpy(&tag_count, &buffer[i], sizeof(tag_count));
      i += sizeof(tag_count);

      tags.resize(tag_count);
      for (unsigned j = 0; j < serialized_tag_count; j++) {
        Tag &tag = tags[j];
        uint16_t name_length = static_cast<uint8_t>(buffer[i++]);
        tag.name.assign(&buffer[i], &buffer[i + name_length]);
        i += name_length;
      }
    }
  }

  string scan_tag_name(TSLexer *lexer) {
    string tag_name;
    while (iswalnum(lexer->lookahead) ||
           lexer->lookahead == '-' ||
           lexer->lookahead == ':') {
      tag_name += towupper(lexer->lookahead);
      lexer->advance(lexer, false);
    }
    return tag_name;
  }

  bool scan_comment(TSLexer *lexer) {
    if (lexer->lookahead != '-') return false;
    lexer->advance(lexer, false);
    if (lexer->lookahead != '-') return false;
    lexer->advance(lexer, false);

    unsigned dashes = 0;
    while (lexer->lookahead) {
      switch (lexer->lookahead) {
        case '-':
          ++dashes;
          break;
        case '>':
          if (dashes >= 2) {
            lexer->result_symbol = COMMENT;
            lexer->advance(lexer, false);
            lexer->mark_end(lexer);
            return true;
          }
        default:
          dashes = 0;
      }
      lexer->advance(lexer, false);
    }
    return false;
  }

  bool scan_raw_text(TSLexer *lexer) {
    if (!tags.size()) return false;

    lexer->mark_end(lexer);

    const string &end_delimiter = "]]>";

    unsigned delimiter_index = 0;
    while (lexer->lookahead) {
      if (towupper(lexer->lookahead) == end_delimiter[delimiter_index]) {
        delimiter_index++;
        if (delimiter_index == end_delimiter.size()) break;
        lexer->advance(lexer, false);
      } else {
        delimiter_index = 0;
        lexer->advance(lexer, false);
        lexer->mark_end(lexer);
      }
    }

    lexer->result_symbol = RAW_TEXT;
    return true;
  }

  bool scan_implicit_end_tag(TSLexer *lexer) {
    bool is_closing_tag = false;
    if (lexer->lookahead == '/') {
      is_closing_tag = true;
      lexer->advance(lexer, false);
    }

    string tag_name = scan_tag_name(lexer);
    if (tag_name.empty()) return false;

    Tag next_tag = Tag(tag_name);

    if (is_closing_tag) {
      // The tag correctly closes the topmost element on the stack
      if (!tags.empty() && tags.back() == next_tag) return false;

      // Otherwise, dig deeper and queue implicit end tags (to be nice in
      // the case of malformed XML)
      if (std::find(tags.begin(), tags.end(), next_tag) != tags.end()) {
        tags.pop_back();
        lexer->result_symbol = IMPLICIT_END_TAG;
        return true;
      }
    }

    return false;
  }

  bool scan_start_tag_name(TSLexer *lexer) {
    string tag_name = scan_tag_name(lexer);
    if (tag_name.empty()) return false;
    Tag tag = Tag(tag_name);
    tags.push_back(tag);
    lexer->result_symbol = START_TAG_NAME;
    return true;
  }

  bool scan_end_tag_name(TSLexer *lexer) {
    string tag_name = scan_tag_name(lexer);
    if (tag_name.empty()) return false;
    Tag tag = Tag(tag_name);
    if (!tags.empty() && tags.back() == tag) {
      tags.pop_back();
      lexer->result_symbol = END_TAG_NAME;
    } else {
      lexer->result_symbol = ERRONEOUS_END_TAG_NAME;
    }
    return true;
  }

  bool scan_self_closing_tag_delimiter(TSLexer *lexer) {
    lexer->advance(lexer, false);
    if (lexer->lookahead == '>') {
      lexer->advance(lexer, false);
      if (!tags.empty()) {
        tags.pop_back();
        lexer->result_symbol = SELF_CLOSING_TAG_DELIMITER;
      }
      return true;
    }
    return false;
  }

  bool scan_entity(TSLexer *lexer) {
    lexer->advance(lexer, false);
    while (lexer->lookahead) {
      if (lexer->lookahead == ';') {
        lexer->result_symbol = ENTITY;
        lexer->advance(lexer, false);
        lexer->mark_end(lexer);
        return true;
      }
      else if (iswalnum(lexer->lookahead)) {
        lexer->advance(lexer, false);
      }
      else {
        break;
      }
    }
    return false;
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    while (iswspace(lexer->lookahead)) {
      lexer->advance(lexer, true);
    }

    if (valid_symbols[RAW_TEXT] && !valid_symbols[START_TAG_NAME] && !valid_symbols[END_TAG_NAME]) {
      return scan_raw_text(lexer);
    }

    switch (lexer->lookahead) {
      case '<':
        lexer->mark_end(lexer);
        lexer->advance(lexer, false);

        if (lexer->lookahead == '!') {
          lexer->advance(lexer, false);
          return scan_comment(lexer);
        }

        if (valid_symbols[IMPLICIT_END_TAG]) {
          return scan_implicit_end_tag(lexer);
        }
        break;

      case '\0':
        if (valid_symbols[IMPLICIT_END_TAG]) {
          return scan_implicit_end_tag(lexer);
        }
        break;

      case '/':
        if (valid_symbols[SELF_CLOSING_TAG_DELIMITER]) {
          return scan_self_closing_tag_delimiter(lexer);
        }
        break;

      case '&':
        if (valid_symbols[ENTITY]) {
          return scan_entity(lexer);
        }
        break;

      default:
        if ((valid_symbols[START_TAG_NAME] || valid_symbols[END_TAG_NAME]) && !valid_symbols[RAW_TEXT]) {
          return valid_symbols[START_TAG_NAME]
            ? scan_start_tag_name(lexer)
            : scan_end_tag_name(lexer);
        }
    }

    return false;
  }

  vector<Tag> tags;
};

}

extern "C" {

void *tree_sitter_xml_external_scanner_create() {
  return new Scanner();
}

bool tree_sitter_xml_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->scan(lexer, valid_symbols);
}

unsigned tree_sitter_xml_external_scanner_serialize(void *payload, char *buffer) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->serialize(buffer);
}

void tree_sitter_xml_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  scanner->deserialize(buffer, length);
}

void tree_sitter_xml_external_scanner_destroy(void *payload) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  delete scanner;
}

}