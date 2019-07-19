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
  
  def Saten.test()
    a += 1
    puts a
  end

  class Text
    attr_accessor :cleanstr, :scale, :x, :y, :id
    @@color = 0
    def initialize(str, scale, x, y)
      puts "hi"
      @cleanstr = str
      @scale = scale
      @x = x
      @y = y
      @id = 0
      Text.create(scale, self)
    end
    def set_id(id)
      @id = id
    end
    def set_glyph
      puts "set glyphs for text[#{@id}]"
    end
    def Text.set(scale, str, x, y)
      # creates glyph array representation of str
      # id is glyph array to set, nil to create new array
      # x, y top left position of glyph 0 on screen
      check = 0
      #if id.nil?
        check = Text.create(scale)
        if check == 1
          # failed to allocate memory for new text object
        end
      #else
        # no use for now. might consider later if there are no better options to
        # display numerical variables
        # the idea is to change an existing text object to a new set of glyphs
      #  Text.free()
      #end
      # don't append glyphs to nonexistant text...
      if check == 0
        cnt = 0
        l = 0 # current line
        meta = "no"
        str = str.to_s
        str.each_char do |c|
          #TODO process meta information
          if c == "\\" && str[cnt+1] == "C"
            # meta information to set color
            meta = "color"
          else
            if c == "\n"
              l += 1
            else
              if @@charmap.has_key?(:"#{c}")
                Text.append_glyph(@@charmap[:"#{c}"][0], @@color,
                                  @@charmap[:"#{c}"][1], x, y, l)
              else
                Text.append_glyph(1, @@color, 52, x, y, l)
              end
            end
          end
          cnt += 1
        end
      end
    end
  end

end
