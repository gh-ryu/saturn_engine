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
      @cleanstr = str.to_s
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
      Text.prepare_glyph
      cnt = 0
      l = 0 # current line
      meta = "no"
      str = @cleanstr
      # process str = remove meta information
      str.each_char do |c|
        if c == "//" && str[cnt+1] == "c"
          meta = "color"
        else
          if c == "\n"
            l += 1
          else
            if @@charmap.has_key?(:"#{c}")
              Text.append_glyph(@id, @@charmap[:"#{c}"][0], @@color,
                                @@charmap[:"#{c}"][1], @x, @y, l)
            else
              Text.append_glyph(@id, 1, @@color, 52, @x, @y, l)
            end
          end
        end
        cnt += 1
      end
    end

    def Text.update(id, str, scale, x, y)
      obj = Text.get(id)
      obj.scale = scale
      obj.x = x
      obj.y = y
      if str.nil?
        # only update scale, x, y
        # maybe not necessary?
        Text.reset(id, scale)
      else
        str = str.to_s
        obj.cleanstr = str
        Text.reset(id, scale)
      end
    end
  end

end
