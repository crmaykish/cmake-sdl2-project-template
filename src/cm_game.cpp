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
        Log("Starting game loop", LOG_INFO);

        Running = true;

        auto previousTime = std::chrono::steady_clock::now();
        std::chrono::duration<double> lag;

        while (Running)
        {
            auto currentTime = std::chrono::steady_clock::now();
            auto elapsedTime = currentTime - previousTime;
            previousTime = currentTime;
            lag += elapsedTime;

            // TODO: handle user input

            while (lag >= TIME_PER_TICK)
            {
                // TODO: update game state

                lag -= TIME_PER_TICK;
            }

            // TODO: render
        }
    }

    void Game::Close()
    {
        Log("Closing game...", LOG_INFO);
    }

} // namespace cm
