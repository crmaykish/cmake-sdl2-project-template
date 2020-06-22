#include "cm_input.h"

namespace cm
{
    void InputState::Reset()
    {
        On = OnLast;
        On = false;
    }

    void UserInput::Reset()
    {
        Left.Reset();
        Right.Reset();
        Up.Reset();
        Down.Reset();
        Primary.Reset();
        Secondary.Reset();
        Activate.Reset();
        Quit.Reset();
    }

} // namespace cm