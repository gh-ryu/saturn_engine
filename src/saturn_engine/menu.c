#include "saturn_engine/_lib.h"

static saten_menu_sfx sfx_def;
static saten_sprite *def_iconset;

static int acceptbtn; static int acceptkey;
static int cancelbtn; static int cancelkey;

static int drawn; // Number of elements drawn


saten_menu* saten_menu_create(int mtype, int malign,
        int x, int y, uint8_t flags) /* PUBLIC */
{
    saten_menu *menu = (saten_menu*)saten_malloc(sizeof(saten_menu));
    menu->type  = mtype;
    menu->align = malign;
    menu->loopf = saten_flag_check(SATEN_MENU_LOOP, flags);
    menu->rect.x = x;
    menu->rect.y = y;
    menu->padding.x = 6;
    menu->padding.y = 6;
    menu->drawf = true;
    //menu->elonscreen = 2000;
    menu->frame.w = 2000;
    menu->frame.h = 2000;
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
    if (!menu->activef)
        return;

    menu->select = -2;

    int ctrl_prev_x;
    int ctrl_next_x;

    int ctrl_prev_y;
    int ctrl_next_y;

    int ctrl_accept = 0;
    int ctrl_cancel = 0;

    int btn_prev_x;
    int key_prev_x;
    int btn_next_x;
    int key_next_x;

    int btn_prev_y;
    int key_prev_y;
    int btn_next_y;
    int key_next_y;

    bool move_xf   = false;
    bool move_yf   = false;
    bool move_prev_xf = false;
    bool move_next_xf = false;
    bool move_prev_yf = false;
    bool move_next_yf = false;

    key_prev_y = SATEN_KEY_UP;
    btn_prev_y = SATEN_BTN_DPAD_UP;
    key_next_y = SATEN_KEY_DOWN;
    btn_next_y = SATEN_BTN_DPAD_DOWN;

    key_prev_x = SATEN_KEY_LEFT;
    btn_prev_x = SATEN_BTN_DPAD_LEFT;
    key_next_x = SATEN_KEY_RIGHT;
    btn_next_x = SATEN_BTN_DPAD_RIGHT;

    ctrl_prev_x = saten_player_keyr(menu->owner, key_prev_x);
    if (ctrl_prev_x < 1)
        ctrl_prev_x = saten_player_btnr(menu->owner, btn_prev_x);
    ctrl_next_x = saten_player_keyr(menu->owner, key_next_x);
    if (ctrl_next_x < 1)
        ctrl_next_x = saten_player_btnr(menu->owner, btn_next_x);

    ctrl_prev_y = saten_player_keyr(menu->owner, key_prev_y);
    if (ctrl_prev_y < 1)
        ctrl_prev_y = saten_player_btnr(menu->owner, btn_prev_y);
    ctrl_next_y = saten_player_keyr(menu->owner, key_next_y);
    if (ctrl_next_y < 1)
        ctrl_next_y = saten_player_btnr(menu->owner, btn_next_y);

    menu->cpressf_prev_x = (ctrl_prev_x > 1);
    menu->cpressf_next_x = (ctrl_next_x > 1);
    menu->cpressf_prev_y = (ctrl_prev_y > 1);
    menu->cpressf_next_y = (ctrl_next_y > 1);

    if (menu->interval > 0) {
        if (menu->cpressf_prev_x)
            move_prev_xf = ((ctrl_prev_x % menu->interval) == 0);
        else
            move_prev_xf = (ctrl_prev_x == 1);
        if (menu->cpressf_next_x)
            move_next_xf = ((ctrl_next_x % menu->interval) == 0);
        else
            move_next_xf = (ctrl_next_x == 1);

        if (menu->cpressf_prev_y)
            move_prev_yf = ((ctrl_prev_y % menu->interval) == 0);
        else
            move_prev_yf = (ctrl_prev_y == 1);
        if (menu->cpressf_next_y)
            move_next_yf = ((ctrl_next_y % menu->interval) == 0);
        else
            move_next_yf = (ctrl_next_y == 1);
    } else {
        move_prev_xf = (ctrl_prev_x == 1);
        move_next_xf = (ctrl_next_x == 1);
        move_prev_yf = (ctrl_prev_y == 1);
        move_next_yf = (ctrl_next_y == 1);
    }

    switch (menu->loopf) {
    case true:
        if (move_prev_xf) {
            menu->cursor.x = (menu->cursor.x+(menu->rowlen-1)) % menu->rowlen;
            move_xf = true;
        }
        if (move_next_xf) {
            menu->cursor.x = (menu->cursor.x+1) % menu->rowlen;
            move_xf = true;
        }
        if (move_prev_yf) {
            menu->cursor.y = (menu->cursor.y+(menu->collen-1)) % menu->collen;
            move_yf = true;
        }
        if (move_next_yf) {
            menu->cursor.y = (menu->cursor.y+1) % menu->collen;
            move_yf = true;
        }
        break;
    case false:
        if (move_prev_xf && menu->cursor.x > 0) {
            menu->cursor.x--;
            move_xf = true;
        }
        if (move_next_xf && menu->cursor.x < (menu->rowlen - 1)) {
            menu->cursor.x++;
            move_xf = true;
        }
        if (move_prev_yf && menu->cursor.y > 0) {
            menu->cursor.y--;
            move_yf = true;
        }
        if (move_next_yf && menu->cursor.y < (menu->collen - 1)) {
            menu->cursor.y++;
            move_yf = true;
        }
        break;
    }
    // Handle frame-limited menus
    if (menu->framef) {
        switch (menu->rowlen) {
        case 1:
        case 2:
            if (menu->cursor.x > (menu->frame.x + (menu->frame.w - 1)))
                menu->frame.x++; // Move frame to show current element
            if (menu->cursor.x < menu->frame.x)
                menu->frame.x--;
            break;
        default:
            if (menu->cursor.x == (menu->frame.x + (menu->frame.w - 1)) &&
                (menu->cursor.x < (menu->rowlen - 1 )))
                {
                    menu->frame.x++;
                }
            if (menu->cursor.x == menu->frame.x && menu->cursor.x > 0)
                menu->frame.x--;
            break;
        }
        switch (menu->collen) {
        case 1:
        case 2:
            if (menu->cursor.y > (menu->frame.y + (menu->frame.h - 1)))
                menu->frame.y++; // Move frame to show current element
            if (menu->cursor.y < menu->frame.y)
                menu->frame.y--;
            break;
        default:
            if (menu->cursor.y == (menu->frame.y + (menu->frame.y - 1)) &&
                (menu->cursor.y < (menu->collen - 1 )))
                {
                    menu->frame.y++;
                }
            if (menu->cursor.y == menu->frame.y && menu->cursor.y > 0)
                menu->frame.y--;
            break;
        }
        //if (menu->cursor == 0 && (menu->frame >= menu->elonscreen))
        if (menu->cursor.x == 0 && (menu->frame.x != 0))
            menu->frame.x = 0; // Fix for loop end to start
        if (menu->frame.x == 0  && (menu->cursor.x == menu->rowlen - 1))
            menu->frame.x = menu->rowlen - menu->frame.w; // Fix start to end
        if (menu->frame.w <= 2 && (menu->cursor.x == menu->rowlen - 1)) {
            if (menu->frame.w == 1)
                menu->frame.x = menu->rowlen - 1;
            else
                menu->frame.x = menu->rowlen - 2;
        }
        if (menu->cursor.y == 0 && (menu->frame.y != 0))
            menu->frame.y = 0; // Fix for loop end to start
        if (menu->frame.y == 0  && (menu->cursor.y == menu->collen - 1))
            menu->frame.y = menu->collen - menu->frame.h; // Fix start to end
        if (menu->frame.h <= 2 && (menu->cursor.y == menu->collen - 1)) {
            if (menu->frame.h == 1)
                menu->frame.y = menu->collen - 1;
            else
                menu->frame.y = menu->collen - 2;
        }
        // Only Draw elements within frame
        /*
        switch (menu->type) {
        case SATEN_MENU_HORI:
            menu->rect.w = 0;
            break;
        case SATEN_MENU_VERT:
            menu->rect.h = 0;
            break;
        } */
        menu->rect.w = 0;
        menu->rect.h = 0;
        drawn = 0;
        for (int i = 0; i < menu->elnum; i++) {
            if (saten_menu_elinframe(menu, menu->el+i)) {
                menu->el[i].drawf = true;
                saten_menu_element_posw(menu, menu->el+i);
            } else {
                menu->el[i].drawf = false;
            }
        }
    }
    // By default make all non-selected elements transparent
    for (int i = 0; i < menu->elnum; i++) {
        if (saten_sdlpntcmp(&(menu->el[i].gpos), &menu->cursor))
            saten_menu_element_colmod_reset(menu, i);
        else
            saten_menu_element_colmodw(menu, i, 255, 255, 255, 128);
    }
    // Handle Accept & Cancel inputs
    if (!move_xf && !move_yf) {
        ctrl_accept = saten_player_keyr(menu->owner, acceptkey);
        if (ctrl_accept < 1)
            ctrl_accept = saten_player_btnr(menu->owner, acceptbtn);
        if (ctrl_accept == 1) {
            //if (menu->el[menu->cursor].activef)
            int index = (menu->cursor.y * menu->rowlen) + menu->cursor.x;
            if (menu->el[index].activef)
                menu->select = index;
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
    switch (menu->type) {
    case SATEN_MENU_VERT:
        if (move_yf)
            saten_sfx_set(menu->sfx.move);
        break;
    case SATEN_MENU_HORI:
        if (move_xf)
            saten_sfx_set(menu->sfx.move);
        break;
    case SATEN_MENU_MATR:
        if (move_xf || move_yf)
            saten_sfx_set(menu->sfx.move);
        break;
    }
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
    return ((menu->cursor.y * menu->rowlen) + menu->cursor.x);
}

void saten_menu_element_add(saten_menu *menu, void *data, int dtype)
    /* PUBLIC */
{
    switch (menu->type) {
    case SATEN_MENU_VERT:
        menu->rowlen = 1;
        menu->collen += 1;
        break;
    case SATEN_MENU_HORI:
        menu->rowlen += 1;
        menu->collen = 1;
        break;
    case SATEN_MENU_MATR:
        if (menu->rowlen <= 1 || menu->collen <= 1) {
            saten_errhandler(71);
            saten_kill();
        }
        break;
    }
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

    el.gpos = saten_coords_from_arrindex(i, menu->rowlen);

    if (saten_menu_elinframe(menu, &el)) {
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
    /*
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
    */
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
    if (menu->type != SATEN_MENU_HORI) {
        if (menu->framef) {
            if ((drawn % menu->frame.w) == 0)
                menu->rect.w = 0; // new row
        } else {
            if ((drawn % menu->rowlen) == 0)
                menu->rect.w = 0; // new row
        }
    }
    y = menu->rect.y + menu->rect.h;
    switch (menu->align) {
    case SATEN_MENU_LEFT:
        x = menu->rect.x + menu->rect.w;
        break;
    case SATEN_MENU_CENTER:
        x = menu->rect.x - (el->rect.w/2) + menu->rect.w;
        break;
    case SATEN_MENU_RIGHT:
        x = menu->rect.x - el->rect.w + menu->rect.w;
        break;
    }

    el->rect.x = x;
    el->rect.y = y;
    menu->rect.w = menu->rect.w + el->rect.w + menu->padding.x;

    /*
    switch (menu->type) {
    case SATEN_MENU_HORI:
        y = menu->rect.y;
        switch (menu->align) {
        case SATEN_MENU_LEFT:
        case SATEN_MENU_RIGHT:
            x = menu->rect.x + menu->rect.w + menu->padding;
            break;
        case SATEN_MENU_CENTER:
            if (menu->elonscreen == 1)
                x = menu->rect.x - (el->rect.w/2);
            else
                x = menu->rect.x + menu->rect.w + menu->padding;
            break;
        }
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
    */

    if (el->type == SATEN_MENU_TEXT)
        saten_text_posw(el->data.text, x, y);

    drawn++;

    if (menu->type != SATEN_MENU_HORI) {
        if ((drawn & menu->frame.w) == 0)
            menu->rect.h = menu->rect.h + el->rect.h + menu->padding.y;
    }
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

void saten_menu_framesizew(saten_menu *menu, int x, int y) /* PUBLIC */
{
    if (x > 0)
        menu->frame.w = x;
    else
        menu->frame.w = 1;
    if (y > 0)
        menu->frame.h = y;
    else
        menu->frame.h = 1;
}

void saten_menu_rowlenw(saten_menu *menu, int l) /* PUBLIC */
{
    if (l > 0)
        menu->rowlen = l;
    else
        menu->rowlen = SATEN_MENU_ROWLEN_DEFAULT;
}

bool saten_menu_elinframe(saten_menu *menu, saten_menu_element *el)
    /* PUBLIC */
{
    return (saten_inrange(el->gpos.x, menu->frame.x, menu->frame.w - 1) &&
            saten_inrange(el->gpos.y, menu->frame.y, menu->frame.h - 1));
}

void saten_menu_matrixs(saten_menu *menu, int x, int y) /* PUBLIC */
{
    menu->rowlen = x;
    menu->collen = y; 
}

void saten_menu_frames(saten_menu *menu, int x, int y) /* PUBLIC */
{
    menu->framef = true;
    menu->frame.w = x;
    menu->frame.h = y;
}
