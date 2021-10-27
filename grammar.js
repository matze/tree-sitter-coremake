module.exports = grammar({
  name: 'coremake',

  extras: $ => [/\s/, $.comment],

  rules: {
    source_file: $ => repeat(
      choice(
        $.variable,
        $.include,
        $.definition,
      ),
    ),

    variable: $ => seq(
      $.name,
      $.value,
    ),

    include: $ => seq(
      '#include',
      $.string_literal,
    ),

    definition: $ => seq(
      $.definition_type,
      optional($._conditional),
      $.identifier,
      $.block,
    ),

    definition_type: $ => choice(
      'workspace',
      'group',
      'con',
      'exe',
      'lib',
      'dll',
      'test',
    ),

    block: $ => seq(
      '{',
      repeat(
        choice(
          $.variable,
          $._statement,
        ),
      ),
      '}',
    ),

    _conditional: $ => seq(
      '(',
      $._expression,
      ')',
    ),

    _expression: $ => choice(
      $.identifier_expression,
      $.unary_expression,
      $.binary_expression,
      $.parenthesized_expression,
    ),

    unary_expression: $ => prec(3,
      seq('!', $._expression)
    ),

    binary_expression: $ => choice(
     prec.left(2, seq($._expression, '&&', $._expression)),
     prec.left(1, seq($._expression, '||', $._expression)),
    ),

    comma_expression: $ => seq(
      $._expression,
      ',',
      choice($._expression, $.comma_expression)
    ),

    parenthesized_expression: $ => seq(
      '(',
      choice($._expression, $.comma_expression),
      ')',
    ),

    _statement: $ => choice(
      $.use_statement,
      $.file_statement,
      $.if_statement,
    ),

    use_statement: $ => seq(
      choice(
        'use',
        'dep',
      ),
      optional($._conditional),
      $.identifier,
    ),

    file_statement: $ => seq(
      choice(
        'source',
        'header',
        'include',
      ),
      optional($._conditional),
      $.file_path,
    ),

    if_statement: $ => seq(
      'if', $._expression,
      repeat(
        $._statement,
      ),
      'endif',
    ),

    string_literal: $ => seq(
      '"',
      /[^\\"\n"]+/,
      '"',
    ),

    identifier: $ => seq(
      /[A-Za-z_\-0-9]+/,
    ),

    identifier_expression: $ => seq(
      /[A-Z_\-0-9]+/,
    ),

    name: $ => /[A-Za-z_]+/,

    value: $ => /[A-Za-z_0-9\.]+/,

    file_path: $ => /[A-Za-z\/_-]+\.[a-z]+/,

    comment: $ => token(seq(
      '//', /.*/
    )),
  }
});
