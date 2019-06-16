module Saten
  def Saten.printg(str)
    raw = false
    str = str.to_s
    str.each_char do |c|
      puts c
    end
  end
end
