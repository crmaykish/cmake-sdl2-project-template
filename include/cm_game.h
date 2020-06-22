#ifndef CM_GAME_H
#define CM_GAME_H

#include <chrono>

namespace cm
{
    // Rate at which the game state is updated (not the framerate)
    const double TICK_RATE_HZ = 60;
    const auto TIME_PER_TICK = std::chrono::duration<double>(1.0 / TICK_RATE_HZ);

    class Game
    {
    private:
        bool Running = false;

    public:
        Game();
        ~Game();

        void Init();
        void Loop();
        void Close();
    };

} // namespace cm

#endif // CM_GAME_H
