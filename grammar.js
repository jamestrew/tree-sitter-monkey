const PREC = {
  plus: 1,
  times: 2,
  boolean: 3,
  prefix: 4,
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
        [prec.left, "==", PREC.boolean],
        [prec.left, "!=", PREC.boolean],
        [prec.left, ">=", PREC.boolean],
        [prec.left, "<=", PREC.boolean],
        [prec.left, ">", PREC.boolean],
        [prec.left, "<", PREC.boolean],
        [prec.left, "*", PREC.times],
        [prec.left, "/", PREC.times],
        [prec.left, "+", PREC.plus],
        [prec.left, "-", PREC.plus],
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

    identifier: () => /[a-z_]+/, // TODO
    integer: () => /\d+/,
    string: () => seq('"', repeat(/[^\"]/), '"'),
    true: () => "true",
    false: () => "false",
  },
});
