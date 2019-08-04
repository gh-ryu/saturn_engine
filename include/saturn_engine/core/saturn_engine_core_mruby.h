#ifndef SATURN_ENGINE_CORE_MRUBY
#define SATURN_ENGINE_CORE_MRUBY

int saten_mrb_init(void)
{
    saten_mrb = mrb_open();
    if (!saten_mrb) {
        saten_errhandler(34);
        return -1;
    }
    saten_mrbc = mrbc_context_new(saten_mrb);

    _saten_mrb_module = mrb_define_module(saten_mrb, "Saten");

    if (saten_flag_check(SATEN_TEXT, saten_core_flags)) {
        saten_mrb_text_init();
        saten_list_init(&saten_list_text, sizeof(saten_text));
        FILE *f = NULL;
        saten_fopen(&f, "script/saten_script_glyph_mapping.rb", "r");
        mrb_load_file_cxt(saten_mrb, f, saten_mrbc);
        fclose(f);
        saten_fopen(&f, "script/saten_script_class_text.rb", "r");
        mrb_load_file_cxt(saten_mrb, f, saten_mrbc);
        fclose(f);
        saten_fopen(&f, "script/saten_script_text_init.rb", "r");
        mrb_load_file_cxt(saten_mrb, f, saten_mrbc);
        fclose(f);
    }
    return 0;

}

#endif /* SATURN_ENGINE_CORE_MRUBY */
