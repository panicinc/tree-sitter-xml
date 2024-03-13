#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 74
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 10
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
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
  anon_sym_LT_BANG_LBRACKCDATA_LBRACK = 16,
  anon_sym_RBRACK_RBRACK_GT = 17,
  sym_text = 18,
  sym__start_tag_name = 19,
  sym__end_tag_name = 20,
  sym_erroneous_end_tag_name = 21,
  sym__implicit_end_tag = 22,
  sym_entity = 23,
  sym_raw_text = 24,
  sym_comment = 25,
  sym_fragment = 26,
  sym_prolog = 27,
  sym_doctype = 28,
  sym__node = 29,
  sym_element = 30,
  sym_start_tag = 31,
  sym_self_closing_tag = 32,
  sym_end_tag = 33,
  sym_erroneous_end_tag = 34,
  sym_attribute = 35,
  sym_quoted_attribute_value = 36,
  sym_cdata = 37,
  aux_sym_fragment_repeat1 = 38,
  aux_sym_start_tag_repeat1 = 39,
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
  [anon_sym_LT_BANG_LBRACKCDATA_LBRACK] = "cdata_start",
  [anon_sym_RBRACK_RBRACK_GT] = "cdata_end",
  [sym_text] = "text",
  [sym__start_tag_name] = "tag_name",
  [sym__end_tag_name] = "tag_name",
  [sym_erroneous_end_tag_name] = "erroneous_end_tag_name",
  [sym__implicit_end_tag] = "_implicit_end_tag",
  [sym_entity] = "entity",
  [sym_raw_text] = "raw_text",
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
  [anon_sym_LT_BANG_LBRACKCDATA_LBRACK] = anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [anon_sym_RBRACK_RBRACK_GT] = anon_sym_RBRACK_RBRACK_GT,
  [sym_text] = sym_text,
  [sym__start_tag_name] = sym__start_tag_name,
  [sym__end_tag_name] = sym__start_tag_name,
  [sym_erroneous_end_tag_name] = sym_erroneous_end_tag_name,
  [sym__implicit_end_tag] = sym__implicit_end_tag,
  [sym_entity] = sym_entity,
  [sym_raw_text] = sym_raw_text,
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
  [anon_sym_LT_BANG_LBRACKCDATA_LBRACK] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACK_RBRACK_GT] = {
    .visible = true,
    .named = true,
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
  [sym_entity] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_text] = {
    .visible = true,
    .named = true,
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
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(24);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '<') ADVANCE(32);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == '>') ADVANCE(29);
      if (lookahead == ']') ADVANCE(12);
      if (lookahead == 'x') ADVANCE(14);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == '>') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<') ADVANCE(36);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(33);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(44);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'C') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'D') ADVANCE(6);
      END_STATE();
    case 10:
      if (lookahead == 'T') ADVANCE(7);
      END_STATE();
    case 11:
      if (lookahead == '[') ADVANCE(43);
      END_STATE();
    case 12:
      if (lookahead == ']') ADVANCE(5);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 14:
      if (lookahead == 'm') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 17:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 18:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(18);
      END_STATE();
    case 21:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(45);
      END_STATE();
    case 22:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(28);
      END_STATE();
    case 23:
      if (eof) ADVANCE(24);
      if (lookahead == '<') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '>') ADVANCE(45);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LT_QMARK);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_prolog_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_prolog_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      if (lookahead == '[') ADVANCE(8);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__doctype);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(30);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '?') ADVANCE(25);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LT_BANG_LBRACKCDATA_LBRACK);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK_GT);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(45);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 23, .external_lex_state = 2},
  [2] = {.lex_state = 23, .external_lex_state = 3},
  [3] = {.lex_state = 23, .external_lex_state = 3},
  [4] = {.lex_state = 23, .external_lex_state = 3},
  [5] = {.lex_state = 23, .external_lex_state = 3},
  [6] = {.lex_state = 23, .external_lex_state = 2},
  [7] = {.lex_state = 23, .external_lex_state = 3},
  [8] = {.lex_state = 23, .external_lex_state = 2},
  [9] = {.lex_state = 23, .external_lex_state = 2},
  [10] = {.lex_state = 23, .external_lex_state = 3},
  [11] = {.lex_state = 23, .external_lex_state = 3},
  [12] = {.lex_state = 23, .external_lex_state = 2},
  [13] = {.lex_state = 23, .external_lex_state = 3},
  [14] = {.lex_state = 23, .external_lex_state = 3},
  [15] = {.lex_state = 23, .external_lex_state = 3},
  [16] = {.lex_state = 23, .external_lex_state = 3},
  [17] = {.lex_state = 23, .external_lex_state = 3},
  [18] = {.lex_state = 23, .external_lex_state = 2},
  [19] = {.lex_state = 23, .external_lex_state = 2},
  [20] = {.lex_state = 23, .external_lex_state = 3},
  [21] = {.lex_state = 23, .external_lex_state = 3},
  [22] = {.lex_state = 23, .external_lex_state = 3},
  [23] = {.lex_state = 23, .external_lex_state = 3},
  [24] = {.lex_state = 23, .external_lex_state = 2},
  [25] = {.lex_state = 23, .external_lex_state = 2},
  [26] = {.lex_state = 23, .external_lex_state = 3},
  [27] = {.lex_state = 23, .external_lex_state = 2},
  [28] = {.lex_state = 23, .external_lex_state = 2},
  [29] = {.lex_state = 23, .external_lex_state = 3},
  [30] = {.lex_state = 23, .external_lex_state = 2},
  [31] = {.lex_state = 23, .external_lex_state = 2},
  [32] = {.lex_state = 23, .external_lex_state = 2},
  [33] = {.lex_state = 3, .external_lex_state = 4},
  [34] = {.lex_state = 3, .external_lex_state = 4},
  [35] = {.lex_state = 3, .external_lex_state = 4},
  [36] = {.lex_state = 3, .external_lex_state = 4},
  [37] = {.lex_state = 3, .external_lex_state = 4},
  [38] = {.lex_state = 3, .external_lex_state = 4},
  [39] = {.lex_state = 0, .external_lex_state = 5},
  [40] = {.lex_state = 3, .external_lex_state = 4},
  [41] = {.lex_state = 3, .external_lex_state = 4},
  [42] = {.lex_state = 3, .external_lex_state = 4},
  [43] = {.lex_state = 0, .external_lex_state = 6},
  [44] = {.lex_state = 0, .external_lex_state = 6},
  [45] = {.lex_state = 1, .external_lex_state = 5},
  [46] = {.lex_state = 0, .external_lex_state = 7},
  [47] = {.lex_state = 2, .external_lex_state = 5},
  [48] = {.lex_state = 0, .external_lex_state = 7},
  [49] = {.lex_state = 0, .external_lex_state = 8},
  [50] = {.lex_state = 0, .external_lex_state = 5},
  [51] = {.lex_state = 0, .external_lex_state = 9},
  [52] = {.lex_state = 0, .external_lex_state = 5},
  [53] = {.lex_state = 0, .external_lex_state = 5},
  [54] = {.lex_state = 0, .external_lex_state = 5},
  [55] = {.lex_state = 0, .external_lex_state = 5},
  [56] = {.lex_state = 0, .external_lex_state = 5},
  [57] = {.lex_state = 0, .external_lex_state = 10},
  [58] = {.lex_state = 0, .external_lex_state = 5},
  [59] = {.lex_state = 22, .external_lex_state = 5},
  [60] = {.lex_state = 0, .external_lex_state = 5},
  [61] = {.lex_state = 0, .external_lex_state = 10},
  [62] = {.lex_state = 0, .external_lex_state = 5},
  [63] = {.lex_state = 0, .external_lex_state = 5},
  [64] = {.lex_state = 0, .external_lex_state = 5},
  [65] = {.lex_state = 22, .external_lex_state = 5},
  [66] = {.lex_state = 0, .external_lex_state = 5},
  [67] = {.lex_state = 0, .external_lex_state = 8},
  [68] = {.lex_state = 0, .external_lex_state = 9},
  [69] = {.lex_state = 22, .external_lex_state = 5},
  [70] = {.lex_state = 22, .external_lex_state = 5},
  [71] = {.lex_state = 0, .external_lex_state = 5},
  [72] = {.lex_state = 0, .external_lex_state = 5},
  [73] = {.lex_state = 0, .external_lex_state = 5},
};

enum {
  ts_external_token__start_tag_name = 0,
  ts_external_token__end_tag_name = 1,
  ts_external_token_erroneous_end_tag_name = 2,
  ts_external_token_SLASH_GT = 3,
  ts_external_token__implicit_end_tag = 4,
  ts_external_token_entity = 5,
  ts_external_token_LT_BANG_LBRACKCDATA_LBRACK = 6,
  ts_external_token_RBRACK_RBRACK_GT = 7,
  ts_external_token_raw_text = 8,
  ts_external_token_comment = 9,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__start_tag_name] = sym__start_tag_name,
  [ts_external_token__end_tag_name] = sym__end_tag_name,
  [ts_external_token_erroneous_end_tag_name] = sym_erroneous_end_tag_name,
  [ts_external_token_SLASH_GT] = anon_sym_SLASH_GT,
  [ts_external_token__implicit_end_tag] = sym__implicit_end_tag,
  [ts_external_token_entity] = sym_entity,
  [ts_external_token_LT_BANG_LBRACKCDATA_LBRACK] = anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
  [ts_external_token_RBRACK_RBRACK_GT] = anon_sym_RBRACK_RBRACK_GT,
  [ts_external_token_raw_text] = sym_raw_text,
  [ts_external_token_comment] = sym_comment,
};

static const bool ts_external_scanner_states[11][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_SLASH_GT] = true,
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token_entity] = true,
    [ts_external_token_LT_BANG_LBRACKCDATA_LBRACK] = true,
    [ts_external_token_RBRACK_RBRACK_GT] = true,
    [ts_external_token_raw_text] = true,
    [ts_external_token_comment] = true,
  },
  [2] = {
    [ts_external_token_entity] = true,
    [ts_external_token_LT_BANG_LBRACKCDATA_LBRACK] = true,
    [ts_external_token_comment] = true,
  },
  [3] = {
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token_entity] = true,
    [ts_external_token_LT_BANG_LBRACKCDATA_LBRACK] = true,
    [ts_external_token_comment] = true,
  },
  [4] = {
    [ts_external_token_SLASH_GT] = true,
    [ts_external_token_comment] = true,
  },
  [5] = {
    [ts_external_token_comment] = true,
  },
  [6] = {
    [ts_external_token_RBRACK_RBRACK_GT] = true,
    [ts_external_token_raw_text] = true,
    [ts_external_token_comment] = true,
  },
  [7] = {
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [8] = {
    [ts_external_token__start_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [9] = {
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [10] = {
    [ts_external_token_RBRACK_RBRACK_GT] = true,
    [ts_external_token_comment] = true,
  },
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
    [anon_sym_LT_BANG_LBRACKCDATA_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK_RBRACK_GT] = ACTIONS(1),
    [sym__start_tag_name] = ACTIONS(1),
    [sym__end_tag_name] = ACTIONS(1),
    [sym_erroneous_end_tag_name] = ACTIONS(1),
    [sym__implicit_end_tag] = ACTIONS(1),
    [sym_entity] = ACTIONS(1),
    [sym_raw_text] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_fragment] = STATE(52),
    [sym_prolog] = STATE(8),
    [sym_doctype] = STATE(8),
    [sym__node] = STATE(8),
    [sym_element] = STATE(8),
    [sym_start_tag] = STATE(5),
    [sym_self_closing_tag] = STATE(12),
    [sym_erroneous_end_tag] = STATE(8),
    [sym_cdata] = STATE(8),
    [aux_sym_fragment_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LT_QMARK] = ACTIONS(7),
    [anon_sym_LT_BANG] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [anon_sym_LT_SLASH] = ACTIONS(13),
    [anon_sym_LT_BANG_LBRACKCDATA_LBRACK] = ACTIONS(15),
    [sym_text] = ACTIONS(17),
    [sym_entity] = ACTIONS(17),
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
    ACTIONS(27), 1,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
    ACTIONS(31), 1,
      sym__implicit_end_tag,
    STATE(3), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_self_closing_tag,
    STATE(21), 1,
      sym_end_tag,
    ACTIONS(29), 2,
      sym_entity,
      sym_text,
    STATE(7), 7,
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
    ACTIONS(25), 1,
      anon_sym_LT_SLASH,
    ACTIONS(27), 1,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
    ACTIONS(35), 1,
      sym__implicit_end_tag,
    STATE(3), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_self_closing_tag,
    STATE(26), 1,
      sym_end_tag,
    ACTIONS(33), 2,
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
  [88] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LT_QMARK,
    ACTIONS(21), 1,
      anon_sym_LT_BANG,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
    ACTIONS(37), 1,
      anon_sym_LT_SLASH,
    ACTIONS(39), 1,
      sym__implicit_end_tag,
    STATE(3), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_self_closing_tag,
    STATE(30), 1,
      sym_end_tag,
    ACTIONS(29), 2,
      sym_entity,
      sym_text,
    STATE(7), 7,
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
    ACTIONS(27), 1,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
    ACTIONS(37), 1,
      anon_sym_LT_SLASH,
    ACTIONS(43), 1,
      sym__implicit_end_tag,
    STATE(3), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_self_closing_tag,
    STATE(19), 1,
      sym_end_tag,
    ACTIONS(41), 2,
      sym_entity,
      sym_text,
    STATE(4), 7,
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
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      anon_sym_LT_QMARK,
    ACTIONS(50), 1,
      anon_sym_LT_BANG,
    ACTIONS(53), 1,
      anon_sym_LT,
    ACTIONS(56), 1,
      anon_sym_LT_SLASH,
    ACTIONS(59), 1,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
    STATE(5), 1,
      sym_start_tag,
    STATE(12), 1,
      sym_self_closing_tag,
    ACTIONS(62), 2,
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
    ACTIONS(45), 1,
      sym__implicit_end_tag,
    ACTIONS(65), 1,
      anon_sym_LT_QMARK,
    ACTIONS(68), 1,
      anon_sym_LT_BANG,
    ACTIONS(71), 1,
      anon_sym_LT,
    ACTIONS(74), 1,
      anon_sym_LT_SLASH,
    ACTIONS(77), 1,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
    STATE(3), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_self_closing_tag,
    ACTIONS(80), 2,
      sym_entity,
      sym_text,
    STATE(7), 7,
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
    ACTIONS(7), 1,
      anon_sym_LT_QMARK,
    ACTIONS(9), 1,
      anon_sym_LT_BANG,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_LT_SLASH,
    ACTIONS(15), 1,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_start_tag,
    STATE(12), 1,
      sym_self_closing_tag,
    ACTIONS(85), 2,
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
  [299] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(87), 6,
      sym_entity,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      sym_text,
  [315] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(91), 6,
      sym__implicit_end_tag,
      sym_entity,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      sym_text,
  [331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(95), 6,
      sym__implicit_end_tag,
      sym_entity,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      sym_text,
  [347] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(99), 6,
      sym_entity,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      sym_text,
  [363] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(99), 6,
      sym__implicit_end_tag,
      sym_entity,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      sym_text,
  [379] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(87), 6,
      sym__implicit_end_tag,
      sym_entity,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      sym_text,
  [395] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(103), 6,
      sym__implicit_end_tag,
      sym_entity,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      sym_text,
  [411] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(107), 6,
      sym__implicit_end_tag,
      sym_entity,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      sym_text,
  [427] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(111), 6,
      sym__implicit_end_tag,
      sym_entity,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      sym_text,
  [443] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(95), 6,
      sym_entity,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      sym_text,
  [459] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(115), 6,
      sym_entity,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      sym_text,
  [475] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(119), 6,
      sym__implicit_end_tag,
      sym_entity,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      sym_text,
  [491] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(123), 6,
      sym__implicit_end_tag,
      sym_entity,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      sym_text,
  [507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(127), 6,
      sym__implicit_end_tag,
      sym_entity,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      sym_text,
  [523] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(131), 6,
      sym__implicit_end_tag,
      sym_entity,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      sym_text,
  [539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(103), 6,
      sym_entity,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      sym_text,
  [555] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(107), 6,
      sym_entity,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      sym_text,
  [571] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(115), 6,
      sym__implicit_end_tag,
      sym_entity,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      sym_text,
  [587] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(135), 6,
      sym_entity,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      sym_text,
  [603] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(127), 6,
      sym_entity,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      sym_text,
  [619] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(135), 6,
      sym__implicit_end_tag,
      sym_entity,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      sym_text,
  [635] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(123), 6,
      sym_entity,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      sym_text,
  [651] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(119), 6,
      sym_entity,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      sym_text,
  [667] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 2,
      anon_sym_LT_BANG,
      anon_sym_LT,
    ACTIONS(111), 6,
      sym_entity,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
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
  [778] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_SQUOTE,
    ACTIONS(164), 1,
      anon_sym_DQUOTE,
    STATE(40), 1,
      sym_quoted_attribute_value,
  [791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [800] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [818] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_RBRACK_RBRACK_GT,
    ACTIONS(174), 1,
      sym_raw_text,
  [828] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_RBRACK_RBRACK_GT,
    ACTIONS(178), 1,
      sym_raw_text,
  [838] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      aux_sym_quoted_attribute_value_token2,
  [848] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      sym__end_tag_name,
    ACTIONS(186), 1,
      sym_erroneous_end_tag_name,
  [858] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_SQUOTE,
    ACTIONS(188), 1,
      aux_sym_quoted_attribute_value_token1,
  [868] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym_erroneous_end_tag_name,
    ACTIONS(190), 1,
      sym__end_tag_name,
  [878] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      sym__start_tag_name,
  [885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym__doctype,
  [892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      sym_erroneous_end_tag_name,
  [899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
  [906] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_xml,
  [913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_GT,
  [920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_GT,
  [927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_GT,
  [934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_RBRACK_RBRACK_GT,
  [941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_GT,
  [948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      aux_sym_prolog_token1,
  [955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_GT,
  [962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_RBRACK_RBRACK_GT,
  [969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_DQUOTE,
  [976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_GT,
  [983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_GT,
  [990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      aux_sym_prolog_token1,
  [997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_GT,
  [1004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      sym__start_tag_name,
  [1011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym_erroneous_end_tag_name,
  [1018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      aux_sym_prolog_token1,
  [1025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      aux_sym_prolog_token1,
  [1032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
  [1039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_xml,
  [1046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      sym__doctype,
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
  [SMALL_STATE(40)] = 791,
  [SMALL_STATE(41)] = 800,
  [SMALL_STATE(42)] = 809,
  [SMALL_STATE(43)] = 818,
  [SMALL_STATE(44)] = 828,
  [SMALL_STATE(45)] = 838,
  [SMALL_STATE(46)] = 848,
  [SMALL_STATE(47)] = 858,
  [SMALL_STATE(48)] = 868,
  [SMALL_STATE(49)] = 878,
  [SMALL_STATE(50)] = 885,
  [SMALL_STATE(51)] = 892,
  [SMALL_STATE(52)] = 899,
  [SMALL_STATE(53)] = 906,
  [SMALL_STATE(54)] = 913,
  [SMALL_STATE(55)] = 920,
  [SMALL_STATE(56)] = 927,
  [SMALL_STATE(57)] = 934,
  [SMALL_STATE(58)] = 941,
  [SMALL_STATE(59)] = 948,
  [SMALL_STATE(60)] = 955,
  [SMALL_STATE(61)] = 962,
  [SMALL_STATE(62)] = 969,
  [SMALL_STATE(63)] = 976,
  [SMALL_STATE(64)] = 983,
  [SMALL_STATE(65)] = 990,
  [SMALL_STATE(66)] = 997,
  [SMALL_STATE(67)] = 1004,
  [SMALL_STATE(68)] = 1011,
  [SMALL_STATE(69)] = 1018,
  [SMALL_STATE(70)] = 1025,
  [SMALL_STATE(71)] = 1032,
  [SMALL_STATE(72)] = 1039,
  [SMALL_STATE(73)] = 1046,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(53),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(50),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(49),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(51),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(44),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(6),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(72),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(73),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(67),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(68),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(43),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(7),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cdata, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cdata, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prolog, 4),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prolog, 4),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cdata, 3),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cdata, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_erroneous_end_tag, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_erroneous_end_tag, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(38),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [198] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
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
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_xml(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
