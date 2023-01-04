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
    $.entity,
    '<![CDATA[',
    ']]>',
    $.raw_text,
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

    _node: $ => choice(
      $.prolog,
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
    
    cdata: $ => seq(
      alias('<![CDATA[', $.cdata_start),
      optional($.raw_text),
      alias(']]>', $.cdata_end)
    ),

    text: $ => /[^<>&\s]([^<>&]*[^<>&\s])?/
  }
});
