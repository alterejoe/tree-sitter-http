/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "customhttp",

  rules: {
    requests: ($) =>
      repeat(
        choice(
          seq($.request, optional($.delimiter)),
          seq($.response, optional($.exiteddelimeter)),
        ),
      ),
    request: ($) =>
      seq(
        optional($.method),
        $.url,
        optional($.whitespace),
        repeat($.header),
        optional($.body),
        optional($.whitespace),
      ),
    // request: ($) => seq($.method, $.url),

    response: ($) =>
      seq($.status_line, repeat($.header), $.separator, $.response_body),

    method: ($) =>
      choice(
        "GET",
        "POST",
        "PUT",
        "DELETE",
        "HEAD",
        "OPTIONS",
        "PATCH",
        "TRACE",
        "get",
        "post",
        "put",
        "delete",
        "head",
        "options",
        "patch",
        "trace",
      ),
    url: ($) => token(/https?:\/\/[^\s]+/),
    outputbinary: ($) => token(/--output -/),

    status_line: ($) =>
      seq(
        field("http_version", $.http_version),
        field("status_code", $.status_code),
        field("status_message", $.status_message),
      ),

    http_version: ($) => token(/HTTP\/\d\.\d/), // Matches HTTP version, e.g., HTTP/1.1
    status_code: ($) => token(/ \d{3} /), // Matches 3-digit status code, e.g., 200
    status_message: ($) => token(/[A-Za-z ]+/),
    // headers: ($) => repeat($.header),
    header: ($) => seq($.header_name, ": ", $.header_value),
    header_name: ($) => token(/[a-zA-Z-]+/),
    header_value: ($) => token(/[^\n]+/),

    body: ($) =>
      seq(
        "{",
        optional($.content), // Optional content inside the braces
        "}",
      ),

    // Content allows anything except closing `}`
    content: ($) => /[^}]+/,
    delimiter: ($) => token(/###/),
    whitespace: ($) => token(/[\s\t\n\r]+/),

    separator: ($) => token(/\r?\n\r?\n/),
    response_body: ($) => token(/.+/),
    // Process exited with code:
    exiteddelimeter: ($) => token(/Process exited with code: \d+/),
  },
});
