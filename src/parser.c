#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 32
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
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
  anon_sym_BANG = 9,
  anon_sym_DASH = 10,
  anon_sym_EQ_EQ = 11,
  anon_sym_BANG_EQ = 12,
  anon_sym_GT_EQ = 13,
  anon_sym_LT_EQ = 14,
  anon_sym_GT = 15,
  anon_sym_LT = 16,
  anon_sym_STAR = 17,
  anon_sym_SLASH = 18,
  anon_sym_PLUS = 19,
  anon_sym_LPAREN = 20,
  anon_sym_RPAREN = 21,
  sym_integer = 22,
  anon_sym_DQUOTE = 23,
  aux_sym_string_token1 = 24,
  sym_true = 25,
  sym_false = 26,
  sym_program = 27,
  sym__statements = 28,
  sym_expression_statement = 29,
  sym_return_statement = 30,
  sym_let_statement = 31,
  sym__expression = 32,
  sym_prefix_expression = 33,
  sym_infix_expression = 34,
  sym_parenthesized_expression = 35,
  sym_string = 36,
  aux_sym_program_repeat1 = 37,
  aux_sym_string_repeat1 = 38,
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
  [sym_return_statement] = "return_statement",
  [sym_let_statement] = "let_statement",
  [sym__expression] = "_expression",
  [sym_prefix_expression] = "prefix_expression",
  [sym_infix_expression] = "infix_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
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
  [sym_return_statement] = sym_return_statement,
  [sym_let_statement] = sym_let_statement,
  [sym__expression] = sym__expression,
  [sym_prefix_expression] = sym_prefix_expression,
  [sym_infix_expression] = sym_infix_expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
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
  [sym_infix_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '+') ADVANCE(23);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(7);
      if (lookahead == '<') ADVANCE(20);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead == '>') ADVANCE(19);
      if (lookahead == '{') ADVANCE(8);
      if (lookahead == '}') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(3);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '+') ADVANCE(23);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(7);
      if (lookahead == '<') ADVANCE(20);
      if (lookahead == '=') ADVANCE(4);
      if (lookahead == '>') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(15);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == ';') ADVANCE(7);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(15);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(16);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(17);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(18);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(29);
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
  [1] = {.lex_state = 5},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
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
    [sym_program] = STATE(31),
    [sym__statements] = STATE(3),
    [sym_expression_statement] = STATE(30),
    [sym_return_statement] = STATE(30),
    [sym_let_statement] = STATE(30),
    [sym__expression] = STATE(24),
    [sym_prefix_expression] = STATE(24),
    [sym_infix_expression] = STATE(24),
    [sym_parenthesized_expression] = STATE(24),
    [sym_string] = STATE(24),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_return] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_integer] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_true] = ACTIONS(5),
    [sym_false] = ACTIONS(5),
  },
  [2] = {
    [sym__statements] = STATE(2),
    [sym_expression_statement] = STATE(30),
    [sym_return_statement] = STATE(30),
    [sym_let_statement] = STATE(30),
    [sym__expression] = STATE(24),
    [sym_prefix_expression] = STATE(24),
    [sym_infix_expression] = STATE(24),
    [sym_parenthesized_expression] = STATE(24),
    [sym_string] = STATE(24),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [anon_sym_return] = ACTIONS(24),
    [anon_sym_let] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(30),
    [anon_sym_DASH] = ACTIONS(30),
    [anon_sym_LPAREN] = ACTIONS(33),
    [sym_integer] = ACTIONS(36),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_true] = ACTIONS(21),
    [sym_false] = ACTIONS(21),
  },
  [3] = {
    [sym__statements] = STATE(2),
    [sym_expression_statement] = STATE(30),
    [sym_return_statement] = STATE(30),
    [sym_let_statement] = STATE(30),
    [sym__expression] = STATE(24),
    [sym_prefix_expression] = STATE(24),
    [sym_infix_expression] = STATE(24),
    [sym_parenthesized_expression] = STATE(24),
    [sym_string] = STATE(24),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(42),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_return] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_integer] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_true] = ACTIONS(5),
    [sym_false] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(46), 1,
      anon_sym_SEMI,
    ACTIONS(48), 1,
      sym_integer,
    ACTIONS(11), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(44), 3,
      sym_identifier,
      sym_true,
      sym_false,
    STATE(23), 5,
      sym__expression,
      sym_prefix_expression,
      sym_infix_expression,
      sym_parenthesized_expression,
      sym_string,
  [29] = 6,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(52), 1,
      sym_integer,
    ACTIONS(11), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(50), 3,
      sym_identifier,
      sym_true,
      sym_false,
    STATE(21), 5,
      sym__expression,
      sym_prefix_expression,
      sym_infix_expression,
      sym_parenthesized_expression,
      sym_string,
  [55] = 6,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(56), 1,
      sym_integer,
    ACTIONS(11), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(54), 3,
      sym_identifier,
      sym_true,
      sym_false,
    STATE(13), 5,
      sym__expression,
      sym_prefix_expression,
      sym_infix_expression,
      sym_parenthesized_expression,
      sym_string,
  [81] = 6,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(60), 1,
      sym_integer,
    ACTIONS(11), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(58), 3,
      sym_identifier,
      sym_true,
      sym_false,
    STATE(20), 5,
      sym__expression,
      sym_prefix_expression,
      sym_infix_expression,
      sym_parenthesized_expression,
      sym_string,
  [107] = 6,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(64), 1,
      sym_integer,
    ACTIONS(11), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(62), 3,
      sym_identifier,
      sym_true,
      sym_false,
    STATE(12), 5,
      sym__expression,
      sym_prefix_expression,
      sym_infix_expression,
      sym_parenthesized_expression,
      sym_string,
  [133] = 6,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(68), 1,
      sym_integer,
    ACTIONS(11), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(66), 3,
      sym_identifier,
      sym_true,
      sym_false,
    STATE(17), 5,
      sym__expression,
      sym_prefix_expression,
      sym_infix_expression,
      sym_parenthesized_expression,
      sym_string,
  [159] = 6,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(72), 1,
      sym_integer,
    ACTIONS(11), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(70), 3,
      sym_identifier,
      sym_true,
      sym_false,
    STATE(16), 5,
      sym__expression,
      sym_prefix_expression,
      sym_infix_expression,
      sym_parenthesized_expression,
      sym_string,
  [185] = 6,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(76), 1,
      sym_integer,
    ACTIONS(11), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(74), 3,
      sym_identifier,
      sym_true,
      sym_false,
    STATE(15), 5,
      sym__expression,
      sym_prefix_expression,
      sym_infix_expression,
      sym_parenthesized_expression,
      sym_string,
  [211] = 2,
    ACTIONS(80), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(78), 10,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [228] = 2,
    ACTIONS(84), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(82), 10,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [245] = 2,
    ACTIONS(88), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(86), 10,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [262] = 3,
    ACTIONS(80), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(90), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(78), 8,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [281] = 5,
    ACTIONS(90), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(92), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(94), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(96), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(78), 4,
      anon_sym_SEMI,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RPAREN,
  [304] = 4,
    ACTIONS(80), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(90), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(92), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(78), 6,
      anon_sym_SEMI,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_RPAREN,
  [325] = 2,
    ACTIONS(100), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(98), 10,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [342] = 2,
    ACTIONS(104), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(102), 10,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [359] = 6,
    ACTIONS(108), 1,
      anon_sym_RPAREN,
    ACTIONS(90), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(92), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(94), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(96), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(106), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [383] = 6,
    ACTIONS(110), 1,
      anon_sym_SEMI,
    ACTIONS(90), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(92), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(94), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(96), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(106), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [407] = 2,
    ACTIONS(114), 5,
      anon_sym_return,
      anon_sym_let,
      sym_identifier,
      sym_true,
      sym_false,
    ACTIONS(112), 6,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_LPAREN,
      sym_integer,
      anon_sym_DQUOTE,
  [423] = 6,
    ACTIONS(116), 1,
      anon_sym_SEMI,
    ACTIONS(90), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(92), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(94), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(96), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(106), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [447] = 6,
    ACTIONS(118), 1,
      anon_sym_SEMI,
    ACTIONS(90), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(92), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(94), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(96), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(106), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [471] = 3,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      aux_sym_string_token1,
    STATE(26), 1,
      aux_sym_string_repeat1,
  [481] = 3,
    ACTIONS(124), 1,
      anon_sym_DQUOTE,
    ACTIONS(126), 1,
      aux_sym_string_token1,
    STATE(26), 1,
      aux_sym_string_repeat1,
  [491] = 3,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(131), 1,
      aux_sym_string_token1,
    STATE(25), 1,
      aux_sym_string_repeat1,
  [501] = 1,
    ACTIONS(133), 1,
      sym_identifier,
  [505] = 1,
    ACTIONS(135), 1,
      anon_sym_EQ,
  [509] = 1,
    ACTIONS(137), 1,
      anon_sym_SEMI,
  [513] = 1,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 29,
  [SMALL_STATE(6)] = 55,
  [SMALL_STATE(7)] = 81,
  [SMALL_STATE(8)] = 107,
  [SMALL_STATE(9)] = 133,
  [SMALL_STATE(10)] = 159,
  [SMALL_STATE(11)] = 185,
  [SMALL_STATE(12)] = 211,
  [SMALL_STATE(13)] = 228,
  [SMALL_STATE(14)] = 245,
  [SMALL_STATE(15)] = 262,
  [SMALL_STATE(16)] = 281,
  [SMALL_STATE(17)] = 304,
  [SMALL_STATE(18)] = 325,
  [SMALL_STATE(19)] = 342,
  [SMALL_STATE(20)] = 359,
  [SMALL_STATE(21)] = 383,
  [SMALL_STATE(22)] = 407,
  [SMALL_STATE(23)] = 423,
  [SMALL_STATE(24)] = 447,
  [SMALL_STATE(25)] = 471,
  [SMALL_STATE(26)] = 481,
  [SMALL_STATE(27)] = 491,
  [SMALL_STATE(28)] = 501,
  [SMALL_STATE(29)] = 505,
  [SMALL_STATE(30)] = 509,
  [SMALL_STATE(31)] = 513,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(24),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(28),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(24),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(27),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix_expression, 3, .production_id = 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix_expression, 3, .production_id = 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_expression, 2, .production_id = 1),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix_expression, 2, .production_id = 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statements, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statements, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(26),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [139] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
