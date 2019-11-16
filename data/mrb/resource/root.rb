# For now load all files at once into Root Scene resources
Saten::Resource.set_scene(Saten::Scene::ROOT)
Saten::Resource::Sprite.dir("data/img")
Saten::Resource::SoundEffect.dir("data/sfx")
Saten::Resource::BackgroundMusic.dir("data/bgm")
Saten::Resource::Text.dir("data/text")

# Scene Root
Saten::Resource::Sprite.load("saturn_engine/logo.png")
Saten::Resource::Sprite.load("saturn_engine/system_menu_arrow.png")
Saten::Resource::SoundEffect.load("demo/accept.wav")
Saten::Resource::SoundEffect.load("demo/cancel.wav")
Saten::Resource::SoundEffect.load("demo/cursor.wav")

# Scene Title
Saten::Resource::Sprite.load("demo/background_title_small.png")

Saten::Resource::Text.load("title.rb")
#require 'data/text/title.rb'

Saten::Resource::BackgroundMusic.load("demo/title.ogg")
Saten::Resource::BackgroundMusic.load("demo/test.wav")
Saten::Resource::BackgroundMusic.load("demo/mod_test.xm")

# Scene MapTest
Saten::Resource::Sprite.load("demo/background0.png")
Saten::Resource::Sprite.load("demo/background1.png")
Saten::Resource::Sprite.load("demo/background2.png")
Saten::Resource::Sprite.load("demo/background-sonic.png")

# Scene Load
#Saten::Resource::Sprite.load("data/img/demo/load_indicator.png")
#Saten::Resource::Text.load("\\C[7]---LOADING---")
