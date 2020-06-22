#ifndef CM_GAME_H
#define CM_GAME_H

#include <memory>
#include <chrono>
#include "cm_input.h"
#include "cm_input_handler.h"

namespace cm
{
    // Rate at which the game state is updated (not the framerate)
    const double TICK_RATE_HZ = 60;
    const auto TIME_PER_TICK = std::chrono::duration<double>(1.0 / TICK_RATE_HZ);

    class Game
    {
    private:
        bool Running = false;
        UserInput Input;
        std::shared_ptr<InputHandler> MainInputHandler = nullptr;

    public:
        Game();
        ~Game();

        void Init();
        void Loop();
        void Close();

        void SetMainInputHandler(std::shared_ptr<InputHandler> mainInputHandler);
    };

} // namespace cm

#endif // CM_GAME_H
