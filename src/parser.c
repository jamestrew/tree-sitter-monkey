#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 39
#define LARGE_STATE_COUNT 20
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum {
  sym_identifier = 1,
  anon_sym_SEMI = 2,
  anon_sym_fn = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_return = 6,
  anon_sym_let = 7,
  anon_sym_EQ = 8,
  anon_sym_if = 9,
  anon_sym_BANG = 10,
  anon_sym_DASH = 11,
  anon_sym_EQ_EQ = 12,
  anon_sym_BANG_EQ = 13,
  anon_sym_GT_EQ = 14,
  anon_sym_LT_EQ = 15,
  anon_sym_GT = 16,
  anon_sym_LT = 17,
  anon_sym_STAR = 18,
  anon_sym_SLASH = 19,
  anon_sym_PLUS = 20,
  anon_sym_LPAREN = 21,
  anon_sym_RPAREN = 22,
  sym_integer = 23,
  anon_sym_DQUOTE = 24,
  aux_sym_string_token1 = 25,
  sym_true = 26,
  sym_false = 27,
  sym_program = 28,
  sym__statements = 29,
  sym_expression_statement = 30,
  sym_block_statement = 31,
  sym_return_statement = 32,
  sym_let_statement = 33,
  sym__expression = 34,
  sym_if_expression = 35,
  sym_prefix_expression = 36,
  sym_infix_expression = 37,
  sym_grouped_expression = 38,
  sym_string = 39,
  aux_sym_program_repeat1 = 40,
  aux_sym_string_repeat1 = 41,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_SEMI] = ";",
  [anon_sym_fn] = "fn",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_return] = "return",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym_if] = "if",
  [anon_sym_BANG] = "!",
  [anon_sym_DASH] = "-",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PLUS] = "+",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_integer] = "integer",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_program] = "program",
  [sym__statements] = "_statements",
  [sym_expression_statement] = "expression_statement",
  [sym_block_statement] = "block_statement",
  [sym_return_statement] = "return_statement",
  [sym_let_statement] = "let_statement",
  [sym__expression] = "_expression",
  [sym_if_expression] = "if_expression",
  [sym_prefix_expression] = "prefix_expression",
  [sym_infix_expression] = "infix_expression",
  [sym_grouped_expression] = "grouped_expression",
  [sym_string] = "string",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_integer] = sym_integer,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_program] = sym_program,
  [sym__statements] = sym__statements,
  [sym_expression_statement] = sym_expression_statement,
  [sym_block_statement] = sym_block_statement,
  [sym_return_statement] = sym_return_statement,
  [sym_let_statement] = sym_let_statement,
  [sym__expression] = sym__expression,
  [sym_if_expression] = sym_if_expression,
  [sym_prefix_expression] = sym_prefix_expression,
  [sym_infix_expression] = sym_infix_expression,
  [sym_grouped_expression] = sym_grouped_expression,
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
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
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
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
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
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
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
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [sym_block_statement] = {
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
  [sym_if_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_prefix_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_infix_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_grouped_expression] = {
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

enum {
  field_argument = 1,
  field_left = 2,
  field_operator = 3,
  field_right = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_left] = "left",
  [field_operator] = "operator",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_argument, 1},
    {field_operator, 0},
  [2] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
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
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '"') ADVANCE(26);
      if (lookahead == '(') ADVANCE(22);
      if (lookahead == ')') ADVANCE(23);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '+') ADVANCE(21);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ';') ADVANCE(6);
      if (lookahead == '<') ADVANCE(18);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '>') ADVANCE(17);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '}') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 2:
      if (lookahead == '=') ADVANCE(13);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (eof) ADVANCE(5);
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '"') ADVANCE(26);
      if (lookahead == '(') ADVANCE(22);
      if (lookahead == ')') ADVANCE(23);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '+') ADVANCE(21);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ';') ADVANCE(6);
      if (lookahead == '<') ADVANCE(18);
      if (lookahead == '=') ADVANCE(2);
      if (lookahead == '>') ADVANCE(17);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '}') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(13);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(14);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(15);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(16);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(27);
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
      if (lookahead == 'i') ADVANCE(2);
      if (lookahead == 'l') ADVANCE(3);
      if (lookahead == 'r') ADVANCE(4);
      if (lookahead == 't') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(6);
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 2:
      if (lookahead == 'f') ADVANCE(8);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 5:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 9:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 14:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(38),
    [sym__statements] = STATE(16),
    [sym_expression_statement] = STATE(28),
    [sym_return_statement] = STATE(28),
    [sym_let_statement] = STATE(28),
    [sym__expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_prefix_expression] = STATE(14),
    [sym_infix_expression] = STATE(14),
    [sym_grouped_expression] = STATE(14),
    [sym_string] = STATE(14),
    [aux_sym_program_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_return] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_integer] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [sym_true] = ACTIONS(5),
    [sym_false] = ACTIONS(5),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(21),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_let] = ACTIONS(23),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(21),
    [anon_sym_BANG_EQ] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(21),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(21),
    [sym_integer] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_true] = ACTIONS(23),
    [sym_false] = ACTIONS(23),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(25),
    [anon_sym_return] = ACTIONS(27),
    [anon_sym_let] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_SLASH] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(25),
    [sym_integer] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_true] = ACTIONS(27),
    [sym_false] = ACTIONS(27),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
    [anon_sym_SEMI] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(33),
    [anon_sym_return] = ACTIONS(35),
    [anon_sym_let] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(35),
    [anon_sym_BANG] = ACTIONS(35),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_EQ_EQ] = ACTIONS(33),
    [anon_sym_BANG_EQ] = ACTIONS(33),
    [anon_sym_GT_EQ] = ACTIONS(33),
    [anon_sym_LT_EQ] = ACTIONS(33),
    [anon_sym_GT] = ACTIONS(35),
    [anon_sym_LT] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_SLASH] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(33),
    [sym_integer] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym_identifier] = ACTIONS(39),
    [anon_sym_SEMI] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(37),
    [anon_sym_return] = ACTIONS(39),
    [anon_sym_let] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_BANG] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_EQ_EQ] = ACTIONS(37),
    [anon_sym_BANG_EQ] = ACTIONS(37),
    [anon_sym_GT_EQ] = ACTIONS(37),
    [anon_sym_LT_EQ] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_SLASH] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_RPAREN] = ACTIONS(37),
    [sym_integer] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_true] = ACTIONS(39),
    [sym_false] = ACTIONS(39),
  },
  [6] = {
    [sym__statements] = STATE(6),
    [sym_expression_statement] = STATE(28),
    [sym_return_statement] = STATE(28),
    [sym_let_statement] = STATE(28),
    [sym__expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_prefix_expression] = STATE(14),
    [sym_infix_expression] = STATE(14),
    [sym_grouped_expression] = STATE(14),
    [sym_string] = STATE(14),
    [aux_sym_program_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(41),
    [anon_sym_return] = ACTIONS(46),
    [anon_sym_let] = ACTIONS(49),
    [anon_sym_if] = ACTIONS(52),
    [anon_sym_BANG] = ACTIONS(55),
    [anon_sym_DASH] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(58),
    [sym_integer] = ACTIONS(61),
    [anon_sym_DQUOTE] = ACTIONS(64),
    [sym_true] = ACTIONS(43),
    [sym_false] = ACTIONS(43),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(67),
    [sym_identifier] = ACTIONS(69),
    [anon_sym_SEMI] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(67),
    [anon_sym_return] = ACTIONS(69),
    [anon_sym_let] = ACTIONS(69),
    [anon_sym_if] = ACTIONS(69),
    [anon_sym_BANG] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_GT_EQ] = ACTIONS(67),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(69),
    [anon_sym_LT] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_RPAREN] = ACTIONS(67),
    [sym_integer] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(67),
    [sym_true] = ACTIONS(69),
    [sym_false] = ACTIONS(69),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(71),
    [sym_identifier] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(71),
    [anon_sym_RBRACE] = ACTIONS(71),
    [anon_sym_return] = ACTIONS(73),
    [anon_sym_let] = ACTIONS(73),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_BANG] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_EQ_EQ] = ACTIONS(71),
    [anon_sym_BANG_EQ] = ACTIONS(71),
    [anon_sym_GT_EQ] = ACTIONS(71),
    [anon_sym_LT_EQ] = ACTIONS(71),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_STAR] = ACTIONS(71),
    [anon_sym_SLASH] = ACTIONS(71),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(71),
    [sym_integer] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [sym_true] = ACTIONS(73),
    [sym_false] = ACTIONS(73),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(25),
    [anon_sym_return] = ACTIONS(27),
    [anon_sym_let] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_SLASH] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(25),
    [sym_integer] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_true] = ACTIONS(27),
    [sym_false] = ACTIONS(27),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(75),
    [sym_identifier] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(75),
    [anon_sym_return] = ACTIONS(77),
    [anon_sym_let] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(77),
    [anon_sym_BANG] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_EQ_EQ] = ACTIONS(75),
    [anon_sym_BANG_EQ] = ACTIONS(75),
    [anon_sym_GT_EQ] = ACTIONS(75),
    [anon_sym_LT_EQ] = ACTIONS(75),
    [anon_sym_GT] = ACTIONS(77),
    [anon_sym_LT] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(75),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_PLUS] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(75),
    [sym_integer] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(75),
    [sym_true] = ACTIONS(77),
    [sym_false] = ACTIONS(77),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(25),
    [anon_sym_return] = ACTIONS(27),
    [anon_sym_let] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(79),
    [anon_sym_LT_EQ] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(81),
    [anon_sym_LT] = ACTIONS(81),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_SLASH] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(25),
    [sym_integer] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_true] = ACTIONS(27),
    [sym_false] = ACTIONS(27),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(83),
    [sym_identifier] = ACTIONS(85),
    [anon_sym_SEMI] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(83),
    [anon_sym_return] = ACTIONS(85),
    [anon_sym_let] = ACTIONS(85),
    [anon_sym_if] = ACTIONS(85),
    [anon_sym_BANG] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_EQ_EQ] = ACTIONS(83),
    [anon_sym_BANG_EQ] = ACTIONS(83),
    [anon_sym_GT_EQ] = ACTIONS(83),
    [anon_sym_LT_EQ] = ACTIONS(83),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_STAR] = ACTIONS(83),
    [anon_sym_SLASH] = ACTIONS(83),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(83),
    [anon_sym_RPAREN] = ACTIONS(83),
    [sym_integer] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [sym_true] = ACTIONS(85),
    [sym_false] = ACTIONS(85),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(25),
    [anon_sym_return] = ACTIONS(27),
    [anon_sym_let] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(25),
    [sym_integer] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_true] = ACTIONS(27),
    [sym_false] = ACTIONS(27),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [sym_identifier] = ACTIONS(89),
    [anon_sym_SEMI] = ACTIONS(87),
    [anon_sym_RBRACE] = ACTIONS(87),
    [anon_sym_return] = ACTIONS(89),
    [anon_sym_let] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(89),
    [anon_sym_BANG] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_EQ_EQ] = ACTIONS(91),
    [anon_sym_BANG_EQ] = ACTIONS(91),
    [anon_sym_GT_EQ] = ACTIONS(79),
    [anon_sym_LT_EQ] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(81),
    [anon_sym_LT] = ACTIONS(81),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_SLASH] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(87),
    [sym_integer] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [sym_true] = ACTIONS(89),
    [sym_false] = ACTIONS(89),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(93),
    [sym_identifier] = ACTIONS(95),
    [anon_sym_SEMI] = ACTIONS(93),
    [anon_sym_RBRACE] = ACTIONS(93),
    [anon_sym_return] = ACTIONS(95),
    [anon_sym_let] = ACTIONS(95),
    [anon_sym_if] = ACTIONS(95),
    [anon_sym_BANG] = ACTIONS(95),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_EQ_EQ] = ACTIONS(91),
    [anon_sym_BANG_EQ] = ACTIONS(91),
    [anon_sym_GT_EQ] = ACTIONS(79),
    [anon_sym_LT_EQ] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(81),
    [anon_sym_LT] = ACTIONS(81),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_SLASH] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(93),
    [sym_integer] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [sym_true] = ACTIONS(95),
    [sym_false] = ACTIONS(95),
  },
  [16] = {
    [sym__statements] = STATE(6),
    [sym_expression_statement] = STATE(28),
    [sym_return_statement] = STATE(28),
    [sym_let_statement] = STATE(28),
    [sym__expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_prefix_expression] = STATE(14),
    [sym_infix_expression] = STATE(14),
    [sym_grouped_expression] = STATE(14),
    [sym_string] = STATE(14),
    [aux_sym_program_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(97),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_return] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_integer] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [sym_true] = ACTIONS(5),
    [sym_false] = ACTIONS(5),
  },
  [17] = {
    [sym__statements] = STATE(6),
    [sym_expression_statement] = STATE(28),
    [sym_return_statement] = STATE(28),
    [sym_let_statement] = STATE(28),
    [sym__expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_prefix_expression] = STATE(14),
    [sym_infix_expression] = STATE(14),
    [sym_grouped_expression] = STATE(14),
    [sym_string] = STATE(14),
    [aux_sym_program_repeat1] = STATE(6),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(99),
    [anon_sym_return] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_integer] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [sym_true] = ACTIONS(5),
    [sym_false] = ACTIONS(5),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(101),
    [sym_identifier] = ACTIONS(103),
    [anon_sym_SEMI] = ACTIONS(101),
    [anon_sym_RBRACE] = ACTIONS(101),
    [anon_sym_return] = ACTIONS(103),
    [anon_sym_let] = ACTIONS(103),
    [anon_sym_if] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_EQ_EQ] = ACTIONS(91),
    [anon_sym_BANG_EQ] = ACTIONS(91),
    [anon_sym_GT_EQ] = ACTIONS(79),
    [anon_sym_LT_EQ] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(81),
    [anon_sym_LT] = ACTIONS(81),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_SLASH] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(101),
    [sym_integer] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_true] = ACTIONS(103),
    [sym_false] = ACTIONS(103),
  },
  [19] = {
    [sym__statements] = STATE(17),
    [sym_expression_statement] = STATE(28),
    [sym_return_statement] = STATE(28),
    [sym_let_statement] = STATE(28),
    [sym__expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_prefix_expression] = STATE(14),
    [sym_infix_expression] = STATE(14),
    [sym_grouped_expression] = STATE(14),
    [sym_string] = STATE(14),
    [aux_sym_program_repeat1] = STATE(17),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(105),
    [anon_sym_return] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_integer] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [sym_true] = ACTIONS(5),
    [sym_false] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      sym_integer,
    ACTIONS(13), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(111), 2,
      anon_sym_return,
      anon_sym_let,
    ACTIONS(107), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(109), 3,
      sym_identifier,
      sym_true,
      sym_false,
    STATE(15), 6,
      sym__expression,
      sym_if_expression,
      sym_prefix_expression,
      sym_infix_expression,
      sym_grouped_expression,
      sym_string,
  [39] = 7,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      sym_integer,
    ACTIONS(13), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(115), 3,
      sym_identifier,
      sym_true,
      sym_false,
    STATE(12), 6,
      sym__expression,
      sym_if_expression,
      sym_prefix_expression,
      sym_infix_expression,
      sym_grouped_expression,
      sym_string,
  [69] = 7,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      sym_integer,
    ACTIONS(13), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(119), 3,
      sym_identifier,
      sym_true,
      sym_false,
    STATE(9), 6,
      sym__expression,
      sym_if_expression,
      sym_prefix_expression,
      sym_infix_expression,
      sym_grouped_expression,
      sym_string,
  [99] = 7,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      sym_integer,
    ACTIONS(13), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(123), 3,
      sym_identifier,
      sym_true,
      sym_false,
    STATE(11), 6,
      sym__expression,
      sym_if_expression,
      sym_prefix_expression,
      sym_infix_expression,
      sym_grouped_expression,
      sym_string,
  [129] = 7,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      sym_integer,
    ACTIONS(13), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(127), 3,
      sym_identifier,
      sym_true,
      sym_false,
    STATE(3), 6,
      sym__expression,
      sym_if_expression,
      sym_prefix_expression,
      sym_infix_expression,
      sym_grouped_expression,
      sym_string,
  [159] = 7,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      sym_integer,
    ACTIONS(13), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(131), 3,
      sym_identifier,
      sym_true,
      sym_false,
    STATE(13), 6,
      sym__expression,
      sym_if_expression,
      sym_prefix_expression,
      sym_infix_expression,
      sym_grouped_expression,
      sym_string,
  [189] = 7,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      sym_integer,
    ACTIONS(13), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(135), 3,
      sym_identifier,
      sym_true,
      sym_false,
    STATE(18), 6,
      sym__expression,
      sym_if_expression,
      sym_prefix_expression,
      sym_infix_expression,
      sym_grouped_expression,
      sym_string,
  [219] = 7,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      sym_integer,
    ACTIONS(13), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(139), 3,
      sym_identifier,
      sym_true,
      sym_false,
    STATE(30), 6,
      sym__expression,
      sym_if_expression,
      sym_prefix_expression,
      sym_infix_expression,
      sym_grouped_expression,
      sym_string,
  [249] = 3,
    ACTIONS(147), 1,
      anon_sym_SEMI,
    ACTIONS(145), 6,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      sym_identifier,
      sym_true,
      sym_false,
    ACTIONS(143), 7,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_LPAREN,
      sym_integer,
      anon_sym_DQUOTE,
  [270] = 2,
    ACTIONS(151), 6,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      sym_identifier,
      sym_true,
      sym_false,
    ACTIONS(149), 7,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_LPAREN,
      sym_integer,
      anon_sym_DQUOTE,
  [288] = 6,
    ACTIONS(153), 1,
      anon_sym_RPAREN,
    ACTIONS(29), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(31), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(79), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(81), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(91), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [312] = 3,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      aux_sym_string_token1,
    STATE(31), 1,
      aux_sym_string_repeat1,
  [322] = 3,
    ACTIONS(160), 1,
      anon_sym_DQUOTE,
    ACTIONS(162), 1,
      aux_sym_string_token1,
    STATE(31), 1,
      aux_sym_string_repeat1,
  [332] = 3,
    ACTIONS(164), 1,
      anon_sym_DQUOTE,
    ACTIONS(166), 1,
      aux_sym_string_token1,
    STATE(32), 1,
      aux_sym_string_repeat1,
  [342] = 2,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym_block_statement,
  [349] = 2,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      sym_grouped_expression,
  [356] = 1,
    ACTIONS(170), 1,
      sym_identifier,
  [360] = 1,
    ACTIONS(172), 1,
      anon_sym_EQ,
  [364] = 1,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(20)] = 0,
  [SMALL_STATE(21)] = 39,
  [SMALL_STATE(22)] = 69,
  [SMALL_STATE(23)] = 99,
  [SMALL_STATE(24)] = 129,
  [SMALL_STATE(25)] = 159,
  [SMALL_STATE(26)] = 189,
  [SMALL_STATE(27)] = 219,
  [SMALL_STATE(28)] = 249,
  [SMALL_STATE(29)] = 270,
  [SMALL_STATE(30)] = 288,
  [SMALL_STATE(31)] = 312,
  [SMALL_STATE(32)] = 322,
  [SMALL_STATE(33)] = 332,
  [SMALL_STATE(34)] = 342,
  [SMALL_STATE(35)] = 349,
  [SMALL_STATE(36)] = 356,
  [SMALL_STATE(37)] = 360,
  [SMALL_STATE(38)] = 364,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grouped_expression, 3),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grouped_expression, 3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix_expression, 3, .production_id = 2),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix_expression, 3, .production_id = 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 3),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement, 3),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 3),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(14),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(20),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(36),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(35),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(21),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(27),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(14),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(33),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_expression, 2, .production_id = 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix_expression, 2, .production_id = 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statements, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statements, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statements, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statements, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(31),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [174] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
