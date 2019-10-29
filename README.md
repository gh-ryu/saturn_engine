# saturn_engine
Game programming framework written in C, built with SDL. Currently developed for private use. No strict plans for adding documentation to encourage usage yet.

Build mruby
--
- Install mingw64
- cd into mruby-2.0.1/
- run ./minirake
- The compilation eventually stops with an error
- open mruby-2.0.1/build/mrbgems/mruby-method/src/method.c
- Replace the following:

```c
#include <alloca.h>
// to
#if defined(WIN32) || defined(__WIN32) || defined(__WIN32__)
#include <malloc.h>
#else
#include <alloca.h>
#endif
```
- cd back into mruby-2.0.1/
- run ./minirake again
