#include "saturn_engine/_lib.h"

static Mix_Chunk *sfx_accept;
static Mix_Chunk *sfx_cancel;
static Mix_Chunk *sfx_select;

static saten_sprite *iconset;

static int acceptbtn;
static int acceptkey;
static int cancelbtn;
static int acceptkey;

saten_menu* saten_menucreate(enum saten_menut mtype, enum saten_align malign,
        bool loop, int x, int y) /* PUBLIC */
{
    saten_menu *menu = (saten_menu*)saten_malloc(sizeof(saten_menu));
    menu->type  = mtype;
    menu->align = malign;
    menu->loopf = loop;
    menu->pos.x = x;
    menu->pos.y = y;
    return menu;
}

void saten_menuaddel(saten_menu *menu, void *data, enum saten_menuelt dtype)
    /* PUBLIC */
{
    int i = menu->elnum;
    menu->elnum++;
    //saten_menu_element *el =
    //    (saten_menu_element*)saten_malloc(sizeof(saten_menu_element));
    saten_menu_element el = { 0 };
    el.type = dtype;
    switch (dtype) {
    case text:
        el.data.text = (saten_text*)data;
        el.rect.w = saten_get_text_width(el.data.text);
        el.rect.h = saten_get_text_height(el.data.text);
        break;
    case sprite:
        el.data.sprite = (saten_sprite*)data;
        el.rect.w = el.data.sprite->source.w;
        el.rect.h = el.data.sprite->source.h;
        break;
    }
    el.activef = true;

    menu->el = (saten_menu_element*)saten_realloc(menu->el,
            menu->elnum);
    menu->el[i] = el;
}
