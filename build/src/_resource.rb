class Resource

  RESOURCE_DIR    = "data/mrb/resource/"
  RESOURCE_HEADER = "include/saturn_engine/config/build/resource.h"

  PREFIX    = Config::RESOURCE_MACRO
  MACRO     = "#define #{PREFIX}(x) x"

  MACRO_IMG = "#define #{PREFIX}SPR(x) saten_resource_img(x)"
  MACRO_SFX = "#define #{PREFIX}SFX(x) saten_resource_sfx(x)"
  MACRO_BGM = "#define #{PREFIX}BGM(x) saten_resource_bgm(x)"
  MACRO_TEX = "#define #{PREFIX}TEX(x) saten_resource_text(x)"

  def initialize
    @cnt = Hash.new
    header = Util.fopen(RESOURCE_HEADER, 'w')
    header.puts "#ifndef SATURN_ENGINE_CONFIG_BUILD_RESOURCE"
    header.puts "#define SATURN_ENGINE_CONFIG_BUILD_RESOURCE"
    header.puts MACRO

    # Scan each resource load file
    Dir.foreach(RESOURCE_DIR) do |x| 
      @scene    = nil
      @text_dir = nil
      path = RESOURCE_DIR + x
      next if File.directory?(path)
      next unless File.fnmatch('*.rb', x)
      puts "Scanning #{path}"
      file = Util.fopen(path, 'r')
      file.each_line do |line |
        # Skip comments
        next if line.begins_with?('#')
        # Check for scene identifier
        if line.include?("Saten::Scene::")
          m = line.match(/(Saten::Scene::[A-Z_0-9]*)/)
          #p "#{m[0]}"
          #@scene_id = eval("#{m[0]}")
          @scene = m[0].sub("Saten::Scene::", "")
          unless @cnt.has_key?(@scene)
            @cnt[@scene] = Hash.new
            @cnt[@scene][:img] = 0
            @cnt[@scene][:sfx] = 0
            @cnt[@scene][:bgm] = 0
            @cnt[@scene][:tex] = 0
          end
        end
        if line.include?("Resource::Text.dir")
          a = line.split('"') if line.include?('"')
          a = line.split("'") if line.include?("'")
          @text_dir = a[1]
          @text_dir << "/" unless @text_dir[-1] == '/'
        end
        unless @scene.nil?
          # Get Resource
          # Sprite
          if line.include?("Saten::Resource::Sprite.load")
            m = line.match(/"(.*)"/)
            name = m[1].gsub("-", "_").gsub("/", "_").upcase
            name = name.slice(0..(name.index('.'))-1)
            #header.puts "#{PREFIX}SPRITE_#{@scene}_#{name}" \
            header.puts "#define SPRITE_#{@scene}_#{name}" \
              " saten_resource_sprite(#{Config::SCENE_MANAGER}." \
              "#{@scene.swapcase},#{@cnt[@scene][:img]})"
            @cnt[@scene][:img] += 1
          end
          # SFX
          if line.include?("Saten::Resource::SoundEffect.load")
            m = line.match(/"(.*)"/)
            name = m[1].gsub("-", "_").gsub("/", "_").upcase
            name = name.slice(0..(name.index('.'))-1)
            #header.puts "#{PREFIX}SFX_#{@scene}_#{name}" \
            header.puts "#define SFX_#{@scene}_#{name}" \
              " saten_resource_sfx(#{Config::SCENE_MANAGER}." \
              "#{@scene.swapcase},#{@cnt[@scene][:sfx]})"
            @cnt[@scene][:sfx] += 1
          end
          # BGM
          if line.include?("Saten::Resource::BackgroundMusic.load")
            m = line.match(/"(.*)"/)
            name = m[1].gsub("-", "_").gsub("/", "_").upcase
            name = name.slice(0..(name.index('.'))-1)
            #header.puts "#{PREFIX}BGM_#{@scene}_#{name}" \
            header.puts "#define BGM_#{@scene}_#{name}" \
              " saten_resource_bgm(#{Config::SCENE_MANAGER}." \
              "#{@scene.swapcase},#{@cnt[@scene][:bgm]})"
            @cnt[@scene][:bgm] += 1
          end
          # Text
          if line.include?("Saten::Resource::Text.load")
            m = line.match(/"(.*)"/)
            name = m[1].gsub("-", "_").gsub("/", "_")
            fn = @text_dir + name
            name = name.slice(0..(name.index('.'))-1).upcase
            name << "_"
            tfile = Util.fopen(fn, 'r')
            tfile.each_line do |tline|
              if tline.include?("Resource::Text.from_doc")
                a = tline.split('"') if tline.include?('"')
                a = tline.split("'") if tline.include?("'")
                name2 = a[1].upcase
                header.puts "#define TEXT_#{@scene}_#{name+name2}" \
                  " saten_resource_text(#{Config::SCENE_MANAGER}." \
                  "#{@scene.swapcase},#{@cnt[@scene][:tex]})"
                @cnt[@scene][:tex] += 1
              end
            end
            Util.fclose(tfile)
          end
          # Write Resource
        end
      end
      Util.fclose(file)
    end


    header.puts "#endif /* SATURN_ENGINE_CONFIG_BUILD_RESOURCE */"
    Util.fclose(header)
  end

end
