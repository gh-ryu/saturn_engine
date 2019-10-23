# Scene Root
Saten::Resource::Sprite.load("logo.png", 0)
Saten::Resource::Sprite.load("demo_assets/system_menu_arrow.png", 0)
Saten::Resource::SoundEffect.load("demo_assets/sfx_accept.wav", 0)
Saten::Resource::SoundEffect.load("demo_assets/sfx_cancel.wav", 0)
Saten::Resource::SoundEffect.load("demo_assets/sfx_cursor.wav", 0)
# Scene Title
Saten::Resource::Sprite.load("demo_assets/background_title_small.png", 1)
Saten::Resource::Text.load("PRESS START", 1)
Saten::Resource::Text.load("PRESS ENTER", 1)

  # Menu
  Saten::Text.use_color(7)
  Saten::Resource::Text.load("Game", 1)
  Saten::Resource::Text.load("Shop", 1)
  Saten::Resource::Text.load("Score", 1)
  Saten::Resource::Text.load("Setting", 1)
  Saten::Resource::Text.load("Replay", 1)
  Saten::Resource::Text.load("Quit", 1)
  Saten::Text.use_color(0)

Saten::Resource::BackgroundMusic.load("demo_assets/bgm_title.ogg", 1)
Saten::Resource::BackgroundMusic.load("demo_assets/bgm_test.wav", 1)
Saten::Resource::BackgroundMusic.load("demo_assets/mod_test.xm", 1)
# Scene MapTest
Saten::Resource::Sprite.load("demo_assets/background0.png", 244)
Saten::Resource::Sprite.load("demo_assets/background1.png", 244)
Saten::Resource::Sprite.load("demo_assets/background2.png", 244)
Saten::Resource::Sprite.load("demo_assets/background-sonic.png", 244)
# Scene Load
Saten::Resource::Sprite.load("demo_assets/load_indicator.png", 255)
#Saten::Resource::Text.load("\\C[7]---LOADING---", 255)
Saten::Text.use_color(7)
Saten::Resource::Text.load("---LOADING---", 255)
Saten::Text.use_color(0)
