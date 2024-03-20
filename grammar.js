module.exports = grammar({
  name: 'xml',

  extras: $ => [
    $.comment,
    /\s+/,
  ],

  externals: $ => [
    $._start_tag_name,
    $._end_tag_name,
    $.erroneous_end_tag_name,
    '/>',
    $._implicit_end_tag,
    $.cdata_text,
    $._cdata_end_delimiter,
    $.comment,
  ],

  rules: {
    fragment: $ => repeat($._node),

    prolog: $ => seq(
      '<?',
      'xml',
      /[^>]+/,
      '>'
    ),

    doctype: $ => seq(
      '<!',
      alias($._doctype, 'doctype'),
      /[^>]+/,
      '>'
    ),

    _doctype: $ => /[Dd][Oo][Cc][Tt][Yy][Pp][Ee]/,

    _node: $ => choice(
      $.prolog,
      $.doctype,
      $.entity,
      $.text,
      $.element,
      $.cdata,
      $.erroneous_end_tag
    ),

    element: $ => choice(
      seq(
        $.start_tag,
        repeat($._node),
        choice($.end_tag, $._implicit_end_tag)
      ),
      $.self_closing_tag
    ),

    start_tag: $ => seq(
      '<',
      alias($._start_tag_name, $.tag_name),
      repeat($.attribute),
      '>'
    ),

    self_closing_tag: $ => seq(
      '<',
      alias($._start_tag_name, $.tag_name),
      repeat($.attribute),
      '/>'
    ),

    end_tag: $ => seq(
      '</',
      alias($._end_tag_name, $.tag_name),
      '>'
    ),

    erroneous_end_tag: $ => seq(
      '</',
      $.erroneous_end_tag_name,
      '>'
    ),

    attribute: $ => seq(
      $.attribute_name,
      optional(seq(
        '=',
        $.quoted_attribute_value
      ))
    ),

    attribute_name: $ => /[^<>"'/=\s]+/,

    attribute_value: $ => /[^<>"'=\s]+/,

    quoted_attribute_value: $ => choice(
      seq("'", optional(alias(/[^']+/, $.attribute_value)), "'"),
      seq('"', optional(alias(/[^"]+/, $.attribute_value)), '"')
    ),

    // An entity can be named, numeric (decimal), or numeric (hexadecimal). The
    // longest entity name is 29 characters long, and the XML/HTML specs say that
    // no more will ever be added.
    entity: _ => /&(#([xX][0-9a-fA-F]{1,6}|[0-9]{1,5})|[A-Za-z]{1,30});?/,

    cdata: $ => seq(
      '<![',
      'CDATA',
      '[',
      repeat($.cdata_text),
      alias($._cdata_end_delimiter, ']]>')
    ),

    text: _ => /[^<>&\s]([^<>&]*[^<>&\s])?/
  }
});
