#ifndef SATURN_ENGINE_SFX
#define SATURN_ENGINE_SFX

int saten_sfx_volume(saten_sound *sound, int vol);
void saten_sfx_play(void);
void saten_sfx_set(saten_sound *sound);
void saten_sfx_unset(saten_sound *sound);
void saten_sfx_unset_all(void);
//void saten_sfx_reset(saten_scene_info scene);

void saten_sfx_init(void);
void saten_sfx_quit(void);
void saten_sfx_refresh_loaded_effects(void);
void saten_sfx_push_loaded_effect(int id);

#endif /* SATURN_ENGINE_SFX */
