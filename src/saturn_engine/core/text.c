#include "saturn_engine/core/_lib.h"

static int *remap_from; // Dynamic array
static int *remap_to;   // Dynamic array
static int remapn;      // Current number of remappings

static bool remapf;    //

//static saten_mfield mfg; // memory field for glyphs
static int wspace_width = SATEN_CORE_TEXT_WSPACE_WIDTH_DEFAULT;
static int xpad = SATEN_CORE_TEXT_XPAD_DEFAULT;
static int ypad = SATEN_CORE_TEXT_YPAD_DEFAULT;

// private
void saten_mrb_text_init(void)
{
    mrb_define_method(saten_mrb, saten_mrb->object_class,
            "saten_mrb_glyph_init", saten_mrb_text_glyph_init,
            MRB_ARGS_REQ(1));
    mrb_define_method(saten_mrb, saten_mrb->object_class,
            "saten_mrb_load_glyph_file", saten_mrb_text_load_glyph_file,
            MRB_ARGS_REQ(7));

    //mfg = saten_mfield_create(SATEN_MB(20));
    
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
    mrb_define_class_method(saten_mrb, _saten_mrb_class_text,
            "set_size", saten_mrb_text_set_size, MRB_ARGS_REQ(2));
    mrb_define_class_method(saten_mrb, _saten_mrb_class_text,
            "remap", saten_mrb_text_remap, MRB_ARGS_REQ(2));
    mrb_define_class_method(saten_mrb, _saten_mrb_class_text,
            "remap_reset", saten_mrb_text_remap_reset, MRB_ARGS_NONE());
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

        // Register remappings
        if (remapf) {
            size_t remap_size = remapn * sizeof(int);
            saten_latest_text->remapn = remapn;
            saten_latest_text->remap_from = (int*)saten_malloc(remap_size);
            saten_latest_text->remap_to = (int*)saten_malloc(remap_size);

            memcpy(saten_latest_text->remap_from, remap_from, remap_size);
            memcpy(saten_latest_text->remap_to, remap_to, remap_size);
        }

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
    //free(text->glyph);
    //text->glyph = NULL;
    text->size = 0;
    text->scale = f;
    return mrb_nil_value();
}

mrb_value saten_mrb_text_set_size(mrb_state *mrb, mrb_value self)
{
    mrb_int a0; mrb_int id0;
    int a; int id;
    mrb_get_args(saten_mrb, "ii", &id0, &a0);
    a = (int)a0;
    id = (int)id0;
    saten_text *text = saten_text_find(id);
    text->size_calc = a;
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
    static int clinew = 0; // Current line's width
    static int tlinew = 0; // Longest line's width
    static int cl     = 0; // Current line
    int i = text->size;

    if (i == 0) {
        clinew  = 0;
        tlinew  = 0;
        cl      = 0;
        text->w = 0;
        text->h = 0;
    }

    /*
    if (i == SATEN_TEXT_GLYPH_MAX)
        return; // skip glyphs that overflow
        */
    text->size++;
    if (i == 0 ) {
        /*
        // take some preallocated memory
        text->glyph = (saten_glyph*)saten_mfield_take(&mfg,
                sizeof(saten_glyph) * SATEN_TEXT_GLYPH_MAX);
                */
        // Realloc memory once per update
#if defined(_DEBUG) && defined(_SATEN_CORE_TEXT_DEBUG)
        printf("size_calc: %d, size_alloc: %d\n",
                text->size_calc, text->size_alloc);
#endif
        if (text->size_calc > text->size_alloc) {
            text->glyph = (saten_glyph*)saten_realloc(text->glyph,
                    text->size_calc * sizeof(saten_glyph));
            text->size_alloc = text->size_calc;
        }
    }
#if defined(_DEBUG) && defined(_SATEN_CORE_TEXT_DEBUG)
    if (text->glyph == NULL)
        printf("wtf!\n");
#endif
    //text->glyph = (saten_glyph*)saten_realloc(text->glyph,
    //        text->size * sizeof(saten_glyph));
    // Consider remappings
    if (text->remapn > 0) {
        for (int i = 0; i < text->remapn; i++) {
            if (text->remap_from[i] == a) {
                a = text->remap_to[i];
                break;
            }
        }
    }
    text->glyph[i].a = a;
    text->glyph[i].b = b;
    text->glyph[i].c = c;
    text->glyph[i].l = l;

    // offset
    if (i > 0) {
        for (int j = i-1; j >= 0; j--) {
            if (text->glyph[j].l == l) {
                if (text->glyph[j].a == 0 && text->glyph[j].c == 10) {
                    x += wspace_width;
                } else {
                    x += text->glyph[j].rect.w;
                    x += xpad; // padding
                }
            }
        }
    }
    if (l > 0) {
        //y += l * saten_latest_text->glyph[i-1].rect.h;
        y += l * (saten_text_gheight * text->scale);
        y += l * ypad; // padding
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

    // New line
    if (cl < l ) {
        if (clinew > tlinew)
            tlinew = clinew;
        clinew = 0;
        cl++;
    }

    // Set text dimensions
    if (text->glyph[i].a == 0 && text->glyph[i].c == 1)
        clinew += wspace_width; // include padding
    else
        clinew += text->glyph[i].rect.w+xpad; // include padding
    text->h = (l + 1) * (saten_text_gheight * text->scale) + (l * ypad);

    if (clinew > tlinew)
        text->w = clinew;
    else
        text->w = tlinew;
}

void saten_text_draw(saten_text *text)
{
    if (text->glyph == NULL) {
        mrb_funcall(saten_mrb, text->mrbo, "set_glyph", 0);
        //saten_text_set_data(text);
    }

    SDL_Rect trgt = { 0 };

    for (int i = 0; i < text->size; i++) {
        /*
        if (i == SATEN_TEXT_GLYPH_MAX)
            return ; // prevent overflow
            */
        if (text->glyph[i].is_animated) {
            if (text->modf) {
                SDL_SetTextureColorMod(saten_glyph_sets[text->glyph[i].a].
                        glyph[text->glyph[i].b][text->glyph[i].acnt],
                        text->mod.r, text->mod.g, text->mod.b);
                SDL_SetTextureAlphaMod(saten_glyph_sets[text->glyph[i].a].
                        glyph[text->glyph[i].b][text->glyph[i].acnt],
                        text->mod.a);
            }
            trgt = text->glyph[i].rect;
            trgt.x += text->x;
            trgt.y += text->y;
            SDL_RenderCopyEx(saten_ren,
                    saten_glyph_sets[text->glyph[i].a].
                    glyph[text->glyph[i].b][text->glyph[i].acnt],
                    //NULL, &text->glyph[i].rect, 0, NULL, SDL_FLIP_NONE);
                    NULL, &trgt, 0, NULL, SDL_FLIP_NONE);
            if (text->modf) {
                SDL_SetTextureColorMod(saten_glyph_sets[text->glyph[i].a].
                        glyph[text->glyph[i].b][text->glyph[i].acnt],
                        255, 255, 255);
                SDL_SetTextureAlphaMod(saten_glyph_sets[text->glyph[i].a].
                        glyph[text->glyph[i].b][text->glyph[i].acnt], 255);
            }

            // TODO flexible animation speed
            if (saten_step % 8 == 0) {
                if (text->glyph[i].acnt != text->glyph[i].anum-1) {
                    text->glyph[i].acnt++;
                } else {
                    text->glyph[i].acnt = 0;
                }
            }
        } else {
            if (text->modf) {
                SDL_SetTextureColorMod(saten_glyph_sets[text->glyph[i].a].
                        glyph[text->glyph[i].b][text->glyph[i].c],
                        text->mod.r, text->mod.g, text->mod.b);
                SDL_SetTextureAlphaMod(saten_glyph_sets[text->glyph[i].a].
                        glyph[text->glyph[i].b][text->glyph[i].c],
                        text->mod.a);
            }
            trgt = text->glyph[i].rect;
            trgt.x += text->x;
            trgt.y += text->y;
            SDL_RenderCopyEx(saten_ren,
                    saten_glyph_sets[text->glyph[i].a].
                    glyph[text->glyph[i].b][text->glyph[i].c],
                    //NULL, &text->glyph[i].rect, 0, NULL, SDL_FLIP_NONE);
                    NULL, &trgt, 0, NULL, SDL_FLIP_NONE);
            if (text->modf) {
                SDL_SetTextureColorMod(saten_glyph_sets[text->glyph[i].a].
                        glyph[text->glyph[i].b][text->glyph[i].c],
                        255, 255, 255);
                SDL_SetTextureAlphaMod(saten_glyph_sets[text->glyph[i].a].
                        glyph[text->glyph[i].b][text->glyph[i].c], 255);
            }
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

// public?
void saten_nstot(saten_text *text, char *str, int col, int x, int y)
{
    // string can only contain numbers 0 to 9 and .
    // everything else is ignored
    int i = 0;
    /* Changes to realloc anyways
    if (text->glyph != NULL) {
        //free(text->glyph);
        text->glyph = NULL;
    }
    */
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

// public
void saten_text_destroy(saten_text *ptr)
{
    free(ptr->glyph);
    saten_litem* eptr = NULL;
    saten_list_search(saten_list_text, NULL, &eptr, (void*)ptr);
    mrb_gc_unregister(saten_mrb, ptr->mrbo);
    //free(ptr->glyph);
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
                    // Glyph starts at fully black or white pixel
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
                            // If pixel is black draw it according to color
                            // otherwise don't add the pixel to glyph
                            SDL_Color pcol = { pixbuff[l].r, pixbuff[l].g,
                                pixbuff[l].b, pixbuff[l].a };
                            SDL_Color black = { 0, 0, 0, 255 };
                            //SDL_Color white = { 255, 255, 255, 255 };
                            SDL_Color red   = { 255, 0, 0, 255 };
                            if (saten_test_rgbi(pcol, black) ||
                                saten_test_rgbi(pcol, red)) {
                                // Color
                                uint8_t r, g, b, a;
                                uint32_t pixel =
                                    saten_pixel_get(sprite, SATEN_SPRITE,
                                            pixbuff[l].x + (k * w),
                                            pixbuff[l].y);
                                SDL_GetRGBA(pixel, sprite->srf->format,
                                        &r, &g, &b, &a);
                                if (saten_test_rgbi(pcol, red)) {
                                    // Shadow
                                    r = r/2;
                                    g = g/2;
                                    b = b/2;
                                }
                                uint32_t pnew = SDL_MapRGBA(srf->format,
                                        r, g, b, a);
                                saten_pixel_put(srf, SATEN_SURFACE,
                                        pixbuff[l].x - gstart, pixbuff[l].y,
                                        pnew);
                            } else {
                                // Invisible
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

    /*
    mrb_funcall(saten_mrb, text->mrbo, "update", 4, mrb_str,
            mrb_float_value(saten_mrb, scale), mrb_fixnum_value(x),
            mrb_fixnum_value(y));
            */
    mrb_funcall(saten_mrb, text->mrbo, "update", 4, mrb_str,
            mrb_float_value(saten_mrb, scale), mrb_fixnum_value(0),
            mrb_fixnum_value(0));

}

void saten_text_set_data(saten_text *text)
{
    //text->x = text->glyph[0].rect.x;
    //text->y = text->glyph[0].rect.y;
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

// private
void saten_text_quit(void)
{
    mrb_load_string(saten_mrb, "Saten::Text.remap_reset()");
    //saten_mfield_destroy(&mfg);
    saten_list_destroy(saten_list_text);
    for (int i = 0; i < saten_glyph_set_n; i++) {
        free(saten_glyph_sets[i].glyph_width);
        for (int j = 0; j == 0 || j < saten_glyph_sets[i].cn; j++) {
            for (int k = 0; k < saten_glyph_sets[i].n; k++)
                SDL_DestroyTexture(saten_glyph_sets[i].glyph[j][k]);
            free(saten_glyph_sets[i].glyph[j]);
        }
        free(saten_glyph_sets[i].glyph);
    }
    free(saten_glyph_sets);
}

void saten_text_modglyph(saten_text *text, SDL_Color *mod)
{
    text->modf = true;
    text->mod  = *mod;
}

void saten_text_unmodglyph(saten_text *text)
{
    text->modf = false;
}

void saten_text_posw(saten_text *text, int x, int y) /* PUBLIC */
{
    text->x = x;
    text->y = y;
}

mrb_value saten_mrb_text_remap(mrb_state *mrb, mrb_value self)
{
    mrb_int from0; mrb_int to0;
    int from; int to;
    mrb_get_args(saten_mrb, "ii", &from0, &to0);
    from = (int)from0;
    to = (int)to0;
    if (!remapf) {
        SATEN_DARR_INIT(int, remap_from);
        SATEN_DARR_INIT(int, remap_to);
        remapf = true;
    }

    SATEN_DARR_PUSH(remap_from, from);
    SATEN_DARR_PUSH(remap_to, to);
    remapn++;

    return mrb_nil_value();
}

mrb_value saten_mrb_text_remap_reset(mrb_state *mrb, mrb_value self)
{
    if (remapf) {
        SATEN_DARR_DESTROY(remap_from);
        SATEN_DARR_DESTROY(remap_to);
        remapn = 0;
        remapf = false;
    }
    return mrb_nil_value();
}
