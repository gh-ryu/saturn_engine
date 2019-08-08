#ifndef SATURN_ENGINE_CORE
#define SATURN_ENGINE_CORE


#ifdef SATEN_GLOBAL_INSTANCE
#define SATEN_GLOBAL
#else
#define SATEN_GLOBAL extern
#endif /* SATEN_GLOBAL_INSTANCE */

#ifdef _WIN32
//#define SATEN_PATH_SEP "\\" 
#define SATEN_ERROR_LOG "error.txt"
#else
//#define SATEN_PATH_SEP "/"
#define SATEN_ERROR_LOG "error.log"
#endif
#define SATEN_PATH_SEP "/"

#include <SDL.h>
#include <SDL_image.h>
#include <SDL_mixer.h>
//#include <SDL_ttf.h>
//
#include <stdlib.h>
#include <stdio.h>
#ifdef _WIN32
#include <io.h>
#endif /* _WIN32 */
#include <fcntl.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>

#include "satenc_config.h" // defines mruby locations
// path to mruby.h
#include SATEN_MRB_HEADER_LOCATION
// path to mruby/compile.h
#include SATEN_MRB_COMPILE_HEADER_LOCATION

#include "satenc_struct.h"

SATEN_GLOBAL char *saten_base_path;
SATEN_GLOBAL bool saten_break;
SATEN_GLOBAL saten_pad *saten_pads;
SATEN_GLOBAL uint8_t saten_pad_num;
SATEN_GLOBAL SDL_Window *saten_window;
SATEN_GLOBAL SDL_Renderer *saten_ren;
SATEN_GLOBAL saten_framgr saten_framectrl;
SATEN_GLOBAL uint8_t saten_core_flags;
SATEN_GLOBAL char* saten_errpath;
SATEN_GLOBAL const uint8_t *saten_keystate;
SATEN_GLOBAL int32_t *saten_keystate2;
SATEN_GLOBAL bool *saten_keystate3; // is key locked??
SATEN_GLOBAL uint64_t saten_step;
//SATEN_GLOBAL bool *saten_sfx_flag;

SATEN_GLOBAL saten_list *saten_list_layer;
SATEN_GLOBAL saten_list *saten_list_text;
SATEN_GLOBAL int saten_list_new_id;
SATEN_GLOBAL int saten_list_look_for;
SATEN_GLOBAL void *saten_list_found;
SATEN_GLOBAL saten_text *saten_latest_text; // pointer to last modified text
SATEN_GLOBAL int saten_text_gheight; // glyph height to be considered 
                                     //when creating
                                     // a text object
SATEN_GLOBAL saten_layer *saten_target_layer;
SATEN_GLOBAL saten_layer *saten_layer0;
SATEN_GLOBAL saten_glyph_set *saten_glyph_sets;
SATEN_GLOBAL uint8_t saten_glyph_set_n;
SATEN_GLOBAL mrb_state *saten_mrb;
SATEN_GLOBAL mrbc_context *saten_mrbc;

SATEN_GLOBAL struct RClass* _saten_mrb_module;

#define SATEN_ERRORS (1 << 7)
#define SATEN_INPUT (1 << 6)
#define SATEN_KEYCODES (1 << 5)
#define SATEN_MRB (1 << 4)
#define SATEN_TEXT (1 << 3)
#define SATEN_PRINTERR saten_flag_check(SATEN_ERRORS, saten_core_flags)

#include "satenc_input_define.h"
#define SATEN_SPRITE 0
#define SATEN_LAYER 1
#define SATEN_SURFACE 2

#define SATEN_SFX_MAX 32 // max number of soundeffects

#define SATEN_KEYNUM 60

#define SATEN_KB(n) (n) * 1024
#define SATEN_MB(n) (n) * 1048576
#define SATEN_GB(n) (n) * 1073741824

#ifndef SATEN_SYMKEY
#define SATEN_SYMKEY NULL
#endif /* SATEN_SYMKEY */

typedef void (*saten_fptr_void)(void);
typedef void (*saten_fptr_bool)(bool);
typedef void (*saten_fptr_list_action)(void*, int, int);

int saten_core_init(const char *title, int screen_width,
        int screen_height, uint8_t flags);
int saten_core_run(saten_fptr_void fptr);
void saten_core_quit(void);

#include "satenc_list.h"
#include "satenc_darray.h"
#include "satenc_framerate.h"
#include "satenc_flag.h"
#include "satenc_util.h"
#include "satenc_error.h"
#include "satenc_input.h"
#include "satenc_keyboard.h"
#include "satenc_controller.h"
#include "satenc_haptic.h"
#include "satenc_draw.h"
#include "satenc_layer.h"
#include "satenc_sprite.h"
#include "satenc_pixel.h"
#include "satenc_surface.h"
#include "satenc_mruby.h"
#include "satenc_text.h"
#include "satenc_audio.h"
#include "satenc_mfield.h"
#include "satenc_crypt.h"
#include "satenc_data.h"

#endif /* SATURN_ENGINE_CORE */
