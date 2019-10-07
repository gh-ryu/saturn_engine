#ifndef SATURN_ENGINE_MENU
#define SATURN_ENGINE_MENU

saten_menu* saten_menucreate(int mtype, int malign, bool loop, int x, int y);
void saten_menuaddel(saten_menu *menu, void *data, int dtype);
void saten_menumodel(saten_menu *menu, int id, uint8_t r, uint8_t g,
        uint8_t b, uint8_t a);
void saten_menuremelmod(saten_menu *menu, int id);
void saten_menudraw(saten_menu *menu);

#endif /* SATURN_ENGINE_MENU */
