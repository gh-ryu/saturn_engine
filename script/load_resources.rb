# Scene Root
Saten::Resource::Sprite.load("data/img/saten/logo.png", 0)
Saten::Resource::Sprite.load("data/img/saten/system_menu_arrow.png", 0)
Saten::Resource::SoundEffect.load("data/sfx/demo/accept.wav", 0)
Saten::Resource::SoundEffect.load("data/sfx/demo/cancel.wav", 0)
Saten::Resource::SoundEffect.load("data/sfx/demo/cursor.wav", 0)
# Scene Title
Saten::Resource::Sprite.load("data/img/demo/background_title_small.png", 1)
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

Saten::Resource::BackgroundMusic.load("data/bgm/demo/title.ogg", 1)
Saten::Resource::BackgroundMusic.load("data/bgm/demo/test.wav", 1)
Saten::Resource::BackgroundMusic.load("data/bgm/demo/mod_test.xm", 1)
# Scene MapTest
Saten::Resource::Sprite.load("data/img/demo/background0.png", 244)
Saten::Resource::Sprite.load("data/img/demo/background1.png", 244)
Saten::Resource::Sprite.load("data/img/demo/background2.png", 244)
Saten::Resource::Sprite.load("data/img/demo/background-sonic.png", 244)
# Scene Load
Saten::Resource::Sprite.load("data/img/demo/load_indicator.png", 255)
Saten::Resource::Text.load("\\C[7]---LOADING---", 255)
