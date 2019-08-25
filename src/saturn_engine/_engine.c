#include "saturn_engine/_lib.h"
#include "saturn_engine/_lib.h"

static FILE *f;

static bool secure;
static char *dfilepath;
static SDL_RWops *data;
static uint8_t fendian_flag;
static uint8_t cpuendian_flag;
static size_t fintsize;
static size_t cpuintsize;
static uint64_t checksum;

// public
int saten_data_save_init(char *fp, bool is_secure)
{
    saten_data_init(fp, is_secure);
    data = SDL_RWFromFile("saturn_engine_data/tmp.dat", "wb");
    if (data == NULL) {
        saten_errhandler(52);
        return -1;
    }
    SDL_RWwrite(data, &cpuendian_flag, sizeof(uint8_t), 1);
    SDL_RWwrite(data, &cpuintsize, sizeof(size_t), 1);
    saten_data_save_string("SaturnEngineData");
    return 0;
}

// public
int saten_data_load_init(char *fp, bool is_secure)
{
    saten_data_init(fp, is_secure);
    data = SDL_RWFromFile(dfilepath, "rb");
    if (data == NULL)
        return -1;
    char *str;
    SDL_RWread(data, &fendian_flag, sizeof(uint8_t), 1);
    SDL_RWread(data, &fintsize, sizeof(size_t), 1);
    saten_data_load_string(&str);
    if (strncmp(str, "SaturnEngineData", 17) != 0) {
        saten_errhandler(51);
        return -1;
    }
    if (cpuintsize != fintsize) {
        saten_errhandler(50); // shouldn't even be a problem though
        return -1;
    }
    return 0;
}

// private
void saten_data_init(char *fp, bool is_secure)
{
    if (is_secure)
        secure = true;
    dfilepath = saten_strclone(fp);
    if (SDL_BYTEORDER == SDL_LIL_ENDIAN)
        cpuendian_flag = 0;
    if (SDL_BYTEORDER == SDL_BIG_ENDIAN)
        cpuendian_flag = 1;
    cpuintsize = sizeof(int);
}

// private
void saten_data_quit(void)
{
    cpuendian_flag = 0;
    fendian_flag = 0;
    free(dfilepath);
    SDL_RWclose(data);
    data = NULL;
    dfilepath = NULL;
    secure = false;
    checksum = 0;
}

// public
int saten_data_save_quit(void)
{
    if (secure) {
        saten_data_hash_checksum();
        SDL_RWwrite(data, &checksum, sizeof(uint64_t), 1);
    }
    
    if (rename("saturn_engine_data/tmp.dat", dfilepath) < -1) {
        saten_errhandler(49);
        saten_data_quit();
        return -1;
    }
    saten_data_quit();
    return 0;
}

// public
int saten_data_load_quit(void)
{
    if (secure) {
        uint64_t fchecksum;
        saten_data_load_uint64(&fchecksum);
        if (checksum != fchecksum) {
            saten_data_quit();
            return -1;
        }
    }
    saten_data_quit();
    return 0;
}

void saten_data_save_float(float f)
{
    SDL_RWwrite(data, &f, sizeof(float), 1);
    if (secure)
        checksum += ceilf(f);
}

void saten_data_load_float(float *f)
{
    SDL_RWread(data, f, sizeof(float), 1);
    if (cpuendian_flag != fendian_flag)
        *f = SDL_SwapFloat(*f);
    if (secure)
        checksum += ceilf(*f);
}

void saten_data_save_int(int i)
{
    SDL_RWwrite(data, &i, sizeof(int), 1);
    if (secure)
        checksum += i;
}

void saten_data_save_int8(int8_t i)
{
    SDL_RWwrite(data, &i, sizeof(int8_t), 1);
    if (secure)
        checksum += i;
}

void saten_data_save_uint8(uint8_t i)
{
    SDL_RWwrite(data, &i, sizeof(uint8_t), 1);
    if (secure)
        checksum += i;
}

void saten_data_save_int16(int16_t i)
{
    SDL_RWwrite(data, &i, sizeof(int16_t), 1);
    if (secure)
        checksum += i;
}

void saten_data_save_uint16(uint16_t i)
{
    SDL_RWwrite(data, &i, sizeof(uint16_t), 1);
    if (secure)
        checksum += i;
}

void saten_data_save_int32(int32_t i)
{
    SDL_RWwrite(data, &i, sizeof(int32_t), 1);
    if (secure)
        checksum += i;
}

void saten_data_save_uint32(uint32_t i)
{
    SDL_RWwrite(data, &i, sizeof(uint32_t), 1);
    if (secure)
        checksum += i;
}

void saten_data_save_int64(int64_t i)
{
    SDL_RWwrite(data, &i, sizeof(int64_t), 1);
    if (secure)
        checksum += i;
}

void saten_data_save_uint64(uint64_t i)
{
    SDL_RWwrite(data, &i, sizeof(uint64_t), 1);
    if (secure)
        checksum += i;
}

void saten_data_load_int(int *i)
{
    SDL_RWread(data, i, sizeof(int), 1);
    if (cpuendian_flag != fendian_flag) {
        switch (cpuintsize) {
        case 2:
            *i = SDL_Swap16(*i);
            break;
        case 4:
            *i = SDL_Swap32(*i);
            break;
        case 8:
            *i = SDL_Swap64(*i);
            break;
        }
    }
    if (secure)
        checksum += *i;
}

void saten_data_load_int8(int8_t *i)
{
    SDL_RWread(data, i, sizeof(int8_t), 1);
    if (secure)
        checksum += *i;
}

void saten_data_load_uint8(uint8_t *i)
{
    SDL_RWread(data, i, sizeof(uint8_t), 1);
    if (secure)
        checksum += *i;
}

void saten_data_load_int16(int16_t *i)
{
    SDL_RWread(data, i, sizeof(int16_t), 1);
    if (cpuendian_flag != fendian_flag)
        *i = SDL_Swap16(*i);
    if (secure)
        checksum += *i;
}

void saten_data_load_uint16(uint16_t *i)
{
    SDL_RWread(data, i, sizeof(uint16_t), 1);
    if (cpuendian_flag != fendian_flag)
        *i = SDL_Swap16(*i);
    if (secure)
        checksum += *i;
}

void saten_data_load_int32(int32_t *i)
{
    SDL_RWread(data, i, sizeof(int32_t), 1);
    if (cpuendian_flag != fendian_flag)
        *i = SDL_Swap32(*i);
    if (secure)
        checksum += *i;
}

void saten_data_load_uint32(uint32_t *i)
{
    SDL_RWread(data, i, sizeof(uint32_t), 1);
    if (cpuendian_flag != fendian_flag)
        *i = SDL_Swap32(*i);
    if (secure)
        checksum += *i;
}

void saten_data_load_int64(int64_t *i)
{
    SDL_RWread(data, i, sizeof(int64_t), 1);
    if (cpuendian_flag != fendian_flag)
        *i = SDL_Swap64(*i);
    if (secure)
        checksum += *i;
}

void saten_data_load_uint64(uint64_t *i)
{
    SDL_RWread(data, i, sizeof(uint64_t), 1);
    if (cpuendian_flag != fendian_flag)
        *i = SDL_Swap64(*i);
    if (secure)
        checksum += *i;
}

void saten_data_save_bool(bool b)
{
    SDL_RWwrite(data, &b, sizeof(bool), 1);
    if (secure)
        checksum += b;
}

void saten_data_load_bool(bool *b)
{
    SDL_RWread(data, b, sizeof(bool), 1);
    if (secure)
        checksum += *b;
}

void saten_data_save_string(char *str)
{
    int l = strlen(str) + 1;
    SDL_RWwrite(data, &l, sizeof(int), 1);
    SDL_RWwrite(data, str, sizeof(char), l);
    if (secure)
        checksum += l;
} 

void saten_data_load_string(char **str)
{
    int l;
    SDL_RWread(data, &l, sizeof(int), 1);
    *str = saten_malloc(sizeof(char) * l);
    SDL_RWread(data, *str, sizeof(char), l);
    if (secure)
        checksum += l;
} 

// private
void saten_data_hash_checksum(void)
{
    // TODO use a secure algorithm
    checksum = checksum % 79;
}

// public
int saten_init(char *title, uint8_t flags)
{
    saten_flag_set(flags, &saten_flags);
    int w; int h;
    saten_voutr(SATEN_VOUT_DEFAULT, &w, &h, NULL);

    if (saten_core_init(title, w, h,
                SATEN_ERRORS | SATEN_INPUT|SATEN_MRB | SATEN_TEXT) < 0) {
        fprintf(stderr, "Failed to initialize Saturn Engine\n");
        return -1;
    }


    if (saten_flag_check(SATEN_MRBLOAD, saten_flags)) {
        struct RClass* _saten_mrb_module_resource;
        struct RClass* _saten_mrb_module_img;
        struct RClass* _saten_mrb_module_sfx;
        struct RClass* _saten_mrb_module_bgm;
        struct RClass* _saten_mrb_module_text;
        _saten_mrb_module_resource = mrb_define_module_under(saten_mrb,
            _saten_mrb_module, "Resource");
        _saten_mrb_module_img = mrb_define_module_under(saten_mrb,
            _saten_mrb_module_resource, "Sprite");
        _saten_mrb_module_sfx = mrb_define_module_under(saten_mrb,
            _saten_mrb_module_resource, "SoundEffect");
        _saten_mrb_module_bgm = mrb_define_module_under(saten_mrb,
            _saten_mrb_module_resource, "BackgroundMusic");
        _saten_mrb_module_text = mrb_define_module_under(saten_mrb,
            _saten_mrb_module_resource, "Text");

        mrb_define_module_function(saten_mrb, _saten_mrb_module_img,
                "load", saten_mrb_load_img, MRB_ARGS_ARG(1,1));
        mrb_define_module_function(saten_mrb, _saten_mrb_module_sfx,
                "load", saten_mrb_load_sfx, MRB_ARGS_ARG(1,1));
        mrb_define_module_function(saten_mrb, _saten_mrb_module_bgm,
                "load", saten_mrb_load_bgm, MRB_ARGS_ARG(1,1));
        mrb_define_module_function(saten_mrb, _saten_mrb_module_text,
                "load", saten_mrb_load_text, MRB_ARGS_ARG(1,1));
    }
    SATEN_DARR_INIT(saten_scene, saten_darr_scene);
    saten_video_init();

    return 0; // everything okay!
}

// public
int saten_run(void)
{
    // TODO load settings
    saten_video_lconf();
    saten_video_update();

    if (SATEN_DARR_SIZE(saten_darr_scene) < 1) {
        saten_errhandler(38);
        return -1;
    }

    // main game loop is no longer user defined
    saten_core_run(saten_game);

    return 0;
}

// private
void saten_game(void)
{
    if (saten_killf) // Core tells us to stop all operations
        saten_kill();
    // Handle engine specific inputs
    if (saten_key(SATEN_KEY_F5) == 1)
        saten_video_mswitch();
    if (saten_key(SATEN_KEY_F4) == 1)
        saten_video_wswitch();
    // Update video output if necessary
    if (saten_vconf.update)
        saten_video_update();

    // Traverse top-bottom (quit scenes)
    for (int i = SATEN_DARR_SIZE(saten_darr_scene)-1; i >= 0; i--) {
        if (saten_darr_scene[i].quit_flag)
            if (saten_darr_scene[i].quit != NULL)
                saten_darr_scene[i].quit();
    }

    // Draw wallpaper if set
    saten_video_wpdraw();

    // Traverse bottom-top (play game)
    for (int i=saten_scene_start.id;i< SATEN_DARR_SIZE(saten_darr_scene);i++) {
        if (!saten_darr_scene[i].init_flag) {
            if (saten_darr_scene[i].init != NULL)
                saten_darr_scene[i].init();
        } else {
            if (saten_darr_scene[i].update != NULL) 
                saten_darr_scene[i].update(
                        (i == SATEN_DARR_SIZE(saten_darr_scene)-1));
                // ^only top scene gets user control
            if (saten_darr_scene[i].draw != NULL)
                saten_darr_scene[i].draw();
            saten_darr_scene[i].framecnt++;
        }
    }
    saten_video_scldraw();
    // Sets color to be used when renderer resets
    saten_video_prepare_reset();
    // No scenes set = time to quit!
    if (SATEN_DARR_SIZE(saten_darr_scene) == 0)
        saten_brkf = true;
}

void saten_quit(void)
{
    saten_video_sconf();
    saten_video_quit();
    SATEN_DARR_DESTROY(saten_darr_scene);
    saten_core_quit();
}

void saten_kill(void)
{
    // Force all scenes to quit
    saten_scene_info scene = { 0, 0, 1 };
    saten_scene_quit(scene);
}
