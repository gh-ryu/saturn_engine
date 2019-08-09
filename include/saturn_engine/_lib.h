#ifndef SATURN_ENGINE
#define SATURN_ENGINE

#include "core/_lib.h"
#include "_struct.h"

SATEN_GLOBAL uint8_t saten_flags;
SATEN_GLOBAL saten_scene *saten_darr_scene;
SATEN_GLOBAL saten_scene_info saten_now_loading;
SATEN_GLOBAL saten_scene_info saten_scene_start; // the scene at which
                                                 //rendering starts
SATEN_GLOBAL saten_scene_info saten_scene_current;
SATEN_GLOBAL bool saten_load_on_thread;
SATEN_GLOBAL saten_resmngr saten_vres; // filled on second thread then
                                       //copied into scene res
                                       // when loading finished
SATEN_GLOBAL SDL_mutex *saten_load_mtx;
SATEN_GLOBAL SDL_Thread *saten_load_thread;

#define SATEN_FULLSCREEN (1 << 7)
#define SATEN_MRBLOAD (1 << 6)

int saten_init(char *title, int w, int h, uint8_t flags);
int saten_run(void);
void saten_game(void);

#include "scene.h"
#include "load.h"
#include "sfx.h"
#include "resource.h"
#include "data.h"


#endif /* SATURN_ENGINE */
