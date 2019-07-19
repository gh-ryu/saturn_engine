typedef struct _saten_litem {
    void *current;
    void *next;
    void *prev;
    //saten_litem *next;
    //saten_litem *prev;
} saten_litem;

typedef struct _saten_list {
    saten_litem *head;
    saten_litem *tail;
    size_t size;
    int num;
} saten_list;

typedef struct _saten_pad {
    SDL_GameController *dev;
    SDL_Joystick *jdev;
    SDL_Haptic *hdev;
    bool can_rumble;
    int32_t state[25];
    float lang, rang; // stick angles
    int jbtncnt;
    int deadzone;
    bool flag;
} saten_pad;

typedef struct _saten_fps_mngr {
    Uint32 t;
    int cnt;
    float avg;
    int fps;
    int n; // used to calculate average
} saten_fps_mngr;

typedef struct _saten_sprite {
    SDL_Surface *srf;
    SDL_Texture *texture;
    SDL_Rect *tile;
    SDL_Rect *target;
    SDL_Rect *source;
    float scale;
    bool centered;
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
} saten_glyph_set;

typedef struct _saten_glyph {
    int a, b ,c; // identifiers to insert into saten_glyph_sets[a][b][c]
    int l; // line index
    SDL_Rect rect; // pos
} saten_glyph;

typedef struct _saten_string {
    char *d; // data
    size_t l; // length
} saten_string;

typedef struct _saten_text {
    //saten_string *str;
    saten_glyph *glyph; // glyph array
    int size, cnt; // length and increment
    float scale;
    mrb_value mrbo;
    int id;
    bool update_flag;
} saten_text;

typedef struct _saten_spixel {
    int x, y;
    uint8_t r, g, b, a;
} saten_spixel;
