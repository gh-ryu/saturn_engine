#ifndef SATURN_ENGINE_MENU
#define SATURN_ENGINE_MENU

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

#endif /* SATURN_ENGINE_MENU */
