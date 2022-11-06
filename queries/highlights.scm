; Literals

[
  (true)
  (false)
] @constant.builtin

[
  (integer)
] @number

(string) @string

((call
  function: (identifier) @function.builtin)
  (#match?
    @function.builtin
      "^puts|len|first|last|rest|push$"))

(call
  function: (identifier) @function)

(identifier) @variable


[
  "="
  "=="
  "!="
  ">="
  "<="
  ">"
  "<"
  "*"
  "/"
  "+"
  "-"
  "!"
] @operator

[
  "let"
  "fn"
  "return"
  "if"
  "else"
] @keyword

