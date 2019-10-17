#ifndef SATURN_ENGINE_MENU
#define SATURN_ENGINE_MENU

typedef struct _saten_menu_icon {
    int tile_id;
    SDL_Point pos;
    bool drawf;
} saten_menu_icon;

void saten_menu_assign_btn(int acc, int can);
void saten_menu_assign_key(int acc, int can);

saten_menu* saten_menu_create(int mtype, int malign, int x, int y,
        uint8_t flags);
void saten_menu_update(saten_menu *menu);
void saten_menu_element_add(saten_menu *menu, void *data, int dtype);
void saten_menu_element_colmodw(saten_menu *menu, int id, uint8_t r, uint8_t g,
        uint8_t b, uint8_t a);
void saten_menu_element_colmod_reset(saten_menu *menu, int id);
void saten_menu_element_posw(saten_menu *menu, saten_menu_element *el);
void saten_menu_draw(saten_menu *menu);
void saten_menu_toggle(saten_menu *menu);
void saten_menu_element_toggle(saten_menu *menu, int id);
void saten_menu_assign_to_player(saten_menu *menu, int id);

void saten_menu_def_iconsetw(saten_sprite *sprite);
void saten_menu_icon_offsetw(saten_menu *menu, int x, int y);
void saten_menu_default_sfxw(saten_sound *acc, saten_sound *can,
        saten_sound *sel, saten_sound *den);

int saten_menu_respondsto(saten_menu *menu);
int saten_menu_cursor_posr(saten_menu *menu);
void saten_menu_intervalw(saten_menu *menu, int ival);
void saten_menu_framesizew(saten_menu *menu, int x, int y);

bool saten_menu_elinframe(saten_menu *menu, saten_menu_element *el);
void saten_menu_matrixs(saten_menu *menu, int x, int y);
void saten_menu_frames(saten_menu *menu, int x, int y);

#endif /* SATURN_ENGINE_MENU */
