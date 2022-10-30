#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 9
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 16
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
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
  sym_true = 8,
  sym_false = 9,
  sym_program = 10,
  sym_expression_statement = 11,
  sym__statements = 12,
  sym_return_statement = 13,
  sym__expression = 14,
  aux_sym_program_repeat1 = 15,
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
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_program] = "program",
  [sym_expression_statement] = "expression_statement",
  [sym__statements] = "_statements",
  [sym_return_statement] = "return_statement",
  [sym__expression] = "_expression",
  [aux_sym_program_repeat1] = "program_repeat1",
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
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_program] = sym_program,
  [sym_expression_statement] = sym_expression_statement,
  [sym__statements] = sym__statements,
  [sym_return_statement] = sym_return_statement,
  [sym__expression] = sym__expression,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
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
  [aux_sym_program_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1);
      if (lookahead == ';') ADVANCE(4);
      if (lookahead == '{') ADVANCE(2);
      if (lookahead == '}') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
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
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(7),
    [sym_expression_statement] = STATE(2),
    [sym__statements] = STATE(2),
    [sym_return_statement] = STATE(2),
    [sym__expression] = STATE(4),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_return] = ACTIONS(7),
    [sym_integer] = ACTIONS(9),
    [sym_true] = ACTIONS(5),
    [sym_false] = ACTIONS(5),
  },
  [2] = {
    [sym_expression_statement] = STATE(3),
    [sym__statements] = STATE(3),
    [sym_return_statement] = STATE(3),
    [sym__expression] = STATE(4),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_return] = ACTIONS(7),
    [sym_integer] = ACTIONS(9),
    [sym_true] = ACTIONS(5),
    [sym_false] = ACTIONS(5),
  },
  [3] = {
    [sym_expression_statement] = STATE(3),
    [sym__statements] = STATE(3),
    [sym_return_statement] = STATE(3),
    [sym__expression] = STATE(4),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
    [anon_sym_return] = ACTIONS(18),
    [sym_integer] = ACTIONS(21),
    [sym_true] = ACTIONS(15),
    [sym_false] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(24), 2,
      ts_builtin_sym_end,
      sym_integer,
    ACTIONS(26), 4,
      anon_sym_return,
      sym_identifier,
      sym_true,
      sym_false,
  [11] = 2,
    ACTIONS(28), 2,
      ts_builtin_sym_end,
      sym_integer,
    ACTIONS(30), 4,
      anon_sym_return,
      sym_identifier,
      sym_true,
      sym_false,
  [22] = 3,
    ACTIONS(34), 1,
      sym_integer,
    STATE(8), 1,
      sym__expression,
    ACTIONS(32), 3,
      sym_identifier,
      sym_true,
      sym_false,
  [34] = 1,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
  [38] = 1,
    ACTIONS(38), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 11,
  [SMALL_STATE(6)] = 22,
  [SMALL_STATE(7)] = 34,
  [SMALL_STATE(8)] = 38,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 1),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [36] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
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
