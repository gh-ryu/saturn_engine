#include "saturn_engine/_lib.h"

static saten_menu_sfx sfx_def;
static saten_sprite *def_iconset;

static int acceptbtn; static int acceptkey;
static int cancelbtn; static int cancelkey;


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
    menu->sfx = sfx_def;
    menu->iconset = def_iconset;
    menu->select = -2; // Default for no press of accept key/btn
    menu->interval = 0;
    return menu;
}

// Before assigning buttons and keys
// set the player of input module to be the menu owner
// [ if the configuration can vary for each player ]

void saten_menu_assign_key(int acc, int can) /* PUBLIC */
{
    acceptkey = acc;
    cancelkey = can;
}

void saten_menu_assign_btn(int acc, int can) /* PUBLIC */
{
    acceptbtn = acc;
    cancelbtn = can;
}

void saten_menu_default_sfxw(saten_sound *acc, saten_sound *can,
        saten_sound *sel, saten_sound *den) /* PUBLIC */
{
    sfx_def.accept = acc;
    sfx_def.cancel = can;
    sfx_def.move = sel;
    sfx_def.deny   = den;
}

void saten_menu_def_iconsetw(saten_sprite *sprite) /* PUBLIC */
{
    saten_sprite_texturize(sprite);
    saten_sprite_set_tiles(sprite, 2, 2);
    def_iconset = sprite;
}

void saten_menu_assign_to_player(saten_menu *menu, int id) /* PUBLIC */
{
    menu->owner = id;
}

void saten_menu_update(saten_menu *menu) /* PUBLIC */
{
    menu->select = -2;
    if (!menu->activef)
        return;
    int ctrl_prev;
    int ctrl_next;

    int ctrl_accept = 0;
    int ctrl_cancel = 0;

    int btn_prev;
    int key_prev;
    int btn_next;
    int key_next;

    bool movef   = false;
    bool move_prevf = false;
    bool move_nextf = false;

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

    menu->cpressf_prev = (ctrl_prev > 1);
    menu->cpressf_next = (ctrl_next > 1);

    if (menu->interval > 0) {
        if (menu->cpressf_prev)
            move_prevf = ((ctrl_prev % menu->interval) == 0);
        else
            move_prevf = (ctrl_prev == 1);
        if (menu->cpressf_next)
            move_nextf = ((ctrl_next % menu->interval) == 0);
        else
            move_nextf = (ctrl_next == 1);

    } else {
        move_prevf = (ctrl_prev == 1);
        move_nextf = (ctrl_next == 1);
    }

    switch (menu->loopf) {
    case true:
        if (move_prevf) {
            menu->cursor = (menu->cursor+(menu->elnum-1)) % menu->elnum;
            movef = true;
        }
        if (move_nextf) {
            menu->cursor = (menu->cursor+1) % menu->elnum;
            movef = true;
        }
        break;
    case false:
        if (move_prevf && menu->cursor > 0) {
            menu->cursor--;
            movef = true;
        }
        if (move_nextf && menu->cursor < (menu->elnum - 1)) {
            menu->cursor++;
            movef = true;
        }
        break;
    }
    // Handle frame-limited menus
    if (menu->elonscreen < menu->elnum) {
        if (menu->cursor > (menu->frame + (menu->elonscreen - 1)))
            menu->frame++; // Move frame to show current element
        if (menu->cursor < menu->frame)
            menu->frame--;
        if (menu->cursor == 0 && menu->frame >= menu->elonscreen)
            menu->frame = 0; // Fix for loop end to start
        if (menu->frame < menu->cursor) // Fix for loop start to end
            menu->frame = menu->elnum - menu->elonscreen;
        // Only Draw elements within frame
        switch (menu->type) {
        case SATEN_MENU_HORI:
            menu->rect.w = 0;
            break;
        case SATEN_MENU_VERT:
            menu->rect.h = 0;
            break;
        }
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
        if (i == menu->cursor)
            saten_menu_element_colmod_reset(menu, i);
        else
            saten_menu_element_colmodw(menu, i, 255, 255, 255, 128);
    }
    // Handle Accept & Cancel inputs
    if (!movef) {
        ctrl_accept = saten_player_keyr(menu->owner, acceptkey);
        if (ctrl_accept < 1)
            ctrl_accept = saten_player_btnr(menu->owner, acceptbtn);
        if (ctrl_accept == 1) {
            if (menu->el[menu->cursor].activef)
                menu->select = menu->cursor;
            else
                menu->select = -2;
        }
        ctrl_cancel = saten_player_keyr(menu->owner, cancelkey);
        if (ctrl_cancel < 1)
            ctrl_cancel = saten_player_btnr(menu->owner, cancelbtn);
        if (ctrl_cancel == 1)
            menu->select = -1;
    }
    // Play sounds
    if (movef)
        saten_sfx_set(menu->sfx.move);
    if (ctrl_accept == 1 && ctrl_cancel == 0) {
        if (menu->el[menu->select].activef)
            saten_sfx_set(menu->sfx.accept);
        else
            saten_sfx_set(menu->sfx.deny);
    }
    if (ctrl_cancel == 1)
        saten_sfx_set(menu->sfx.cancel);
}

int saten_menu_respondsto(saten_menu *menu) /* PUBLIC */
{
    return menu->select;
}

int saten_menu_cursor_posr(saten_menu *menu) /* PUBLIC */
{
    return menu->cursor;
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
    // Draw arrows indicating additional elements
    if (menu->iconset && menu->elnum > menu->elonscreen) {
        saten_menu_icon iprev;
        saten_menu_icon inext;

        switch (menu->type) {
        case SATEN_MENU_HORI:
            inext.tile_id = 3;
            iprev.tile_id = 2;

            inext.pos.y =
                menu->rect.y + (menu->rect.h/2) - (menu->iconset->srf->h/4);
            iprev.pos.y = inext.pos.y;

            iprev.pos.x = menu->rect.x - 12;
            inext.pos.x = (menu->rect.x + menu->rect.w) + 12;
            break;
        case SATEN_MENU_VERT:
            inext.tile_id = 1;
            iprev.tile_id = 0;

            inext.pos.x =
                menu->rect.x + (menu->rect.w/2) - (menu->iconset->srf->w/4);
            iprev.pos.x = inext.pos.x;

            iprev.pos.y = menu->rect.y - 12;
            inext.pos.y = (menu->rect.y + menu->rect.h) + 12;
            break;
        }

        iprev.pos.x += menu->icon_xoff;
        if (menu->type == SATEN_MENU_HORI)
            inext.pos.x += -menu->icon_xoff;
        else
            inext.pos.x += menu->icon_xoff;
        iprev.pos.y += menu->icon_yoff;
        if (menu->type == SATEN_MENU_VERT)
            inext.pos.y += -menu->icon_yoff;
        else
            inext.pos.y += menu->icon_yoff;

        if (menu->loopf) {
            iprev.drawf = true;
            inext.drawf = true;
        } else {
            iprev.drawf = (menu->frame > 0);
            inext.drawf = (menu->frame + menu->elonscreen < menu->elnum);
        }
        if (iprev.drawf)
            saten_sprite_draw(menu->iconset, iprev.tile_id, iprev.pos.x,
                    iprev.pos.y,
                    0, false);
        if (inext.drawf)
            saten_sprite_draw(menu->iconset, inext.tile_id, inext.pos.x,
                    inext.pos.y,
                0, false);

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

void saten_menu_element_toggle(saten_menu *menu, int id) /* PUBLIC */
{
    if (id > 0 && id < menu->elnum)
        menu->el[id].activef = !menu->el[id].activef;
    else
        saten_errhandler(70);
}

void saten_menu_element_posw(saten_menu *menu, saten_menu_element *el)
    /* PRIVATE */
{
    int x; int y;
    switch (menu->type) {
    case SATEN_MENU_HORI:
        x = menu->rect.x + menu->rect.w + menu->padding;
        y = menu->rect.y;
        el->rect.x = x;
        el->rect.y = y;
        menu->rect.w = menu->rect.w + el->rect.w + menu->padding;
        if (el->rect.h > menu->rect.h)
            menu->rect.h = el->rect.h;
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
        if (el->rect.w > menu->rect.w)
            menu->rect.w = el->rect.w;
        break;
    }
    if (el->type == SATEN_MENU_TEXT)
        saten_text_posw(el->data.text, x, y);
}

void saten_menu_icon_offsetw(saten_menu *menu, int x, int y) /* PUBLIC */
{
    menu->icon_xoff = x;
    menu->icon_yoff = y;
}

void saten_menu_intervalw(saten_menu *menu, int ival) /* PUBLIC */
{
    if (ival > 0)
        menu->interval = ival;
    else
        menu->interval = 0;
}
