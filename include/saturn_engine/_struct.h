#ifndef SATURN_ENGINE_STRUCT
#define SATURN_ENGINE_STRUCT

typedef struct _saten_scene {
    int id;
    saten_fptr_void init;
    saten_fptr_bool update;
    saten_fptr_void draw;
    saten_fptr_void quit;
    bool inf; // Flags
    bool outf;
    bool initf;
    bool quitf;
    int frcnt; // Frame counter for this scene
    void *data;
} saten_scene;

typedef struct _saten_vinfo {
    float scale;
    uint8_t mode;
} saten_vinfo;

typedef struct _saten_vstng {
    float scale;
    bool fullscreen;
    bool fullscreend; // SDL_FULLSCREEN_DESKTOP
    bool filter_flag; // filter activated?
    uint8_t filter; // currently active filter
    uint8_t scanline_strength;
    SDL_Color wpcol;
    bool wprepeat;
    saten_sprite *wp;
    uint8_t vout;
    bool update; // flag
} saten_vstng;

typedef struct _saten_btnmap {
} saten_btnmap;

typedef struct _saten_keymap {
} saten_keymap;

typedef struct _saten_player {
    bool keyboardf; // uses keyboard
    bool controllerf; // uses controller
    int  padid; // controller associated with player
    saten_btnmap btn;
    saten_keymap key;
    bool flag; // player enabled? disabled?
} saten_player;

typedef struct _saten_tile {
    int id; // Index for graphic
    int layer; // Layer id
    bool flexf; // Flexible layer id changeable at runtime
    bool dynaf; // Dynamic tile
    int freq;   // Update frequency for dynamic tiles
    int cnt;   
    int total; // Number of alternating tiles
    bool pass_upf;
    bool pass_downf;
    bool pass_rightf;
    bool pass_leftf;
    int opacity;
} saten_tile;

typedef struct _saten_tmod {
    int pitch;
    void *pixels;
} saten_tmod;

typedef struct _saten_plane {
    SDL_Surface *srf; // To draw sprites on a surface
    SDL_Texture *txt; // Uses pixel data from layer's surface
    int bpp;       // Bits per pixel of texture
    saten_sprite *tileset;
    //saten_sprite *picture; // Optional image to draw on tilemap
    saten_tile **tmap;
    saten_sprite **pic;
    uint32_t *buffer;
    int picn;
    int tmapn;
    int tilen;
    SDL_Rect map;       // The whole map used by the background
    SDL_Rect screen;    // The screen drawn to the renderer
    SDL_Rect scrupdate; // The surface area eligible for updates
    int x_offset, y_offset; // Draw x/y pixels beyond the screen
                          // Important for HDMA effects
    saten_tmod tmod;
    // Mode 7 stuff
    float a, b, c, d, x0, y0;
} saten_plane;

typedef struct _saten_menu_element {
    int type; 
    SDL_Rect rect;
    bool activef; // Can the element respond to input?
    bool drawf;
    bool modf;
    SDL_Color mod; // Alpha and color modifier
    SDL_Point gpos; // Position in the element grid
    union { saten_text *text;
            saten_sprite *sprite; } data;
} saten_menu_element;

typedef struct _saten_menu_sfx {
    saten_sound *accept;
    saten_sound *cancel;
    saten_sound *move;
    saten_sound *deny;
} saten_menu_sfx;

typedef struct _saten_menu {
    int type;  // Direction of elements
    int align; // Alignment of elements
    bool loopf;       // Loop back around when going past end of menu
    bool activef;     // Reacts to inputs?
    bool drawf;       // Draw menu elements?
    int elnum;        // Number of menu items
    SDL_Point cursor;
    SDL_Point padding;
    SDL_Rect frame;   // x, y position, w, h num of elements
    saten_menu_element *el; // Array of elements
    SDL_Rect rect;
    int owner;        // ID of player who has control
    int iprev_hxoff;   // Offsets for arrows
    int inext_hxoff;
    int iprev_hyoff;
    int inext_hyoff;
    int iprev_vxoff;   // Offsets for arrows
    int inext_vxoff;
    int iprev_vyoff;
    int inext_vyoff;
    saten_menu_sfx sfx;
    saten_sprite *iconset; // Arrow icons
    int select;      // Element which responded to press of accept
    int interval;     // Move every i frames when continuous pressed
    bool cpressf_next_x;     // dire btn pressed continuously
    bool cpressf_prev_x;     // dire btn pressed continuously
    bool cpressf_next_y;     // dire btn pressed continuously
    bool cpressf_prev_y;     // dire btn pressed continuously
    bool framef;
    int rowlen;            // elements per row in a matrix
    int collen;            // number of rows
} saten_menu;

typedef struct _saten_object {
    saten_sprite *sprite;
    SDL_Point      pos;
    SDL_Color      mods;
    int            fadein_cnt;
    float          a; // Angle
} saten_object;

typedef struct _saten_resource {
    int8_t type;
    bool flag;
    /*
    union { saten_text *text;
            saten_sprite *sprite;
            saten_music *bgm;
            saten_sound *sfx; } data;
            */
    void *data;
} saten_resource;

#endif /* SATURN_ENGINE_STRUCT */
