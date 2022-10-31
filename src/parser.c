#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 22
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  sym_identifier = 1,
  anon_sym_fn = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_return = 5,
  anon_sym_SEMI = 6,
  anon_sym_let = 7,
  anon_sym_EQ = 8,
  anon_sym_BANG = 9,
  anon_sym_DASH = 10,
  sym_integer = 11,
  anon_sym_DQUOTE = 12,
  aux_sym_string_token1 = 13,
  sym_true = 14,
  sym_false = 15,
  sym_program = 16,
  sym__statements = 17,
  sym_expression_statement = 18,
  sym_return_statement = 19,
  sym_let_statement = 20,
  sym__expression = 21,
  sym_prefix_expression = 22,
  sym_string = 23,
  aux_sym_program_repeat1 = 24,
  aux_sym_string_repeat1 = 25,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_fn] = "fn",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_return] = "return",
  [anon_sym_SEMI] = ";",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym_BANG] = "!",
  [anon_sym_DASH] = "-",
  [sym_integer] = "integer",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_program] = "program",
  [sym__statements] = "_statements",
  [sym_expression_statement] = "expression_statement",
  [sym_return_statement] = "return_statement",
  [sym_let_statement] = "let_statement",
  [sym__expression] = "_expression",
  [sym_prefix_expression] = "prefix_expression",
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
  [anon_sym_let] = anon_sym_let,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_integer] = sym_integer,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_program] = sym_program,
  [sym__statements] = sym__statements,
  [sym_expression_statement] = sym_expression_statement,
  [sym_return_statement] = sym_return_statement,
  [sym_let_statement] = sym_let_statement,
  [sym__expression] = sym__expression,
  [sym_prefix_expression] = sym_prefix_expression,
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
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
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
  [sym__statements] = {
    .visible = false,
    .named = true,
  },
  [sym_expression_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_let_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_prefix_expression] = {
    .visible = true,
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
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(2);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == ';') ADVANCE(5);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '{') ADVANCE(3);
      if (lookahead == '}') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0) ADVANCE(12);
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
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(12);
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
      if (lookahead == 'l') ADVANCE(2);
      if (lookahead == 'r') ADVANCE(3);
      if (lookahead == 't') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(5);
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 2:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 4:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 7:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 12:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 19:
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
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
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
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(21),
    [sym__statements] = STATE(3),
    [sym_expression_statement] = STATE(3),
    [sym_return_statement] = STATE(3),
    [sym_let_statement] = STATE(3),
    [sym__expression] = STATE(10),
    [sym_prefix_expression] = STATE(10),
    [sym_string] = STATE(10),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_return] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [sym_integer] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_true] = ACTIONS(5),
    [sym_false] = ACTIONS(5),
  },
  [2] = {
    [sym__statements] = STATE(2),
    [sym_expression_statement] = STATE(2),
    [sym_return_statement] = STATE(2),
    [sym_let_statement] = STATE(2),
    [sym__expression] = STATE(10),
    [sym_prefix_expression] = STATE(10),
    [sym_string] = STATE(10),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(22),
    [anon_sym_let] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(28),
    [anon_sym_DASH] = ACTIONS(28),
    [sym_integer] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(34),
    [sym_true] = ACTIONS(19),
    [sym_false] = ACTIONS(19),
  },
  [3] = {
    [sym__statements] = STATE(2),
    [sym_expression_statement] = STATE(2),
    [sym_return_statement] = STATE(2),
    [sym_let_statement] = STATE(2),
    [sym__expression] = STATE(10),
    [sym_prefix_expression] = STATE(10),
    [sym_string] = STATE(10),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_return] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [sym_integer] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_true] = ACTIONS(5),
    [sym_false] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SEMI,
    ACTIONS(43), 1,
      sym_integer,
    ACTIONS(11), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(39), 3,
      sym_identifier,
      sym_true,
      sym_false,
    STATE(19), 3,
      sym__expression,
      sym_prefix_expression,
      sym_string,
  [24] = 2,
    ACTIONS(47), 5,
      anon_sym_return,
      anon_sym_let,
      sym_identifier,
      sym_true,
      sym_false,
    ACTIONS(45), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_DASH,
      sym_integer,
      anon_sym_DQUOTE,
  [40] = 2,
    ACTIONS(51), 5,
      anon_sym_return,
      anon_sym_let,
      sym_identifier,
      sym_true,
      sym_false,
    ACTIONS(49), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_DASH,
      sym_integer,
      anon_sym_DQUOTE,
  [56] = 2,
    ACTIONS(55), 5,
      anon_sym_return,
      anon_sym_let,
      sym_identifier,
      sym_true,
      sym_false,
    ACTIONS(53), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_DASH,
      sym_integer,
      anon_sym_DQUOTE,
  [72] = 2,
    ACTIONS(57), 5,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_DASH,
      sym_integer,
      anon_sym_DQUOTE,
    ACTIONS(59), 5,
      anon_sym_return,
      anon_sym_let,
      sym_identifier,
      sym_true,
      sym_false,
  [87] = 5,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym_integer,
    ACTIONS(11), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(61), 3,
      sym_identifier,
      sym_true,
      sym_false,
    STATE(6), 3,
      sym__expression,
      sym_prefix_expression,
      sym_string,
  [108] = 2,
    ACTIONS(65), 5,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_DASH,
      sym_integer,
      anon_sym_DQUOTE,
    ACTIONS(67), 5,
      anon_sym_return,
      anon_sym_let,
      sym_identifier,
      sym_true,
      sym_false,
  [123] = 2,
    ACTIONS(69), 5,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_DASH,
      sym_integer,
      anon_sym_DQUOTE,
    ACTIONS(71), 5,
      anon_sym_return,
      anon_sym_let,
      sym_identifier,
      sym_true,
      sym_false,
  [138] = 5,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_integer,
    ACTIONS(11), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(73), 3,
      sym_identifier,
      sym_true,
      sym_false,
    STATE(20), 3,
      sym__expression,
      sym_prefix_expression,
      sym_string,
  [159] = 2,
    ACTIONS(77), 5,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_DASH,
      sym_integer,
      anon_sym_DQUOTE,
    ACTIONS(79), 5,
      anon_sym_return,
      anon_sym_let,
      sym_identifier,
      sym_true,
      sym_false,
  [174] = 3,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      aux_sym_string_token1,
    STATE(15), 1,
      aux_sym_string_repeat1,
  [184] = 3,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 1,
      aux_sym_string_token1,
    STATE(16), 1,
      aux_sym_string_repeat1,
  [194] = 3,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      aux_sym_string_token1,
    STATE(16), 1,
      aux_sym_string_repeat1,
  [204] = 1,
    ACTIONS(94), 1,
      sym_identifier,
  [208] = 1,
    ACTIONS(96), 1,
      anon_sym_EQ,
  [212] = 1,
    ACTIONS(98), 1,
      anon_sym_SEMI,
  [216] = 1,
    ACTIONS(100), 1,
      anon_sym_SEMI,
  [220] = 1,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 24,
  [SMALL_STATE(6)] = 40,
  [SMALL_STATE(7)] = 56,
  [SMALL_STATE(8)] = 72,
  [SMALL_STATE(9)] = 87,
  [SMALL_STATE(10)] = 108,
  [SMALL_STATE(11)] = 123,
  [SMALL_STATE(12)] = 138,
  [SMALL_STATE(13)] = 159,
  [SMALL_STATE(14)] = 174,
  [SMALL_STATE(15)] = 184,
  [SMALL_STATE(16)] = 194,
  [SMALL_STATE(17)] = 204,
  [SMALL_STATE(18)] = 208,
  [SMALL_STATE(19)] = 212,
  [SMALL_STATE(20)] = 216,
  [SMALL_STATE(21)] = 220,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(17),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(14),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_expression, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix_expression, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 5),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 5),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(16),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [102] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
