module Util
  # Check if file is readable and writable
  def Util.fcheck(path)
    unless File.exist?(path)
      puts "File #{path} not found."
      return false
    end
    if File.directory?(path)
      puts "#{path} is a directory..."
      return false
    end
    unless File.readable?(path)
      puts "File #{path} can't be read."
      return false
    end
    unless File.writable?(path)
      puts "File #{path} can't be written to."
      return false
    end
    return true
  end

  def Util.fopen(path, mod)
    begin
      if mod
        File.open(path, mod)
      else
        File.open(path)
      end
    rescue StandardError
      puts "Failed to open #{path}"
      quit
    end
  end

  def Util.fclose(file)
    begin
      file.close
    rescue StandardError
      puts "Failed to close a file"
      quit
    end
  end
end
