#include "saturn_engine/core/_lib.h"


saten_mfield mfg; // memory field for glyphs

// private
void saten_mrb_text_init(void)
{
    mrb_define_method(saten_mrb, saten_mrb->object_class,
            "saten_mrb_glyph_init", saten_mrb_text_glyph_init,
            MRB_ARGS_REQ(1));
    mrb_define_method(saten_mrb, saten_mrb->object_class,
            "saten_mrb_load_glyph_file", saten_mrb_text_load_glyph_file,
            MRB_ARGS_REQ(7));

    mfg = saten_mfield_create(SATEN_MB(1));
    struct RClass* _saten_mrb_class_text;
    _saten_mrb_class_text = mrb_define_class_under(saten_mrb,
            _saten_mrb_module, "Text", saten_mrb->object_class);

    mrb_define_class_method(saten_mrb, _saten_mrb_class_text,
            "create", saten_mrb_text_create, MRB_ARGS_REQ(1));
    mrb_define_class_method(saten_mrb, _saten_mrb_class_text,
            "free", saten_mrb_text_free, MRB_ARGS_NONE());
    mrb_define_class_method(saten_mrb, _saten_mrb_class_text,
            "prepare_glyph", saten_mrb_text_prepare_glyph, MRB_ARGS_NONE());
    mrb_define_class_method(saten_mrb, _saten_mrb_class_text,
            "set_glyph_height", saten_mrb_text_set_height, MRB_ARGS_REQ(1));
    mrb_define_class_method(saten_mrb, _saten_mrb_class_text,
            "append_glyph", saten_mrb_text_append_glyph, MRB_ARGS_REQ(3));
    mrb_define_class_method(saten_mrb, _saten_mrb_class_text,
            "get", saten_mrb_text_get, MRB_ARGS_REQ(1));
    mrb_define_class_method(saten_mrb, _saten_mrb_class_text,
            "reset", saten_mrb_text_reset, MRB_ARGS_REQ(2));

    /*
    printf("mfg: %p\n", mfg.ptr);
    char *ptr = saten_mfield_take(&mfg, 1);
    printf("mfg: %p\n", mfg.ptr);
    printf("ptr: %p\n", ptr);
    ptr = saten_mfield_take(&mfg, 4);
    printf("mfg: %p\n", mfg.ptr);
    printf("ptr: %p\n", ptr);
    */
}

mrb_value saten_mrb_text_create(mrb_state *mrb, mrb_value self)
{
    mrb_float a0;
    mrb_value o;
    float a;
    mrb_get_args(saten_mrb, "fo", &a0, &o);
    a = (float)a0;
    saten_latest_text = (saten_text*)saten_malloc(sizeof(saten_text));
    mrb_value ret;
    if (saten_latest_text == NULL) {
        ret = mrb_fixnum_value((mrb_int)1);
    } else {
        //mrb_gc_register(saten_mrb, o);
        saten_latest_text->scale = a;
        saten_latest_text->mrbo = o;
        saten_latest_text->id = saten_text_get_id();
        saten_latest_text->update_flag = true;

        // saten handling
        saten_litem *elem = (saten_litem*)saten_malloc(sizeof(saten_litem));
        elem->current = (void*) saten_latest_text;
        saten_list_insert(saten_list_text, elem);

        mrb_funcall(saten_mrb, saten_latest_text->mrbo, "set_id", 1,
                mrb_fixnum_value(saten_latest_text->id));

        mrb_funcall(saten_mrb, saten_latest_text->mrbo, "set_glyph", 0);
        //saten_text_set_data(text);


        ret = mrb_fixnum_value((mrb_int)0);
    }
    return ret;
}

mrb_value saten_mrb_text_free(mrb_state *mrb, mrb_value self)
{
    //TODO
    return mrb_nil_value();
}

mrb_value saten_mrb_text_prepare_glyph(mrb_state *mrb, mrb_value self)
{
    saten_latest_text = NULL;
    return mrb_nil_value();
}

mrb_value saten_mrb_text_set_height(mrb_state *mrb, mrb_value self)
{
    mrb_int a0;
    int a;
    mrb_get_args(saten_mrb, "i", &a0);
    a = (int)a0;
    saten_text_gheight = a;
    return mrb_nil_value();
}

mrb_value saten_mrb_text_get(mrb_state *mrb, mrb_value self)
{
    mrb_int id0; int id;
    mrb_get_args(saten_mrb, "i", &id0);
    id = (int)id0;
    saten_text *text = saten_text_find(id);
    return text->mrbo;
}

mrb_value saten_mrb_text_reset(mrb_state *mrb, mrb_value self)
{
    mrb_int id0; int id; mrb_float f0; float f;
    mrb_get_args(saten_mrb, "if", &id0, &f0);
    id = (int)id0; f = (float)f0;
    saten_text *text = saten_text_find(id);
    free(text->glyph);
    text->glyph = NULL;
    text->size = 0;
    text->scale = f;
    return mrb_nil_value();
}

mrb_value saten_mrb_text_append_glyph(mrb_state *mrb, mrb_value self)
{
    mrb_int a0, b0, c0, x0, y0, l0, id0;
    //int a, b, c, x, y, i, l, id;
    int a, b, c, x, y, l, id;
    mrb_get_args(saten_mrb, "iiiiiii", &id0, &a0, &b0, &c0, &x0, &y0, &l0);
    a = (int)a0; b = (int)b0; c = (int)c0; x = (int)x0; y = (int)y0;
    l = (int)l0; id = (int)id0;

    saten_text *text = NULL;
    if (saten_latest_text == NULL)
        saten_latest_text = saten_text_find(id);
    text = saten_latest_text;

    saten_text_glyph_create(a, b, c, x, y, l, text);

    return mrb_nil_value();
}

// private
void saten_text_glyph_create(int a, int b, int c, int x, int y, int l,
        saten_text *text)
{
    int i = text->size;
    text->size++;
    text->glyph = (saten_glyph*)saten_realloc(text->glyph,
            text->size * sizeof(saten_glyph));
    text->glyph[i].a = a;
    text->glyph[i].b = b;
    text->glyph[i].c = c;
    text->glyph[i].l = l;


    // offset
    if (i > 0) {
        for (int j = i-1; j >= 0; j--) {
            if (text->glyph[j].l == l) {
                x += text->glyph[j].rect.w;
                x += 2; // padding
            }
        }
    }
    if (l > 0) {
        //y += l * saten_latest_text->glyph[i-1].rect.h;
        y += l * (saten_text_gheight * text->scale);
        y += l * 2; // padding
    }

    text->glyph[i].rect.x = x;
    text->glyph[i].rect.y = y;
    text->glyph[i].rect.w =
        saten_glyph_sets[a].glyph_width[c] * text->scale;
    text->glyph[i].rect.h =
        saten_glyph_sets[a].glyph_height * text->scale;
    if (saten_glyph_sets[a].is_animated) {
        text->glyph[i].is_animated = true;
        text->glyph[i].anum = saten_glyph_sets[a].anum[b];
    } else {
        text->glyph[i].is_animated = false;
    }
    if (i == 0) {
        text->x = text->glyph[i].rect.x;
        text->y = text->glyph[i].rect.y;
        text->w = 0;
        text->h = 0;
    }
    text->w += text->glyph[i].rect.w+2; // include padding
    text->h = (l + 1) * (saten_text_gheight * text->scale) + (l * 2);
}

void saten_text_draw(saten_text *text)
{
    if (text->glyph == NULL) {
        mrb_funcall(saten_mrb, text->mrbo, "set_glyph", 0);
        //saten_text_set_data(text);
    }

    for (int i = 0; i < text->size; i++) {
        if (text->glyph[i].is_animated) {
            SDL_RenderCopyEx(saten_ren,
                    saten_glyph_sets[text->glyph[i].a].
                    glyph[text->glyph[i].b][text->glyph[i].acnt],
                    NULL, &text->glyph[i].rect, 0, NULL, SDL_FLIP_NONE);
            // TODO flexible animation speed
            if (saten_step % 8 == 0) {
                if (text->glyph[i].acnt != text->glyph[i].anum-1) {
                    text->glyph[i].acnt++;
                } else {
                    text->glyph[i].acnt = 0;
                }
            }
        } else {
            SDL_RenderCopyEx(saten_ren,
                    saten_glyph_sets[text->glyph[i].a].
                    glyph[text->glyph[i].b][text->glyph[i].c],
                    NULL, &text->glyph[i].rect, 0, NULL, SDL_FLIP_NONE);
        }
    }
}

saten_text* saten_text_create(float scale, char *str, int x, int y)
{
    mrb_float mrb_scale; mrb_int mrb_x; mrb_int mrb_y;
    mrb_value mrb_str = mrb_str_new_cstr(saten_mrb, str);
    mrb_value mrbarr[4];
    struct RClass* _saten_mrb_class_text;
    _saten_mrb_class_text = mrb_class_get_under(saten_mrb, _saten_mrb_module,
            "Text");

    if (scale <= 0)
        scale = 0.1f;
    if (scale >= 100.0)
        scale = 99.9f;

    mrb_scale = (mrb_float)scale;
    mrb_x = (mrb_int)x;
    mrb_y = (mrb_int)y;
    mrbarr[0] = mrb_str;
    mrbarr[1] = mrb_float_value(saten_mrb, mrb_scale);
    mrbarr[2] = mrb_fixnum_value(mrb_x);
    mrbarr[3] = mrb_fixnum_value(mrb_y);

    mrb_value o = mrb_obj_new(saten_mrb, _saten_mrb_class_text, 4, mrbarr);
    mrb_gc_register(saten_mrb, o);
    return saten_latest_text;
}

void saten_nstot(saten_text *text, char *str, int col, int x, int y)
{
    // string can only contain numbers 0 to 9 and .
    // everything else is ignored
    int i = 0;
    if (text->glyph != NULL) {
        free(text->glyph);
        text->glyph = NULL;
    }
    text->size = 0;

    while (str[i] != '\0') {
        if (str[i] >= 48 && str[i] <= 57) {
            // is in number range
            saten_text_glyph_create(0, col, str[i]-48, x, y, 0, text);
        } else {
            switch (str[i]) {
            case 46: // dot
                saten_text_glyph_create(0, col, 24, x, y, 0, text);
                break;
            case 45: // minus
                saten_text_glyph_create(0, col, 23, x, y, 0, text);
                break;
            default: // invalid
                // ignore
                break;
            }
        }
        i++;
    }
}

void saten_text_set_gheight(int a)
{
    saten_text_gheight = a;
}

void saten_text_destroy(saten_text *ptr)
{
    saten_litem* eptr = NULL;
    saten_list_search(saten_list_text, NULL, &eptr, (void*)ptr);
    mrb_gc_unregister(saten_mrb, ptr->mrbo);
    free(ptr->glyph);
    free(ptr);
    saten_list_remove(saten_list_text, eptr);
}

// private
int saten_text_get_id(void)
{
    int i = 0;
    saten_list_new_id = 0;
    while (true) {
        saten_list_traverse(saten_list_text, saten_text_search_id);
        i++;
        if (saten_list_new_id >= 0)
            break;
        else
            saten_list_new_id = i;
    }
    return saten_list_new_id;
}

// private
void saten_text_search_id(void *item, int i, int num)
{
    saten_text *data = (saten_text*) item;
    if (data->id == saten_list_new_id)
        saten_list_new_id = -1;
}

// public
saten_text* saten_text_find(int id)
{
    saten_list_look_for = id;
    saten_list_found = NULL;
    saten_list_traverse(saten_list_text, saten_text_get);
    saten_text* found = (saten_text*) saten_list_found;
    return found;
}

// private
void saten_text_get(void *item, int i, int num)
{
    saten_text *data = (saten_text*) item;
    if (data->id == saten_list_look_for)
        saten_list_found = data;

}

mrb_value saten_mrb_text_glyph_init(mrb_state *mrb, mrb_value self)
{
    mrb_int n;
    mrb_get_args(saten_mrb, "i", &n);
    saten_glyph_set_n = (uint8_t)n;
    saten_glyph_sets = (saten_glyph_set*)saten_malloc(
            saten_glyph_set_n * sizeof(saten_glyph_set));
    return mrb_nil_value();
}

mrb_value saten_mrb_text_load_glyph_file(mrb_state *mrb, mrb_value self)
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
    saten_glyph_sets[id].is_animated = animated;
    if (cn == 0) {
        if (animated) {
            saten_glyph_sets[id].glyph =
                (SDL_Texture***)saten_malloc(n * sizeof(SDL_Texture**));
            saten_glyph_sets[id].anum =
                (uint8_t*)saten_malloc(n * sizeof(uint8_t));
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
        if (animated && i == n)
            goto SATEN_GLYPH_HANDLER_DONE;
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
                    int gi;
                    gi = glyph_cnt - (i * hn);
                    if (i == 0)
                        gi--; // first line first glyph is not used
                    if (gi >= 0) { // realloc
                        saten_glyph_sets[id].glyph[i] =
                            (SDL_Texture**)saten_realloc(
                                    (void*)saten_glyph_sets[id].glyph[i],
                                    (gi+1) * sizeof(SDL_Texture*));
                    }
                    saten_glyph_sets[id].glyph[i][gi] =
                        SDL_CreateTextureFromSurface(saten_ren, srf);
                    SDL_FreeSurface(srf);
                    saten_glyph_sets[id].glyph_width[i] = w;
                    saten_glyph_sets[id].anum[i] = gi+1;
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
            if (!animated && glyph_cnt == n)
                goto SATEN_GLYPH_HANDLER_DONE;
        }
    }
SATEN_GLYPH_HANDLER_DONE:



    return mrb_nil_value();
}

// public
void saten_text_update(saten_text* text, char *str, float scale, int x, int y)
{
    mrb_value mrb_str;
    if (str)
        mrb_str = mrb_str_new_cstr(saten_mrb, str);
    else
        mrb_str = mrb_nil_value();

    mrb_funcall(saten_mrb, text->mrbo, "update", 4, mrb_str,
            mrb_float_value(saten_mrb, scale), mrb_fixnum_value(x),
            mrb_fixnum_value(y));

}

void saten_text_set_data(saten_text *text)
{
    text->x = text->glyph[0].rect.x;
    text->y = text->glyph[0].rect.y;
    for (int i = 0; i < text->size; i++)
        text->w += text->glyph[i].rect.w;
}

int saten_get_text_height(saten_text *text)
{
    return text->h;
}

int saten_get_text_width(saten_text *text)
{
    return text->w;
}

int saten_get_text_x(saten_text *text)
{
    return text->x;
}

int saten_get_text_y(saten_text *text)
{
    return text->y;
}
