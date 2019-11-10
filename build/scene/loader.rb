# Saturn Engine Resource Loading
#
# Load a PNG file:
# Saten::Resource::Sprite.load(file_name)
#
# Load a WAV file:
# Saten::Resource::SoundEffect.load(file_name)
#
# Load a text:
# Saten::Resource::Text.load(string)
#
# Load a music file (mp3, wav, xm):
# Saten::Resource::BackgroundMusic.load(file_name)
#
# Each of the above functions has an optional second parameter that
# can be used if one loader file is to be associated with multiple
# scenes
# Said paramters is a scene's unique id. If constructed using
# the Engine's build script it can be accessed with a constant:
# Saten::Scene::SCENE_NAME
# where SCENE_NAME is to be replaced with the scene's name (in caps)
Saten::Resource.set_scene Saten::Scene::{{up}}
