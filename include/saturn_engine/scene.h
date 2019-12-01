#ifndef SATURN_ENGINE_SCENE
#define SATURN_ENGINE_SCENE

int saten_scene_create(saten_fptr_void init, saten_fptr_bool update,
        saten_fptr_void draw, saten_fptr_void quit, void *data);
void saten_scene_quit_from(int id);
void saten_scene_quit_all(void);
int saten_scene_self(void);
int saten_scene_count(void);
void saten_scene_start(int id);

int saten_scene_find(int id);
int saten_scene_fetch_id(void);
int saten_scene_pop(void);
void saten_scene_end(void);
void saten_scene_each_set(saten_fptr_void init, saten_fptr_bool update,
        saten_fptr_void draw, saten_fptr_void quit);
void saten_scene_init(void);
void saten_scene_end(void);

int saten_scene_frame_count(void);
void saten_scene_engine_quit(void);
void saten_scene_engine_main(void);

#endif /* SATURN_ENGINE_SCENE */
