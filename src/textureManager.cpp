#include "textureManager.h"


SDL_Texture* textureManager::LoadTexture(const char* fileName, SDL_Renderer* ren){
    SDL_Surface* tempSurface = IMG_Load(fileName);
    SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, tempSurface);
    SDL_FreeSurface(tempSurface);

    return tex;
}