#ifndef SATURN_ENGINE
#define SATURN_ENGINE

#include "core/_lib.h"
#include "_struct.h"
#include "_config.h"

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
SATEN_GLOBAL saten_vstng saten_vconf;
SATEN_GLOBAL SDL_mutex *saten_load_mtx;
SATEN_GLOBAL SDL_Thread *saten_load_thread;
SATEN_GLOBAL SDL_Rect saten_game_view;

#define SATEN_MRBLOAD (1 << 7)

#define SATEN_VOUT_320x240 0 // sd output, uses 288x216 (hd compatibility)
#define SATEN_VOUT_384x216 1 // sd-ws
#define SATEN_VOUT_768x432 2 // the above x2
#define SATEN_VOUT_1152x648 3 // the above x3

#define SATEN_VOUT_640x480 4 // vga output, uses 640x360 (hd compatibility)
#define SATEN_VOUT_1280x720 5 // vga-ws x2

#define SATEN_VOUT_1366x768 6 // hd-ready compatibility

#define SATEN_VOUT_1920x1080 7 // sd-ws x5, vga-ws x3
#define SATEN_VOUT_1920x1200 8 // for the cool kids

// Menu stuff
#define SATEN_MENU_VERT 0
#define SATEN_MENU_HORI 1
#define SATEN_MENU_MATR 2
#define SATEN_MENU_LEFT 0
#define SATEN_MENU_CENTER 1
#define SATEN_MENU_RIGHT 2
#define SATEN_MENU_TEXT 0
#define SATEN_MENU_SPRITE 1

#define SATEN_MENU_ROWLEN_DEFAULT 4
#define SATEN_MENU_COLLEN_DEFAULT 1

#define SATEN_MENU_LOOP (1 << 7)

int saten_init(char *title, uint8_t flags);
int saten_run(void);
void saten_game(void);
void saten_quit(void);
void saten_kill(void);

#include "scene.h"
#include "load.h"
#include "bgm.h"
#include "sfx.h"
#include "resource.h"
#include "data.h"
#include "video.h"
#include "player.h"
#include "plane.h"
#include "menu.h"


#endif /* SATURN_ENGINE */
