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

    prefix_expression: ($) => prec(4, seq(choice("!", "-"), $._expression)),
    infix_expression: ($) => choice(
      prec.left(3, seq($._expression, "==", $._expression)),
      prec.left(3, seq($._expression, "!=", $._expression)),
      prec.left(3, seq($._expression, ">=", $._expression)),
      prec.left(3, seq($._expression, "<=", $._expression)),
      prec.left(3, seq($._expression, ">", $._expression)),
      prec.left(3, seq($._expression, "<", $._expression)),
      prec.left(2, seq($._expression, "*", $._expression)),
      prec.left(2, seq($._expression, "/", $._expression)),
      prec.left(1, seq($._expression, "+", $._expression)),
      prec.left(1, seq($._expression, "-", $._expression)),
    ),


    identifier: () => /[a-z_]+/, // TODO
    integer: () => /\d+/,
    string: () => seq('"', repeat(/[^\"]/), '"'),
    true: () => "true",
    false: () => "false",
  },
});
