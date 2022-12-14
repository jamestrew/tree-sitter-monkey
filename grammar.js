const PREC = {
  lowest: 0,
  equals: 1,
  lessgreater: 2,
  sum: 3,
  product: 4,
  prefix: 5,
  call: 7,
  index: 8,
};

module.exports = grammar({
  name: "monkey",

  extras: ($) => [$.comment, /\s/],
  word: ($) => $.identifier,

  rules: {
    program: ($) => repeat($._statements),

    _statements: ($) =>
      seq(
        choice(
          $.return_statement,
          $.expression_statement,
          $.assignment
          // TODO: others
        ),
        optional(";")
      ),

    expression_statement: ($) => choice($._expression),

    _parameters: ($) => seq($._expression, repeat(seq(",", $._expression))),

    parameters: ($) => seq("(", optional($._parameters), ")"),
    arguments: ($) => seq("(", optional($._parameters), ")"),
    elements: ($) => seq("[", optional($._parameters), "]"),

    pair: ($) =>
      seq(field("key", $._expression), ":", field("value", $._expression)),

    block_statement: ($) => seq("{", repeat($._statements), "}"),

    return_statement: ($) =>
      prec.right(PREC.lowest, seq("return", optional($._expression))),

    assignment: ($) =>
      seq(
        optional("let"),
        field("left", $.identifier),
        "=",
        field("right", $._expression)
      ),

    _expression: ($) =>
      choice(
        $.if_expression,
        $.prefix_expression,
        $.infix_expression,
        $.grouped_expression,
        $.call,
        $.index_expression,
        $.function_literal,
        $.identifier,
        $.integer,
        $.string,
        $.true,
        $.false,
        $.array,
        $.hash
      ),

    if_expression: ($) =>
      seq(
        "if",
        field("condition", $.grouped_expression),
        field("consequence", $.block_statement),
        optional(seq("else", field("alternative", $.block_statement)))
      ),

    prefix_expression: ($) =>
      prec(
        PREC.prefix,
        seq(
          field("operator", choice("!", "-")),
          field("argument", $._expression)
        )
      ),

    infix_expression: ($) => {
      const operators = [
        [prec.left, "==", PREC.equals],
        [prec.left, "!=", PREC.equals],
        [prec.left, ">=", PREC.lessgreater],
        [prec.left, "<=", PREC.lessgreater],
        [prec.left, ">", PREC.lessgreater],
        [prec.left, "<", PREC.lessgreater],
        [prec.left, "*", PREC.product],
        [prec.left, "/", PREC.product],
        [prec.left, "+", PREC.sum],
        [prec.left, "-", PREC.sum],
      ];
      return choice(
        ...operators.map(([fn, operator, precedence]) =>
          fn(
            precedence,
            seq(
              field("left", $._expression),
              field("operator", operator),
              field("right", $._expression)
            )
          )
        )
      );
    },

    grouped_expression: ($) => prec(PREC.call, seq("(", $._expression, ")")),

    call: ($) =>
      prec(
        PREC.call,
        seq(field("function", $.identifier), field("arguments", $.arguments))
      ),

    index_expression: ($) =>
      prec(
        PREC.call,
        seq(
          field("left", $._expression),
          "[",
          field("index", $._expression),
          "]"
        )
      ),

    function_literal: ($) =>
      seq(
        "fn",
        field("parameters", $.parameters),
        field("body", $.block_statement)
      ),

    identifier: () => /[a-zA-Z_]+/,
    integer: () => /\d+/,
    string: () => seq('"', repeat(/[^\"]/), '"'),
    true: () => "true",
    false: () => "false",

    array: ($) => field("elements", $.elements),

    hash: ($) => seq("{", optional(seq($.pair, repeat(seq(",", $.pair)))), "}"),

    comment: () =>
      token(
        choice(seq("//", /.*/), seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"))
      ),
  },
});
