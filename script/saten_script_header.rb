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
      @@color = 0
      # process str = remove meta information
      k = 3
      m = 0
      a = ""
      b = ""
      c2 = ""
      str.each_char do |c|
        if meta == "no"
          if c == "\\" && str[cnt+1] == "C" && str[cnt+2] == "["
            j = cnt+3
            newcol = ""
            until str[j] == "]" do
              newcol += str[j]
              k += 1
              j += 1
            end
            @@color = newcol.to_i
            meta = "color"
          elsif c == "\\" && str[cnt+1] == "G" && str[cnt+2] == "["
            j = cnt+3
            a = ""
            b = ""
            c2 = ""
            until str[j] == ":" do
              a += str[j]
              k += 1
              j += 1
            end
            j += 1 # move to second identifier
            k += 1
            until str[j] == ":" do
              b += str[j]
              k += 1
              j += 1
            end
            j += 1 # move to third identifier
            k += 1
            until str[j] == "]" do
              c2 += str[j]
              k += 1
              j += 1
            end
            meta = "glyph"
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
        elsif meta == "color"
          k -= 1
          if k == 0
            meta = "no"
            k = 3
          end
        elsif meta == "glyph"
          k -= 1
          if k == 0
            meta = "no"
            k = 3
            if c2 == "c" then c2 = @@color end
            Text.append_glyph(@id, a.to_i, b.to_i, c2.to_i, @x, @y, l)
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
