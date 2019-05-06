saten_script_output = String.new
saten_mrbi_charmap = Hash.new
# numbers and symbols
saten_script_charmap_symbols =
  "0123456789 !\"#$%&'()*+,-./:;<=>?@`\\~[]^_|{}"
saten_script_charmap_index = 0
saten_script_charmap_file_index = 0
saten_script_charmap_symbols.each_char do |c|
  if c == "\"" || c == "\\"
    #c.prepend("\\")
  end
  saten_script_output << "saten_mrbi_charmap[:\"#{c}\"] = "+
    "[#{saten_script_charmap_file_index}, #{saten_script_charmap_index}]\n"
  saten_mrbi_charmap[:"#{c}"] =
    [saten_script_charmap_file_index, saten_script_charmap_index]
  saten_script_charmap_index += 1
end

# roman alphabet
saten_script_charmap_symbols =
  "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
# [1,0] is reserved for characters not found in the hash
saten_script_charmap_index = 1
saten_script_charmap_file_index = 1
saten_script_charmap_symbols.each_char do |c|
  if c == "\"" || c == "\\"
    #c.prepend("\\")
  end
  saten_script_output << "saten_mrbi_charmap[:\"#{c}\"] = "+
    "[#{saten_script_charmap_file_index}, #{saten_script_charmap_index}]\n"
  saten_mrbi_charmap[:"#{c}"] =
    [saten_script_charmap_file_index, saten_script_charmap_index]
  saten_script_charmap_index += 1
end

# japanese hiragana
saten_script_charmap_symbols =
  "あいうえおぁぃぅぇぉかきくけこがぎぐげごさしすせそざじずぜぞたちつてと"+
  "だぢづでどっなにぬねのはひふへほばびぶべぼぱぴぷぺぽまみむめもやゆよ"+
  "ゃゅょらりるれろわをん"
saten_script_charmap_index = 0
saten_script_charmap_file_index = 2
saten_script_charmap_symbols.each_char do |c|
  if c == "\"" || c == "\\"
    #c.prepend("\\")
  end
  saten_script_output << "saten_mrbi_charmap[:\"#{c}\"] = "+
    "[#{saten_script_charmap_file_index}, #{saten_script_charmap_index}]\n"
  saten_mrbi_charmap[:"#{c}"] =
    [saten_script_charmap_file_index, saten_script_charmap_index]
  saten_script_charmap_index += 1
end

# japanese katakana
saten_script_charmap_symbols =
  "アイウエオァィゥェォカキクケコガギグゲゴサシスセソザジズゼゾタチツテト"+
  "ダヂヅデドッナニヌネノハヒフヘホバビブベボパピプぺポマミムメモヤユヨ"+
  "ゃゅょラリルレロワヲン"
saten_script_charmap_index = 0
saten_script_charmap_file_index = 2
saten_script_charmap_symbols.each_char do |c|
  if c == "\"" || c == "\\"
    #c.prepend("\\")
  end
  saten_script_output << "saten_mrbi_charmap[:\"#{c}\"] = "+
    "[#{saten_script_charmap_file_index}, #{saten_script_charmap_index}]\n"
  saten_mrbi_charmap[:"#{c}"] =
    [saten_script_charmap_file_index, saten_script_charmap_index]
  saten_script_charmap_index += 1
end

puts saten_script_output
