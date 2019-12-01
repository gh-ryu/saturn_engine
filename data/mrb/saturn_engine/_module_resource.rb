module Saten
  module Resource

    # Module variables
    #
    # @table | Hash   | Hold keys to resources indexed by file name
    # @dir   | String | Directory path to resource files
    # @ftable | String | Name of file that holds table information
    #

    def Resource.init
      @table = Hash.new
      @ftable = ""
    end

    def Resource.clear_table
      @table.clear
    end

    def Resource.read_table
      # Parse file that holds resource IDs
      file  = File.open(@ftable, 'r')
      file.each_line do |line|
        a = line.split("=")
        @table[a[0]] = a[1].to_i
      end
      file.close
    end

    def Resource.get_id(str)
      @table[str]
    end

    def Resource.table_size
      @table.size
    end

    def Resource.set_dir(str)
      @dir = str
      @dir << '/' unless @dir[-1] == '/'
      @dir = @dir[1..-1] if @dir[0] == '/'
    end

    def Resource.set_table(str)
      @ftable = str
    end

    def Resource.get_path(dir, file)
      dir << '/' if dir[-1] != '/' && file[0] != '/'
      file = file.slice(1..-1) if dir[-1] == '/' && file[0] == '/'
      dir + file
    end

    # DEBUG
    def Resource.ptable
      p @table
    end

    module Sprite

      @type = 0

      def Sprite.load(str)
        str = Saten::Resource.get_path(@dir, str)
        Saten::Resource.load(str, @type)
      end

      def Sprite.dir(str)
        @dir = str
      end

    end

    module SoundEffect

      @type = 1

      def SoundEffect.load(str)
        str = Saten::Resource.get_path(@dir, str)
        Saten::Resource.load(str, @type)
      end

      def SoundEffect.dir(str)
        @dir = str
      end

    end

    module BackgroundMusic

      @type = 2

      def BackgroundMusic.load(str)
        str = Saten::Resource.get_path(@dir, str)
        Saten::Resource.load(str, @type)
      end

      def BackgroundMusic.dir(str)
        @dir = str
      end

    end

    module Text

      @type = 3

      def Text.load(str)
        str = Saten::Resource.get_path(@dir, str)
        Saten::Resource.load(str, @type)
      end

      def Text.dir(str)
        @dir = str
      end

    end



  end
end
