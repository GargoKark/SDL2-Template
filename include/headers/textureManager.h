#pragma once

#include "game.h"

class textureManager{

    public:
    static SDL_Texture* LoadTexture(const char* fileName, SDL_Renderer* ren);

};