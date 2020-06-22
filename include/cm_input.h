#ifndef CM_INPUT_H
#define CM_INPUT_H

namespace cm
{
    struct InputState
    {
        bool On = false;
        bool OnLast = false;

        void Reset();
    };

    struct MouseState
    {
        int X = 0;
        int Y = 0;
        bool Left = false;
        bool Right = false;
        bool Middle = false;
    };

    struct UserInput
    {
        MouseState Mouse;
        InputState Left;
        InputState Right;
        InputState Up;
        InputState Down;
        InputState Primary;
        InputState Secondary;
        InputState Activate;
        InputState Quit;

        void Reset();
    };

} // namespace cm

#endif // CM_INPUT_H
