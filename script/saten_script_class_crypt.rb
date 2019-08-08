# mruby part of crypto library for handling save data.
# Do not use with sensitive data.

module Saten

  class Crypt
    attr_accessor :symkey
    def initialize(symkey)
      @symkey = symkey
    end
  end
end
