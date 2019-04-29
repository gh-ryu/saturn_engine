include config.mk
MSG = make 
# linux
ifeq ($(filter linux,$(MAKECMDGOALS)),linux)
LIB = `sdl2-config --cflags --libs` -lSDL2_image -lSDL2_ttf -lSDL2_mixer \
	  /home/$(USER)/bin/mruby-2.0.1/build/host/lib/libmruby.a -lm
INC = -I/home/$(USER)/bin/mruby-2.0.1/include
CC = gcc
RUN = -o a.out
MSG += linux
endif

# windows 64
ifeq ($(filter, win64,$(MAKECMDGOALS)),win64)
LIB = -lmingw32 -lSDL2main -lSDL2 -lSDL2_image -lSDL2_mixer -lSDL2_ttf
INC =
CC = x86_64-w64-mingw32-gcc
RUN = -o a.exe
SFLAG = -D_WIN32
MSG += win64
endif

# windows 32
ifeq ($(filter, win32,$(MAKECMDGOALS)),win32)
LIB =
INC =
CC = i686-w64-mingw32-gcc
RUN = -o a.exe
SFLAG = -D_WIN32
MSG += win32
endif

# platform independent
OBJ = main.c
ifeq ($(filter dev,$(MAKECMDGOALS)),dev)
CFLAG = -g -Wall -Wno-switch -Wno-unused-label
SFLAG += -D_DEBUG
MSG += dev
endif

#linux: $(OBJ) // does not recompile when header files change
linux:
	@echo $(MSG)
	$(CC) $(CFLAG) $(RUN) $(SFLAG) $(OBJ)  $(LIB) $(INC)

dev:
	@echo Compiled in debug mode.




#release:
#	gcc -Wall -o game $(SRC) `sdl2-config --cflags --libs` $(ADD_LIBS)
