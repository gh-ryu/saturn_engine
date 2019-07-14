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

  class Text
    @@color = 0
    def Text.set(id, str, x, y)
      # creates glyph array representation of str
      # id is glyph array to set, nil to create new array
      # x, y top left position of glyph 0 on screen
      check = 0
      if id.nil?
        check = Text.create()
        if check == 1
          # failed to allocate memory for new text object
        end
      else
        # no use for now. might consider later if there are no better options to
        # display numerical variables
        # the idea is to change an existing text object to a new set of glyphs
        Text.free()
      end
      # don't append glyphs to nonexistant text...
      if check == 0
        cnt = 0
        l = 0 # current line
        str = str.to_s
        str.each_char do |c|
          if c == "\\" && str[cnt+1] == "["
            # meta information and not a character to be processed
            #TODO process meta information
          else
            if c == "\n"
              l += 1
            else
              Text.append_glyph(@@charmap[:"#{c}"][0], @@color,
                                @@charmap[:"#{c}"][1], x, y, l)
            end
          end
          cnt += 1
        end
      end
    end
  end

end
