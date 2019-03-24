// public
void saten_draw_line(int x1, int y1, int x2, int y2, uint8_t r, uint8_t g,
        uint8_t b, uint8_t a, SDL_BlendMode blendmode)
{
    if (saten_target_layer == NULL) { // draw to renderer
        saten_draw_set_param(r, g, b, a, blendmode);
        if (SDL_RenderDrawLine(saten_ren, x1, y1, x2, y2) < 0)
            saten_errhandler(28);
    } else { // draw on surface
        //TODO
    }
}

// public
void saten_draw_rect(int x, int y, int w, int h, uint8_t r, uint8_t g,
        uint8_t b, uint8_t a, SDL_BlendMode blendmode)
{
    if (saten_target_layer == NULL) { // draw to renderer
        saten_draw_set_param(r, g, b, a, blendmode);
        SDL_Rect rect = { x, y, w, h };
        if (SDL_RenderDrawRect(saten_ren, &rect) < 0)
            saten_errhandler(29);
    } else { // draw on surface
        //TODO
    }
}

// public
void saten_draw_rect_filled(int x, int y, int w, int h, uint8_t r, uint8_t g,
        uint8_t b, uint8_t a, SDL_BlendMode blendmode)
{
    if (saten_target_layer == NULL) { // draw to renderer
        saten_draw_set_param(r, g, b, a, blendmode);
        SDL_Rect rect = { x, y, w, h };
        if (SDL_RenderFillRect(saten_ren, &rect) < 0)
            saten_errhandler(29);
    } else { // draw on surface
        //TODO
    }
}

// public
void saten_draw_point(int x, int y, uint8_t r, uint8_t g, uint8_t b,
        uint8_t a, SDL_BlendMode blendmode)
{
    if (saten_target_layer == NULL) { // draw to renderer
        saten_draw_set_param(r, g, b, a, blendmode);
        if (SDL_RenderDrawPoint(saten_ren, x, y) < 0)
            saten_errhandler(30);
    } else { // draw on surface
        //TODO
    }
}


// private
void saten_draw_set_param(uint8_t r, uint8_t g, uint8_t b, uint8_t a,
        SDL_BlendMode blendmode)
{
    if (SDL_SetRenderDrawColor(saten_ren, r, g, b, a) < 0)
        saten_errhandler(26);
    if (SDL_SetRenderDrawBlendMode(saten_ren, blendmode) < 0)
        saten_errhandler(27);
}
