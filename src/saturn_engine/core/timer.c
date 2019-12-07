#include "saturn_engine/core/_lib.h"

static saten_list* timers;

saten_timer* saten_timer_create(uint32_t n, uint8_t t) /* PUBLIC */
{
    saten_timer *timer = (saten_timer*)saten_malloc(sizeof(saten_timer));
    timer->goal = n;
    timer->type = t;
    timer->state = SATEN_TIMER_STOPPED;

    // Add to list
    saten_litem *elem = (saten_litem*)saten_malloc(sizeof(saten_litem));
    elem->current = (void*)timer;
    saten_list_insert(timers, elem);

    return timer;
}

void saten_timer_destroy(saten_timer *timer) /* PUBLIC */
{
    saten_litem* eptr = NULL;
    saten_list_search(timers, NULL, &eptr, (void*)timer);
    saten_list_remove(timers, eptr);
    free(timer);
}

void saten_timer_start(saten_timer *timer) /* PUBLIC */
{
    if (timer->state != SATEN_TIMER_STOPPED) {
        saten_errhandler(75);
        return;
    }
    switch (timer->type) {
    case SATEN_TIMER_FR:
        timer->current = 0;
        break;
    case SATEN_TIMER_MS:
        timer->ms_start = SDL_GetTicks();
        break;
    }
    timer->state = SATEN_TIMER_RUNNING;
}

void saten_timer_pause(saten_timer *timer) /* PUBLIC */
{
    if (timer->state == SATEN_TIMER_RUNNING)
        timer->state = SATEN_TIMER_PAUSED;
    else
        saten_errhandler(72);
}

void saten_timer_continue(saten_timer *timer) /* PUBLIC */
{
    if (timer->state == SATEN_TIMER_PAUSED)
        timer->state = SATEN_TIMER_RUNNING;
    else
        saten_errhandler(73);
}

void saten_timer_stop(saten_timer *timer) /* PUBLIC */
{
    if (timer->state != SATEN_TIMER_STOPPED)
        timer->state = SATEN_TIMER_STOPPED;
    else
        saten_errhandler(74);
}

void saten_timer_reset(saten_timer *timer) /* PUBLIC */
{
    timer->state = SATEN_TIMER_STOPPED;
    timer->loops = 0;
}

void saten_timer_init(void) /* PRIVATE */
{
    saten_list_init(&timers, sizeof(saten_timer));
}

void saten_timer_quit(void) /* PRIVATE */
{
    if (timers->num >= 1) {
        saten_list_traverse(timers, saten_timer_destroy2);
    }
    saten_list_destroy(timers);
}

void saten_timer_update(void *item, int i, int num) /* PRIVATE */
{
    saten_timer *timer = (saten_timer*)item;

    if (timer->state != SATEN_TIMER_RUNNING)
        return;

    switch (timer->type) {
    case SATEN_TIMER_FR:
        if (timer->current < timer->goal)
            timer->current++;
        if (timer->current == timer->goal)
            timer->state = SATEN_TIMER_FINISHED;
        break;
    case SATEN_TIMER_MS:
        if ((SDL_GetTicks() - timer->ms_start) >= timer->goal)
            timer->state = SATEN_TIMER_FINISHED;
        break;
    }
    if (timer->state == SATEN_TIMER_FINISHED)
        timer->loops++;
}

void saten_timer_update_each(void) /* PRIVATE */
{
    if (timers->num < 1)
        return;
    saten_list_traverse(timers, saten_timer_update);
}

void saten_timer_destroy2(void *item, int i, int num) /* PRIVATE */
{
    saten_timer *timer = (saten_timer*)item;
    saten_timer_destroy(timer);
}
