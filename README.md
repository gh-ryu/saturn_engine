# saturn_engine
C game programming framework built on SDL

setup
--
- Install mingw64
- cd into mruby-2.0.1/
- run ./minirake
- The compilation eventually stops with an error
- open mruby-2.0.1/build/mrbgems/mruby-method/src/method.c
- Replace the following:

`
#include <alloca.h>
// to
#if defined(WIN32) || defined(__WIN32) || defined(__WIN32__)
#include <malloc.h>
#else
#include <alloca.h>
#endif
`
- cd back into mruby-2.0.1/
- run ./minirake again
