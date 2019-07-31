module Saten

  module Resource
    module Img
      def self.load(fn, id)
        puts "load img #{fn}"
      end
    end
    module SFX
      def SFX.load(fn, id)
      end
    end
    module BGM
      def BGM.load(fn, id)
      end
    end
    module TEXT
      def TEXT.load(fn, id)
      end
    end
  end


end
