SRC = main.c
ADD_LIBS = -lSDL2_image -lSDL2_ttf -lSDL2_mixer -lm

dev:
	gcc -g -Wall -Wno-switch -Wno-unused-label -o a.out -D DEV $(SRC) `sdl2-config --cflags --libs` $(ADD_LIBS)

release:
	gcc -Wall -o game $(SRC) `sdl2-config --cflags --libs` $(ADD_LIBS)

win:
	gcc -Wall -o game.exe -D WIN32 $(SRC) `sdl2-config --cflags --libs` $(ADD_LIBS)
