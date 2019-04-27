SRC = main.c
ADD_LIBS = -lSDL2_image -lSDL2_ttf -lSDL2_mixer /home/ryu/bin/mruby-2.0.1/build/host/lib/libmruby.a -lm

dev:
	gcc -I/home/ryu/bin/mruby-2.0.1/include -g -Wall -Wno-switch -Wno-unused-label -o a.out -D DEV $(SRC) `sdl2-config --cflags --libs` $(ADD_LIBS)

release:
	gcc -Wall -o game $(SRC) `sdl2-config --cflags --libs` $(ADD_LIBS)

win:
	gcc -Wall -o game.exe -D WIN $(SRC) `sdl2-config --cflags --libs` $(ADD_LIBS)
