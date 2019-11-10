class Scene

  # Instance variables
  # @name
  # @id
  
  SCENE_LIST = "build/scene/list.build"
  SCENE_PREBUILD_HEADER = "build/scene/scene.h"
  SCENE_PREBUILD_SOURCE = "build/scene/scene.c"
  SCENE_HELPER_SOURCE = "src/helper/scene.c"
  SCENE_HELPER_PREBUILD = "build/scene/helper.c"
  MAKE_CONFIG = "config.mk"
  SCENE_MANAGER = "include/saturn_engine/config/build/scene.h"
  SCENE_LOAD = "include/saturn_engine/config/build/load.h"
  SCENE_LOADER = "data/mrb/loader/"
  SCENE_MRB_CONF = "data/mrb/saturn_engine/config/scene_id.rb"

  def initialize(name)
    quit unless Util.fcheck(SCENE_LIST)
    @name = name
    check_name
    @name.upcase!
    @name.swapcase!
    if exists? # This also sets the ID
      puts "Scene #{@name} already exists!"
      quit
    end
    add
  end

  private

  def add
    # Add include/scene/@name.h
    unless File.exist?("include/scene/#{@name}.h")
      file = Util.fopen(SCENE_PREBUILD_HEADER, nil)
      text = file.read
      Util.fclose(file)
      text.gsub!('{{up}}', @name.upcase)
      text.gsub!('{{low}}', @name)
      begin
        file = Util.fopen("include/scene/#{@name}.h", 'w')
        file.write(text)
        puts "-- Wrote file 'include/scene/#{@name}.h'"
      rescue
        puts "Failed writing 'include/scene/#{@name}.h'"
      end
      Util.fclose(file)
    else
      puts "-- File 'include/scene/#{@name}.h' already exists."
    end
    # Add src/scene/@name.c
    unless File.exist?("src/scene/#{@name}.c")
      file = Util.fopen(SCENE_PREBUILD_SOURCE, nil)
      text = file.read
      Util.fclose(file)
      text.gsub!('{{low}}', @name)
      begin
        file = Util.fopen("src/scene/#{@name}.c", 'w')
        file.write(text)
        puts "-- Wrote file 'src/scene/#{@name}.c'"
      rescue
        puts "Failed writing 'src/scene/#{@name}.c'"
      end
      Util.fclose(file)
    else
      puts "-- File 'src/scene/#{@name}.c' already exists."
    end
    # Update config.mk
    file = Util.fopen(MAKE_CONFIG, 'a+')
    text = file.read
    str = "OBJ += src/scene/#{@name}.c"
    if text.include?(str)
      puts "-- Make config already includes #{@name}.c"
    else
      file.puts(str) unless text.include?(str)
      puts "-- Added #{@name}.c to make config"
    end
    Util.fclose(file)
    # Update src/helper/scene.c scene_create
    file = Util.fopen(SCENE_HELPER_SOURCE, nil)
    text = file.read
    Util.fclose(file)
    unless text.include?("SATEN_BUILDER_SCENE_#{@name.upcase}")
      text.sub!("// SATEN_BUILDER_SCENE_NEXT_INCLUDE",
                "#include \"scene/#{@name}.h\"" \
                "\n// SATEN_BUILDER_SCENE_NEXT_INCLUDE")

      file = Util.fopen(SCENE_HELPER_PREBUILD, nil)
      text2 = file.read
      Util.fclose(file)
      text2.gsub!('{{up}}', @name.upcase)
      text2.gsub!('{{low}}', @name)
      text2.sub!('{{id}}', @id.to_s)
      text.sub!("// SATEN_BUILDER_SCENE_NEXT_SRC", text2)
      text.rstrip!
      file = Util.fopen(SCENE_HELPER_SOURCE, 'w')
      file.write(text)
      Util.fclose(file)
      puts "-- Updated src/helper/scene.c"
    else
      puts "-- 'src/helper/scene.c' already appears to support scene #{@name}"
    end
    # Update include/saturn_engine/config/build/scene.h
    if File.exist?(SCENE_MANAGER)
      file = Util.fopen(SCENE_MANAGER, 'r')
      text = file.read
      Util.fclose(file)
      unless text.include?("// SATEN_BUILDER_SCENE_NEXT")
        puts "-- Fatal. '#{SCENE_MANAGER} misses placeholder line'"
      end
      unless text.include?("saten_scene_info #{@name};")
        text.sub!("// SATEN_BUILDER_SCENE_NEXT",
                  "saten_scene_info #{@name};\n\t// SATEN_BUILDER_SCENE_NEXT")
        file = Util.fopen(SCENE_MANAGER, 'w')
        file.write(text)
        Util.fclose(file)
        puts "-- Added scene to '#{SCENE_MANAGER}'"
      else
        puts "-- Scene Manager already includes #{@name}"
      end
    else
      puts "-- Fatal. Missing '#{SCENE_MANAGER}'"
    end
    # Add data/mrb/loader/@name.rb
    unless File.exist?(SCENE_LOADER + @name + '.rb')
      file = Util.fopen("build/scene/loader.rb", 'r')
      text = file.read
      Util.fclose(file)
      text.sub!("{{up}}", @name.upcase)
      file = Util.fopen(SCENE_LOADER + @name + '.rb', 'w')
      file.write(text)
      Util.fclose(file)
      puts "-- Added file '#{SCENE_LOADER + @name + '.rb'}'"
    else
      puts "-- File '#{SCENE_LOADER + @name + '.rb'}' already exists."
    end
    # Update include/saturn_engine/config/build/load.h (filename to above)
    if File.exist?(SCENE_LOAD)
      file = Util.fopen(SCENE_LOAD, 'r')
      text = file.read
      Util.fclose(file)
      unless text.include?("// SATEN_BUILDER_SCENE_NEXT")
        puts "-- Fatal. '#{SCENE_LOAD} misses placeholder line'"
      end
      unless text.include?("#define SATEN_LOAD_#{@name.upcase}")
        text.sub!("// SATEN_BUILDER_SCENE_NEXT",
                  "#define SATEN_LOAD_#{@name.upcase}" \
                  " \"#{SCENE_LOADER + @name + '.rb'}\"" \
                  "\n// SATEN_BUILDER_SCENE_NEXT")
        file = Util.fopen(SCENE_LOAD, 'w')
        file.write(text)
        Util.fclose(file)
        puts "-- Added scene to '#{SCENE_LOAD}'"
      else
        puts "-- #{SCENE_LOAD} already includes #{@name}"
      end
    else
      puts "-- Fatal. Missing '#{SCENE_LOAD}'"
    end
    # Add mrb scene constant
    file = Util.fopen(SCENE_MRB_CONF, 'r')
    text = file.read
    Util.fclose(file)
    unless text.include?("Saten::Scene::#{@name.upcase}")
      file = Util.fopen(SCENE_MRB_CONF, 'a')
      file.puts("Saten::Scene::#{@name.upcase} = #{@id}")
      Util.fclose(file)
      puts "-- Updated '#{SCENE_MRB_CONF}'"
    else
      puts "-- '#{SCENE_MRB_CONF}' already includes this scene."
    end
    # Add scene to list
    file = Util.fopen(SCENE_LIST, 'a')
    file.puts @name
    Util.fclose(file)
    puts "-- Added #{@name} to #{SCENE_LIST} given id #{@id}"
    # That's it
  end

  def exists?
    ret = false
    file = Util.fopen(SCENE_LIST, nil)
    cnt = 0
    file.each_line do |line|
      unless line[0] == '#'
        str = line.strip
        if @name == str
          ret = true
          break
        end
        cnt += 1
      end
    end
    @id = cnt
    Util.fclose(file)
    ret
  end

  def check_name
    name_error = "--scene requires argument:\n" \
      "  Argument must only consist of alphanumerics and may" \
      " contain underscores. Must begin with a letter, may end in" \
      " an alphanumeric"
    if @name.nil?
      puts name_error
      quit
    end
    unless @name.is_a?(String)
      puts name_error
      quit
    end
    unless @name.match(/[a-zA-Z0-9_]/)
      puts name_error
      quit
    end
    unless @name[0].match(/[a-zA-Z]/)
      puts name_error
      quit
    end
    if @name[-1] == '_'
      puts name_error
      quit
    end
    @name = +@name # unfreeze string
  end


end
