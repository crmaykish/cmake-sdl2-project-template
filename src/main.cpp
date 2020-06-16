#include <iostream>
#include <SDL2/SDL.h>

int main()
{
    std::cout << "hello" << std::endl;

    SDL_Init(SDL_INIT_VIDEO);

    SDL_Window *window = SDL_CreateWindow("Demo", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_SHOWN);


    SDL_ShowWindow(window);

    return 0;
}