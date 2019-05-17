void saten_mrb_function_setup(void)
{
    mrb_define_method(saten_mrb, saten_mrb->object_class,
            "saten_mrb_glyph_init", saten_mrb_glyph_init,
            MRB_ARGS_REQ(1));
    mrb_define_method(saten_mrb, saten_mrb->object_class,
            "saten_mrb_load_glyph_file", saten_mrb_load_glyph_file,
            MRB_ARGS_REQ(7));
}

mrb_value saten_mrb_glyph_init(mrb_state *mrb, mrb_value self)
{
    mrb_int n;
    mrb_get_args(saten_mrb, "i", &n);
    saten_glyph_set_n = (uint8_t)n;
    saten_glyph_sets = (saten_glyph_set*)saten_malloc(
            saten_glyph_set_n * sizeof(saten_glyph_set));
    return mrb_nil_value();
}

mrb_value saten_mrb_load_glyph_file(mrb_state *mrb, mrb_value self)
{
    char *string;
    mrb_int mrb_id, mrb_n, mrb_cn, mrb_w, mrb_h;
    mrb_bool mrb_animated;
    int id, n, cn,  w, h;
    bool animated;
    saten_sprite *sprite;
    mrb_get_args(saten_mrb, "iziiiib", &mrb_id, &string, &mrb_n, &mrb_cn,
            &mrb_w, &mrb_h, &mrb_animated);
    id = (int)mrb_id;
    n = (int)mrb_n;
    cn = (int)mrb_cn;
    w = (int)mrb_w;
    h = (int)mrb_h;
    animated = (bool)mrb_animated;
    if (id >= saten_glyph_set_n) {
        saten_errhandler(35);
        return mrb_nil_value();
    }
    if (saten_glyph_sets[id].flag) {
        saten_errhandler(36);
        return mrb_nil_value();
    }
    saten_glyph_sets[id].flag = true;
    if (cn == 0) {
        if (animated) {
            saten_glyph_sets[id].glyph =
                (SDL_Texture***)saten_malloc(n * sizeof(SDL_Texture**));
        } else {
            saten_glyph_sets[id].glyph =
                (SDL_Texture***)saten_malloc(sizeof(SDL_Texture**));
        }
    } else { 
        saten_glyph_sets[id].glyph =
            (SDL_Texture***)saten_malloc(cn * sizeof(SDL_Texture**));
    }
    saten_glyph_sets[id].glyph_width =
        (uint8_t*)saten_malloc(n * sizeof(uint8_t));
    saten_glyph_sets[id].cn = cn;
    saten_glyph_sets[id].n = n;
    saten_glyph_sets[id].glyph_height = h;
    if (cn == 0) { // only one texture per glyph
        if (animated) { // for now reserve space for one glyph per sprite
            for (int i = 0; i < n; i++) {
                saten_glyph_sets[id].glyph[i] =
                    (SDL_Texture**)saten_malloc(sizeof(SDL_Texture*));
                // space for remaining glyphs will be allocated dynamically
            }
        } else {
            saten_glyph_sets[id].glyph[0] =
                (SDL_Texture**)saten_malloc(n * sizeof(SDL_Texture*));
        }
    }
    // standard behavior for regular glyph sets
    for (int i = 0; i < cn; i++) {
        saten_glyph_sets[id].glyph[i] =
            (SDL_Texture**)saten_malloc(n * sizeof(SDL_Texture*));
    }
    // can now assign textures to saten_glyph_sets[id].glyph[color][glyph]
    sprite = saten_sprite_load(string);
    // scan each glyph
    int hn, vn, srow, pn, glyph_cnt;
    glyph_cnt = 0;
    hn = sprite->srf->w / w;
    vn = sprite->srf->h / h;
    pn = w * h;
    if (cn > hn) {
        saten_errhandler(37);
        return mrb_nil_value();
    }

    if (cn == 0)
        srow = 0;
    else
        srow = 1; // ignore first row, it's color information
        
    for (int i = srow; i < vn; i++) { // each line of glyphs...
        for (int j = 0; j < hn; j++) { // each glyph
            // scan glyph
            int gstart, gend, pid, gwidth, tcnt;
            bool gstart_set = false;
            pid = 0; gstart = 0; gend = 0, gwidth = 0;
            tcnt = 0;
            saten_spixel pixbuff[pn];
            for (int k = j * w, k2 = 0; k < (j * w) + w; k++, k2++) {
                for (int l = i * h, l2 = 0; l < (i * h) + h; l++, l2++) {
                    // k=pixel x, l=pixel y
                    uint8_t r, g, b, a;
                    uint32_t pixel =
                        saten_pixel_get(sprite, SATEN_SPRITE, k, l);
                    SDL_GetRGBA(pixel, sprite->srf->format, &r, &g, &b, &a);
                    if (saten_test_rgb(r, g, b, 255) ||
                            saten_test_rgb(r, g, b, 0)) {
                        if (!gstart_set) {
                            gstart = k2;
                            gstart_set = true;
                        }
                        gend = k2;
                    }
                    pixbuff[pid] = (saten_spixel){ k2, l2, r, g, b, a };
                    pid++;
                }
            }
            gwidth = (gend - gstart) + 1;
            // get textures
            if (cn > 0) { // normal text glyphs
                for (int k = 0; k < cn; k++) { // for each color
                    SDL_Surface *srf = NULL;
                    srf = saten_surface_create(gwidth, h, 32);
                    for (int l = 0; l < pn; l++) { // iterate pixel array
                        if (pixbuff[l].x >= gstart && pixbuff[l].x <= gend) {
                            if (saten_test_rgb(pixbuff[l].r, pixbuff[l].g,
                                        pixbuff[l].b, 0)) {
                                // draw this pixel according to color
                                uint8_t r, g, b, a;
                                uint32_t pixel =
                                    saten_pixel_get(sprite, SATEN_SPRITE,
                                            pixbuff[l].x + (k * w),
                                            pixbuff[l].y);
                                SDL_GetRGBA(pixel, sprite->srf->format,
                                        &r, &g, &b, &a);
                                uint32_t pnew = SDL_MapRGBA(srf->format,
                                        r, g, b, a);
                                //uint32_t pnew = SDL_MapRGBA(srf->format,
                                //        pixbuff[l].r, pixbuff[l].g,
                                //        pixbuff[l].b, pixbuff[l].a);
                                saten_pixel_put(srf, SATEN_SURFACE,
                                        pixbuff[l].x - gstart, pixbuff[l].y,
                                        pnew);
                            } else {
                                // invisible
                                uint32_t pnew = SDL_MapRGBA(srf->format,
                                        0, 0, 0, 0);
                                saten_pixel_put(srf, SATEN_SURFACE,
                                        pixbuff[l].x - gstart, pixbuff[l].y,
                                        pnew);
                            }
                        }
                    }
                    saten_glyph_sets[id].glyph[k][glyph_cnt] =
                        SDL_CreateTextureFromSurface(saten_ren, srf);
                    SDL_FreeSurface(srf);
                }
                // save width
                saten_glyph_sets[id].glyph_width[glyph_cnt] = gwidth;
                gstart_set = false;
            } else { // icons and animated icons
                SDL_Surface *srf = NULL;
                srf = saten_surface_create(w, h, 32);
                uint8_t tr, tg, tb, ta;
                uint32_t nopixel = saten_pixel_get(sprite, SATEN_SPRITE, 0, 0);
                SDL_GetRGBA(nopixel, sprite->srf->format, &tr, &tg, &tb, &ta);
                if (animated && glyph_cnt == 0) {
                    SDL_FreeSurface(srf);
                    goto SATEN_GLYPH_SKIP;
                }
                for (int l = 0; l < pn; l++) {
                    if (pixbuff[l].r == tr && pixbuff[l].g == tg &&
                            pixbuff[l].b == tb) {
                        // transparent
                        uint32_t pnew = SDL_MapRGBA(srf->format, 0, 0, 0, 0);
                        saten_pixel_put(srf, SATEN_SURFACE, pixbuff[l].x,
                                pixbuff[l].y, pnew);
                        tcnt++;
                    } else {
                        uint32_t pnew = SDL_MapRGBA(srf->format, pixbuff[l].r,
                                pixbuff[l].g, pixbuff[l].b, pixbuff[l].a);
                        saten_pixel_put(srf, SATEN_SURFACE, pixbuff[l].x,
                                pixbuff[l].y, pnew);
                    }
                }
                if (tcnt == pn) {
                    SDL_FreeSurface(srf);
                    goto SATEN_GLYPH_SKIP;
                }
                if (animated) {
                } else {
                    saten_glyph_sets[id].glyph[0][glyph_cnt] =
                        SDL_CreateTextureFromSurface(saten_ren, srf);
                    SDL_FreeSurface(srf);
                    saten_glyph_sets[id].glyph_width[glyph_cnt] = w;
                }
            }
            // finish
SATEN_GLYPH_SKIP:
            glyph_cnt++;
            if (glyph_cnt == n)
                goto SATEN_GLYPH_HANDLER_DONE;
            
        }
    }
SATEN_GLYPH_HANDLER_DONE:
    //printf("r %d, g %d, b %d, a %d\n", r, g, b , a);
    //printf("h tiles: %d, v tiles: %d\n", hn, vn);



    return mrb_nil_value();
}
