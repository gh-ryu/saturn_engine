#include "saturn_engine/_lib.h"

static Mix_Chunk *sfx_accept;
static Mix_Chunk *sfx_cancel;
static Mix_Chunk *sfx_select;

static saten_sprite *iconset;

static int acceptbtn;
static int acceptkey;
static int cancelbtn;
static int acceptkey;

saten_menu* saten_menucreate(void)
{
    saten_menu *menu = (saten_menu*)saten_malloc(sizeof(saten_menu));
    return menu;
}
