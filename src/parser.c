#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 66
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 10
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LT_QMARK = 1,
  anon_sym_xml = 2,
  aux_sym_prolog_token1 = 3,
  anon_sym_GT = 4,
  anon_sym_LT = 5,
  anon_sym_SLASH_GT = 6,
  anon_sym_LT_SLASH = 7,
  anon_sym_EQ = 8,
  sym_attribute_name = 9,
  anon_sym_SQUOTE = 10,
  aux_sym_quoted_attribute_value_token1 = 11,
  anon_sym_DQUOTE = 12,
  aux_sym_quoted_attribute_value_token2 = 13,
  anon_sym_LT_BANG_LBRACKCDATA_LBRACK = 14,
  anon_sym_RBRACK_RBRACK_GT = 15,
  sym_text = 16,
  sym__start_tag_name = 17,
  sym__end_tag_name = 18,
  sym_erroneous_end_tag_name = 19,
  sym__implicit_end_tag = 20,
  sym_entity = 21,
  sym_raw_text = 22,
  sym_comment = 23,
  sym_fragment = 24,
  sym_prolog = 25,
  sym__node = 26,
  sym_element = 27,
  sym_start_tag = 28,
  sym_self_closing_tag = 29,
  sym_end_tag = 30,
  sym_erroneous_end_tag = 31,
  sym_attribute = 32,
  sym_quoted_attribute_value = 33,
  sym_cdata = 34,
  aux_sym_fragment_repeat1 = 35,
  aux_sym_start_tag_repeat1 = 36,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT_QMARK] = "<\?",
  [anon_sym_xml] = "xml",
  [aux_sym_prolog_token1] = "prolog_token1",
  [anon_sym_GT] = ">",
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
      if (eof) ADVANCE(19);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '<') ADVANCE(25);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '>') ADVANCE(24);
      if (lookahead == ']') ADVANCE(13);
      if (lookahead == 'x') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '>') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<') ADVANCE(29);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(26);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(37);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(12);
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
      if (lookahead == '[') ADVANCE(8);
      END_STATE();
    case 12:
      if (lookahead == '[') ADVANCE(36);
      END_STATE();
    case 13:
      if (lookahead == ']') ADVANCE(5);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == 'm') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(38);
      END_STATE();
    case 17:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(23);
      END_STATE();
    case 18:
      if (eof) ADVANCE(19);
      if (lookahead == '<') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '>') ADVANCE(38);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LT_QMARK);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_prolog_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_prolog_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '?') ADVANCE(20);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LT_BANG_LBRACKCDATA_LBRACK);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK_GT);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(38);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 18, .external_lex_state = 2},
  [2] = {.lex_state = 18, .external_lex_state = 3},
  [3] = {.lex_state = 18, .external_lex_state = 3},
  [4] = {.lex_state = 18, .external_lex_state = 3},
  [5] = {.lex_state = 18, .external_lex_state = 3},
  [6] = {.lex_state = 18, .external_lex_state = 2},
  [7] = {.lex_state = 18, .external_lex_state = 3},
  [8] = {.lex_state = 18, .external_lex_state = 2},
  [9] = {.lex_state = 18, .external_lex_state = 2},
  [10] = {.lex_state = 18, .external_lex_state = 2},
  [11] = {.lex_state = 18, .external_lex_state = 2},
  [12] = {.lex_state = 18, .external_lex_state = 3},
  [13] = {.lex_state = 18, .external_lex_state = 3},
  [14] = {.lex_state = 18, .external_lex_state = 3},
  [15] = {.lex_state = 18, .external_lex_state = 3},
  [16] = {.lex_state = 18, .external_lex_state = 2},
  [17] = {.lex_state = 18, .external_lex_state = 2},
  [18] = {.lex_state = 18, .external_lex_state = 3},
  [19] = {.lex_state = 18, .external_lex_state = 3},
  [20] = {.lex_state = 18, .external_lex_state = 3},
  [21] = {.lex_state = 18, .external_lex_state = 2},
  [22] = {.lex_state = 18, .external_lex_state = 3},
  [23] = {.lex_state = 18, .external_lex_state = 3},
  [24] = {.lex_state = 18, .external_lex_state = 3},
  [25] = {.lex_state = 18, .external_lex_state = 2},
  [26] = {.lex_state = 18, .external_lex_state = 3},
  [27] = {.lex_state = 18, .external_lex_state = 2},
  [28] = {.lex_state = 18, .external_lex_state = 2},
  [29] = {.lex_state = 18, .external_lex_state = 2},
  [30] = {.lex_state = 18, .external_lex_state = 3},
  [31] = {.lex_state = 3, .external_lex_state = 4},
  [32] = {.lex_state = 3, .external_lex_state = 4},
  [33] = {.lex_state = 3, .external_lex_state = 4},
  [34] = {.lex_state = 3, .external_lex_state = 4},
  [35] = {.lex_state = 3, .external_lex_state = 4},
  [36] = {.lex_state = 3, .external_lex_state = 4},
  [37] = {.lex_state = 0, .external_lex_state = 5},
  [38] = {.lex_state = 3, .external_lex_state = 4},
  [39] = {.lex_state = 3, .external_lex_state = 4},
  [40] = {.lex_state = 3, .external_lex_state = 4},
  [41] = {.lex_state = 0, .external_lex_state = 6},
  [42] = {.lex_state = 2, .external_lex_state = 5},
  [43] = {.lex_state = 0, .external_lex_state = 7},
  [44] = {.lex_state = 0, .external_lex_state = 6},
  [45] = {.lex_state = 0, .external_lex_state = 7},
  [46] = {.lex_state = 1, .external_lex_state = 5},
  [47] = {.lex_state = 0, .external_lex_state = 8},
  [48] = {.lex_state = 17, .external_lex_state = 5},
  [49] = {.lex_state = 0, .external_lex_state = 5},
  [50] = {.lex_state = 0, .external_lex_state = 5},
  [51] = {.lex_state = 0, .external_lex_state = 5},
  [52] = {.lex_state = 0, .external_lex_state = 5},
  [53] = {.lex_state = 0, .external_lex_state = 9},
  [54] = {.lex_state = 0, .external_lex_state = 5},
  [55] = {.lex_state = 0, .external_lex_state = 5},
  [56] = {.lex_state = 0, .external_lex_state = 8},
  [57] = {.lex_state = 0, .external_lex_state = 10},
  [58] = {.lex_state = 0, .external_lex_state = 5},
  [59] = {.lex_state = 0, .external_lex_state = 5},
  [60] = {.lex_state = 0, .external_lex_state = 5},
  [61] = {.lex_state = 0, .external_lex_state = 10},
  [62] = {.lex_state = 0, .external_lex_state = 9},
  [63] = {.lex_state = 17, .external_lex_state = 5},
  [64] = {.lex_state = 0, .external_lex_state = 5},
  [65] = {.lex_state = 0, .external_lex_state = 5},
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
    [ts_external_token_RBRACK_RBRACK_GT] = true,
    [ts_external_token_comment] = true,
  },
  [9] = {
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [10] = {
    [ts_external_token__start_tag_name] = true,
    [ts_external_token_comment] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT_QMARK] = ACTIONS(1),
    [anon_sym_xml] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
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
    [sym_prolog] = STATE(6),
    [sym__node] = STATE(6),
    [sym_element] = STATE(6),
    [sym_start_tag] = STATE(4),
    [sym_self_closing_tag] = STATE(11),
    [sym_erroneous_end_tag] = STATE(6),
    [sym_cdata] = STATE(6),
    [aux_sym_fragment_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LT_QMARK] = ACTIONS(7),
    [anon_sym_LT] = ACTIONS(9),
    [anon_sym_LT_SLASH] = ACTIONS(11),
    [anon_sym_LT_BANG_LBRACKCDATA_LBRACK] = ACTIONS(13),
    [sym_text] = ACTIONS(15),
    [sym_entity] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT_QMARK,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(23), 1,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
    ACTIONS(27), 1,
      sym__implicit_end_tag,
    STATE(3), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_self_closing_tag,
    STATE(26), 1,
      sym_end_tag,
    ACTIONS(25), 2,
      sym_entity,
      sym_text,
    STATE(7), 6,
      sym_prolog,
      sym__node,
      sym_element,
      sym_erroneous_end_tag,
      sym_cdata,
      aux_sym_fragment_repeat1,
  [40] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT_QMARK,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(23), 1,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
    ACTIONS(31), 1,
      sym__implicit_end_tag,
    STATE(3), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_self_closing_tag,
    STATE(24), 1,
      sym_end_tag,
    ACTIONS(29), 2,
      sym_entity,
      sym_text,
    STATE(2), 6,
      sym_prolog,
      sym__node,
      sym_element,
      sym_erroneous_end_tag,
      sym_cdata,
      aux_sym_fragment_repeat1,
  [80] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT_QMARK,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_SLASH,
    ACTIONS(37), 1,
      sym__implicit_end_tag,
    STATE(3), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_self_closing_tag,
    STATE(17), 1,
      sym_end_tag,
    ACTIONS(35), 2,
      sym_entity,
      sym_text,
    STATE(5), 6,
      sym_prolog,
      sym__node,
      sym_element,
      sym_erroneous_end_tag,
      sym_cdata,
      aux_sym_fragment_repeat1,
  [120] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT_QMARK,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LT_SLASH,
    ACTIONS(39), 1,
      sym__implicit_end_tag,
    STATE(3), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_self_closing_tag,
    STATE(27), 1,
      sym_end_tag,
    ACTIONS(25), 2,
      sym_entity,
      sym_text,
    STATE(7), 6,
      sym_prolog,
      sym__node,
      sym_element,
      sym_erroneous_end_tag,
      sym_cdata,
      aux_sym_fragment_repeat1,
  [160] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LT_QMARK,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      anon_sym_LT_SLASH,
    ACTIONS(13), 1,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_self_closing_tag,
    ACTIONS(43), 2,
      sym_entity,
      sym_text,
    STATE(8), 6,
      sym_prolog,
      sym__node,
      sym_element,
      sym_erroneous_end_tag,
      sym_cdata,
      aux_sym_fragment_repeat1,
  [197] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LT_QMARK,
    ACTIONS(48), 1,
      anon_sym_LT,
    ACTIONS(51), 1,
      anon_sym_LT_SLASH,
    ACTIONS(54), 1,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
    ACTIONS(60), 1,
      sym__implicit_end_tag,
    STATE(3), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_self_closing_tag,
    ACTIONS(57), 2,
      sym_entity,
      sym_text,
    STATE(7), 6,
      sym_prolog,
      sym__node,
      sym_element,
      sym_erroneous_end_tag,
      sym_cdata,
      aux_sym_fragment_repeat1,
  [234] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 1,
      anon_sym_LT_QMARK,
    ACTIONS(65), 1,
      anon_sym_LT,
    ACTIONS(68), 1,
      anon_sym_LT_SLASH,
    ACTIONS(71), 1,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
    STATE(4), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_self_closing_tag,
    ACTIONS(74), 2,
      sym_entity,
      sym_text,
    STATE(8), 6,
      sym_prolog,
      sym__node,
      sym_element,
      sym_erroneous_end_tag,
      sym_cdata,
      aux_sym_fragment_repeat1,
  [271] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_LT,
    ACTIONS(77), 6,
      sym_entity,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      sym_text,
  [286] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_LT,
    ACTIONS(81), 6,
      sym_entity,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      sym_text,
  [301] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_LT,
    ACTIONS(85), 6,
      sym_entity,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      sym_text,
  [316] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_LT,
    ACTIONS(89), 6,
      sym__implicit_end_tag,
      sym_entity,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      sym_text,
  [331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_LT,
    ACTIONS(85), 6,
      sym__implicit_end_tag,
      sym_entity,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      sym_text,
  [346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LT,
    ACTIONS(93), 6,
      sym__implicit_end_tag,
      sym_entity,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      sym_text,
  [361] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_LT,
    ACTIONS(77), 6,
      sym__implicit_end_tag,
      sym_entity,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      sym_text,
  [376] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_LT,
    ACTIONS(89), 6,
      sym_entity,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      sym_text,
  [391] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_LT,
    ACTIONS(97), 6,
      sym_entity,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      sym_text,
  [406] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_LT,
    ACTIONS(101), 6,
      sym__implicit_end_tag,
      sym_entity,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      sym_text,
  [421] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LT,
    ACTIONS(105), 6,
      sym__implicit_end_tag,
      sym_entity,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      sym_text,
  [436] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_LT,
    ACTIONS(109), 6,
      sym__implicit_end_tag,
      sym_entity,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      sym_text,
  [451] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LT,
    ACTIONS(93), 6,
      sym_entity,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      sym_text,
  [466] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_LT,
    ACTIONS(81), 6,
      sym__implicit_end_tag,
      sym_entity,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      sym_text,
  [481] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LT,
    ACTIONS(113), 6,
      sym__implicit_end_tag,
      sym_entity,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      sym_text,
  [496] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_LT,
    ACTIONS(97), 6,
      sym__implicit_end_tag,
      sym_entity,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      sym_text,
  [511] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LT,
    ACTIONS(113), 6,
      sym_entity,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      sym_text,
  [526] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_LT,
    ACTIONS(117), 6,
      sym__implicit_end_tag,
      sym_entity,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      sym_text,
  [541] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_LT,
    ACTIONS(117), 6,
      sym_entity,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      sym_text,
  [556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LT,
    ACTIONS(105), 6,
      sym_entity,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      sym_text,
  [571] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_LT,
    ACTIONS(101), 6,
      sym_entity,
      ts_builtin_sym_end,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      sym_text,
  [586] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_LT,
    ACTIONS(121), 6,
      sym__implicit_end_tag,
      sym_entity,
      anon_sym_LT_QMARK,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_LBRACKCDATA_LBRACK,
      sym_text,
  [601] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      sym_attribute_name,
    ACTIONS(125), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(31), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [616] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_GT,
    ACTIONS(132), 1,
      anon_sym_SLASH_GT,
    ACTIONS(134), 1,
      sym_attribute_name,
    STATE(31), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [633] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      sym_attribute_name,
    ACTIONS(136), 1,
      anon_sym_GT,
    ACTIONS(138), 1,
      anon_sym_SLASH_GT,
    STATE(35), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [650] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      sym_attribute_name,
    ACTIONS(136), 1,
      anon_sym_GT,
    ACTIONS(140), 1,
      anon_sym_SLASH_GT,
    STATE(32), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [667] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_GT,
    ACTIONS(134), 1,
      sym_attribute_name,
    ACTIONS(142), 1,
      anon_sym_SLASH_GT,
    STATE(31), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [684] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_EQ,
    ACTIONS(144), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [696] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_SQUOTE,
    ACTIONS(150), 1,
      anon_sym_DQUOTE,
    STATE(38), 1,
      sym_quoted_attribute_value,
  [709] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [718] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [736] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_RBRACK_RBRACK_GT,
    ACTIONS(160), 1,
      sym_raw_text,
  [746] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_SQUOTE,
    ACTIONS(164), 1,
      aux_sym_quoted_attribute_value_token1,
  [756] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      sym__end_tag_name,
    ACTIONS(168), 1,
      sym_erroneous_end_tag_name,
  [766] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_RBRACK_RBRACK_GT,
    ACTIONS(172), 1,
      sym_raw_text,
  [776] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym_erroneous_end_tag_name,
    ACTIONS(174), 1,
      sym__end_tag_name,
  [786] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_DQUOTE,
    ACTIONS(176), 1,
      aux_sym_quoted_attribute_value_token2,
  [796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_RBRACK_RBRACK_GT,
  [803] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      aux_sym_prolog_token1,
  [810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_xml,
  [817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_GT,
  [824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_GT,
  [831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      ts_builtin_sym_end,
  [838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      sym_erroneous_end_tag_name,
  [845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_SQUOTE,
  [852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_GT,
  [859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_RBRACK_RBRACK_GT,
  [866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      sym__start_tag_name,
  [873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_GT,
  [880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_GT,
  [887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_GT,
  [894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym__start_tag_name,
  [901] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym_erroneous_end_tag_name,
  [908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      aux_sym_prolog_token1,
  [915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
  [922] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_xml,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 80,
  [SMALL_STATE(5)] = 120,
  [SMALL_STATE(6)] = 160,
  [SMALL_STATE(7)] = 197,
  [SMALL_STATE(8)] = 234,
  [SMALL_STATE(9)] = 271,
  [SMALL_STATE(10)] = 286,
  [SMALL_STATE(11)] = 301,
  [SMALL_STATE(12)] = 316,
  [SMALL_STATE(13)] = 331,
  [SMALL_STATE(14)] = 346,
  [SMALL_STATE(15)] = 361,
  [SMALL_STATE(16)] = 376,
  [SMALL_STATE(17)] = 391,
  [SMALL_STATE(18)] = 406,
  [SMALL_STATE(19)] = 421,
  [SMALL_STATE(20)] = 436,
  [SMALL_STATE(21)] = 451,
  [SMALL_STATE(22)] = 466,
  [SMALL_STATE(23)] = 481,
  [SMALL_STATE(24)] = 496,
  [SMALL_STATE(25)] = 511,
  [SMALL_STATE(26)] = 526,
  [SMALL_STATE(27)] = 541,
  [SMALL_STATE(28)] = 556,
  [SMALL_STATE(29)] = 571,
  [SMALL_STATE(30)] = 586,
  [SMALL_STATE(31)] = 601,
  [SMALL_STATE(32)] = 616,
  [SMALL_STATE(33)] = 633,
  [SMALL_STATE(34)] = 650,
  [SMALL_STATE(35)] = 667,
  [SMALL_STATE(36)] = 684,
  [SMALL_STATE(37)] = 696,
  [SMALL_STATE(38)] = 709,
  [SMALL_STATE(39)] = 718,
  [SMALL_STATE(40)] = 727,
  [SMALL_STATE(41)] = 736,
  [SMALL_STATE(42)] = 746,
  [SMALL_STATE(43)] = 756,
  [SMALL_STATE(44)] = 766,
  [SMALL_STATE(45)] = 776,
  [SMALL_STATE(46)] = 786,
  [SMALL_STATE(47)] = 796,
  [SMALL_STATE(48)] = 803,
  [SMALL_STATE(49)] = 810,
  [SMALL_STATE(50)] = 817,
  [SMALL_STATE(51)] = 824,
  [SMALL_STATE(52)] = 831,
  [SMALL_STATE(53)] = 838,
  [SMALL_STATE(54)] = 845,
  [SMALL_STATE(55)] = 852,
  [SMALL_STATE(56)] = 859,
  [SMALL_STATE(57)] = 866,
  [SMALL_STATE(58)] = 873,
  [SMALL_STATE(59)] = 880,
  [SMALL_STATE(60)] = 887,
  [SMALL_STATE(61)] = 894,
  [SMALL_STATE(62)] = 901,
  [SMALL_STATE(63)] = 908,
  [SMALL_STATE(64)] = 915,
  [SMALL_STATE(65)] = 922,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(65),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(61),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(62),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(41),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(7),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(49),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(57),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(53),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(44),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(8),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_erroneous_end_tag, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_erroneous_end_tag, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cdata, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cdata, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prolog, 4),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prolog, 4),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cdata, 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cdata, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(36),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [188] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
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
