#include "saturn_engine/_lib.h"

/*
static Mix_Chunk *sfx_accept;
static Mix_Chunk *sfx_cancel;
static Mix_Chunk *sfx_select;

static saten_sprite *iconset;

static int acceptbtn;
static int acceptkey;
static int cancelbtn;
static int acceptkey;
*/

saten_menu* saten_menu_create(int mtype, int malign,
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
    menu->owner = 1;
    return menu;
}

void saten_menu_assign_to_player(saten_menu *menu, int id) /* PUBLIC */
{
    menu->owner = id;
}

void saten_menu_update(saten_menu *menu) /* PUBLIC */
{
    if (!menu->activef)
        return;
    int ctrl_prev;
    int ctrl_next;

    int btn_prev;
    int key_prev;
    int btn_next;
    int key_next;

    switch (menu->type) {
    case SATEN_MENU_VERT:
        key_prev = SATEN_KEY_UP;
        btn_prev = SATEN_BTN_DPAD_UP;
        key_next = SATEN_KEY_DOWN;
        btn_next = SATEN_BTN_DPAD_DOWN;
        break;
    case SATEN_MENU_HORI:
        key_prev = SATEN_KEY_LEFT;
        btn_prev = SATEN_BTN_DPAD_LEFT;
        key_next = SATEN_KEY_RIGHT;
        btn_next = SATEN_BTN_DPAD_RIGHT;
        break;
    }
    ctrl_prev = saten_player_keyr(menu->owner, key_prev);
    if (ctrl_prev < 1)
        ctrl_prev = saten_player_btnr(menu->owner, btn_prev);
    ctrl_next = saten_player_keyr(menu->owner, key_next);
    if (ctrl_next < 1)
        ctrl_next = saten_player_btnr(menu->owner, btn_next);

    switch (menu->loopf) {
    case true:
        if (ctrl_prev == 1)
            menu->select = (menu->select+(menu->elnum-1)) % menu->elnum;
        if (ctrl_next == 1)
            menu->select = (menu->select+1) % menu->elnum;
        break;
    case false:
        if (ctrl_prev == 1 && menu->select > 0)
            menu->select--;
        if (ctrl_next == 1 && menu->select < (menu->elnum - 1))
            menu->select++;
        break;
    }
    // Handle frame-limited menus
    if (menu->elonscreen < menu->elnum) {
        if (menu->select > (menu->frame + (menu->elonscreen - 1)))
            menu->frame++; // Move frame to show current element
        if (menu->select < menu->frame)
            menu->frame--;
        // Only Draw elements within frame
        menu->rect.h = 0;
        for (int i = 0; i < menu->elnum; i++) {
            if (i >= menu->frame &&
                i <= (menu->frame + (menu->elonscreen -1))) 
            {
                menu->el[i].drawf = true;
                saten_menu_element_posw(menu, menu->el+i);

            }
            else
                menu->el[i].drawf = false;
        }
    }
    // By default make all non-selected elements transparent
    for (int i = 0; i < menu->elnum; i++) {
        if (i == menu->select)
            saten_menu_element_colmod_reset(menu, i);
        else
            saten_menu_element_colmodw(menu, i, 255, 255, 255, 128);
    }
}

void saten_menu_element_add(saten_menu *menu, void *data, int dtype)
    /* PUBLIC */
{
    SDL_Color mod = { 255, 255, 255, 255 };
    int i = menu->elnum;
    menu->elnum++;
    //saten_menu_element *el =
    //    (saten_menu_element*)saten_malloc(sizeof(saten_menu_element));
    saten_menu_element el = { 0 };
    el.mod = mod;
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
    el.modf    = false;

    if (menu->elnum <= menu->elonscreen) {
        el.drawf = true;
        // Set position
        saten_menu_element_posw(menu, &el);
    }

    menu->el = (saten_menu_element*)saten_realloc(menu->el,
            sizeof(saten_menu_element) * menu->elnum);
    menu->el[i] = el;
}

void saten_menu_draw(saten_menu *menu) /* PUBLIC */
{
    if (!menu->drawf)
        return;
    for (int i = 0; i < menu->elnum; i++) {
        if (!(menu->el[i].drawf))
            continue;
        switch (menu->el[i].type) {
        case SATEN_MENU_TEXT:
            if (menu->el[i].modf)
                saten_text_modglyph(menu->el[i].data.text, &menu->el[i].mod);
            else
                saten_text_unmodglyph(menu->el[i].data.text);
            saten_text_draw(menu->el[i].data.text);
            break;
        case SATEN_MENU_SPRITE:
            break;
        }
    }
}

void saten_menu_element_colmodw(saten_menu *menu, int id, uint8_t r, uint8_t g,
        uint8_t b, uint8_t a) /* PUBLIC */
{
    SDL_Color c = { r, g, b, a };
    menu->el[id].modf = true;
    menu->el[id].mod = c;
}

void saten_menu_element_colmod_reset(saten_menu *menu, int id) /* PUBLIC */
{
    menu->el[id].modf = false;
}

void saten_menu_toggle(saten_menu *menu) /* PUBLIC */
{
    menu->activef = !menu->activef;
}

void saten_menu_element_posw(saten_menu *menu, saten_menu_element *el)
    /* PRIVATE */
{
    int x; int y;
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
            x = menu->rect.x - (el->rect.w/2);
            break;
        case SATEN_MENU_RIGHT:
            x = menu->rect.x - el->rect.w;
            break;
        }
        el->rect.x = x;
        el->rect.y = y;
        menu->rect.h = menu->rect.h + el->rect.h + menu->padding;
        break;
    }
    if (el->type == SATEN_MENU_TEXT)
        saten_text_update(el->data.text, NULL, 1.0, x, y);
}
