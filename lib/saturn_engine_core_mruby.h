void saten_mrb_function_setup(void)
{
    mrb_define_method(saten_mrb, saten_mrb->object_class,
            "saten_mrb_load_glyph_file", saten_mrb_load_glyph_file,
            MRB_ARGS_REQ(1));
}
mrb_value saten_mrb_load_glyph_file(mrb_state *mrb, mrb_value self)
{
    char *string;
    saten_sprite *sprite;
    mrb_get_args(saten_mrb, "z", &string);

    sprite = saten_sprite_load(string);


    return mrb_nil_value();
}
