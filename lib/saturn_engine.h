#ifndef SATEN_LIBRARY
#define SATEN_LIBRARY

#ifdef WIN
#define SATEN_PATH_SEP "\\" 
#define SATEN_ERROR_LOG "error.txt"
#else
#define SATEN_PATH_SEP "/"
#define SATEN_ERROR_LOG "error.log"
#endif

#include <SDL.h>
#include <SDL_image.h>
#include <SDL_mixer.h>
#include <SDL_ttf.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#include "saten_structs.h"
#include "saten_declarations.h"
#include "saten_list.h"
#include "saten_fps_control.h"
#include "saten_public.h"
#include "saten_getset.h"
#include "saten_bitop.h"
#include "saten_util.h"
#include "saten_error.h"
#include "saten_input.h"
#include "saten_haptic.h"
#include "saten_graphics.h"


#endif /* SATEN_LIBRARY */
