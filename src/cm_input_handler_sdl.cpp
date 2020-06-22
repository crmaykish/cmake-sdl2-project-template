#include <SDL.h>
#include "cm_input_handler_sdl.h"

namespace cm
{
    void SDLInputHandler::PollForInput(UserInput &userInput)
    {
        SDL_Event event;

        while (SDL_PollEvent(&event) != 0)
        {
            // Quit events
            if (event.type == SDL_QUIT)
            {
                userInput.Quit.On = true;
            }

            // Keyboard events
            else if (event.type == SDL_KEYDOWN)
            {
                switch (event.key.keysym.sym)
                {
                case SDLK_a:
                    userInput.Left.On = true;
                    break;
                case SDLK_d:
                    userInput.Right.On = true;
                    break;
                case SDLK_w:
                    userInput.Up.On = true;
                    break;
                case SDLK_s:
                    userInput.Down.On = true;
                    break;
                case SDLK_RETURN:
                    userInput.Primary.On = true;
                    break;
                case SDLK_LCTRL:
                    userInput.Secondary.On = true;
                    break;
                case SDLK_e:
                    userInput.Activate.On = true;
                    break;

                default:
                    break;
                }
            }

            // Mouse events
            else if (event.type == SDL_MOUSEMOTION)
            {
                SDL_GetMouseState(&userInput.Mouse.X, &userInput.Mouse.Y);
            }
            else if (event.type == SDL_MOUSEBUTTONDOWN)
            {
                switch (event.button.button)
                {
                case SDL_BUTTON_LEFT:
                    userInput.Mouse.Left = true;
                    break;
                case SDL_BUTTON_RIGHT:
                    userInput.Mouse.Right = true;
                    break;
                case SDL_BUTTON_MIDDLE:
                    userInput.Mouse.Middle = true;
                default:
                    break;
                }
            }
        }
    }

} // namespace cm
