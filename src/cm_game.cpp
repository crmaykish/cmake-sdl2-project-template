#include "cm_game.h"
#include "cm_logger.h"

namespace cm
{
    Game::Game()
    {
    }

    Game::~Game()
    {
    }

    void Game::Init()
    {
        Log("Initializing game...", LOG_INFO);
    }

    void Game::Loop()
    {
    }

    void Game::Close()
    {
        Log("Closing game...", LOG_INFO);
    }

} // namespace cm
