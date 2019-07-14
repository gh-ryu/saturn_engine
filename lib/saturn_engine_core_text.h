// private
void saten_mrb_text_init(void)
{
    struct RClass* _saten_mrb_class_text;
    _saten_mrb_class_text = mrb_define_class_under(saten_mrb,
            _saten_mrb_module, "Text", saten_mrb->object_class);

    mrb_define_class_method(saten_mrb, _saten_mrb_class_text,
            "create", saten_mrb_text_create, MRB_ARGS_REQ(1));
    mrb_define_class_method(saten_mrb, _saten_mrb_class_text,
            "free", saten_mrb_text_free, MRB_ARGS_NONE());
    mrb_define_class_method(saten_mrb, _saten_mrb_class_text,
            "set_glyph_height", saten_mrb_text_set_height, MRB_ARGS_REQ(1));
    mrb_define_class_method(saten_mrb, _saten_mrb_class_text,
            "append_glyph", saten_mrb_text_append_glyph, MRB_ARGS_REQ(3));

}

mrb_value saten_mrb_text_create(mrb_state *mrb, mrb_value self)
{
    mrb_float a0;
    float a;
    mrb_get_args(saten_mrb, "f", &a0);
    a = (float)a0;
    //saten_latest_text = saten_text_create(n); // list canned
    saten_latest_text = (saten_text*)saten_malloc(sizeof(saten_text));
    mrb_value ret;
    if (saten_latest_text == NULL) {
        ret = mrb_fixnum_value((mrb_int)1);
    }
    else {
        saten_latest_text->scale = a;
        ret = mrb_fixnum_value((mrb_int)0);
    }
    return ret;

}

mrb_value saten_mrb_text_free(mrb_state *mrb, mrb_value self)
{
    //printf("called text free...\n");
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

mrb_value saten_mrb_text_append_glyph(mrb_state *mrb, mrb_value self)
{
    mrb_int a0, b0, c0, x0, y0, l0;
    int a, b, c, x, y, i, l;
    mrb_get_args(saten_mrb, "iiiiii", &a0, &b0, &c0, &x0, &y0, &l0);
    a = (int)a0; b = (int)b0; c = (int)c0; x = (int)x0; y = (int)y0;
    l = (int)l0;

    i = saten_latest_text->size;

    saten_latest_text->size++;
    saten_latest_text->glyph = (saten_glyph*)saten_realloc(
            saten_latest_text->glyph,
            saten_latest_text->size * sizeof(saten_glyph));

    saten_latest_text->glyph[i].a = a;
    saten_latest_text->glyph[i].b = b;
    saten_latest_text->glyph[i].c = c;
    saten_latest_text->glyph[i].l = l;

    // offset
    if (i > 0) {
        for (int j = i-1; j >= 0; j--) {
            if (saten_latest_text->glyph[j].l == l) {
                x += saten_latest_text->glyph[j].rect.w;
                x += 2; // padding
            }
        }
    }
    printf("y before offset: %d\n", y);
    if (l > 0) {
        //y += l * saten_latest_text->glyph[i-1].rect.h;
        y += l * (saten_text_gheight * saten_latest_text->scale);
        y += l * 2; // padding
    }
    printf("y after offset: %d\n", y);

    saten_latest_text->glyph[i].rect.x = x;
    saten_latest_text->glyph[i].rect.y = y;
    saten_latest_text->glyph[i].rect.w =
        saten_glyph_sets[a].glyph_width[c] * saten_latest_text->scale;
    saten_latest_text->glyph[i].rect.h =
        saten_glyph_sets[a].glyph_height * saten_latest_text->scale;
    return mrb_nil_value();
}

void saten_text_draw(saten_text *text)
{
    for (int i = 0; i < text->size; i++) {
        SDL_RenderCopyEx(saten_ren,
                saten_glyph_sets[text->glyph[i].a].
                glyph[text->glyph[i].b][text->glyph[i].c],
                NULL, &text->glyph[i].rect, 0, NULL, SDL_FLIP_NONE);
    }
}

saten_text* saten_text_create(float scale, char *str, int x, int y)
{
    size_t l = strlen(str) + 1;
    size_t lx = saten_intlen(x);
    size_t ly = saten_intlen(y);
    if (scale <= 0)
        scale = 0.1f;
    if (scale >= 10.0)
        scale = 9.9f;

    //char prefix[] = "Saten::Text.set(nil, , )";
    //size_t lp = strlen(prefix);
    char cstr[l+lx+ly+25];
    //#Saten::Text.set(nil, 2368572305, 0, 0)
    sprintf(cstr, "Saten::Text.set(%0.1f, \"%s\", %d, %d)", scale, str, x, y);
    //printf("%s\n", cstr);
    mrb_load_string(saten_mrb, cstr);
    return saten_latest_text;
}

void saten_text_set_gheight(int a)
{
    saten_text_gheight = a;
}
