module.exports = grammar({
  name: "monkey",

  word: ($) => $.identifier,

  rules: {
    program: ($) => repeat($._statements),

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

    _statements: ($) =>
      choice(
        $.return_statement,
        $.expression_statement,
        // TODO: others
      ),

    return_statement: ($) => seq("return", $._expression, ";"),

    _expression: ($) =>
      choice(
        $.identifier,
        $.integer,
        $.true,
        $.false
        // TODO: other kinds of expressions
      ),

    identifier: ($) => /[a-z]+/, // TODO

    integer: ($) => /\d+/, // TODO

    true: ($) => "true",
    false: ($) => "false",
  },
});
