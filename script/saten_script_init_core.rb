saten_mrb_glyph_init(5) # number of glyph sets
# ID | Filename | Number of glyphs | Number of colors |
# Glyph width | Glyph Height | Animated set?
saten_mrb_load_glyph_file(0, "saten_glyph_symbol.png", 43, 16, 16, 16, false)
saten_mrb_load_glyph_file(1, "saten_glyph_latin.png", 53, 16, 16, 16, false)
saten_mrb_load_glyph_file(2, "saten_glyph_hiragana.png", 80, 16, 16, 16, false)
# Icons and animated icons have to be loaded with 0 colors
saten_mrb_load_glyph_file(3, "saten_glyph_icon.png", 5, 0, 16, 16, false)
saten_mrb_load_glyph_file(4, "saten_glyph_anime.png", 3, 0, 16, 16, true)


#Saten.printg("test0")
#Saten::Text.set(nil, "my string\"", 0, 0)
#Saten::Text.set(nil, 2368572305, 0, 0)
