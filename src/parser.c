#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 79
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 8
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
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
  sym_text = 20,
  sym__start_tag_name = 21,
  sym__end_tag_name = 22,
  sym_erroneous_end_tag_name = 23,
  sym__implicit_end_tag = 24,
  sym_cdata_text = 25,
  sym__cdata_end_delimiter = 26,
  sym_comment = 27,
  sym_fragment = 28,
  sym_prolog = 29,
  sym_doctype = 30,
  sym__node = 31,
  sym_element = 32,
  sym_start_tag = 33,
  sym_self_closing_tag = 34,
  sym_end_tag = 35,
  sym_erroneous_end_tag = 36,
  sym_attribute = 37,
  sym_quoted_attribute_value = 38,
  sym_cdata = 39,
  aux_sym_fragment_repeat1 = 40,
  aux_sym_start_tag_repeat1 = 41,
  aux_sym_cdata_repeat1 = 42,
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
  [sym_text] = "text",
  [sym__start_tag_name] = "tag_name",
  [sym__end_tag_name] = "tag_name",
  [sym_erroneous_end_tag_name] = "erroneous_end_tag_name",
  [sym__implicit_end_tag] = "_implicit_end_tag",
  [sym_cdata_text] = "cdata_text",
  [sym__cdata_end_delimiter] = "]]>",
  [sym_comment] = "comment",
  [sym_fragment] = "fragment",
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
  [aux_sym_fragment_repeat1] = "fragment_repeat1",
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
  [sym_text] = sym_text,
  [sym__start_tag_name] = sym__start_tag_name,
  [sym__end_tag_name] = sym__start_tag_name,
  [sym_erroneous_end_tag_name] = sym_erroneous_end_tag_name,
  [sym__implicit_end_tag] = sym__implicit_end_tag,
  [sym_cdata_text] = sym_cdata_text,
  [sym__cdata_end_delimiter] = sym__cdata_end_delimiter,
  [sym_comment] = sym_comment,
  [sym_fragment] = sym_fragment,
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
  [aux_sym_fragment_repeat1] = aux_sym_fragment_repeat1,
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
  [sym__cdata_end_delimiter] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_fragment] = {
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
  [aux_sym_fragment_repeat1] = {
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
  [3] = 2,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 6,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 12,
  [14] = 14,
  [15] = 9,
  [16] = 11,
  [17] = 17,
  [18] = 18,
  [19] = 10,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 17,
  [25] = 25,
  [26] = 26,
  [27] = 26,
  [28] = 23,
  [29] = 21,
  [30] = 20,
  [31] = 14,
  [32] = 18,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 35,
  [37] = 33,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 40,
  [45] = 45,
  [46] = 42,
  [47] = 47,
  [48] = 48,
  [49] = 48,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 53,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 59,
  [63] = 63,
  [64] = 52,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 65,
  [69] = 69,
  [70] = 60,
  [71] = 57,
  [72] = 66,
  [73] = 61,
  [74] = 58,
  [75] = 75,
  [76] = 75,
  [77] = 63,
  [78] = 54,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(23);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '=') ADVANCE(34);
      if (lookahead == '>') ADVANCE(28);
      if (lookahead == 'C') ADVANCE(8);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == 'x') ADVANCE(11);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(39);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '=') ADVANCE(34);
      if (lookahead == '>') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<') ADVANCE(35);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(32);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(83);
      END_STATE();
    case 8:
      if (lookahead == 'D') ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == 'T') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 11:
      if (lookahead == 'm') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 14:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 18:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(15);
      END_STATE();
    case 19:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(85);
      END_STATE();
    case 20:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(27);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 22:
      if (eof) ADVANCE(23);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '<') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22)
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(85);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LT_QMARK);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_prolog_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_prolog_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      if (lookahead == '[') ADVANCE(82);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__doctype);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(29);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '?') ADVANCE(24);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_entity);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(42);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LT_BANG_LBRACK);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_CDATA);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(85);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 22, .external_lex_state = 2},
  [2] = {.lex_state = 22, .external_lex_state = 3},
  [3] = {.lex_state = 22, .external_lex_state = 3},
  [4] = {.lex_state = 22, .external_lex_state = 3},
  [5] = {.lex_state = 22, .external_lex_state = 3},
  [6] = {.lex_state = 22, .external_lex_state = 3},
  [7] = {.lex_state = 22, .external_lex_state = 2},
  [8] = {.lex_state = 22, .external_lex_state = 2},
  [9] = {.lex_state = 22, .external_lex_state = 3},
  [10] = {.lex_state = 22, .external_lex_state = 2},
  [11] = {.lex_state = 22, .external_lex_state = 2},
  [12] = {.lex_state = 22, .external_lex_state = 2},
  [13] = {.lex_state = 22, .external_lex_state = 3},
  [14] = {.lex_state = 22, .external_lex_state = 3},
  [15] = {.lex_state = 22, .external_lex_state = 2},
  [16] = {.lex_state = 22, .external_lex_state = 3},
  [17] = {.lex_state = 22, .external_lex_state = 3},
  [18] = {.lex_state = 22, .external_lex_state = 2},
  [19] = {.lex_state = 22, .external_lex_state = 3},
  [20] = {.lex_state = 22, .external_lex_state = 3},
  [21] = {.lex_state = 22, .external_lex_state = 3},
  [22] = {.lex_state = 22, .external_lex_state = 3},
  [23] = {.lex_state = 22, .external_lex_state = 2},
  [24] = {.lex_state = 22, .external_lex_state = 2},
  [25] = {.lex_state = 22, .external_lex_state = 3},
  [26] = {.lex_state = 22, .external_lex_state = 2},
  [27] = {.lex_state = 22, .external_lex_state = 3},
  [28] = {.lex_state = 22, .external_lex_state = 3},
  [29] = {.lex_state = 22, .external_lex_state = 2},
  [30] = {.lex_state = 22, .external_lex_state = 2},
  [31] = {.lex_state = 22, .external_lex_state = 2},
  [32] = {.lex_state = 22, .external_lex_state = 3},
  [33] = {.lex_state = 4, .external_lex_state = 4},
  [34] = {.lex_state = 4, .external_lex_state = 4},
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
  [45] = {.lex_state = 0, .external_lex_state = 2},
  [46] = {.lex_state = 0, .external_lex_state = 5},
  [47] = {.lex_state = 4, .external_lex_state = 4},
  [48] = {.lex_state = 0, .external_lex_state = 6},
  [49] = {.lex_state = 0, .external_lex_state = 6},
  [50] = {.lex_state = 3, .external_lex_state = 2},
  [51] = {.lex_state = 1, .external_lex_state = 2},
  [52] = {.lex_state = 0, .external_lex_state = 2},
  [53] = {.lex_state = 0, .external_lex_state = 2},
  [54] = {.lex_state = 0, .external_lex_state = 2},
  [55] = {.lex_state = 0, .external_lex_state = 2},
  [56] = {.lex_state = 0, .external_lex_state = 2},
  [57] = {.lex_state = 0, .external_lex_state = 7},
  [58] = {.lex_state = 0, .external_lex_state = 2},
  [59] = {.lex_state = 0, .external_lex_state = 2},
  [60] = {.lex_state = 0, .external_lex_state = 8},
  [61] = {.lex_state = 20, .external_lex_state = 2},
  [62] = {.lex_state = 0, .external_lex_state = 2},
  [63] = {.lex_state = 0, .external_lex_state = 2},
  [64] = {.lex_state = 0, .external_lex_state = 2},
  [65] = {.lex_state = 0, .external_lex_state = 2},
  [66] = {.lex_state = 20, .external_lex_state = 2},
  [67] = {.lex_state = 0, .external_lex_state = 2},
  [68] = {.lex_state = 0, .external_lex_state = 2},
  [69] = {.lex_state = 0, .external_lex_state = 2},
  [70] = {.lex_state = 0, .external_lex_state = 8},
  [71] = {.lex_state = 0, .external_lex_state = 7},
  [72] = {.lex_state = 20, .external_lex_state = 2},
  [73] = {.lex_state = 20, .external_lex_state = 2},
  [74] = {.lex_state = 0, .external_lex_state = 2},
  [75] = {.lex_state = 0, .external_lex_state = 2},
  [76] = {.lex_state = 0, .external_lex_state = 2},
  [77] = {.lex_state = 0, .external_lex_state = 2},
  [78] = {.lex_state = 0, .external_lex_state = 2},
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
    [sym__start_tag_name] = ACTIONS(1),
    [sym__end_tag_name] = ACTIONS(1),
    [sym_erroneous_end_tag_name] = ACTIONS(1),
    [sym__implicit_end_tag] = ACTIONS(1),
    [sym_cdata_text] = ACTIONS(1),
    [sym__cdata_end_delimiter] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_fragment] = STATE(56),
    [sym_prolog] = STATE(7),
    [sym_doctype] = STATE(7),
    [sym__node] = STATE(7),
    [sym_element] = STATE(7),
    [sym_start_tag] = STATE(5),
    [sym_self_closing_tag] = STATE(12),
    [sym_erroneous_end_tag] = STATE(7),
    [sym_cdata] = STATE(7),
    [aux_sym_fragment_repeat1] = STATE(7),
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
  [0] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LT_QMARK,
    ACTIONS(21), 1,
      anon_sym_LT_BANG,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym_LT_SLASH,
    ACTIONS(29), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(31), 1,
      sym__implicit_end_tag,
    STATE(4), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_self_closing_tag,
    STATE(29), 1,
      sym_end_tag,
    ACTIONS(27), 2,
      sym_entity,
      sym_text,
    STATE(6), 7,
      sym_prolog,
      sym_doctype,
      sym__node,
      sym_element,
      sym_erroneous_end_tag,
      sym_cdata,
      aux_sym_fragment_repeat1,
  [44] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LT_QMARK,
    ACTIONS(21), 1,
      anon_sym_LT_BANG,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_SLASH,
    ACTIONS(35), 1,
      sym__implicit_end_tag,
    STATE(4), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_self_closing_tag,
    STATE(21), 1,
      sym_end_tag,
    ACTIONS(27), 2,
      sym_entity,
      sym_text,
    STATE(6), 7,
      sym_prolog,
      sym_doctype,
      sym__node,
      sym_element,
      sym_erroneous_end_tag,
      sym_cdata,
      aux_sym_fragment_repeat1,
  [88] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LT_QMARK,
    ACTIONS(21), 1,
      anon_sym_LT_BANG,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_SLASH,
    ACTIONS(39), 1,
      sym__implicit_end_tag,
    STATE(4), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_self_closing_tag,
    STATE(32), 1,
      sym_end_tag,
    ACTIONS(37), 2,
      sym_entity,
      sym_text,
    STATE(3), 7,
      sym_prolog,
      sym_doctype,
      sym__node,
      sym_element,
      sym_erroneous_end_tag,
      sym_cdata,
      aux_sym_fragment_repeat1,
  [132] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LT_QMARK,
    ACTIONS(21), 1,
      anon_sym_LT_BANG,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym_LT_SLASH,
    ACTIONS(29), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(43), 1,
      sym__implicit_end_tag,
    STATE(4), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_self_closing_tag,
    STATE(18), 1,
      sym_end_tag,
    ACTIONS(41), 2,
      sym_entity,
      sym_text,
    STATE(2), 7,
      sym_prolog,
      sym_doctype,
      sym__node,
      sym_element,
      sym_erroneous_end_tag,
      sym_cdata,
      aux_sym_fragment_repeat1,
  [176] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LT_QMARK,
    ACTIONS(48), 1,
      anon_sym_LT_BANG,
    ACTIONS(51), 1,
      anon_sym_LT,
    ACTIONS(54), 1,
      anon_sym_LT_SLASH,
    ACTIONS(60), 1,
      anon_sym_LT_BANG_LBRACK,
    ACTIONS(63), 1,
      sym__implicit_end_tag,
    STATE(4), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_self_closing_tag,
    ACTIONS(57), 2,
      sym_entity,
      sym_text,
    STATE(6), 7,
      sym_prolog,
      sym_doctype,
      sym__node,
      sym_element,
      sym_erroneous_end_tag,
      sym_cdata,
      aux_sym_fragment_repeat1,
  [217] = 11,
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
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_start_tag,
    STATE(12), 1,
      sym_self_closing_tag,
    ACTIONS(67), 2,
      sym_entity,
      sym_text,
    STATE(8), 7,
      sym_prolog,
      sym_doctype,
      sym__node,
      sym_element,
      sym_erroneous_end_tag,
      sym_cdata,
      aux_sym_fragment_repeat1,
  [258] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 1,
      anon_sym_LT_QMARK,
    ACTIONS(72), 1,
      anon_sym_LT_BANG,
    ACTIONS(75), 1,
      anon_sym_LT,
    ACTIONS(78), 1,
      anon_sym_LT_SLASH,
    ACTIONS(84), 1,
      anon_sym_LT_BANG_LBRACK,
    STATE(5), 1,
      sym_start_tag,
    STATE(12), 1,
      sym_self_closing_tag,
    ACTIONS(81), 2,
      sym_entity,
      sym_text,
    STATE(8), 7,
      sym_prolog,
      sym_doctype,
      sym__node,
      sym_element,
      sym_erroneous_end_tag,
      sym_cdata,
      aux_sym_fragment_repeat1,
  [299] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(87), 6,
      sym__implicit_end_tag,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_LT_BANG_LBRACK,
      sym_text,
  [315] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(91), 6,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_LT_BANG_LBRACK,
      sym_text,
  [331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(95), 6,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_LT_BANG_LBRACK,
      sym_text,
  [347] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(99), 6,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_LT_BANG_LBRACK,
      sym_text,
  [363] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(99), 6,
      sym__implicit_end_tag,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_LT_BANG_LBRACK,
      sym_text,
  [379] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(103), 6,
      sym__implicit_end_tag,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_LT_BANG_LBRACK,
      sym_text,
  [395] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(87), 6,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_LT_BANG_LBRACK,
      sym_text,
  [411] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(95), 6,
      sym__implicit_end_tag,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_LT_BANG_LBRACK,
      sym_text,
  [427] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(107), 6,
      sym__implicit_end_tag,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_LT_BANG_LBRACK,
      sym_text,
  [443] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(111), 6,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_LT_BANG_LBRACK,
      sym_text,
  [459] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(91), 6,
      sym__implicit_end_tag,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_LT_BANG_LBRACK,
      sym_text,
  [475] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(115), 6,
      sym__implicit_end_tag,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_LT_BANG_LBRACK,
      sym_text,
  [491] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(119), 6,
      sym__implicit_end_tag,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_LT_BANG_LBRACK,
      sym_text,
  [507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(123), 6,
      sym__implicit_end_tag,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_LT_BANG_LBRACK,
      sym_text,
  [523] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(127), 6,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_LT_BANG_LBRACK,
      sym_text,
  [539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(107), 6,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_LT_BANG_LBRACK,
      sym_text,
  [555] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(131), 6,
      sym__implicit_end_tag,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_LT_BANG_LBRACK,
      sym_text,
  [571] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(135), 6,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_LT_BANG_LBRACK,
      sym_text,
  [587] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(135), 6,
      sym__implicit_end_tag,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_LT_BANG_LBRACK,
      sym_text,
  [603] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(127), 6,
      sym__implicit_end_tag,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_LT_BANG_LBRACK,
      sym_text,
  [619] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(119), 6,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_LT_BANG_LBRACK,
      sym_text,
  [635] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(115), 6,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_LT_BANG_LBRACK,
      sym_text,
  [651] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(103), 6,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_LT_BANG_LBRACK,
      sym_text,
  [667] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(111), 6,
      sym__implicit_end_tag,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_LT_BANG_LBRACK,
      sym_text,
  [683] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_GT,
    ACTIONS(141), 1,
      anon_sym_SLASH_GT,
    ACTIONS(143), 1,
      sym_attribute_name,
    STATE(34), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [700] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      sym_attribute_name,
    ACTIONS(145), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(34), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [715] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      sym_attribute_name,
    ACTIONS(150), 1,
      anon_sym_GT,
    ACTIONS(152), 1,
      anon_sym_SLASH_GT,
    STATE(33), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [732] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      sym_attribute_name,
    ACTIONS(150), 1,
      anon_sym_GT,
    ACTIONS(154), 1,
      anon_sym_SLASH_GT,
    STATE(37), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [749] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_GT,
    ACTIONS(143), 1,
      sym_attribute_name,
    ACTIONS(156), 1,
      anon_sym_SLASH_GT,
    STATE(34), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [766] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_EQ,
    ACTIONS(158), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [787] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      sym_cdata_text,
    ACTIONS(166), 1,
      sym__cdata_end_delimiter,
    STATE(42), 1,
      aux_sym_cdata_repeat1,
  [800] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [809] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      sym_cdata_text,
    ACTIONS(172), 1,
      sym__cdata_end_delimiter,
    STATE(43), 1,
      aux_sym_cdata_repeat1,
  [822] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      sym_cdata_text,
    ACTIONS(177), 1,
      sym__cdata_end_delimiter,
    STATE(43), 1,
      aux_sym_cdata_repeat1,
  [835] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      sym_cdata_text,
    ACTIONS(181), 1,
      sym__cdata_end_delimiter,
    STATE(46), 1,
      aux_sym_cdata_repeat1,
  [848] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_SQUOTE,
    ACTIONS(185), 1,
      anon_sym_DQUOTE,
    STATE(41), 1,
      sym_quoted_attribute_value,
  [861] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      sym_cdata_text,
    ACTIONS(187), 1,
      sym__cdata_end_delimiter,
    STATE(43), 1,
      aux_sym_cdata_repeat1,
  [874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [883] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      sym__end_tag_name,
    ACTIONS(193), 1,
      sym_erroneous_end_tag_name,
  [893] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_erroneous_end_tag_name,
    ACTIONS(195), 1,
      sym__end_tag_name,
  [903] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(199), 1,
      aux_sym_quoted_attribute_value_token1,
  [913] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    ACTIONS(201), 1,
      aux_sym_quoted_attribute_value_token2,
  [923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_GT,
  [930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_GT,
  [937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_CDATA,
  [944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_GT,
  [951] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
  [958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_erroneous_end_tag_name,
  [965] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_LBRACK,
  [972] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_GT,
  [979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      sym__start_tag_name,
  [986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym_prolog_token1,
  [993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_GT,
  [1000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      sym__doctype,
  [1007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_GT,
  [1014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_GT,
  [1021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      aux_sym_prolog_token1,
  [1028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
  [1035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_GT,
  [1042] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_SQUOTE,
  [1049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      sym__start_tag_name,
  [1056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_erroneous_end_tag_name,
  [1063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_prolog_token1,
  [1070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      aux_sym_prolog_token1,
  [1077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_LBRACK,
  [1084] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_xml,
  [1091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_xml,
  [1098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      sym__doctype,
  [1105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_CDATA,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 44,
  [SMALL_STATE(4)] = 88,
  [SMALL_STATE(5)] = 132,
  [SMALL_STATE(6)] = 176,
  [SMALL_STATE(7)] = 217,
  [SMALL_STATE(8)] = 258,
  [SMALL_STATE(9)] = 299,
  [SMALL_STATE(10)] = 315,
  [SMALL_STATE(11)] = 331,
  [SMALL_STATE(12)] = 347,
  [SMALL_STATE(13)] = 363,
  [SMALL_STATE(14)] = 379,
  [SMALL_STATE(15)] = 395,
  [SMALL_STATE(16)] = 411,
  [SMALL_STATE(17)] = 427,
  [SMALL_STATE(18)] = 443,
  [SMALL_STATE(19)] = 459,
  [SMALL_STATE(20)] = 475,
  [SMALL_STATE(21)] = 491,
  [SMALL_STATE(22)] = 507,
  [SMALL_STATE(23)] = 523,
  [SMALL_STATE(24)] = 539,
  [SMALL_STATE(25)] = 555,
  [SMALL_STATE(26)] = 571,
  [SMALL_STATE(27)] = 587,
  [SMALL_STATE(28)] = 603,
  [SMALL_STATE(29)] = 619,
  [SMALL_STATE(30)] = 635,
  [SMALL_STATE(31)] = 651,
  [SMALL_STATE(32)] = 667,
  [SMALL_STATE(33)] = 683,
  [SMALL_STATE(34)] = 700,
  [SMALL_STATE(35)] = 715,
  [SMALL_STATE(36)] = 732,
  [SMALL_STATE(37)] = 749,
  [SMALL_STATE(38)] = 766,
  [SMALL_STATE(39)] = 778,
  [SMALL_STATE(40)] = 787,
  [SMALL_STATE(41)] = 800,
  [SMALL_STATE(42)] = 809,
  [SMALL_STATE(43)] = 822,
  [SMALL_STATE(44)] = 835,
  [SMALL_STATE(45)] = 848,
  [SMALL_STATE(46)] = 861,
  [SMALL_STATE(47)] = 874,
  [SMALL_STATE(48)] = 883,
  [SMALL_STATE(49)] = 893,
  [SMALL_STATE(50)] = 903,
  [SMALL_STATE(51)] = 913,
  [SMALL_STATE(52)] = 923,
  [SMALL_STATE(53)] = 930,
  [SMALL_STATE(54)] = 937,
  [SMALL_STATE(55)] = 944,
  [SMALL_STATE(56)] = 951,
  [SMALL_STATE(57)] = 958,
  [SMALL_STATE(58)] = 965,
  [SMALL_STATE(59)] = 972,
  [SMALL_STATE(60)] = 979,
  [SMALL_STATE(61)] = 986,
  [SMALL_STATE(62)] = 993,
  [SMALL_STATE(63)] = 1000,
  [SMALL_STATE(64)] = 1007,
  [SMALL_STATE(65)] = 1014,
  [SMALL_STATE(66)] = 1021,
  [SMALL_STATE(67)] = 1028,
  [SMALL_STATE(68)] = 1035,
  [SMALL_STATE(69)] = 1042,
  [SMALL_STATE(70)] = 1049,
  [SMALL_STATE(71)] = 1056,
  [SMALL_STATE(72)] = 1063,
  [SMALL_STATE(73)] = 1070,
  [SMALL_STATE(74)] = 1077,
  [SMALL_STATE(75)] = 1084,
  [SMALL_STATE(76)] = 1091,
  [SMALL_STATE(77)] = 1098,
  [SMALL_STATE(78)] = 1105,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(76),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(77),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(70),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(71),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(6),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(78),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(75),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(63),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(60),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(57),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(8),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(54),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cdata, 4),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cdata, 4),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cdata, 5),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cdata, 5),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prolog, 4),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prolog, 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_erroneous_end_tag, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_erroneous_end_tag, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(38),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cdata_repeat1, 2), SHIFT_REPEAT(43),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cdata_repeat1, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [211] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__start_tag_name = 0,
  ts_external_token__end_tag_name = 1,
  ts_external_token_erroneous_end_tag_name = 2,
  ts_external_token_SLASH_GT = 3,
  ts_external_token__implicit_end_tag = 4,
  ts_external_token_cdata_text = 5,
  ts_external_token__cdata_end_delimiter = 6,
  ts_external_token_comment = 7,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__start_tag_name] = sym__start_tag_name,
  [ts_external_token__end_tag_name] = sym__end_tag_name,
  [ts_external_token_erroneous_end_tag_name] = sym_erroneous_end_tag_name,
  [ts_external_token_SLASH_GT] = anon_sym_SLASH_GT,
  [ts_external_token__implicit_end_tag] = sym__implicit_end_tag,
  [ts_external_token_cdata_text] = sym_cdata_text,
  [ts_external_token__cdata_end_delimiter] = sym__cdata_end_delimiter,
  [ts_external_token_comment] = sym_comment,
};

static const bool ts_external_scanner_states[9][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_SLASH_GT] = true,
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token_cdata_text] = true,
    [ts_external_token__cdata_end_delimiter] = true,
    [ts_external_token_comment] = true,
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
    [ts_external_token__cdata_end_delimiter] = true,
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
