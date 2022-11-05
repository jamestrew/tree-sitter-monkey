#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 42
#define LARGE_STATE_COUNT 22
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
  sym_assignment = 33,
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
  [sym_assignment] = "assignment",
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
  [sym_assignment] = sym_assignment,
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
  [sym_assignment] = {
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
  [39] = 39,
  [40] = 40,
  [41] = 41,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(2);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '+') ADVANCE(17);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ';') ADVANCE(3);
      if (lookahead == '<') ADVANCE(14);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '>') ADVANCE(13);
      if (lookahead == '{') ADVANCE(4);
      if (lookahead == '}') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(9);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(10);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(11);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(12);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(23);
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
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
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
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
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
    [sym_program] = STATE(41),
    [sym__statements] = STATE(19),
    [sym_expression_statement] = STATE(31),
    [sym_return_statement] = STATE(31),
    [sym_assignment] = STATE(31),
    [sym__expression] = STATE(20),
    [sym_if_expression] = STATE(20),
    [sym_prefix_expression] = STATE(20),
    [sym_infix_expression] = STATE(20),
    [sym_grouped_expression] = STATE(20),
    [sym_string] = STATE(20),
    [aux_sym_program_repeat1] = STATE(19),
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
    [sym_true] = ACTIONS(21),
    [sym_false] = ACTIONS(21),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [anon_sym_SEMI] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(23),
    [anon_sym_return] = ACTIONS(25),
    [anon_sym_let] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(23),
    [sym_integer] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_true] = ACTIONS(25),
    [sym_false] = ACTIONS(25),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(27),
    [anon_sym_return] = ACTIONS(29),
    [anon_sym_let] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_EQ_EQ] = ACTIONS(27),
    [anon_sym_BANG_EQ] = ACTIONS(27),
    [anon_sym_GT_EQ] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_PLUS] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(27),
    [sym_integer] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [sym_true] = ACTIONS(29),
    [sym_false] = ACTIONS(29),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(27),
    [anon_sym_return] = ACTIONS(29),
    [anon_sym_let] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_EQ_EQ] = ACTIONS(27),
    [anon_sym_BANG_EQ] = ACTIONS(27),
    [anon_sym_GT_EQ] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_SLASH] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(27),
    [sym_integer] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [sym_true] = ACTIONS(29),
    [sym_false] = ACTIONS(29),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_identifier] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(37),
    [anon_sym_let] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(37),
    [anon_sym_BANG] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(35),
    [anon_sym_EQ_EQ] = ACTIONS(35),
    [anon_sym_BANG_EQ] = ACTIONS(35),
    [anon_sym_GT_EQ] = ACTIONS(35),
    [anon_sym_LT_EQ] = ACTIONS(35),
    [anon_sym_GT] = ACTIONS(37),
    [anon_sym_LT] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(35),
    [anon_sym_SLASH] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(35),
    [sym_integer] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_true] = ACTIONS(37),
    [sym_false] = ACTIONS(37),
  },
  [6] = {
    [sym__statements] = STATE(6),
    [sym_expression_statement] = STATE(31),
    [sym_return_statement] = STATE(31),
    [sym_assignment] = STATE(31),
    [sym__expression] = STATE(20),
    [sym_if_expression] = STATE(20),
    [sym_prefix_expression] = STATE(20),
    [sym_infix_expression] = STATE(20),
    [sym_grouped_expression] = STATE(20),
    [sym_string] = STATE(20),
    [aux_sym_program_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_identifier] = ACTIONS(41),
    [anon_sym_RBRACE] = ACTIONS(39),
    [anon_sym_return] = ACTIONS(44),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_if] = ACTIONS(50),
    [anon_sym_BANG] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(56),
    [sym_integer] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(62),
    [sym_true] = ACTIONS(65),
    [sym_false] = ACTIONS(65),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(68),
    [sym_identifier] = ACTIONS(70),
    [anon_sym_SEMI] = ACTIONS(68),
    [anon_sym_RBRACE] = ACTIONS(68),
    [anon_sym_return] = ACTIONS(70),
    [anon_sym_let] = ACTIONS(70),
    [anon_sym_if] = ACTIONS(70),
    [anon_sym_BANG] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(68),
    [anon_sym_EQ_EQ] = ACTIONS(68),
    [anon_sym_BANG_EQ] = ACTIONS(68),
    [anon_sym_GT_EQ] = ACTIONS(68),
    [anon_sym_LT_EQ] = ACTIONS(68),
    [anon_sym_GT] = ACTIONS(70),
    [anon_sym_LT] = ACTIONS(70),
    [anon_sym_STAR] = ACTIONS(68),
    [anon_sym_SLASH] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(68),
    [anon_sym_LPAREN] = ACTIONS(68),
    [anon_sym_RPAREN] = ACTIONS(68),
    [sym_integer] = ACTIONS(68),
    [anon_sym_DQUOTE] = ACTIONS(68),
    [sym_true] = ACTIONS(70),
    [sym_false] = ACTIONS(70),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(72),
    [sym_identifier] = ACTIONS(74),
    [anon_sym_SEMI] = ACTIONS(72),
    [anon_sym_RBRACE] = ACTIONS(72),
    [anon_sym_return] = ACTIONS(74),
    [anon_sym_let] = ACTIONS(74),
    [anon_sym_EQ] = ACTIONS(76),
    [anon_sym_if] = ACTIONS(74),
    [anon_sym_BANG] = ACTIONS(74),
    [anon_sym_DASH] = ACTIONS(72),
    [anon_sym_EQ_EQ] = ACTIONS(72),
    [anon_sym_BANG_EQ] = ACTIONS(72),
    [anon_sym_GT_EQ] = ACTIONS(72),
    [anon_sym_LT_EQ] = ACTIONS(72),
    [anon_sym_GT] = ACTIONS(74),
    [anon_sym_LT] = ACTIONS(74),
    [anon_sym_STAR] = ACTIONS(72),
    [anon_sym_SLASH] = ACTIONS(72),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym_integer] = ACTIONS(72),
    [anon_sym_DQUOTE] = ACTIONS(72),
    [sym_true] = ACTIONS(74),
    [sym_false] = ACTIONS(74),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(78),
    [sym_identifier] = ACTIONS(80),
    [anon_sym_SEMI] = ACTIONS(78),
    [anon_sym_RBRACE] = ACTIONS(78),
    [anon_sym_return] = ACTIONS(80),
    [anon_sym_let] = ACTIONS(80),
    [anon_sym_if] = ACTIONS(80),
    [anon_sym_BANG] = ACTIONS(80),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_EQ_EQ] = ACTIONS(78),
    [anon_sym_BANG_EQ] = ACTIONS(78),
    [anon_sym_GT_EQ] = ACTIONS(78),
    [anon_sym_LT_EQ] = ACTIONS(78),
    [anon_sym_GT] = ACTIONS(80),
    [anon_sym_LT] = ACTIONS(80),
    [anon_sym_STAR] = ACTIONS(78),
    [anon_sym_SLASH] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_LPAREN] = ACTIONS(78),
    [anon_sym_RPAREN] = ACTIONS(78),
    [sym_integer] = ACTIONS(78),
    [anon_sym_DQUOTE] = ACTIONS(78),
    [sym_true] = ACTIONS(80),
    [sym_false] = ACTIONS(80),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(82),
    [sym_identifier] = ACTIONS(84),
    [anon_sym_SEMI] = ACTIONS(82),
    [anon_sym_RBRACE] = ACTIONS(82),
    [anon_sym_return] = ACTIONS(84),
    [anon_sym_let] = ACTIONS(84),
    [anon_sym_if] = ACTIONS(84),
    [anon_sym_BANG] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(82),
    [anon_sym_EQ_EQ] = ACTIONS(82),
    [anon_sym_BANG_EQ] = ACTIONS(82),
    [anon_sym_GT_EQ] = ACTIONS(82),
    [anon_sym_LT_EQ] = ACTIONS(82),
    [anon_sym_GT] = ACTIONS(84),
    [anon_sym_LT] = ACTIONS(84),
    [anon_sym_STAR] = ACTIONS(82),
    [anon_sym_SLASH] = ACTIONS(82),
    [anon_sym_PLUS] = ACTIONS(82),
    [anon_sym_LPAREN] = ACTIONS(82),
    [anon_sym_RPAREN] = ACTIONS(82),
    [sym_integer] = ACTIONS(82),
    [anon_sym_DQUOTE] = ACTIONS(82),
    [sym_true] = ACTIONS(84),
    [sym_false] = ACTIONS(84),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(27),
    [anon_sym_return] = ACTIONS(29),
    [anon_sym_let] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_EQ_EQ] = ACTIONS(27),
    [anon_sym_BANG_EQ] = ACTIONS(27),
    [anon_sym_GT_EQ] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_SLASH] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(27),
    [sym_integer] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [sym_true] = ACTIONS(29),
    [sym_false] = ACTIONS(29),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(86),
    [sym_identifier] = ACTIONS(88),
    [anon_sym_SEMI] = ACTIONS(86),
    [anon_sym_RBRACE] = ACTIONS(86),
    [anon_sym_return] = ACTIONS(88),
    [anon_sym_let] = ACTIONS(88),
    [anon_sym_if] = ACTIONS(88),
    [anon_sym_BANG] = ACTIONS(88),
    [anon_sym_DASH] = ACTIONS(86),
    [anon_sym_EQ_EQ] = ACTIONS(86),
    [anon_sym_BANG_EQ] = ACTIONS(86),
    [anon_sym_GT_EQ] = ACTIONS(86),
    [anon_sym_LT_EQ] = ACTIONS(86),
    [anon_sym_GT] = ACTIONS(88),
    [anon_sym_LT] = ACTIONS(88),
    [anon_sym_STAR] = ACTIONS(86),
    [anon_sym_SLASH] = ACTIONS(86),
    [anon_sym_PLUS] = ACTIONS(86),
    [anon_sym_LPAREN] = ACTIONS(86),
    [anon_sym_RPAREN] = ACTIONS(86),
    [sym_integer] = ACTIONS(86),
    [anon_sym_DQUOTE] = ACTIONS(86),
    [sym_true] = ACTIONS(88),
    [sym_false] = ACTIONS(88),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(27),
    [anon_sym_return] = ACTIONS(29),
    [anon_sym_let] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_EQ_EQ] = ACTIONS(27),
    [anon_sym_BANG_EQ] = ACTIONS(27),
    [anon_sym_GT_EQ] = ACTIONS(90),
    [anon_sym_LT_EQ] = ACTIONS(90),
    [anon_sym_GT] = ACTIONS(92),
    [anon_sym_LT] = ACTIONS(92),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_SLASH] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(27),
    [sym_integer] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [sym_true] = ACTIONS(29),
    [sym_false] = ACTIONS(29),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(94),
    [sym_identifier] = ACTIONS(96),
    [anon_sym_SEMI] = ACTIONS(94),
    [anon_sym_RBRACE] = ACTIONS(94),
    [anon_sym_return] = ACTIONS(96),
    [anon_sym_let] = ACTIONS(96),
    [anon_sym_if] = ACTIONS(96),
    [anon_sym_BANG] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(94),
    [anon_sym_EQ_EQ] = ACTIONS(94),
    [anon_sym_BANG_EQ] = ACTIONS(94),
    [anon_sym_GT_EQ] = ACTIONS(94),
    [anon_sym_LT_EQ] = ACTIONS(94),
    [anon_sym_GT] = ACTIONS(96),
    [anon_sym_LT] = ACTIONS(96),
    [anon_sym_STAR] = ACTIONS(94),
    [anon_sym_SLASH] = ACTIONS(94),
    [anon_sym_PLUS] = ACTIONS(94),
    [anon_sym_LPAREN] = ACTIONS(94),
    [anon_sym_RPAREN] = ACTIONS(94),
    [sym_integer] = ACTIONS(94),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_true] = ACTIONS(96),
    [sym_false] = ACTIONS(96),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(98),
    [sym_identifier] = ACTIONS(100),
    [anon_sym_SEMI] = ACTIONS(98),
    [anon_sym_RBRACE] = ACTIONS(98),
    [anon_sym_return] = ACTIONS(100),
    [anon_sym_let] = ACTIONS(100),
    [anon_sym_if] = ACTIONS(100),
    [anon_sym_BANG] = ACTIONS(100),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_EQ_EQ] = ACTIONS(102),
    [anon_sym_BANG_EQ] = ACTIONS(102),
    [anon_sym_GT_EQ] = ACTIONS(90),
    [anon_sym_LT_EQ] = ACTIONS(90),
    [anon_sym_GT] = ACTIONS(92),
    [anon_sym_LT] = ACTIONS(92),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_SLASH] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(98),
    [sym_integer] = ACTIONS(98),
    [anon_sym_DQUOTE] = ACTIONS(98),
    [sym_true] = ACTIONS(100),
    [sym_false] = ACTIONS(100),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(104),
    [sym_identifier] = ACTIONS(106),
    [anon_sym_SEMI] = ACTIONS(104),
    [anon_sym_RBRACE] = ACTIONS(104),
    [anon_sym_return] = ACTIONS(106),
    [anon_sym_let] = ACTIONS(106),
    [anon_sym_if] = ACTIONS(106),
    [anon_sym_BANG] = ACTIONS(106),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_EQ_EQ] = ACTIONS(102),
    [anon_sym_BANG_EQ] = ACTIONS(102),
    [anon_sym_GT_EQ] = ACTIONS(90),
    [anon_sym_LT_EQ] = ACTIONS(90),
    [anon_sym_GT] = ACTIONS(92),
    [anon_sym_LT] = ACTIONS(92),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_SLASH] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(104),
    [sym_integer] = ACTIONS(104),
    [anon_sym_DQUOTE] = ACTIONS(104),
    [sym_true] = ACTIONS(106),
    [sym_false] = ACTIONS(106),
  },
  [17] = {
    [sym__statements] = STATE(6),
    [sym_expression_statement] = STATE(31),
    [sym_return_statement] = STATE(31),
    [sym_assignment] = STATE(31),
    [sym__expression] = STATE(20),
    [sym_if_expression] = STATE(20),
    [sym_prefix_expression] = STATE(20),
    [sym_infix_expression] = STATE(20),
    [sym_grouped_expression] = STATE(20),
    [sym_string] = STATE(20),
    [aux_sym_program_repeat1] = STATE(6),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(108),
    [anon_sym_return] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_integer] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [sym_true] = ACTIONS(21),
    [sym_false] = ACTIONS(21),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(110),
    [sym_identifier] = ACTIONS(112),
    [anon_sym_SEMI] = ACTIONS(110),
    [anon_sym_RBRACE] = ACTIONS(110),
    [anon_sym_return] = ACTIONS(112),
    [anon_sym_let] = ACTIONS(112),
    [anon_sym_if] = ACTIONS(112),
    [anon_sym_BANG] = ACTIONS(112),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_EQ_EQ] = ACTIONS(102),
    [anon_sym_BANG_EQ] = ACTIONS(102),
    [anon_sym_GT_EQ] = ACTIONS(90),
    [anon_sym_LT_EQ] = ACTIONS(90),
    [anon_sym_GT] = ACTIONS(92),
    [anon_sym_LT] = ACTIONS(92),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_SLASH] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(110),
    [sym_integer] = ACTIONS(110),
    [anon_sym_DQUOTE] = ACTIONS(110),
    [sym_true] = ACTIONS(112),
    [sym_false] = ACTIONS(112),
  },
  [19] = {
    [sym__statements] = STATE(6),
    [sym_expression_statement] = STATE(31),
    [sym_return_statement] = STATE(31),
    [sym_assignment] = STATE(31),
    [sym__expression] = STATE(20),
    [sym_if_expression] = STATE(20),
    [sym_prefix_expression] = STATE(20),
    [sym_infix_expression] = STATE(20),
    [sym_grouped_expression] = STATE(20),
    [sym_string] = STATE(20),
    [aux_sym_program_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(114),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_return] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_integer] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [sym_true] = ACTIONS(21),
    [sym_false] = ACTIONS(21),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(116),
    [sym_identifier] = ACTIONS(118),
    [anon_sym_SEMI] = ACTIONS(116),
    [anon_sym_RBRACE] = ACTIONS(116),
    [anon_sym_return] = ACTIONS(118),
    [anon_sym_let] = ACTIONS(118),
    [anon_sym_if] = ACTIONS(118),
    [anon_sym_BANG] = ACTIONS(118),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_EQ_EQ] = ACTIONS(102),
    [anon_sym_BANG_EQ] = ACTIONS(102),
    [anon_sym_GT_EQ] = ACTIONS(90),
    [anon_sym_LT_EQ] = ACTIONS(90),
    [anon_sym_GT] = ACTIONS(92),
    [anon_sym_LT] = ACTIONS(92),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_SLASH] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(116),
    [sym_integer] = ACTIONS(116),
    [anon_sym_DQUOTE] = ACTIONS(116),
    [sym_true] = ACTIONS(118),
    [sym_false] = ACTIONS(118),
  },
  [21] = {
    [sym__statements] = STATE(17),
    [sym_expression_statement] = STATE(31),
    [sym_return_statement] = STATE(31),
    [sym_assignment] = STATE(31),
    [sym__expression] = STATE(20),
    [sym_if_expression] = STATE(20),
    [sym_prefix_expression] = STATE(20),
    [sym_infix_expression] = STATE(20),
    [sym_grouped_expression] = STATE(20),
    [sym_string] = STATE(20),
    [aux_sym_program_repeat1] = STATE(17),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(120),
    [anon_sym_return] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_integer] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [sym_true] = ACTIONS(21),
    [sym_false] = ACTIONS(21),
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
    ACTIONS(128), 1,
      sym_integer,
    ACTIONS(13), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(126), 2,
      anon_sym_return,
      anon_sym_let,
    ACTIONS(122), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(124), 3,
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
  [39] = 7,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(132), 1,
      sym_integer,
    ACTIONS(13), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(130), 3,
      sym_identifier,
      sym_true,
      sym_false,
    STATE(16), 6,
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
    ACTIONS(136), 1,
      sym_integer,
    ACTIONS(13), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(134), 3,
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
  [99] = 7,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 1,
      sym_integer,
    ACTIONS(13), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(138), 3,
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
  [129] = 7,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(144), 1,
      sym_integer,
    ACTIONS(13), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(142), 3,
      sym_identifier,
      sym_true,
      sym_false,
    STATE(4), 6,
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
    ACTIONS(148), 1,
      sym_integer,
    ACTIONS(13), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(146), 3,
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
  [189] = 7,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(152), 1,
      sym_integer,
    ACTIONS(13), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(150), 3,
      sym_identifier,
      sym_true,
      sym_false,
    STATE(33), 6,
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
    ACTIONS(156), 1,
      sym_integer,
    ACTIONS(13), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(154), 3,
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
  [249] = 7,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(160), 1,
      sym_integer,
    ACTIONS(13), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(158), 3,
      sym_identifier,
      sym_true,
      sym_false,
    STATE(14), 6,
      sym__expression,
      sym_if_expression,
      sym_prefix_expression,
      sym_infix_expression,
      sym_grouped_expression,
      sym_string,
  [279] = 3,
    ACTIONS(166), 1,
      anon_sym_SEMI,
    ACTIONS(164), 6,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      sym_identifier,
      sym_true,
      sym_false,
    ACTIONS(162), 7,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_LPAREN,
      sym_integer,
      anon_sym_DQUOTE,
  [300] = 2,
    ACTIONS(170), 6,
      anon_sym_return,
      anon_sym_let,
      anon_sym_if,
      sym_identifier,
      sym_true,
      sym_false,
    ACTIONS(168), 7,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_LPAREN,
      sym_integer,
      anon_sym_DQUOTE,
  [318] = 6,
    ACTIONS(172), 1,
      anon_sym_RPAREN,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(33), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(90), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(92), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(102), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [342] = 3,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    ACTIONS(176), 1,
      aux_sym_string_token1,
    STATE(34), 1,
      aux_sym_string_repeat1,
  [352] = 3,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      aux_sym_string_token1,
    STATE(34), 1,
      aux_sym_string_repeat1,
  [362] = 3,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    ACTIONS(185), 1,
      aux_sym_string_token1,
    STATE(35), 1,
      aux_sym_string_repeat1,
  [372] = 2,
    ACTIONS(187), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym_block_statement,
  [379] = 2,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    STATE(37), 1,
      sym_grouped_expression,
  [386] = 1,
    ACTIONS(189), 1,
      sym_identifier,
  [390] = 1,
    ACTIONS(191), 1,
      anon_sym_EQ,
  [394] = 1,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(22)] = 0,
  [SMALL_STATE(23)] = 39,
  [SMALL_STATE(24)] = 69,
  [SMALL_STATE(25)] = 99,
  [SMALL_STATE(26)] = 129,
  [SMALL_STATE(27)] = 159,
  [SMALL_STATE(28)] = 189,
  [SMALL_STATE(29)] = 219,
  [SMALL_STATE(30)] = 249,
  [SMALL_STATE(31)] = 279,
  [SMALL_STATE(32)] = 300,
  [SMALL_STATE(33)] = 318,
  [SMALL_STATE(34)] = 342,
  [SMALL_STATE(35)] = 352,
  [SMALL_STATE(36)] = 362,
  [SMALL_STATE(37)] = 372,
  [SMALL_STATE(38)] = 379,
  [SMALL_STATE(39)] = 386,
  [SMALL_STATE(40)] = 390,
  [SMALL_STATE(41)] = 394,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grouped_expression, 3),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grouped_expression, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix_expression, 3, .production_id = 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix_expression, 3, .production_id = 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 3),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(22),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(39),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(38),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(30),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(28),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(20),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(36),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(20),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 3),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_expression, 2, .production_id = 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix_expression, 2, .production_id = 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statements, 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statements, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statements, 2),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statements, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(34),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [193] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
