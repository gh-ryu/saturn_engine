void saten_load_sprite(saten_sprite **sprite, char *filename)
{
    *sprite = (saten_sprite*) malloc(sizeof(saten_sprite));
    if (*sprite == NULL)
        saten_errhandler(7);
    memset(*sprite, 0, sizeof(saten_sprite));
    (*sprite)->srf = IMG_Load(filename);

}

void saten_set_texture(saten_sprite *sprite)
{
    sprite->texture = SDL_CreateTextureFromSurface(saten_ren, sprite->srf);
    if (sprite->texture == NULL)
        saten_errhandler(14);
}

void saten_copy_sprite(saten_sprite **sprite_out, saten_sprite *sprite_in)
{
    *sprite_out = (saten_sprite*) malloc(sizeof(saten_sprite));
    if (*sprite_out == NULL)
        saten_errhandler(7);
    memset(*sprite_out, 0, sizeof(saten_sprite));
    (*sprite_out)->srf = SDL_CreateRGBSurfaceWithFormatFrom(
            sprite_in->srf->pixels, sprite_in->srf->w, sprite_in->srf->h,
            sprite_in->srf->format->BitsPerPixel, sprite_in->srf->pitch,
            sprite_in->srf->format->format);
    if ((*sprite_out)->srf == NULL)
        saten_errhandler(15);
}

void saten_set_target_layer(saten_layer **lay)
{
    saten_target_layer = *lay;
}

void saten_layer_set_clip_area(saten_layer *lay, int x, int y, int w, int h)
{
    if (lay->clip_area == NULL) {
        // allocate fresh rect
        lay->clip_area = (SDL_Rect*) malloc(sizeof(SDL_Rect));
        if (lay->clip_area == NULL)
            saten_errhandler(7);
    }
    lay->clip_area->x = x;
    lay->clip_area->y = y;
    lay->clip_area->w = w;
    lay->clip_area->h = h;

    SDL_SetClipRect(lay->srf, lay->clip_area);
}

void saten_create_layer(saten_layer **lay) {
    if (*lay != NULL)
        saten_errhandler(13);
    *lay = (saten_layer*) malloc(sizeof(saten_layer));
    if (*lay == NULL)
        saten_errhandler(7); 
    memset(*lay, 0, sizeof(saten_layer));

    // setup surface
    //TODO
    //SDL_Surface* surface = NULL;

    
    //
    saten_litem *elem = (saten_litem*) malloc(sizeof(saten_litem));
    if (elem == NULL)
        saten_errhandler(7); 
    memset(elem, 0, sizeof(saten_litem));
    elem->current = (void*) *lay;
    saten_list_insert(saten_list_layer, elem);
}

void saten_destroy_layer(saten_layer *lay)
{
    saten_litem* eptr = NULL;
    saten_list_search(saten_list_layer, NULL, &eptr, (void*)lay);
    SDL_FreeSurface(lay->srf);
    free(lay->clip_area);
    saten_list_remove(saten_list_layer, eptr);
    free(lay);
}
