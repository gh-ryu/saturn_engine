#include "saturn_engine/_lib.h"

static Mix_Chunk *sfx_accept;
static Mix_Chunk *sfx_cancel;
static Mix_Chunk *sfx_select;

static saten_sprite *iconset;

static int acceptbtn;
static int acceptkey;
static int cancelbtn;
static int acceptkey;

saten_menu* saten_menucreate(int mtype, int malign,
        bool loop, int x, int y) /* PUBLIC */
{
    saten_menu *menu = (saten_menu*)saten_malloc(sizeof(saten_menu));
    menu->type  = mtype;
    menu->align = malign;
    menu->loopf = loop;
    menu->rect.x = x;
    menu->rect.y = y;
    menu->padding = 16;
    menu->drawf = true;
    menu->elonscreen = 2000;
    return menu;
}

void saten_menuaddel(saten_menu *menu, void *data, int dtype)
    /* PUBLIC */
{
    int x; int y;
    int i = menu->elnum;
    menu->elnum++;
    //saten_menu_element *el =
    //    (saten_menu_element*)saten_malloc(sizeof(saten_menu_element));
    saten_menu_element el = { 0 };
    el.type = dtype;
    switch (dtype) {
    case SATEN_MENU_TEXT:
        el.data.text = (saten_text*)data;
        el.rect.w = saten_get_text_width(el.data.text);
        el.rect.h = saten_get_text_height(el.data.text);
        break;
    case SATEN_MENU_SPRITE:
        el.data.sprite = (saten_sprite*)data;
        el.rect.w = el.data.sprite->source->w;
        el.rect.h = el.data.sprite->source->h;
        break;
    }
    el.activef = true;

    if (menu->elnum <= menu->elonscreen) {
        el.drawf = true;
        // Set position
        switch (menu->type) {
        case SATEN_MENU_HORI:
            break;
        case SATEN_MENU_VERT:
            y = menu->rect.y + menu->rect.h + menu->padding;
            switch (menu->align) {
            case SATEN_MENU_LEFT:
                x = menu->rect.x;
                break;
            case SATEN_MENU_CENTER:
                x = menu->rect.x - (el.rect.w/2);
                break;
            case SATEN_MENU_RIGHT:
                x = menu->rect.x - el.rect.w;
                break;
            }
            el.rect.x = x;
            el.rect.y = y;
            menu->rect.h = menu->rect.h + el.rect.h + menu->padding;
            break;
        }
        if (dtype == SATEN_MENU_TEXT)
            saten_text_update(el.data.text, NULL, 1.0, x, y);
    }

    menu->el = (saten_menu_element*)saten_realloc(menu->el,
            sizeof(saten_menu_element) * menu->elnum);
    menu->el[i] = el;
}

void saten_menudraw(saten_menu *menu) /* PUBLIC */
{
    if (!menu->drawf)
        return;
    for (int i = 0; i < menu->elnum; i++) {
        if (!(menu->el[i].drawf))
            continue;
        switch (menu->el[i].type) {
        case SATEN_MENU_TEXT:
            saten_text_draw(menu->el[i].data.text);
            break;
        case SATEN_MENU_SPRITE:
            break;
        }
    }
}
