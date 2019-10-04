#ifndef SATURN_ENGINE_MENU
#define SATURN_ENGINE_MENU

saten_menu* saten_menucreate(enum saten_menut mtype, enum saten_align malign,
        bool loop, int x, int y);
void saten_menuaddel(saten_menu *menu, void *data, enum saten_menuelt dtype);

#endif /* SATURN_ENGINE_MENU */
