#include <memory>
#include "cm_game.h"
#include "cm_input_handler_sdl.h"

int main(int argv, char **args)
{
    cm::Game game;
    game.SetMainInputHandler(std::make_shared<cm::SDLInputHandler>());

    game.Init();
    game.Loop();
    game.Close();
}
