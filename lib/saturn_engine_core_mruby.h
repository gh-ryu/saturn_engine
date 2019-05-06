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
    saten_glyph_sets = malloc(saten_glyph_set_n * sizeof(saten_glyph_set));
    if (saten_glyph_sets == NULL)
        saten_errhandler(7);
    memset(saten_glyph_sets, 0, saten_glyph_set_n * sizeof(saten_glyph_set));
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
    mrb_get_args(saten_mrb, "iziiib", &mrb_id, &string, &mrb_n, &mrb_cn,
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
    saten_glyph_sets[id].glyph = malloc (cn * sizeof(SDL_Texture**));
    if (saten_glyph_sets[id].glyph == NULL)
        saten_errhandler(7);
    memset(saten_glyph_sets[id].glyph, 0, cn * sizeof(SDL_Texture**));
    saten_glyph_sets[id].glyph_width = malloc(n * sizeof(uint8_t));
    if (saten_glyph_sets[id].glyph_width == NULL)
        saten_errhandler(7);
    memset(saten_glyph_sets[id].glyph_width, 0, n * sizeof(uint8_t));
    saten_glyph_sets[id].cn = cn;
    saten_glyph_sets[id].n = n;
    for (int i = 0; i < cn; i++) {
        saten_glyph_sets[id].glyph[i] = malloc (n * sizeof(SDL_Texture*));
        if (saten_glyph_sets[id].glyph[id] == NULL)
            saten_errhandler(7);
        memset(saten_glyph_sets[id].glyph[i], 0, n * sizeof(SDL_Texture*));
        if (animated) // only need memory for one "color"
            break;
    }
    // can now assign textures to saten_glyph_sets[id].glyph[color][glyph]
    sprite = saten_sprite_load(string);



    return mrb_nil_value();
}
