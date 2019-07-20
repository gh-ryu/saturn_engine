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
            "prepare_glyph", saten_mrb_text_prepare_glyph, MRB_ARGS_NONE());
    mrb_define_class_method(saten_mrb, _saten_mrb_class_text,
            "set_glyph_height", saten_mrb_text_set_height, MRB_ARGS_REQ(1));
    mrb_define_class_method(saten_mrb, _saten_mrb_class_text,
            "append_glyph", saten_mrb_text_append_glyph, MRB_ARGS_REQ(3));

}

mrb_value saten_mrb_text_create(mrb_state *mrb, mrb_value self)
{
    mrb_float a0;
    mrb_value o;
    float a;
    mrb_get_args(saten_mrb, "fo", &a0, &o);
    a = (float)a0;
    //saten_latest_text = saten_text_create(n); // list canned
    saten_text *text = (saten_text*)saten_malloc(sizeof(saten_text));
    mrb_value ret;
    if (text == NULL) {
        ret = mrb_fixnum_value((mrb_int)1);
    } else {
        text->scale = a;
        text->mrbo = o;
        text->id = saten_text_get_id();
        text->update_flag = true;

        // saten handling
        saten_litem *elem = (saten_litem*)saten_malloc(sizeof(saten_litem));
        elem->current = (void*) text;
        saten_list_insert(saten_list_text, elem);

        mrb_funcall(saten_mrb, text->mrbo, "set_id", 1,
                mrb_fixnum_value(text->id));


        ret = mrb_fixnum_value((mrb_int)0);
    }
    return ret;
}

mrb_value saten_mrb_text_free(mrb_state *mrb, mrb_value self)
{
    //TODO
    //printf("called text free...\n");
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

mrb_value saten_mrb_text_append_glyph(mrb_state *mrb, mrb_value self)
{
    mrb_int a0, b0, c0, x0, y0, l0, id0;
    int a, b, c, x, y, i, l, id;
    mrb_get_args(saten_mrb, "iiiiiii", &id0, &a0, &b0, &c0, &x0, &y0, &l0);
    a = (int)a0; b = (int)b0; c = (int)c0; x = (int)x0; y = (int)y0;
    l = (int)l0; id = (int)id0;

    saten_text *text = NULL;
    if (saten_latest_text == NULL)
        saten_latest_text = saten_text_find(id);
    text = saten_latest_text;


    i = text->size;

    text->size++;
    text->glyph = (saten_glyph*)saten_realloc(
            text->glyph, text->size * sizeof(saten_glyph));

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
    return mrb_nil_value();
}

void saten_text_draw(saten_text *text)
{
    if (text->glyph == NULL)
        mrb_funcall(saten_mrb, text->mrbo, "set_glyph", 0);

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

void saten_text_destroy(saten_text *ptr)
{
    free(ptr->glyph);
    free(ptr);
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
