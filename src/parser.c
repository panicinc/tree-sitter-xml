#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 80
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 9
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LT_QMARK = 1,
  anon_sym_xml = 2,
  aux_sym_prolog_token1 = 3,
  anon_sym_GT = 4,
  anon_sym_LT_BANG = 5,
  sym__doctype = 6,
  anon_sym_LT = 7,
  anon_sym_SLASH_GT = 8,
  anon_sym_LT_SLASH = 9,
  anon_sym_EQ = 10,
  sym_attribute_name = 11,
  anon_sym_SQUOTE = 12,
  aux_sym_quoted_attribute_value_token1 = 13,
  anon_sym_DQUOTE = 14,
  aux_sym_quoted_attribute_value_token2 = 15,
  sym_entity = 16,
  anon_sym_LT_BANG_LBRACK = 17,
  anon_sym_CDATA = 18,
  anon_sym_LBRACK = 19,
  anon_sym_RBRACK_RBRACK_GT = 20,
  sym_text = 21,
  sym__start_tag_name = 22,
  sym__end_tag_name = 23,
  sym_erroneous_end_tag_name = 24,
  sym__implicit_end_tag = 25,
  sym_cdata_text = 26,
  sym_comment = 27,
  sym__error_sentinel = 28,
  sym_document = 29,
  sym_prolog = 30,
  sym_doctype = 31,
  sym__node = 32,
  sym_element = 33,
  sym_start_tag = 34,
  sym_self_closing_tag = 35,
  sym_end_tag = 36,
  sym_erroneous_end_tag = 37,
  sym_attribute = 38,
  sym_quoted_attribute_value = 39,
  sym_cdata = 40,
  sym_cdata_start = 41,
  sym_cdata_end = 42,
  aux_sym_document_repeat1 = 43,
  aux_sym_start_tag_repeat1 = 44,
  aux_sym_cdata_repeat1 = 45,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT_QMARK] = "<\?",
  [anon_sym_xml] = "xml",
  [aux_sym_prolog_token1] = "prolog_token1",
  [anon_sym_GT] = ">",
  [anon_sym_LT_BANG] = "<!",
  [sym__doctype] = "doctype",
  [anon_sym_LT] = "<",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_EQ] = "=",
  [sym_attribute_name] = "attribute_name",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_attribute_value_token1] = "attribute_value",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_attribute_value_token2] = "attribute_value",
  [sym_entity] = "entity",
  [anon_sym_LT_BANG_LBRACK] = "<![",
  [anon_sym_CDATA] = "CDATA",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK_RBRACK_GT] = "]]>",
  [sym_text] = "text",
  [sym__start_tag_name] = "tag_name",
  [sym__end_tag_name] = "tag_name",
  [sym_erroneous_end_tag_name] = "erroneous_end_tag_name",
  [sym__implicit_end_tag] = "_implicit_end_tag",
  [sym_cdata_text] = "cdata_text",
  [sym_comment] = "comment",
  [sym__error_sentinel] = "_error_sentinel",
  [sym_document] = "document",
  [sym_prolog] = "prolog",
  [sym_doctype] = "doctype",
  [sym__node] = "_node",
  [sym_element] = "element",
  [sym_start_tag] = "start_tag",
  [sym_self_closing_tag] = "self_closing_tag",
  [sym_end_tag] = "end_tag",
  [sym_erroneous_end_tag] = "erroneous_end_tag",
  [sym_attribute] = "attribute",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [sym_cdata] = "cdata",
  [sym_cdata_start] = "cdata_start",
  [sym_cdata_end] = "cdata_end",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
  [aux_sym_cdata_repeat1] = "cdata_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT_QMARK] = anon_sym_LT_QMARK,
  [anon_sym_xml] = anon_sym_xml,
  [aux_sym_prolog_token1] = aux_sym_prolog_token1,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_BANG] = anon_sym_LT_BANG,
  [sym__doctype] = sym__doctype,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_attribute_name] = sym_attribute_name,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_quoted_attribute_value_token1] = aux_sym_quoted_attribute_value_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_attribute_value_token2] = aux_sym_quoted_attribute_value_token1,
  [sym_entity] = sym_entity,
  [anon_sym_LT_BANG_LBRACK] = anon_sym_LT_BANG_LBRACK,
  [anon_sym_CDATA] = anon_sym_CDATA,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK_RBRACK_GT] = anon_sym_RBRACK_RBRACK_GT,
  [sym_text] = sym_text,
  [sym__start_tag_name] = sym__start_tag_name,
  [sym__end_tag_name] = sym__start_tag_name,
  [sym_erroneous_end_tag_name] = sym_erroneous_end_tag_name,
  [sym__implicit_end_tag] = sym__implicit_end_tag,
  [sym_cdata_text] = sym_cdata_text,
  [sym_comment] = sym_comment,
  [sym__error_sentinel] = sym__error_sentinel,
  [sym_document] = sym_document,
  [sym_prolog] = sym_prolog,
  [sym_doctype] = sym_doctype,
  [sym__node] = sym__node,
  [sym_element] = sym_element,
  [sym_start_tag] = sym_start_tag,
  [sym_self_closing_tag] = sym_self_closing_tag,
  [sym_end_tag] = sym_end_tag,
  [sym_erroneous_end_tag] = sym_erroneous_end_tag,
  [sym_attribute] = sym_attribute,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [sym_cdata] = sym_cdata,
  [sym_cdata_start] = sym_cdata_start,
  [sym_cdata_end] = sym_cdata_end,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_start_tag_repeat1] = aux_sym_start_tag_repeat1,
  [aux_sym_cdata_repeat1] = aux_sym_cdata_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xml] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_prolog_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_BANG] = {
    .visible = true,
    .named = false,
  },
  [sym__doctype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token2] = {
    .visible = true,
    .named = true,
  },
  [sym_entity] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_BANG_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CDATA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK_RBRACK_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym__start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__end_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_erroneous_end_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__implicit_end_tag] = {
    .visible = false,
    .named = true,
  },
  [sym_cdata_text] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__error_sentinel] = {
    .visible = false,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_prolog] = {
    .visible = true,
    .named = true,
  },
  [sym_doctype] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_self_closing_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_erroneous_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_cdata] = {
    .visible = true,
    .named = true,
  },
  [sym_cdata_start] = {
    .visible = true,
    .named = true,
  },
  [sym_cdata_end] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_start_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cdata_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 2,
  [5] = 3,
  [6] = 6,
  [7] = 7,
  [8] = 7,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 9,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 19,
  [21] = 18,
  [22] = 17,
  [23] = 23,
  [24] = 24,
  [25] = 11,
  [26] = 26,
  [27] = 16,
  [28] = 23,
  [29] = 29,
  [30] = 15,
  [31] = 10,
  [32] = 13,
  [33] = 24,
  [34] = 14,
  [35] = 35,
  [36] = 36,
  [37] = 36,
  [38] = 35,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 42,
  [44] = 40,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 51,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 57,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 67,
  [69] = 62,
  [70] = 65,
  [71] = 71,
  [72] = 72,
  [73] = 63,
  [74] = 55,
  [75] = 71,
  [76] = 66,
  [77] = 77,
  [78] = 58,
  [79] = 64,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(26);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(39);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '=') ADVANCE(37);
      if (lookahead == '>') ADVANCE(31);
      if (lookahead == 'C') ADVANCE(9);
      if (lookahead == '[') ADVANCE(87);
      if (lookahead == ']') ADVANCE(11);
      if (lookahead == 'x') ADVANCE(13);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(39);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '=') ADVANCE(37);
      if (lookahead == '>') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<') ADVANCE(38);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(35);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(88);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(86);
      END_STATE();
    case 9:
      if (lookahead == 'D') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == 'T') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == ']') ADVANCE(6);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 13:
      if (lookahead == 'm') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 16:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 17:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(15);
      END_STATE();
    case 18:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 20:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(17);
      END_STATE();
    case 21:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(89);
      END_STATE();
    case 22:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(30);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 24:
      if (eof) ADVANCE(26);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(39);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '=') ADVANCE(37);
      if (lookahead == '>') ADVANCE(31);
      if (lookahead == ']') ADVANCE(11);
      if (lookahead == 'x') ADVANCE(13);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24)
      END_STATE();
    case 25:
      if (eof) ADVANCE(26);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '<') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25)
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(89);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LT_QMARK);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_prolog_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_prolog_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      if (lookahead == '[') ADVANCE(85);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__doctype);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(32);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == '?') ADVANCE(27);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_entity);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(45);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LT_BANG_LBRACK);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_CDATA);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK_GT);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(89);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 25, .external_lex_state = 2},
  [2] = {.lex_state = 25, .external_lex_state = 3},
  [3] = {.lex_state = 25, .external_lex_state = 3},
  [4] = {.lex_state = 25, .external_lex_state = 3},
  [5] = {.lex_state = 25, .external_lex_state = 3},
  [6] = {.lex_state = 25, .external_lex_state = 2},
  [7] = {.lex_state = 25, .external_lex_state = 3},
  [8] = {.lex_state = 25, .external_lex_state = 2},
  [9] = {.lex_state = 25, .external_lex_state = 2},
  [10] = {.lex_state = 25, .external_lex_state = 3},
  [11] = {.lex_state = 25, .external_lex_state = 3},
  [12] = {.lex_state = 25, .external_lex_state = 3},
  [13] = {.lex_state = 25, .external_lex_state = 3},
  [14] = {.lex_state = 25, .external_lex_state = 3},
  [15] = {.lex_state = 25, .external_lex_state = 3},
  [16] = {.lex_state = 25, .external_lex_state = 3},
  [17] = {.lex_state = 25, .external_lex_state = 3},
  [18] = {.lex_state = 25, .external_lex_state = 3},
  [19] = {.lex_state = 25, .external_lex_state = 2},
  [20] = {.lex_state = 25, .external_lex_state = 3},
  [21] = {.lex_state = 25, .external_lex_state = 2},
  [22] = {.lex_state = 25, .external_lex_state = 2},
  [23] = {.lex_state = 25, .external_lex_state = 3},
  [24] = {.lex_state = 25, .external_lex_state = 3},
  [25] = {.lex_state = 25, .external_lex_state = 2},
  [26] = {.lex_state = 25, .external_lex_state = 3},
  [27] = {.lex_state = 25, .external_lex_state = 2},
  [28] = {.lex_state = 25, .external_lex_state = 2},
  [29] = {.lex_state = 25, .external_lex_state = 3},
  [30] = {.lex_state = 25, .external_lex_state = 2},
  [31] = {.lex_state = 25, .external_lex_state = 2},
  [32] = {.lex_state = 25, .external_lex_state = 2},
  [33] = {.lex_state = 25, .external_lex_state = 2},
  [34] = {.lex_state = 25, .external_lex_state = 2},
  [35] = {.lex_state = 4, .external_lex_state = 4},
  [36] = {.lex_state = 4, .external_lex_state = 4},
  [37] = {.lex_state = 4, .external_lex_state = 4},
  [38] = {.lex_state = 4, .external_lex_state = 4},
  [39] = {.lex_state = 4, .external_lex_state = 4},
  [40] = {.lex_state = 0, .external_lex_state = 5},
  [41] = {.lex_state = 4, .external_lex_state = 4},
  [42] = {.lex_state = 0, .external_lex_state = 5},
  [43] = {.lex_state = 0, .external_lex_state = 5},
  [44] = {.lex_state = 0, .external_lex_state = 5},
  [45] = {.lex_state = 4, .external_lex_state = 4},
  [46] = {.lex_state = 4, .external_lex_state = 4},
  [47] = {.lex_state = 0, .external_lex_state = 2},
  [48] = {.lex_state = 0, .external_lex_state = 5},
  [49] = {.lex_state = 4, .external_lex_state = 4},
  [50] = {.lex_state = 3, .external_lex_state = 2},
  [51] = {.lex_state = 0, .external_lex_state = 6},
  [52] = {.lex_state = 0, .external_lex_state = 5},
  [53] = {.lex_state = 0, .external_lex_state = 6},
  [54] = {.lex_state = 1, .external_lex_state = 2},
  [55] = {.lex_state = 0, .external_lex_state = 7},
  [56] = {.lex_state = 0, .external_lex_state = 2},
  [57] = {.lex_state = 0, .external_lex_state = 2},
  [58] = {.lex_state = 0, .external_lex_state = 2},
  [59] = {.lex_state = 0, .external_lex_state = 2},
  [60] = {.lex_state = 0, .external_lex_state = 2},
  [61] = {.lex_state = 0, .external_lex_state = 2},
  [62] = {.lex_state = 0, .external_lex_state = 2},
  [63] = {.lex_state = 0, .external_lex_state = 8},
  [64] = {.lex_state = 0, .external_lex_state = 2},
  [65] = {.lex_state = 0, .external_lex_state = 2},
  [66] = {.lex_state = 22, .external_lex_state = 2},
  [67] = {.lex_state = 0, .external_lex_state = 2},
  [68] = {.lex_state = 0, .external_lex_state = 2},
  [69] = {.lex_state = 0, .external_lex_state = 2},
  [70] = {.lex_state = 0, .external_lex_state = 2},
  [71] = {.lex_state = 22, .external_lex_state = 2},
  [72] = {.lex_state = 0, .external_lex_state = 2},
  [73] = {.lex_state = 0, .external_lex_state = 8},
  [74] = {.lex_state = 0, .external_lex_state = 7},
  [75] = {.lex_state = 22, .external_lex_state = 2},
  [76] = {.lex_state = 22, .external_lex_state = 2},
  [77] = {.lex_state = 0, .external_lex_state = 2},
  [78] = {.lex_state = 0, .external_lex_state = 2},
  [79] = {.lex_state = 0, .external_lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT_QMARK] = ACTIONS(1),
    [anon_sym_xml] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_BANG] = ACTIONS(1),
    [sym__doctype] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_entity] = ACTIONS(1),
    [anon_sym_LT_BANG_LBRACK] = ACTIONS(1),
    [anon_sym_CDATA] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK_RBRACK_GT] = ACTIONS(1),
    [sym__start_tag_name] = ACTIONS(1),
    [sym__end_tag_name] = ACTIONS(1),
    [sym_erroneous_end_tag_name] = ACTIONS(1),
    [sym__implicit_end_tag] = ACTIONS(1),
    [sym_cdata_text] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__error_sentinel] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(60),
    [sym_prolog] = STATE(6),
    [sym_doctype] = STATE(6),
    [sym__node] = STATE(6),
    [sym_element] = STATE(6),
    [sym_start_tag] = STATE(3),
    [sym_self_closing_tag] = STATE(28),
    [sym_erroneous_end_tag] = STATE(6),
    [sym_cdata] = STATE(6),
    [sym_cdata_start] = STATE(43),
    [aux_sym_document_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LT_QMARK] = ACTIONS(7),
    [anon_sym_LT_BANG] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [anon_sym_LT_SLASH] = ACTIONS(13),
    [sym_entity] = ACTIONS(15),
    [anon_sym_LT_BANG_LBRACK] = ACTIONS(17),
    [sym_text] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LT_QMARK,
    ACTIONS(21), 1,
      anon_sym_LT_BANG,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym_LT_SLASH,
    ACTIONS(29), 1,
      sym__implicit_end_tag,
    STATE(5), 1,
      sym_start_tag,
    STATE(23), 1,
      sym_self_closing_tag,
    STATE(33), 1,
      sym_end_tag,
    STATE(42), 1,
      sym_cdata_start,
    ACTIONS(27), 2,
      sym_entity,
      sym_text,
    STATE(7), 7,
      sym_prolog,
      sym_doctype,
      sym__node,
      sym_element,
      sym_erroneous_end_tag,
      sym_cdata,
      aux_sym_document_repeat1,
  [47] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LT_QMARK,
    ACTIONS(21), 1,
      anon_sym_LT_BANG,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym_LT_SLASH,
    ACTIONS(33), 1,
      sym__implicit_end_tag,
    STATE(5), 1,
      sym_start_tag,
    STATE(19), 1,
      sym_end_tag,
    STATE(23), 1,
      sym_self_closing_tag,
    STATE(42), 1,
      sym_cdata_start,
    ACTIONS(31), 2,
      sym_entity,
      sym_text,
    STATE(2), 7,
      sym_prolog,
      sym_doctype,
      sym__node,
      sym_element,
      sym_erroneous_end_tag,
      sym_cdata,
      aux_sym_document_repeat1,
  [94] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LT_QMARK,
    ACTIONS(21), 1,
      anon_sym_LT_BANG,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(35), 1,
      anon_sym_LT_SLASH,
    ACTIONS(37), 1,
      sym__implicit_end_tag,
    STATE(5), 1,
      sym_start_tag,
    STATE(23), 1,
      sym_self_closing_tag,
    STATE(24), 1,
      sym_end_tag,
    STATE(42), 1,
      sym_cdata_start,
    ACTIONS(27), 2,
      sym_entity,
      sym_text,
    STATE(7), 7,
      sym_prolog,
      sym_doctype,
      sym__node,
      sym_element,
      sym_erroneous_end_tag,
      sym_cdata,
      aux_sym_document_repeat1,
  [141] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LT_QMARK,
    ACTIONS(21), 1,
      anon_sym_LT_BANG,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(35), 1,
      anon_sym_LT_SLASH,
    ACTIONS(41), 1,
      sym__implicit_end_tag,
    STATE(5), 1,
      sym_start_tag,
    STATE(20), 1,
      sym_end_tag,
    STATE(23), 1,
      sym_self_closing_tag,
    STATE(42), 1,
      sym_cdata_start,
    ACTIONS(39), 2,
      sym_entity,
      sym_text,
    STATE(4), 7,
      sym_prolog,
      sym_doctype,
      sym__node,
      sym_element,
      sym_erroneous_end_tag,
      sym_cdata,
      aux_sym_document_repeat1,
  [188] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LT_QMARK,
    ACTIONS(9), 1,
      anon_sym_LT_BANG,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_LT_SLASH,
    ACTIONS(17), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_start_tag,
    STATE(28), 1,
      sym_self_closing_tag,
    STATE(43), 1,
      sym_cdata_start,
    ACTIONS(45), 2,
      sym_entity,
      sym_text,
    STATE(8), 7,
      sym_prolog,
      sym_doctype,
      sym__node,
      sym_element,
      sym_erroneous_end_tag,
      sym_cdata,
      aux_sym_document_repeat1,
  [232] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_LT_QMARK,
    ACTIONS(50), 1,
      anon_sym_LT_BANG,
    ACTIONS(53), 1,
      anon_sym_LT,
    ACTIONS(56), 1,
      anon_sym_LT_SLASH,
    ACTIONS(62), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(65), 1,
      sym__implicit_end_tag,
    STATE(5), 1,
      sym_start_tag,
    STATE(23), 1,
      sym_self_closing_tag,
    STATE(42), 1,
      sym_cdata_start,
    ACTIONS(59), 2,
      sym_entity,
      sym_text,
    STATE(7), 7,
      sym_prolog,
      sym_doctype,
      sym__node,
      sym_element,
      sym_erroneous_end_tag,
      sym_cdata,
      aux_sym_document_repeat1,
  [276] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      anon_sym_LT_QMARK,
    ACTIONS(70), 1,
      anon_sym_LT_BANG,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(76), 1,
      anon_sym_LT_SLASH,
    STATE(3), 1,
      sym_start_tag,
    STATE(28), 1,
      sym_self_closing_tag,
    STATE(43), 1,
      sym_cdata_start,
    ACTIONS(79), 2,
      sym_entity,
      sym_text,
    STATE(8), 7,
      sym_prolog,
      sym_doctype,
      sym__node,
      sym_element,
      sym_erroneous_end_tag,
      sym_cdata,
      aux_sym_document_repeat1,
  [320] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(82), 6,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_LT_BANG_LBRACK,
      sym_text,
  [336] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(86), 6,
      sym__implicit_end_tag,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_LT_BANG_LBRACK,
      sym_text,
  [352] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(90), 6,
      sym__implicit_end_tag,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_LT_BANG_LBRACK,
      sym_text,
  [368] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(82), 6,
      sym__implicit_end_tag,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_LT_BANG_LBRACK,
      sym_text,
  [384] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(94), 6,
      sym__implicit_end_tag,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_LT_BANG_LBRACK,
      sym_text,
  [400] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(98), 6,
      sym__implicit_end_tag,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_LT_BANG_LBRACK,
      sym_text,
  [416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(102), 6,
      sym__implicit_end_tag,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_LT_BANG_LBRACK,
      sym_text,
  [432] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(106), 6,
      sym__implicit_end_tag,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_LT_BANG_LBRACK,
      sym_text,
  [448] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(110), 6,
      sym__implicit_end_tag,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_LT_BANG_LBRACK,
      sym_text,
  [464] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(114), 6,
      sym__implicit_end_tag,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_LT_BANG_LBRACK,
      sym_text,
  [480] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(118), 6,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_LT_BANG_LBRACK,
      sym_text,
  [496] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(118), 6,
      sym__implicit_end_tag,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_LT_BANG_LBRACK,
      sym_text,
  [512] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(114), 6,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_LT_BANG_LBRACK,
      sym_text,
  [528] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(110), 6,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_LT_BANG_LBRACK,
      sym_text,
  [544] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(122), 6,
      sym__implicit_end_tag,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_LT_BANG_LBRACK,
      sym_text,
  [560] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(126), 6,
      sym__implicit_end_tag,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_LT_BANG_LBRACK,
      sym_text,
  [576] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(90), 6,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_LT_BANG_LBRACK,
      sym_text,
  [592] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(130), 6,
      sym__implicit_end_tag,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_LT_BANG_LBRACK,
      sym_text,
  [608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(106), 6,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_LT_BANG_LBRACK,
      sym_text,
  [624] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(122), 6,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_LT_BANG_LBRACK,
      sym_text,
  [640] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(134), 6,
      sym__implicit_end_tag,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_LT_BANG_LBRACK,
      sym_text,
  [656] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(102), 6,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_LT_BANG_LBRACK,
      sym_text,
  [672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(86), 6,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_LT_BANG_LBRACK,
      sym_text,
  [688] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(94), 6,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_LT_BANG_LBRACK,
      sym_text,
  [704] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(126), 6,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_LT_BANG_LBRACK,
      sym_text,
  [720] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(98), 6,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_LT_BANG_LBRACK,
      sym_text,
  [736] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_GT,
    ACTIONS(140), 1,
      anon_sym_SLASH_GT,
    ACTIONS(142), 1,
      sym_attribute_name,
    STATE(39), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [753] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      sym_attribute_name,
    ACTIONS(144), 1,
      anon_sym_GT,
    ACTIONS(146), 1,
      anon_sym_SLASH_GT,
    STATE(38), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [770] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      sym_attribute_name,
    ACTIONS(144), 1,
      anon_sym_GT,
    ACTIONS(148), 1,
      anon_sym_SLASH_GT,
    STATE(35), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [787] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_GT,
    ACTIONS(142), 1,
      sym_attribute_name,
    ACTIONS(150), 1,
      anon_sym_SLASH_GT,
    STATE(39), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [804] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      sym_attribute_name,
    ACTIONS(152), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(39), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [819] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_RBRACK_RBRACK_GT,
    ACTIONS(159), 1,
      sym_cdata_text,
    STATE(34), 1,
      sym_cdata_end,
    STATE(48), 1,
      aux_sym_cdata_repeat1,
  [835] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_EQ,
    ACTIONS(161), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [847] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_RBRACK_RBRACK_GT,
    ACTIONS(167), 1,
      sym_cdata_text,
    STATE(17), 1,
      sym_cdata_end,
    STATE(44), 1,
      aux_sym_cdata_repeat1,
  [863] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_RBRACK_RBRACK_GT,
    ACTIONS(169), 1,
      sym_cdata_text,
    STATE(22), 1,
      sym_cdata_end,
    STATE(40), 1,
      aux_sym_cdata_repeat1,
  [879] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      sym_cdata_text,
    ACTIONS(165), 1,
      anon_sym_RBRACK_RBRACK_GT,
    STATE(14), 1,
      sym_cdata_end,
    STATE(48), 1,
      aux_sym_cdata_repeat1,
  [895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [913] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
    STATE(46), 1,
      sym_quoted_attribute_value,
  [926] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_RBRACK_RBRACK_GT,
    ACTIONS(181), 1,
      sym_cdata_text,
    STATE(48), 1,
      aux_sym_cdata_repeat1,
  [939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [948] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_SQUOTE,
    ACTIONS(188), 1,
      aux_sym_quoted_attribute_value_token1,
  [958] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      sym__end_tag_name,
    ACTIONS(192), 1,
      sym_erroneous_end_tag_name,
  [968] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 2,
      sym_cdata_text,
      anon_sym_RBRACK_RBRACK_GT,
  [976] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      sym_erroneous_end_tag_name,
    ACTIONS(196), 1,
      sym__end_tag_name,
  [986] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_DQUOTE,
    ACTIONS(198), 1,
      aux_sym_quoted_attribute_value_token2,
  [996] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      sym_erroneous_end_tag_name,
  [1003] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LBRACK,
  [1010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_GT,
  [1017] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_xml,
  [1024] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_GT,
  [1031] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      ts_builtin_sym_end,
  [1038] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_CDATA,
  [1045] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_GT,
  [1052] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym__start_tag_name,
  [1059] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      sym__doctype,
  [1066] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_GT,
  [1073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      aux_sym_prolog_token1,
  [1080] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_GT,
  [1087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_GT,
  [1094] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_GT,
  [1101] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_GT,
  [1108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      aux_sym_prolog_token1,
  [1115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
  [1122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      sym__start_tag_name,
  [1129] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      sym_erroneous_end_tag_name,
  [1136] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      aux_sym_prolog_token1,
  [1143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      aux_sym_prolog_token1,
  [1150] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_SQUOTE,
  [1157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_xml,
  [1164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      sym__doctype,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 47,
  [SMALL_STATE(4)] = 94,
  [SMALL_STATE(5)] = 141,
  [SMALL_STATE(6)] = 188,
  [SMALL_STATE(7)] = 232,
  [SMALL_STATE(8)] = 276,
  [SMALL_STATE(9)] = 320,
  [SMALL_STATE(10)] = 336,
  [SMALL_STATE(11)] = 352,
  [SMALL_STATE(12)] = 368,
  [SMALL_STATE(13)] = 384,
  [SMALL_STATE(14)] = 400,
  [SMALL_STATE(15)] = 416,
  [SMALL_STATE(16)] = 432,
  [SMALL_STATE(17)] = 448,
  [SMALL_STATE(18)] = 464,
  [SMALL_STATE(19)] = 480,
  [SMALL_STATE(20)] = 496,
  [SMALL_STATE(21)] = 512,
  [SMALL_STATE(22)] = 528,
  [SMALL_STATE(23)] = 544,
  [SMALL_STATE(24)] = 560,
  [SMALL_STATE(25)] = 576,
  [SMALL_STATE(26)] = 592,
  [SMALL_STATE(27)] = 608,
  [SMALL_STATE(28)] = 624,
  [SMALL_STATE(29)] = 640,
  [SMALL_STATE(30)] = 656,
  [SMALL_STATE(31)] = 672,
  [SMALL_STATE(32)] = 688,
  [SMALL_STATE(33)] = 704,
  [SMALL_STATE(34)] = 720,
  [SMALL_STATE(35)] = 736,
  [SMALL_STATE(36)] = 753,
  [SMALL_STATE(37)] = 770,
  [SMALL_STATE(38)] = 787,
  [SMALL_STATE(39)] = 804,
  [SMALL_STATE(40)] = 819,
  [SMALL_STATE(41)] = 835,
  [SMALL_STATE(42)] = 847,
  [SMALL_STATE(43)] = 863,
  [SMALL_STATE(44)] = 879,
  [SMALL_STATE(45)] = 895,
  [SMALL_STATE(46)] = 904,
  [SMALL_STATE(47)] = 913,
  [SMALL_STATE(48)] = 926,
  [SMALL_STATE(49)] = 939,
  [SMALL_STATE(50)] = 948,
  [SMALL_STATE(51)] = 958,
  [SMALL_STATE(52)] = 968,
  [SMALL_STATE(53)] = 976,
  [SMALL_STATE(54)] = 986,
  [SMALL_STATE(55)] = 996,
  [SMALL_STATE(56)] = 1003,
  [SMALL_STATE(57)] = 1010,
  [SMALL_STATE(58)] = 1017,
  [SMALL_STATE(59)] = 1024,
  [SMALL_STATE(60)] = 1031,
  [SMALL_STATE(61)] = 1038,
  [SMALL_STATE(62)] = 1045,
  [SMALL_STATE(63)] = 1052,
  [SMALL_STATE(64)] = 1059,
  [SMALL_STATE(65)] = 1066,
  [SMALL_STATE(66)] = 1073,
  [SMALL_STATE(67)] = 1080,
  [SMALL_STATE(68)] = 1087,
  [SMALL_STATE(69)] = 1094,
  [SMALL_STATE(70)] = 1101,
  [SMALL_STATE(71)] = 1108,
  [SMALL_STATE(72)] = 1115,
  [SMALL_STATE(73)] = 1122,
  [SMALL_STATE(74)] = 1129,
  [SMALL_STATE(75)] = 1136,
  [SMALL_STATE(76)] = 1143,
  [SMALL_STATE(77)] = 1150,
  [SMALL_STATE(78)] = 1157,
  [SMALL_STATE(79)] = 1164,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(78),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(79),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(73),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(74),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(7),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(61),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(58),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(64),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(63),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(55),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(8),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prolog, 4),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prolog, 4),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cdata, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cdata, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_erroneous_end_tag, 3),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_erroneous_end_tag, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cdata, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cdata, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cdata_end, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cdata_end, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(41),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cdata_repeat1, 2),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cdata_repeat1, 2), SHIFT_REPEAT(48),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cdata_start, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [210] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__start_tag_name = 0,
  ts_external_token__end_tag_name = 1,
  ts_external_token_erroneous_end_tag_name = 2,
  ts_external_token_SLASH_GT = 3,
  ts_external_token__implicit_end_tag = 4,
  ts_external_token_cdata_text = 5,
  ts_external_token_RBRACK_RBRACK_GT = 6,
  ts_external_token_comment = 7,
  ts_external_token__error_sentinel = 8,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__start_tag_name] = sym__start_tag_name,
  [ts_external_token__end_tag_name] = sym__end_tag_name,
  [ts_external_token_erroneous_end_tag_name] = sym_erroneous_end_tag_name,
  [ts_external_token_SLASH_GT] = anon_sym_SLASH_GT,
  [ts_external_token__implicit_end_tag] = sym__implicit_end_tag,
  [ts_external_token_cdata_text] = sym_cdata_text,
  [ts_external_token_RBRACK_RBRACK_GT] = anon_sym_RBRACK_RBRACK_GT,
  [ts_external_token_comment] = sym_comment,
  [ts_external_token__error_sentinel] = sym__error_sentinel,
};

static const bool ts_external_scanner_states[9][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_SLASH_GT] = true,
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token_cdata_text] = true,
    [ts_external_token_RBRACK_RBRACK_GT] = true,
    [ts_external_token_comment] = true,
    [ts_external_token__error_sentinel] = true,
  },
  [2] = {
    [ts_external_token_comment] = true,
  },
  [3] = {
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token_comment] = true,
  },
  [4] = {
    [ts_external_token_SLASH_GT] = true,
    [ts_external_token_comment] = true,
  },
  [5] = {
    [ts_external_token_cdata_text] = true,
    [ts_external_token_RBRACK_RBRACK_GT] = true,
    [ts_external_token_comment] = true,
  },
  [6] = {
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [7] = {
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [8] = {
    [ts_external_token__start_tag_name] = true,
    [ts_external_token_comment] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_xml_external_scanner_create(void);
void tree_sitter_xml_external_scanner_destroy(void *);
bool tree_sitter_xml_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_xml_external_scanner_serialize(void *, char *);
void tree_sitter_xml_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_xml() {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_xml_external_scanner_create,
      tree_sitter_xml_external_scanner_destroy,
      tree_sitter_xml_external_scanner_scan,
      tree_sitter_xml_external_scanner_serialize,
      tree_sitter_xml_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
