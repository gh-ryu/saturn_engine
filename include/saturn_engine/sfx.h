#ifndef SATURN_ENGINE_SFX
#define SATURN_ENGINE_SFX

int saten_sfx_volume(saten_scene_info scene, int i, int vol);
void saten_sfx_play(saten_scene_info scene);
void saten_sfx_set(saten_scene_info scene, int i);
void saten_sfx_unset(saten_scene_info scene, int i);
void saten_sfx_reset(saten_scene_info scene);

#endif /* SATURN_ENGINE_SFX */
