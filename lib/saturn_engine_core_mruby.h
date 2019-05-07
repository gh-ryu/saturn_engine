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
    saten_glyph_sets[id].glyph =
        (SDL_Texture***)saten_malloc(cn * sizeof(SDL_Texture**));
    saten_glyph_sets[id].glyph_width =
        (uint8_t*)saten_malloc(n * sizeof(uint8_t));
    saten_glyph_sets[id].cn = cn;
    saten_glyph_sets[id].n = n;
    saten_glyph_sets[id].glyph_height = h;
    for (int i = 0; i < cn; i++) {
        saten_glyph_sets[id].glyph[i] =
            (SDL_Texture**)saten_malloc(n * sizeof(SDL_Texture*));
        if (animated) // only need memory for one "color"
            break;
    }
    // can now assign textures to saten_glyph_sets[id].glyph[color][glyph]
    sprite = saten_sprite_load(string);
    // scan each glyph
    int hn, vn, srow;
    hn = sprite->srf->w / w;
    vn = (sprite->srf->h / h); // ignore first row, it's color information

    if (animated)
        srow = 0;
    else
        srow = 1;
        
    for (int i = srow; i < vn; i++) { // each line of glyphs...
        for (int j = 0; j < vh; j++) { // each glyph
            // scan glyph
            
            // get texture
            
            // save width
        }
    }

    uint8_t r, g, b, a;
    uint32_t pixel = saten_pixel_get(sprite, SATEN_SPRITE, 0, 18);
    SDL_GetRGBA(pixel, sprite->srf->format, &r, &g, &b, &a);
    printf("r %d, g %d, b %d, a %d\n", r, g, b , a);
    printf("h tiles: %d, v tiles: %d\n", hn, vn);



    return mrb_nil_value();
}
