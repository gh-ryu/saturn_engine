void saten_mrb_function_setup(void)
{
    mrb_define_method(saten_mrb, saten_mrb->object_class,
            "saten_mrb_load_glyph_file", saten_mrb_load_glyph_file,
            MRB_ARGS_NONE());
}
mrb_value saten_mrb_load_glyph_file(mrb_state *mrb, mrb_value self)
{
    printf("mrb function runs.\n");
    //char *string = NULL;
    char str[255] = { 0 };
    printf("mrb function runs..\n");
    mrb_get_args(saten_mrb, "s", str);
    printf("mrb function runs...\n");
    printf("mruby string: %d\n", str[0]);
    printf("mrb function runs....\n");
    return mrb_nil_value();
}

