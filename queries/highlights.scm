(definition_type) @type
(string_literal) @string
(identifier_expression) @constant
(identifier) @variable
(file_path) @string
(comment) @comment
(name) @attribute

[
  "use"
  "source"
  "header"
] @function.builtin

[
  "if"
  "endif"
] @conditional

[
  "workspace"
  "con"
  "exe"
  "lib"
  "dll"
] @keyword

[
  "!"
  "&&"
  "||"
] @operator

["{" "}" "(" ")"] @punctuation.bracket

"#include" @include
