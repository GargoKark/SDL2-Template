#pragma once

#include "SDL.h"
#include "SDL_image.h"
#include <iostream>

class Game{
    public:
    Game();
    ~Game();

    void init(const char* title, int x, int y, int w, int h, bool fullscreen);

    void handleEvents();
    void update();
    void render();
    void clean();

    bool running();

    private:
    bool isRunning;
    SDL_Window *window;
    SDL_Renderer *renderer;
    int cnt = 0;
};