#include "saturn_engine/_lib.h"

static int self;    // ID of currently active scene
static int scene_n; // Number of scenes
static int start;   // First scene on stack (from btm up) to be executed

static saten_fptr_void each_init;
static saten_fptr_bool each_update;
static saten_fptr_void each_draw;
static saten_fptr_void each_quit;

static saten_scene *scene_container; // Dynamic array

int saten_scene_create( /* PUBLIC */
        saten_fptr_void init, saten_fptr_bool update, saten_fptr_void draw,
        saten_fptr_void quit, void *data)
{
    saten_scene scene;
    memset(&scene, 0, sizeof(saten_scene));
    int i = saten_scene_fetch_id();
    scene.init = init;
    scene.update = update;
    scene.draw = draw;
    scene.quit = quit;
    scene.data = data;
    scene.id = i;
    SATEN_DARR_PUSH(scene_container, scene);
    scene_n = SATEN_DARR_SIZE(scene_container);
    return i;
}

void saten_scene_start(int id) /* PUBLIC */
{
    start = id;
}

void saten_scene_quit_from(int id) /* PUBLIC */
{
    // Quit all scenes on top of ID including ID
    int i = saten_scene_find(id);
    for (int j = i; j < scene_n; j++) {
        scene_container[j].quitf = true;
    }
}

void saten_scene_quit_all(void) /* PUBLIC */
{
    for (int i = 0; i < scene_n; i++)
        scene_container[i].quitf = true;
}


int saten_scene_self(void) /* PUBLIC */
{
    return self;
}

int saten_scene_count(void) /* PUBLIC */
{
    return scene_n;
}

int saten_scene_find(int id) /* PRIVATE */
{
    // Returns index of scene in container
    // or -1 if id is not found
    for (int i = 0; i < scene_n; i++) {
        if (scene_container[i].id == id)
            return i;
    }
    return -1;
}

int saten_scene_fetch_id(void) /* PRIVATE */
{
    bool found = true;
    int cnt = 0;
    int size = SATEN_DARR_SIZE(scene_container);
    while (found) {
        found = false;
        for (int i = 0; i < size; i++) {
            if (scene_container[i].id == cnt) {
                found = true;
                break;
            }
        }
        if (found)
            cnt++;
    }
    return cnt;
}

int saten_scene_pop(void) /* PRIVATE */
{
    if (self == start) {
        int i = saten_scene_find(self);
        if (i > 0)
            saten_scene_start(scene_container[i-1].id);
    }

    int n = SATEN_DARR_SIZE(scene_container);
    n--;
    SATEN_DARR_RESIZE(scene_container, n);
    scene_n = n;
    if (saten_load_mtx) {
        SDL_DestroyMutex(saten_load_mtx);
        saten_load_mtx = NULL;
    }
    return -1;
}

void saten_scene_each_set(saten_fptr_void init, /* PUBLIC */
        saten_fptr_bool update, saten_fptr_void draw, saten_fptr_void quit)
{
    each_init = init;
    each_update = update;
    each_draw = draw;
    each_quit = quit;
}

void saten_scene_init(void) /* PRIVATE */
{
    SATEN_DARR_INIT(saten_scene, scene_container);
}

void saten_scene_end(void) /* PRIVATE */
{
    SATEN_DARR_DESTROY(scene_container);
}

int saten_scene_frame_count(void) /* PUBLIC */
{
    int i = saten_scene_find(self);
    return scene_container[i].frcnt;
}

// Engine internal handling

void saten_scene_engine_quit(void) /* PRIVATE */
{
    // Traverse top-bottom (quit scenes)
    for (int i = scene_n-1; i >= 0; i--) {
        self = scene_container[i].id;
        if (scene_container[i].quitf) {
            if (scene_container[i].quit)
                scene_container[i].quit();
            if (each_quit)
                each_quit();
            saten_scene_pop();
        }
    }
}

void saten_scene_engine_main(void) /* PRIVATE */
{
    if (scene_n == 0)
        return;
    int begin = saten_scene_find(start);
    // Traverse bottom-top (play game)
    for (int i = begin; i < scene_n; i++) {
        self = scene_container[i].id;
        if (!scene_container[i].initf) { // Current scene still initializing
            if (scene_container[i].init != NULL)
                scene_container[i].init();
            if (each_init)
                each_init();
            scene_container[i].initf = true; // Done initializing
        } else {
            if (scene_container[i].update != NULL) 
                scene_container[i].update((i == scene_n-1));
            if (each_update)
                each_update(i == scene_n-1);
            if (scene_container[i].draw != NULL)
                scene_container[i].draw();
            if (each_draw)
                each_draw();
            scene_container[i].frcnt++;
        }
    }
}


