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

// public
void saten_draw_circle(int x, int y, int rad, uint8_t r, uint8_t g, uint8_t b,
        uint8_t a, SDL_BlendMode blendmode)
{
    if (saten_target_layer == NULL) { // draw to renderer
        saten_draw_set_param(r, g, b, a, blendmode);
        saten_draw_bresenham_circle(x, y, rad, false);
    } else { // draw on surface
        //TODO
    }
}

// public
void saten_draw_circle_filled(int x, int y, int rad, uint8_t r, uint8_t g,
        uint8_t b, uint8_t a, SDL_BlendMode blendmode)
{
    if (saten_target_layer == NULL) { // draw to renderer
        saten_draw_set_param(r, g, b, a, blendmode);
        saten_draw_simple_circle(x, y, rad, true);
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

// private
void saten_draw_simple_circle(int x, int y, int r, bool fill)
{
    // get boundary rect of circle
    int boundary = r * r;
    //int length = r * 2;
    // top left coordinate of bounding rect
    int rect_x0 = x - r + 1;
    int rect_y0 = y - r + 1;
    // bottom right coordinate
    int rect_x1 = x + r - 1;
    int rect_y1 = y + r - 1;
    // differences
    int dx = 0;
    int dy = 0;

    for (int i = rect_y0; i <= rect_y1; i++) {
        // every vertical line of the boundar rect do...
        dy = i - y;
        for (int j = rect_x0; j <= rect_x1; j++) {
            dx = j - x;
            // every horizontal line of the boundary rect do...
            if (fill) {
                if ((dx * dx + dy * dy) <= boundary) {
                    if (SDL_RenderDrawPoint(saten_ren, j, i) < 0)
                        saten_errhandler(30);
                }
            } else {
                //FIXME doesn't work :/
                if ((dx * dx + dy * dy) == boundary) {
                    if (SDL_RenderDrawPoint(saten_ren, j, i) < 0)
                        saten_errhandler(30);
                }
            }
        }
    }
}

// private
void saten_draw_bresenham_circle(int x, int y, int r, bool fill)
{
    int x1 = r - 1;
    int y1 = 0;
    int dx = 1;
    int dy = 1;
    int err = dx - (r << 1);


    while (x1 >= y1) {
        // draws points at the circumference
        if (fill) {
            if (SDL_RenderDrawLine(saten_ren,
                        x - x1, y + y1, x + x1, y + y1) < 0)
                saten_errhandler(28);
            if (SDL_RenderDrawLine(saten_ren,
                        x - y1, y + x1, x + y1, y + x1) < 0)
                saten_errhandler(28);
            if (SDL_RenderDrawLine(saten_ren,
                        x - x1, y - y1, x + x1, y - y1) < 0)
                saten_errhandler(28);
            if (SDL_RenderDrawLine(saten_ren,
                        x - y1, y - x1, x + y1, y - x1) < 0)
                saten_errhandler(28);
        } else {
            if (SDL_RenderDrawPoint(saten_ren, x + x1, y + y1) < 0)
                saten_errhandler(30);
            if (SDL_RenderDrawPoint(saten_ren, x - x1, y + y1) < 0)
                saten_errhandler(30);
            if (SDL_RenderDrawPoint(saten_ren, x + y1, y + x1) < 0)
                saten_errhandler(30);
            if (SDL_RenderDrawPoint(saten_ren, x - y1, y + x1) < 0)
                saten_errhandler(30);

            if (SDL_RenderDrawPoint(saten_ren, x - x1, y - y1) < 0)
                saten_errhandler(30);
            if (SDL_RenderDrawPoint(saten_ren, x + x1, y - y1) < 0)
                saten_errhandler(30);
            if (SDL_RenderDrawPoint(saten_ren, x - y1, y - x1) < 0)
                saten_errhandler(30);
            if (SDL_RenderDrawPoint(saten_ren, x + y1, y - x1) < 0)
                saten_errhandler(30);
        }
        if (err <= 0) {
            y1++;
            err += dy;
            dy += 2;
        }
        if (err > 0) {
            x1--;
            dx += 2;
            err += dx - (r << 1);
        }
    }
}
