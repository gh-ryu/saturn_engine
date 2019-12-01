#ifndef SATURN_ENGINE_CORE_STRUCTS
#define SATURN_ENGINE_CORE_STRUCTS

typedef struct _saten_litem {
    void *current;
    void *next;
    void *prev;
} saten_litem;

typedef struct _saten_list {
    saten_litem *head;
    saten_litem *tail;
    size_t size;
    int num;
} saten_list;

typedef struct _saten_mfield {
    char *ptr;
    size_t volume;
    size_t capacity;
} saten_mfield;

typedef struct _saten_pad {
    SDL_GameController *dev;
    SDL_Joystick *jdev;
    SDL_Haptic *hdev;
    bool can_rumble;
    int32_t state[25];
    bool lockstate[25];
    float lang, rang; // stick angles
    int jbtncnt;
    int deadzone;
    bool flag;
    SDL_JoystickID instance_id;
} saten_pad;

typedef struct _saten_framgr {
    Uint32 t;
    Uint64 t2, t3;
    float pfreq;
    int cnt;
    float avg;
    int fps;
    int n; // used to calculate average
} saten_framgr;

typedef struct _saten_sprite {
    SDL_Surface *srf;
    SDL_Texture *texture;
    SDL_Rect *tile;
    SDL_Rect *target;
    SDL_Rect *source;
    float scale;
    bool centered;
    SDL_Color mods;
} saten_sprite;

typedef struct _saten_layer {
    SDL_Surface *srf;
    SDL_Rect *clip_area;
    bool flag;
} saten_layer;

typedef struct _saten_glyph_set {
    SDL_Texture ***glyph;
    uint8_t *glyph_width; // width of each individual glyph
    uint8_t glyph_height;
    bool is_animated;
    int cn; // color number
    int n; // glyph number
    bool flag; // is defined?
    uint8_t *anum; // number of animations for each animated glyph
} saten_glyph_set;

typedef struct _saten_glyph {
    int a, b ,c; // identifiers to insert into saten_glyph_sets[a][b][c]
    int l; // line index
    SDL_Rect rect; // pos
    bool is_animated;
    uint8_t anum, acnt; // animation information
} saten_glyph;

typedef struct _saten_string {
    char *d; // data
    size_t l; // length
} saten_string;

typedef struct _saten_text {
    saten_glyph *glyph; // glyph array
    int size, cnt; // length and increment
    //int glyph_capacity; // how many glyphs currently fit?
    float scale;
    mrb_value mrbo;
    int id;
    bool update_flag;
    int w, h, x, y;
    SDL_Color mod;
    bool modf;
    int size_calc;  // calculated n of glyphs
    int size_alloc; // allocated number of glyphs
    // Glyph set remappings
    int remapn; // number of remappings
    int *remap_from;
    int *remap_to;
} saten_text;

typedef struct _saten_spixel {
    int x, y;
    uint8_t r, g, b, a;
} saten_spixel;
/*
 * Mix_MusicType:
 * MUS_CMD = Command based music
 * MUS_WAV = WAV/RIFF file
 * MUS_MOD = MOD music (.xm, .mod...)
 * MUS_MID = MIDI file
 * MUS_OGG = OGG file
 * MUS_MP3 = MP3 file
 * default = Unknown file type
 */

typedef struct _saten_music {
    Mix_Music *o; // Object
    Mix_MusicType t; 
    bool flag; // Is this music playing?
} saten_music;

typedef struct _saten_sound {
    Mix_Chunk *o;
    bool flag; // Play sfx if flag is raised
} saten_sound;

typedef struct _saten_cryptomngr {
    mrb_value o;
    bool flag;
    char *symkey;
} saten_cryptomngr;

#endif /* SATURN_ENGINE_CORE_STRUCTS */
