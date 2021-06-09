module.exports = grammar({
  name: 'coremake',

  extras: $ => [/\s/, $.comment],

  rules: {
    source_file: $ => repeat(
      $.definition
    ),

    definition: $ => seq(
      $.definition_type,
      $.target,
      $.block,
    ),

    definition_type: $ => choice(
      'workspace',
      'group',
      'con',
      'exe',
      'lib',
      'dll',
    ),

    block: $ => seq(
      '{',
      repeat($._statement),
      '}',
    ),

    _statement: $ => choice(
      $.use_statement,
      $.file_statement,
    ),

    use_statement: $ => seq(
      'use',
      $.target,
    ),

    file_statement: $ => seq(
      choice(
        'source',
        'header'
      ),
      $.file_path,
    ),

    file_path: $ => /[a-z\/]+\.[a-z]+/,

    target: $ => /[a-z]+/,

    identifier: $ => /[a-z]+/,

    comment: $ => token(seq(
      '//', /.*/
    )),
  }
});
