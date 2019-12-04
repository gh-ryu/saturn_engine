#include "saturn_engine/_lib.h"

// Buffer names of text resource files
static char *text_buffer; // Holds name of text file

mrb_value saten_mrb_load(mrb_state *mrb, mrb_value self) /* PRIVATE */
{
    // Setup
    saten_sprite *sprite = NULL;
    saten_sound  *sound  = NULL;
    saten_music  *music  = NULL;
    mrb_value mrbid; 
    mrb_value mrbstr;
    mrb_int mrbtype;
    int id, type, l;
    char *string;
    mrb_get_args(saten_mrb, "zi", &string, &mrbtype);
    type = (int)mrbtype;
    mrbstr = mrb_str_new_cstr(saten_mrb, string);
#if defined(_DEBUG) && defined(SATEN_DEBUG_RESOURCE) 
    printf("passing %s\n", string);
#endif
    mrbid = mrb_funcall(saten_mrb, mrb_obj_value(saten_mruby_module(
                    SATEN_MRB_MOD_RESOURCE)), "get_id", 1, mrbstr);
    id = (int)mrb_fixnum(mrbid);
#if defined(_DEBUG) && defined(SATEN_DEBUG_RESOURCE) 
    printf("%d\n", id);
#endif

    // Load
    if (type == SATEN_RESOURCE_TEXT)
        goto SATEN_LOAD_TEXT_FILE_HANDLER;

    saten_resource_loading(id);

    saten_resource *res = saten_resource_access(id);
    if (res->flag == false && res->data == NULL) {
        switch (type) {
        case SATEN_RESOURCE_SPRITE:
            res->type = SATEN_RESOURCE_SPRITE;
            sprite =
                (saten_sprite*)saten_malloc(sizeof(saten_sprite));
            sprite = saten_sprite_load(string);
            if (sprite) {
                res->data = (void*)sprite;
                res->flag = true;
            }
            break;
        case SATEN_RESOURCE_SOUND:
            res->type = SATEN_RESOURCE_SOUND;
            sound =
                (saten_sound*)saten_malloc(sizeof(saten_sound));
            sound = saten_sound_load(string);
            if (sound) {
                res->data = (void*)sound;
                res->flag = true;
            }
            break;
        case SATEN_RESOURCE_MUSIC:
            res->type = SATEN_RESOURCE_MUSIC;
            music =
                (saten_music*)saten_malloc(sizeof(saten_music));
            music = saten_music_load(string);
            if (music) {
                res->data = (void*)music;
                res->flag = true;
            }
            break;
        }
    }

SATEN_LOAD_TEXT_FILE_HANDLER:
    if (type == SATEN_RESOURCE_TEXT) {
        l = strlen(string)-1;
        text_buffer = (char*)saten_realloc(text_buffer, sizeof(char) * (l));
        memcpy(text_buffer, string, l);
        text_buffer[l-2] = '/';
        text_buffer[l-1] = '\0';
        FILE *f = NULL;
        saten_fopen(&f, string, "r");
        mrb_load_file_cxt(saten_mrb, f, saten_mrbc);
        fclose(f);
        free(text_buffer);
        text_buffer = NULL;
    }

    // Cleanup
    
    return mrb_nil_value();
}


/*
void saten_load_resources(bool threaded)
{
    saten_load_on_thread = threaded;
    saten_now_loading = scene;
    if (threaded) {
        saten_load_mtx = SDL_CreateMutex();
        if (!saten_load_mtx) {
            saten_errhandler(46);
            saten_kill();
        }
        //TODO
        memset(&saten_vres, 0, sizeof(saten_resmngr));
        saten_mrb_gc_disable();
        saten_load_thread = SDL_CreateThread(saten_load_thread_func,
                          "saten_thread_load", NULL);
    } else {
        // Set uid to check which resources to load (in case file has resources
        // for various scenes
        // something_global = scene.uid;
        // Uses path to a mrb script calling functions to load resources
        FILE *f = NULL;
        saten_fopen(&f, saten_darr_scene[scene.id].loadscriptfp, "r");
        mrb_load_file_cxt(saten_mrb, f, saten_mrbc);
        fclose(f);
        saten_load_text_each();
        saten_scene_load_done(scene);
    }
}
*/

/*
int saten_load_thread_func(void *ptr)
{
    saten_scene_info scene = saten_scene_get_previous();
    FILE *f = NULL;
    saten_fopen(&f, saten_darr_scene[scene.id].loadscriptfp, "r");
    mrb_load_file_cxt(saten_mrb, f, saten_mrbc);
    fclose(f);
    saten_load_text_each();
    //SDL_Delay(2000);
    if (SDL_LockMutex(saten_load_mtx) == 0) {
        saten_scene_load_done(saten_scene_get_previous());
        if (SDL_UnlockMutex(saten_load_mtx) < 0) {
            saten_errhandler(48);
        }
    } else {
        saten_errhandler(47);
    }
    return 0;
}
*/

// private
mrb_value saten_mrb_load_text(mrb_state *mrb, mrb_value self)
{
    mrb_value mrbid, mrbstr;
    saten_text *text = NULL;
    char *key = NULL; // String used to fetch resource ID
    int key_size;
    char *string;
    char *string2;
    mrb_int mrb_c; int c;
    mrb_bool mrb_opt; bool opt;
    mrb_get_args(saten_mrb, "zz|i?", &string, &string2, &mrb_c, &mrb_opt);
    opt = (bool)mrb_opt;
    int id;

    key_size = strlen(text_buffer)+strlen(string)+5;
    key = (char*)saten_malloc(sizeof(char)*key_size);

    memcpy(key, text_buffer, strlen(text_buffer)+1);
    strcat(key, string);
    key[key_size-1] = '\0';
    key[key_size-2] = 't';
    key[key_size-3] = 'x';
    key[key_size-4] = 't';
    key[key_size-5] = '.';

    mrbstr = mrb_str_new_cstr(saten_mrb, key);
    mrbid = mrb_funcall(saten_mrb, mrb_obj_value(saten_mruby_module(
                    SATEN_MRB_MOD_RESOURCE)), "get_id", 1, mrbstr);
    id = (int)mrb_fixnum(mrbid);

    saten_resource_loading(id);

    free(key);

    if (opt)
        c = (int)mrb_c;
    else
        c = 0;

    saten_resource *res = saten_resource_access(id);
    if (res->flag == false && res->data == NULL) {
        res->type = SATEN_RESOURCE_TEXT;
        // Fix string for text
        int l = strlen(string2);
        if (string2[l-1] == '\n')
            string2[l-1] = '\0';

        text = saten_text_create(1.0, string2, 0, 0, c);
        if (text) {
            res->data = (void*)text;
            res->flag = true;
        }
    }

    return mrb_nil_value();
}
