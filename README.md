# cmake-sdl2-project-template
Template project to build cross-platform SDL2 applications

install:
install mingw

compile sdl2 for windows
install it to /usr/x86...mingw

compile game with sdl-config static libs option and -mwindows
e.g.

x86_64-w64-mingw32-g++ main.cpp $(/usr/x86_64-w64-mingw32/bin/sdl2-config --static-libs) -mwindows -static

how to make this work with cmake?
