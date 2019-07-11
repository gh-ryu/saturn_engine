module Saten
=begin
  def Saten.printg(str)
    raw = false
    str = str.to_s
    str.each_char do |c|
      puts c
    end
  end
=end
  def Saten.set_text(id, str, x, y)
    # creates glyph array representation of str
    # id is glyph array to set, nil to create new array
    # x, y top left position of glyph 0 on screen
    if id.nil?
      Text.create(nil)
    else
      # no use for now. might consider later if there are no better options to
      # display numerical variables
      # the idea is to change an existing text object to a new set of glyphs
      Text.free(nil)
    end
    str = str.to_s
    str.each_char do |c|
      puts c
    end
  end
end
