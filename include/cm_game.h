#ifndef CM_GAME_H
#define CM_GAME_H

namespace cm
{
    class Game
    {
    private:
    public:
        Game();
        ~Game();

        void Init();
        void Loop();
        void Close();
    };

} // namespace cm

#endif // CM_GAME_H
