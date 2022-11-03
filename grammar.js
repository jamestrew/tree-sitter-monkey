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

  word: ($) => $.identifier,

  rules: {
    program: ($) => repeat($._statements),

    _statements: ($) =>
      seq(
        choice(
          $.return_statement,
          $.expression_statement,
          $.let_statement
          // TODO: others
        ),
        ";"
      ),

    expression_statement: ($) =>
      choice(
        $._expression
        // TODO: other expressions
      ),

    _definition: ($) =>
      choice(
        $.function_definition
        // TODO: other kinds of definitions
      ),

    function_definition: ($) =>
      seq(
        // TODO: let
        $.identifier,
        "fn",
        // TODO: $.paramater_list,
        $.block
      ),

    block: ($) => seq("{", repeat($._statements), "}"),

    return_statement: ($) => seq("return", optional($._expression)),

    let_statement: ($) => seq("let", $.identifier, "=", $._expression),

    _expression: ($) =>
      choice(
        $.prefix_expression,
        $.infix_expression,
        $.parenthesized_expression,
        $.identifier,
        $.integer,
        $.string,
        $.true,
        $.false
        // TODO: other kinds of expressions
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

    parenthesized_expression: ($) =>
      prec(PREC.call, seq("(", $._expression, ")")),

    identifier: () => /[a-z_]+/, // TODO
    integer: () => /\d+/,
    string: () => seq('"', repeat(/[^\"]/), '"'),
    true: () => "true",
    false: () => "false",
  },
});
