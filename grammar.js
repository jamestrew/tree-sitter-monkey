module.exports = grammar({
  name: "monkey",

  word: ($) => $.identifier,

  rules: {
    program: ($) => repeat($._statements),

    _statements: ($) =>
      choice(
        $.return_statement,
        $.expression_statement,
        $.let_statement
        // TODO: others
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

    return_statement: ($) => seq("return", optional($._expression), ";"),

    let_statement: ($) => seq("let", $.identifier, "=", $._expression, ";"),

    _expression: ($) =>
      choice(
        $.identifier,
        $.integer,
        $.string,
        $.true,
        $.false
        // TODO: other kinds of expressions
      ),

    identifier: ($) => /[a-z_]+/, // TODO
    integer: ($) => /\d+/,
    string: ($) => seq('"', repeat(/[^\"]/), '"'),
    true: ($) => "true",
    false: ($) => "false",
  },
});
