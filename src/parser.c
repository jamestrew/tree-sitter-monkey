#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 14
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  sym_identifier = 1,
  anon_sym_fn = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_return = 5,
  anon_sym_SEMI = 6,
  sym_integer = 7,
  anon_sym_DQUOTE = 8,
  aux_sym_string_token1 = 9,
  sym_true = 10,
  sym_false = 11,
  sym_program = 12,
  sym_expression_statement = 13,
  sym__statements = 14,
  sym_return_statement = 15,
  sym__expression = 16,
  sym_string = 17,
  aux_sym_program_repeat1 = 18,
  aux_sym_string_repeat1 = 19,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_fn] = "fn",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_return] = "return",
  [anon_sym_SEMI] = ";",
  [sym_integer] = "integer",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_program] = "program",
  [sym_expression_statement] = "expression_statement",
  [sym__statements] = "_statements",
  [sym_return_statement] = "return_statement",
  [sym__expression] = "_expression",
  [sym_string] = "string",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_integer] = sym_integer,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_program] = sym_program,
  [sym_expression_statement] = sym_expression_statement,
  [sym__statements] = sym__statements,
  [sym_return_statement] = sym_return_statement,
  [sym__expression] = sym__expression,
  [sym_string] = sym_string,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__statements] = {
    .visible = false,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
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
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(2);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == ';') ADVANCE(5);
      if (lookahead == '{') ADVANCE(3);
      if (lookahead == '}') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(9);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'f') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(2);
      if (lookahead == 't') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(4);
      if (lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 2:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 6:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(12),
    [sym_expression_statement] = STATE(2),
    [sym__statements] = STATE(2),
    [sym_return_statement] = STATE(2),
    [sym__expression] = STATE(7),
    [sym_string] = STATE(7),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_return] = ACTIONS(7),
    [sym_integer] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_true] = ACTIONS(5),
    [sym_false] = ACTIONS(5),
  },
  [2] = {
    [sym_expression_statement] = STATE(3),
    [sym__statements] = STATE(3),
    [sym_return_statement] = STATE(3),
    [sym__expression] = STATE(7),
    [sym_string] = STATE(7),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_return] = ACTIONS(7),
    [sym_integer] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_true] = ACTIONS(5),
    [sym_false] = ACTIONS(5),
  },
  [3] = {
    [sym_expression_statement] = STATE(3),
    [sym__statements] = STATE(3),
    [sym_return_statement] = STATE(3),
    [sym__expression] = STATE(7),
    [sym_string] = STATE(7),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_return] = ACTIONS(20),
    [sym_integer] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(26),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(29), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_integer,
      anon_sym_DQUOTE,
    ACTIONS(31), 4,
      anon_sym_return,
      sym_identifier,
      sym_true,
      sym_false,
  [13] = 2,
    ACTIONS(33), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_integer,
      anon_sym_DQUOTE,
    ACTIONS(35), 4,
      anon_sym_return,
      sym_identifier,
      sym_true,
      sym_false,
  [26] = 4,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer,
    STATE(13), 2,
      sym__expression,
      sym_string,
    ACTIONS(37), 3,
      sym_identifier,
      sym_true,
      sym_false,
  [42] = 2,
    ACTIONS(41), 3,
      ts_builtin_sym_end,
      sym_integer,
      anon_sym_DQUOTE,
    ACTIONS(43), 4,
      anon_sym_return,
      sym_identifier,
      sym_true,
      sym_false,
  [54] = 2,
    ACTIONS(45), 3,
      ts_builtin_sym_end,
      sym_integer,
      anon_sym_DQUOTE,
    ACTIONS(47), 4,
      anon_sym_return,
      sym_identifier,
      sym_true,
      sym_false,
  [66] = 3,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      aux_sym_string_token1,
    STATE(10), 1,
      aux_sym_string_repeat1,
  [76] = 3,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      aux_sym_string_token1,
    STATE(11), 1,
      aux_sym_string_repeat1,
  [86] = 3,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      aux_sym_string_token1,
    STATE(11), 1,
      aux_sym_string_repeat1,
  [96] = 1,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
  [100] = 1,
    ACTIONS(64), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 13,
  [SMALL_STATE(6)] = 26,
  [SMALL_STATE(7)] = 42,
  [SMALL_STATE(8)] = 54,
  [SMALL_STATE(9)] = 66,
  [SMALL_STATE(10)] = 76,
  [SMALL_STATE(11)] = 86,
  [SMALL_STATE(12)] = 96,
  [SMALL_STATE(13)] = 100,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(11),
  [62] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_monkey(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
