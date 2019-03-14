typedef struct _saten_pad {
    SDL_GameController *dev;
} saten_pad;

typedef struct _saten_fps_mngr {
    Uint32 t;
    int cnt;
    float avg;
    int fps;
    int n; // used to calculate average
} saten_fps_mngr;
