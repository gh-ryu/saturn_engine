#ifndef SATURN_ENGINE_MENU
#define SATURN_ENGINE_MENU

typedef struct _saten_menu_icon {
    int tile_id;
    SDL_Point pos;
    bool drawf;
} saten_menu_icon;

saten_menu* saten_menu_create(int mtype, int malign, bool loop, int x, int y);
void saten_menu_update(saten_menu *menu);
void saten_menu_element_add(saten_menu *menu, void *data, int dtype);
void saten_menu_element_colmodw(saten_menu *menu, int id, uint8_t r, uint8_t g,
        uint8_t b, uint8_t a);
void saten_menu_element_colmod_reset(saten_menu *menu, int id);
void saten_menu_element_posw(saten_menu *menu, saten_menu_element *el);
void saten_menu_draw(saten_menu *menu);
void saten_menu_toggle(saten_menu *menu);
void saten_menu_assign_to_player(saten_menu *menu, int id);

void saten_menu_def_iconsetw(saten_sprite *sprite);
void saten_menu_icon_offsetw(saten_menu *menu, int x, int y);
void saten_menu_default_sfxw(Mix_Chunk *acc, Mix_Chunk *can, Mix_Chunk *sel,
        Mix_Chunk *den);

#endif /* SATURN_ENGINE_MENU */
