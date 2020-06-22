#include "cm_game.h"
#include "cm_logger.h"

// REMOVE THIS
#include <SDL_gpu.h>

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

        // REMOVE THIS

        GPU_Target *t = GPU_Init(800, 600, GPU_DEFAULT_INIT_FLAGS);

        // REMOVE

        Running = true;
    }

    void Game::Loop()
    {
        Log("Starting game loop", LOG_INFO);

        auto previousTime = std::chrono::steady_clock::now();
        std::chrono::duration<double> lag;

        while (Running)
        {
            auto currentTime = std::chrono::steady_clock::now();
            auto elapsedTime = currentTime - previousTime;
            previousTime = currentTime;
            lag += elapsedTime;

            // Check for user input
            if (MainInputHandler != nullptr)
            {
                MainInputHandler->PollForInput(Input);
            }

            while (lag >= TIME_PER_TICK)
            {
                if (Input.Quit.On)
                {
                    Running = false;
                }

                if (Input.Left.On)
                {
                    Log("left: " + std::to_string(Input.Left.On), LOG_INFO);
                }
                
                // Input has been handled, reset states so it is not used again
                Input.Reset();

                lag -= TIME_PER_TICK;
            }

            // TODO: render
        }
    }

    void Game::Close()
    {
        Log("Closing game...", LOG_INFO);
    }

    void Game::SetMainInputHandler(std::shared_ptr<InputHandler> mainInputHandler)
    {
        MainInputHandler = mainInputHandler;
    }

} // namespace cm
