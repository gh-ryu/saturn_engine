// private
void saten_mrb_text_init(void)
{
    struct RClass* _saten_mrb_class_text;
    _saten_mrb_class_text = mrb_define_class_under(saten_mrb,
            _saten_mrb_module, "Text", saten_mrb->object_class);

    mrb_define_class_method(saten_mrb, _saten_mrb_class_text,
            "create", saten_mrb_text_create, MRB_ARGS_NONE());
    mrb_define_class_method(saten_mrb, _saten_mrb_class_text,
            "free", saten_mrb_text_free, MRB_ARGS_NONE());
    mrb_define_class_method(saten_mrb, _saten_mrb_class_text,
            "append_glyph", saten_mrb_text_append_glyph, MRB_ARGS_REQ(3));

}

mrb_value saten_mrb_text_create(mrb_state *mrb, mrb_value self)
{
    printf("called text create...\n");
    //saten_latest_text = saten_text_create(n); // list canned
    saten_latest_text = (saten_text*)saten_malloc(sizeof(saten_text));
    mrb_value ret;
    if (saten_latest_text == NULL)
        ret = mrb_fixnum_value((mrb_int)1);
    else
        ret = mrb_fixnum_value((mrb_int)0);
    return ret;

}

mrb_value saten_mrb_text_free(mrb_state *mrb, mrb_value self)
{
    //printf("called text free...\n");
    return mrb_nil_value();
}

mrb_value saten_mrb_text_append_glyph(mrb_state *mrb, mrb_value self)
{
    //TODO set position as rect?
    printf("called append glyph..\n");
    mrb_int a0, b0, c0, x0, y0;
    int a, b, c, x, y, i;
    mrb_get_args(saten_mrb, "iiiii", &a0, &b0, &c0, &x0, &y0);
    a = (int)a0; b = (int)b0; c = (int)c0; x = (int)x0; y = (int)y0;

    i = saten_latest_text->size;

    saten_latest_text->size++;
    saten_latest_text->glyph = (saten_glyph*)saten_realloc(
            saten_latest_text->glyph,
            saten_latest_text->size * sizeof(saten_glyph));

    saten_latest_text->glyph[i].a = a;
    saten_latest_text->glyph[i].b = b;
    saten_latest_text->glyph[i].c = c;
    saten_latest_text->glyph[i].x = x;
    saten_latest_text->glyph[i].y = y;
    printf("curr size: %d\n", saten_latest_text->size);
    return mrb_nil_value();
}
