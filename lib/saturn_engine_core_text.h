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
