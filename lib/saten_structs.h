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
} saten_sprite;

typedef struct _saten_layer {
    SDL_Surface *srf;
    bool flag;
} saten_layer;
