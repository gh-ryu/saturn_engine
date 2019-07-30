make linux dev
gcc -g -Wall -Wno-switch -Wno-unused-label -E demo -D_DEBUG main.c  `sdl2-config --cflags --libs` -lSDL2_image -lSDL2_mixer /home/ryu/bin/mruby-2.0.1/build/host/lib/libmruby.a -lm -I/home/ryu/bin/mruby-2.0.1/include
# 1 "main.c"
# 1 "/home/ryu/workspace/saturn_engine//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "main.c"




# 1 "lib/saturn_engine.h" 1


# 1 "lib/core/saturn_engine_core.h" 1
# 13 "lib/core/saturn_engine_core.h"
# 1 "/usr/include/SDL2/SDL.h" 1
# 32 "/usr/include/SDL2/SDL.h"
# 1 "/usr/include/SDL2/SDL_main.h" 1
# 25 "/usr/include/SDL2/SDL_main.h"
# 1 "/usr/include/SDL2/SDL_stdinc.h" 1
# 31 "/usr/include/SDL2/SDL_stdinc.h"
# 1 "/usr/include/SDL2/SDL_config.h" 1
# 33 "/usr/include/SDL2/SDL_config.h"
# 1 "/usr/include/SDL2/SDL_platform.h" 1
# 166 "/usr/include/SDL2/SDL_platform.h"
# 1 "/usr/include/SDL2/begin_code.h" 1
# 167 "/usr/include/SDL2/SDL_platform.h" 2
# 175 "/usr/include/SDL2/SDL_platform.h"
extern __attribute__ ((visibility("default"))) const char * SDL_GetPlatform (void);





# 1 "/usr/include/SDL2/close_code.h" 1
# 182 "/usr/include/SDL2/SDL_platform.h" 2
# 34 "/usr/include/SDL2/SDL_config.h" 2
# 32 "/usr/include/SDL2/SDL_stdinc.h" 2


# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 364 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 415 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 416 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 365 "/usr/include/features.h" 2 3 4
# 388 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 389 "/usr/include/features.h" 2 3 4
# 26 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4



# 30 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
# 121 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 122 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 30 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
# 60 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
# 98 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __pid_t pid_t;





typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 132 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 57 "/usr/include/time.h" 3 4


typedef __clock_t clock_t;



# 73 "/usr/include/time.h" 3 4


typedef __time_t time_t;



# 91 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 103 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 133 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 146 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/6/include/stddef.h" 1 3 4
# 216 "/usr/lib/gcc/x86_64-linux-gnu/6/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 147 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 194 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 216 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4






# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h" 1 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4
# 44 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline unsigned int
__bswap_32 (unsigned int __bsx)
{
  return __builtin_bswap32 (__bsx);
}
# 108 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{
  return __builtin_bswap64 (__bsx);
}
# 61 "/usr/include/endian.h" 2 3 4
# 217 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/sys/select.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/select.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/select.h" 2 3 4
# 31 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 34 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;







# 1 "/usr/include/time.h" 1 3 4
# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
  };
# 46 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 48 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4


typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
# 66 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;
# 98 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

# 108 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 120 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
# 133 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

# 220 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4


__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 58 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4

# 223 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 270 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 2 3 4
# 60 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;





typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
# 90 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    short __spins;
    short __elision;
    __pthread_list_t __list;
# 125 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
  } __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{

  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    signed char __rwelision;




    unsigned char __pad1[7];


    unsigned long int __pad2;


    unsigned int __flags;

  } __data;
# 220 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 271 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



# 35 "/usr/include/SDL2/SDL_stdinc.h" 2


# 1 "/usr/include/stdio.h" 1 3 4
# 29 "/usr/include/stdio.h" 3 4




# 1 "/usr/lib/gcc/x86_64-linux-gnu/6/include/stddef.h" 1 3 4
# 34 "/usr/include/stdio.h" 2 3 4
# 44 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;





# 64 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 74 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 31 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/6/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
# 82 "/usr/include/wchar.h" 3 4
typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 21 "/usr/include/_G_config.h" 2 3 4
typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 32 "/usr/include/libio.h" 2 3 4
# 49 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/6/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/6/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 50 "/usr/include/libio.h" 2 3 4
# 144 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;





typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 173 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 241 "/usr/include/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 289 "/usr/include/libio.h" 3 4
  __off64_t _offset;







  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;

  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 333 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
# 385 "/usr/include/libio.h" 3 4
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 429 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 459 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 75 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
# 110 "/usr/include/stdio.h" 3 4


typedef _G_fpos_t fpos_t;




# 166 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 167 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));




extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));








extern FILE *tmpfile (void) ;
# 211 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;
# 229 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 254 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 268 "/usr/include/stdio.h" 3 4






extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 297 "/usr/include/stdio.h" 3 4

# 308 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) ;
# 321 "/usr/include/stdio.h" 3 4
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__)) ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));








extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));





extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));

# 414 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));








extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
# 445 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;
# 465 "/usr/include/stdio.h" 3 4








extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
# 496 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 524 "/usr/include/stdio.h" 3 4









extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

# 552 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 563 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

# 596 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;
# 642 "/usr/include/stdio.h" 3 4

# 667 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;








extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);

# 739 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

# 775 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 794 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 817 "/usr/include/stdio.h" 3 4

# 826 "/usr/include/stdio.h" 3 4


extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;








extern void perror (const char *__s);






# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];
# 856 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
# 874 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));
# 914 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
# 944 "/usr/include/stdio.h" 3 4

# 38 "/usr/include/SDL2/SDL_stdinc.h" 2


# 1 "/usr/include/stdlib.h" 1 3 4
# 32 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/6/include/stddef.h" 1 3 4
# 328 "/usr/lib/gcc/x86_64-linux-gnu/6/include/stddef.h" 3 4
typedef int wchar_t;
# 33 "/usr/include/stdlib.h" 2 3 4








# 1 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 1 3 4
# 50 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3 4
typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
} idtype_t;
# 42 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 1 3 4
# 43 "/usr/include/stdlib.h" 2 3 4
# 56 "/usr/include/stdlib.h" 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;







__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;


# 100 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ , __leaf__)) ;




extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

# 266 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__ , __leaf__)) ;


extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;
# 282 "/usr/include/stdlib.h" 3 4
extern long int random (void) __attribute__ ((__nothrow__ , __leaf__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) __attribute__ ((__nothrow__ , __leaf__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));




extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__ , __leaf__));







extern double drand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__ , __leaf__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));









extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;










extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));




extern void cfree (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));



# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/6/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__ , __leaf__));






# 454 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;




extern void *aligned_alloc (size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (2))) ;




extern void abort (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int at_quick_exit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));





extern void quick_exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));







extern void _Exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));






extern char *getenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;

# 539 "/usr/include/stdlib.h" 3 4
extern int putenv (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ , __leaf__));
# 567 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 580 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 602 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 623 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 672 "/usr/include/stdlib.h" 3 4





extern int system (const char *__command) ;

# 694 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ , __leaf__)) ;






typedef int (*__compar_fn_t) (const void *, const void *);
# 712 "/usr/include/stdlib.h" 3 4



extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
# 735 "/usr/include/stdlib.h" 3 4
extern int abs (int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;

# 772 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));






extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ , __leaf__));



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__));








extern int rpmatch (const char *__response) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 859 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;
# 911 "/usr/include/stdlib.h" 3 4
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 921 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
# 922 "/usr/include/stdlib.h" 2 3 4
# 934 "/usr/include/stdlib.h" 3 4

# 41 "/usr/include/SDL2/SDL_stdinc.h" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/6/include/stddef.h" 1 3 4
# 149 "/usr/lib/gcc/x86_64-linux-gnu/6/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 426 "/usr/lib/gcc/x86_64-linux-gnu/6/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;
# 42 "/usr/include/SDL2/SDL_stdinc.h" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/6/include/stdarg.h" 1 3 4
# 43 "/usr/include/SDL2/SDL_stdinc.h" 2
# 60 "/usr/include/SDL2/SDL_stdinc.h"
# 1 "/usr/include/string.h" 1 3 4
# 27 "/usr/include/string.h" 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/6/include/stddef.h" 1 3 4
# 33 "/usr/include/string.h" 2 3 4









extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 92 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 123 "/usr/include/string.h" 3 4


extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));






# 1 "/usr/include/xlocale.h" 1 3 4
# 27 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 160 "/usr/include/string.h" 2 3 4


extern int strcoll_l (const char *__s1, const char *__s2, __locale_t __l)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    __locale_t __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));




extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 206 "/usr/include/string.h" 3 4

# 231 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 258 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 277 "/usr/include/string.h" 3 4



extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 310 "/usr/include/string.h" 3 4
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 337 "/usr/include/string.h" 3 4
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 392 "/usr/include/string.h" 3 4


extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));

# 422 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ , __leaf__))

                        __attribute__ ((__nonnull__ (2)));
# 440 "/usr/include/string.h" 3 4
extern char *strerror_l (int __errnum, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));





extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern void bcopy (const void *__src, void *__dest, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 484 "/usr/include/string.h" 3 4
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 512 "/usr/include/string.h" 3 4
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern int ffs (int __i) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 529 "/usr/include/string.h" 3 4
extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 552 "/usr/include/string.h" 3 4
extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 656 "/usr/include/string.h" 3 4

# 61 "/usr/include/SDL2/SDL_stdinc.h" 2


# 1 "/usr/include/strings.h" 1 3 4
# 64 "/usr/include/SDL2/SDL_stdinc.h" 2


# 1 "/usr/include/inttypes.h" 1 3 4
# 27 "/usr/include/inttypes.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/6/include/stdint.h" 1 3 4
# 9 "/usr/lib/gcc/x86_64-linux-gnu/6/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 26 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wchar.h" 1 3 4
# 27 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/stdint.h" 2 3 4
# 48 "/usr/include/stdint.h" 3 4
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;



typedef unsigned long int uint64_t;
# 65 "/usr/include/stdint.h" 3 4
typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;

typedef long int int_least64_t;






typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

typedef unsigned long int uint_least64_t;
# 90 "/usr/include/stdint.h" 3 4
typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
# 103 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 119 "/usr/include/stdint.h" 3 4
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
# 134 "/usr/include/stdint.h" 3 4
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
# 10 "/usr/lib/gcc/x86_64-linux-gnu/6/include/stdint.h" 2 3 4
# 28 "/usr/include/inttypes.h" 2 3 4






typedef int __gwchar_t;
# 266 "/usr/include/inttypes.h" 3 4





typedef struct
  {
    long int quot;
    long int rem;
  } imaxdiv_t;
# 290 "/usr/include/inttypes.h" 3 4
extern intmax_t imaxabs (intmax_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern imaxdiv_t imaxdiv (intmax_t __numer, intmax_t __denom)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern intmax_t strtoimax (const char *__restrict __nptr,
      char **__restrict __endptr, int __base) __attribute__ ((__nothrow__ , __leaf__));


extern uintmax_t strtoumax (const char *__restrict __nptr,
       char ** __restrict __endptr, int __base) __attribute__ ((__nothrow__ , __leaf__));


extern intmax_t wcstoimax (const __gwchar_t *__restrict __nptr,
      __gwchar_t **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__));


extern uintmax_t wcstoumax (const __gwchar_t *__restrict __nptr,
       __gwchar_t ** __restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__));
# 432 "/usr/include/inttypes.h" 3 4

# 67 "/usr/include/SDL2/SDL_stdinc.h" 2




# 1 "/usr/include/ctype.h" 1 3 4
# 28 "/usr/include/ctype.h" 3 4

# 46 "/usr/include/ctype.h" 3 4
enum
{
  _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)),
  _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)),
  _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)),
  _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)),
  _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)),
  _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)),
  _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)),
  _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)),
  _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)),
  _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)),
  _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)),
  _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8))
};
# 79 "/usr/include/ctype.h" 3 4
extern const unsigned short int **__ctype_b_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern const __int32_t **__ctype_tolower_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern const __int32_t **__ctype_toupper_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 104 "/usr/include/ctype.h" 3 4






extern int isalnum (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isalpha (int) __attribute__ ((__nothrow__ , __leaf__));
extern int iscntrl (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isdigit (int) __attribute__ ((__nothrow__ , __leaf__));
extern int islower (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isgraph (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isprint (int) __attribute__ ((__nothrow__ , __leaf__));
extern int ispunct (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isspace (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isupper (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isxdigit (int) __attribute__ ((__nothrow__ , __leaf__));



extern int tolower (int __c) __attribute__ ((__nothrow__ , __leaf__));


extern int toupper (int __c) __attribute__ ((__nothrow__ , __leaf__));








extern int isblank (int) __attribute__ ((__nothrow__ , __leaf__));


# 150 "/usr/include/ctype.h" 3 4
extern int isascii (int __c) __attribute__ ((__nothrow__ , __leaf__));



extern int toascii (int __c) __attribute__ ((__nothrow__ , __leaf__));



extern int _toupper (int) __attribute__ ((__nothrow__ , __leaf__));
extern int _tolower (int) __attribute__ ((__nothrow__ , __leaf__));
# 271 "/usr/include/ctype.h" 3 4
extern int isalnum_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isalpha_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int iscntrl_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isdigit_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int islower_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isgraph_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isprint_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int ispunct_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isspace_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isupper_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isxdigit_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));

extern int isblank_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));



extern int __tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
extern int tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));


extern int __toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
extern int toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
# 347 "/usr/include/ctype.h" 3 4

# 72 "/usr/include/SDL2/SDL_stdinc.h" 2
# 81 "/usr/include/SDL2/SDL_stdinc.h"
# 1 "/usr/include/math.h" 1 3 4
# 28 "/usr/include/math.h" 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/math-vector.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/math-vector.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libm-simd-decl-stubs.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/math-vector.h" 2 3 4
# 32 "/usr/include/math.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/huge_val.h" 1 3 4
# 36 "/usr/include/math.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/huge_valf.h" 1 3 4
# 38 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/huge_vall.h" 1 3 4
# 39 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/inf.h" 1 3 4
# 42 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/nan.h" 1 3 4
# 45 "/usr/include/math.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 3 4
typedef float float_t;
typedef double double_t;
# 49 "/usr/include/math.h" 2 3 4
# 83 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern double acos (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __acos (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double asin (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __asin (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double atan (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atan (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double atan2 (double __y, double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atan2 (double __y, double __x) __attribute__ ((__nothrow__ , __leaf__));


 extern double cos (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cos (double __x) __attribute__ ((__nothrow__ , __leaf__));

 extern double sin (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sin (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double tan (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __tan (double __x) __attribute__ ((__nothrow__ , __leaf__));




extern double cosh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cosh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double sinh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sinh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double tanh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __tanh (double __x) __attribute__ ((__nothrow__ , __leaf__));

# 86 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern double acosh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __acosh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double asinh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __asinh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double atanh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atanh (double __x) __attribute__ ((__nothrow__ , __leaf__));







 extern double exp (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __exp (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern double __frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern double ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern double __ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


 extern double log (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double log10 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log10 (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double modf (double __x, double *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern double __modf (double __x, double *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

# 126 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern double expm1 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __expm1 (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double log1p (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log1p (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double logb (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __logb (double __x) __attribute__ ((__nothrow__ , __leaf__));






extern double exp2 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __exp2 (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double log2 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log2 (double __x) __attribute__ ((__nothrow__ , __leaf__));








 extern double pow (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __pow (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));


extern double sqrt (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sqrt (double __x) __attribute__ ((__nothrow__ , __leaf__));





extern double hypot (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __hypot (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));






extern double cbrt (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cbrt (double __x) __attribute__ ((__nothrow__ , __leaf__));








extern double ceil (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __ceil (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fabs (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fabs (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double floor (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __floor (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fmod (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __fmod (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));




extern int __isinf (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int __finite (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));








extern int isinf (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int finite (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double drem (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __drem (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));



extern double significand (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __significand (double __x) __attribute__ ((__nothrow__ , __leaf__));





extern double copysign (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __copysign (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern double nan (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __nan (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int __isnan (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern int isnan (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern double j0 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __j0 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double j1 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __j1 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double jn (int, double) __attribute__ ((__nothrow__ , __leaf__)); extern double __jn (int, double) __attribute__ ((__nothrow__ , __leaf__));
extern double y0 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __y0 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double y1 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __y1 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double yn (int, double) __attribute__ ((__nothrow__ , __leaf__)); extern double __yn (int, double) __attribute__ ((__nothrow__ , __leaf__));






extern double erf (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __erf (double) __attribute__ ((__nothrow__ , __leaf__));
extern double erfc (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __erfc (double) __attribute__ ((__nothrow__ , __leaf__));
extern double lgamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __lgamma (double) __attribute__ ((__nothrow__ , __leaf__));






extern double tgamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __tgamma (double) __attribute__ ((__nothrow__ , __leaf__));





extern double gamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __gamma (double) __attribute__ ((__nothrow__ , __leaf__));






extern double lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern double __lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));







extern double rint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __rint (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double nextafter (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __nextafter (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));

extern double nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 305 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern double remainder (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __remainder (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));



extern double scalbn (double __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalbn (double __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogb (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogb (double __x) __attribute__ ((__nothrow__ , __leaf__));




extern double scalbln (double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalbln (double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern double nearbyint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __nearbyint (double __x) __attribute__ ((__nothrow__ , __leaf__));



extern double round (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __round (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern double trunc (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __trunc (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern double remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern double __remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrint (double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrint (double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lround (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lround (double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llround (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llround (double __x) __attribute__ ((__nothrow__ , __leaf__));



extern double fdim (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __fdim (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));


extern double fmax (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fmax (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fmin (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fmin (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int __fpclassify (double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));


extern int __signbit (double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));



extern double fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ , __leaf__)); extern double __fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ , __leaf__));




# 390 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern double scalb (double __x, double __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalb (double __x, double __n) __attribute__ ((__nothrow__ , __leaf__));
# 84 "/usr/include/math.h" 2 3 4
# 104 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern float acosf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __acosf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float asinf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __asinf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float atanf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atanf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float atan2f (float __y, float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atan2f (float __y, float __x) __attribute__ ((__nothrow__ , __leaf__));


 extern float cosf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __cosf (float __x) __attribute__ ((__nothrow__ , __leaf__));

 extern float sinf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sinf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float tanf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __tanf (float __x) __attribute__ ((__nothrow__ , __leaf__));




extern float coshf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __coshf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float sinhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sinhf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float tanhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __tanhf (float __x) __attribute__ ((__nothrow__ , __leaf__));

# 86 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern float acoshf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __acoshf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float asinhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __asinhf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float atanhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atanhf (float __x) __attribute__ ((__nothrow__ , __leaf__));







 extern float expf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __expf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern float __frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern float ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern float __ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


 extern float logf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __logf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float log10f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log10f (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float modff (float __x, float *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern float __modff (float __x, float *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

# 126 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern float expm1f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __expm1f (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float log1pf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log1pf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float logbf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __logbf (float __x) __attribute__ ((__nothrow__ , __leaf__));






extern float exp2f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __exp2f (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float log2f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log2f (float __x) __attribute__ ((__nothrow__ , __leaf__));








 extern float powf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __powf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));


extern float sqrtf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sqrtf (float __x) __attribute__ ((__nothrow__ , __leaf__));





extern float hypotf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __hypotf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));






extern float cbrtf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __cbrtf (float __x) __attribute__ ((__nothrow__ , __leaf__));








extern float ceilf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __ceilf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fabsf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fabsf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float floorf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __floorf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fmodf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __fmodf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));




extern int __isinff (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int __finitef (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));








extern int isinff (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int finitef (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float dremf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __dremf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));



extern float significandf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __significandf (float __x) __attribute__ ((__nothrow__ , __leaf__));





extern float copysignf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern float nanf (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __nanf (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int __isnanf (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern int isnanf (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern float j0f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __j0f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float j1f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __j1f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float jnf (int, float) __attribute__ ((__nothrow__ , __leaf__)); extern float __jnf (int, float) __attribute__ ((__nothrow__ , __leaf__));
extern float y0f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __y0f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float y1f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __y1f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float ynf (int, float) __attribute__ ((__nothrow__ , __leaf__)); extern float __ynf (int, float) __attribute__ ((__nothrow__ , __leaf__));






extern float erff (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __erff (float) __attribute__ ((__nothrow__ , __leaf__));
extern float erfcf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __erfcf (float) __attribute__ ((__nothrow__ , __leaf__));
extern float lgammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __lgammaf (float) __attribute__ ((__nothrow__ , __leaf__));






extern float tgammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __tgammaf (float) __attribute__ ((__nothrow__ , __leaf__));





extern float gammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __gammaf (float) __attribute__ ((__nothrow__ , __leaf__));






extern float lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern float __lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));







extern float rintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __rintf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float nextafterf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __nextafterf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));

extern float nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 305 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern float remainderf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __remainderf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));



extern float scalbnf (float __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalbnf (float __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogbf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbf (float __x) __attribute__ ((__nothrow__ , __leaf__));




extern float scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern float nearbyintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __nearbyintf (float __x) __attribute__ ((__nothrow__ , __leaf__));



extern float roundf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __roundf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern float truncf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __truncf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern float remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern float __remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrintf (float __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrintf (float __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lroundf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lroundf (float __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llroundf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llroundf (float __x) __attribute__ ((__nothrow__ , __leaf__));



extern float fdimf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __fdimf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));


extern float fmaxf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fmaxf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fminf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fminf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int __fpclassifyf (float __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));


extern int __signbitf (float __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));



extern float fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ , __leaf__)); extern float __fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ , __leaf__));




# 390 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern float scalbf (float __x, float __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalbf (float __x, float __n) __attribute__ ((__nothrow__ , __leaf__));
# 105 "/usr/include/math.h" 2 3 4
# 151 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern long double acosl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __acosl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double asinl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __asinl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double atanl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atanl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ , __leaf__));


 extern long double cosl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __cosl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

 extern long double sinl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sinl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double tanl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tanl (long double __x) __attribute__ ((__nothrow__ , __leaf__));




extern long double coshl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __coshl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double sinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double tanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

# 86 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern long double acoshl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __acoshl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double asinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __asinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double atanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));







 extern long double expl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __expl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern long double __frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern long double ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern long double __ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


 extern long double logl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __logl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double log10l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log10l (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern long double __modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

# 126 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern long double expm1l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __expm1l (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double log1pl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log1pl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double logbl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __logbl (long double __x) __attribute__ ((__nothrow__ , __leaf__));






extern long double exp2l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __exp2l (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double log2l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log2l (long double __x) __attribute__ ((__nothrow__ , __leaf__));








 extern long double powl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __powl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));


extern long double sqrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sqrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__));





extern long double hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));






extern long double cbrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __cbrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__));








extern long double ceill (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __ceill (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fabsl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fabsl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double floorl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __floorl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));




extern int __isinfl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int __finitel (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));








extern int isinfl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int finitel (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double dreml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __dreml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));



extern long double significandl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __significandl (long double __x) __attribute__ ((__nothrow__ , __leaf__));





extern long double copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern long double nanl (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __nanl (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int __isnanl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern int isnanl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern long double j0l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __j0l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double j1l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __j1l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double jnl (int, long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __jnl (int, long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double y0l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __y0l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double y1l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __y1l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double ynl (int, long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __ynl (int, long double) __attribute__ ((__nothrow__ , __leaf__));






extern long double erfl (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __erfl (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double erfcl (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __erfcl (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double lgammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __lgammal (long double) __attribute__ ((__nothrow__ , __leaf__));






extern long double tgammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tgammal (long double) __attribute__ ((__nothrow__ , __leaf__));





extern long double gammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __gammal (long double) __attribute__ ((__nothrow__ , __leaf__));






extern long double lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern long double __lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));







extern long double rintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __rintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));

extern long double nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 305 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern long double remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));



extern long double scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogbl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbl (long double __x) __attribute__ ((__nothrow__ , __leaf__));




extern long double scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern long double nearbyintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __nearbyintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long double roundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __roundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern long double truncl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __truncl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern long double remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern long double __remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long double fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));


extern long double fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fminl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fminl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int __fpclassifyl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));


extern int __signbitl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));



extern long double fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ , __leaf__));




# 390 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern long double scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ , __leaf__));
# 152 "/usr/include/math.h" 2 3 4
# 168 "/usr/include/math.h" 3 4
extern int signgam;
# 209 "/usr/include/math.h" 3 4
enum
  {
    FP_NAN =

      0,
    FP_INFINITE =

      1,
    FP_ZERO =

      2,
    FP_SUBNORMAL =

      3,
    FP_NORMAL =

      4
  };
# 347 "/usr/include/math.h" 3 4
typedef enum
{
  _IEEE_ = -1,
  _SVID_,
  _XOPEN_,
  _POSIX_,
  _ISOC_
} _LIB_VERSION_TYPE;




extern _LIB_VERSION_TYPE _LIB_VERSION;
# 372 "/usr/include/math.h" 3 4
struct exception

  {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
  };




extern int matherr (struct exception *__exc);
# 534 "/usr/include/math.h" 3 4

# 82 "/usr/include/SDL2/SDL_stdinc.h" 2
# 130 "/usr/include/SDL2/SDL_stdinc.h"

# 130 "/usr/include/SDL2/SDL_stdinc.h"
typedef enum
{
    SDL_FALSE = 0,
    SDL_TRUE = 1
} SDL_bool;




typedef int8_t Sint8;



typedef uint8_t Uint8;



typedef int16_t Sint16;



typedef uint16_t Uint16;



typedef int32_t Sint32;



typedef uint32_t Uint32;




typedef int64_t Sint64;



typedef uint64_t Uint64;
# 268 "/usr/include/SDL2/SDL_stdinc.h"
typedef int SDL_dummy_uint8[(sizeof(Uint8) == 1) * 2 - 1];
typedef int SDL_dummy_sint8[(sizeof(Sint8) == 1) * 2 - 1];
typedef int SDL_dummy_uint16[(sizeof(Uint16) == 2) * 2 - 1];
typedef int SDL_dummy_sint16[(sizeof(Sint16) == 2) * 2 - 1];
typedef int SDL_dummy_uint32[(sizeof(Uint32) == 4) * 2 - 1];
typedef int SDL_dummy_sint32[(sizeof(Sint32) == 4) * 2 - 1];
typedef int SDL_dummy_uint64[(sizeof(Uint64) == 8) * 2 - 1];
typedef int SDL_dummy_sint64[(sizeof(Sint64) == 8) * 2 - 1];
# 289 "/usr/include/SDL2/SDL_stdinc.h"
typedef enum
{
    DUMMY_ENUM_VALUE
} SDL_DUMMY_ENUM;

typedef int SDL_dummy_enum[(sizeof(SDL_DUMMY_ENUM) == sizeof(int)) * 2 - 1];




# 1 "/usr/include/SDL2/begin_code.h" 1
# 300 "/usr/include/SDL2/SDL_stdinc.h" 2
# 335 "/usr/include/SDL2/SDL_stdinc.h"
extern __attribute__ ((visibility("default"))) void * SDL_malloc(size_t size);
extern __attribute__ ((visibility("default"))) void * SDL_calloc(size_t nmemb, size_t size);
extern __attribute__ ((visibility("default"))) void * SDL_realloc(void *mem, size_t size);
extern __attribute__ ((visibility("default"))) void SDL_free(void *mem);

extern __attribute__ ((visibility("default"))) char * SDL_getenv(const char *name);
extern __attribute__ ((visibility("default"))) int SDL_setenv(const char *name, const char *value, int overwrite);

extern __attribute__ ((visibility("default"))) void SDL_qsort(void *base, size_t nmemb, size_t size, int (*compare) (const void *, const void *));

extern __attribute__ ((visibility("default"))) int SDL_abs(int x);






extern __attribute__ ((visibility("default"))) int SDL_isdigit(int x);
extern __attribute__ ((visibility("default"))) int SDL_isspace(int x);
extern __attribute__ ((visibility("default"))) int SDL_toupper(int x);
extern __attribute__ ((visibility("default"))) int SDL_tolower(int x);

extern __attribute__ ((visibility("default"))) void * SDL_memset( void *dst, int c, size_t len);





__attribute__((always_inline)) static __inline__ void SDL_memset4(void *dst, Uint32 val, size_t dwords)
{
# 375 "/usr/include/SDL2/SDL_stdinc.h"
    size_t _n = (dwords + 3) / 4;
    Uint32 *_p = ((Uint32 *)(dst));
    Uint32 _val = (val);
    if (dwords == 0)
        return;
    switch (dwords % 4)
    {
        case 0: do { *_p++ = _val;
        case 3: *_p++ = _val;
        case 2: *_p++ = _val;
        case 1: *_p++ = _val;
        } while ( --_n );
    }

}


extern __attribute__ ((visibility("default"))) void * SDL_memcpy( void *dst, const void *src, size_t len);

extern __attribute__ ((visibility("default"))) void * SDL_memmove( void *dst, const void *src, size_t len);
extern __attribute__ ((visibility("default"))) int SDL_memcmp(const void *s1, const void *s2, size_t len);

extern __attribute__ ((visibility("default"))) size_t SDL_wcslen(const wchar_t *wstr);
extern __attribute__ ((visibility("default"))) size_t SDL_wcslcpy( wchar_t *dst, const wchar_t *src, size_t maxlen);
extern __attribute__ ((visibility("default"))) size_t SDL_wcslcat( wchar_t *dst, const wchar_t *src, size_t maxlen);

extern __attribute__ ((visibility("default"))) size_t SDL_strlen(const char *str);
extern __attribute__ ((visibility("default"))) size_t SDL_strlcpy( char *dst, const char *src, size_t maxlen);
extern __attribute__ ((visibility("default"))) size_t SDL_utf8strlcpy( char *dst, const char *src, size_t dst_bytes);
extern __attribute__ ((visibility("default"))) size_t SDL_strlcat( char *dst, const char *src, size_t maxlen);
extern __attribute__ ((visibility("default"))) char * SDL_strdup(const char *str);
extern __attribute__ ((visibility("default"))) char * SDL_strrev(char *str);
extern __attribute__ ((visibility("default"))) char * SDL_strupr(char *str);
extern __attribute__ ((visibility("default"))) char * SDL_strlwr(char *str);
extern __attribute__ ((visibility("default"))) char * SDL_strchr(const char *str, int c);
extern __attribute__ ((visibility("default"))) char * SDL_strrchr(const char *str, int c);
extern __attribute__ ((visibility("default"))) char * SDL_strstr(const char *haystack, const char *needle);

extern __attribute__ ((visibility("default"))) char * SDL_itoa(int value, char *str, int radix);
extern __attribute__ ((visibility("default"))) char * SDL_uitoa(unsigned int value, char *str, int radix);
extern __attribute__ ((visibility("default"))) char * SDL_ltoa(long value, char *str, int radix);
extern __attribute__ ((visibility("default"))) char * SDL_ultoa(unsigned long value, char *str, int radix);
extern __attribute__ ((visibility("default"))) char * SDL_lltoa(Sint64 value, char *str, int radix);
extern __attribute__ ((visibility("default"))) char * SDL_ulltoa(Uint64 value, char *str, int radix);

extern __attribute__ ((visibility("default"))) int SDL_atoi(const char *str);
extern __attribute__ ((visibility("default"))) double SDL_atof(const char *str);
extern __attribute__ ((visibility("default"))) long SDL_strtol(const char *str, char **endp, int base);
extern __attribute__ ((visibility("default"))) unsigned long SDL_strtoul(const char *str, char **endp, int base);
extern __attribute__ ((visibility("default"))) Sint64 SDL_strtoll(const char *str, char **endp, int base);
extern __attribute__ ((visibility("default"))) Uint64 SDL_strtoull(const char *str, char **endp, int base);
extern __attribute__ ((visibility("default"))) double SDL_strtod(const char *str, char **endp);

extern __attribute__ ((visibility("default"))) int SDL_strcmp(const char *str1, const char *str2);
extern __attribute__ ((visibility("default"))) int SDL_strncmp(const char *str1, const char *str2, size_t maxlen);
extern __attribute__ ((visibility("default"))) int SDL_strcasecmp(const char *str1, const char *str2);
extern __attribute__ ((visibility("default"))) int SDL_strncasecmp(const char *str1, const char *str2, size_t len);

extern __attribute__ ((visibility("default"))) int SDL_sscanf(const char *text, const char *fmt, ...) __attribute__ (( format( __scanf__, 2, 2 +1 )));
extern __attribute__ ((visibility("default"))) int SDL_vsscanf(const char *text, const char *fmt, va_list ap);
extern __attribute__ ((visibility("default"))) int SDL_snprintf( char *text, size_t maxlen, const char *fmt, ... ) __attribute__ (( format( __printf__, 3, 3 +1 )));
extern __attribute__ ((visibility("default"))) int SDL_vsnprintf( char *text, size_t maxlen, const char *fmt, va_list ap);







extern __attribute__ ((visibility("default"))) double SDL_acos(double x);
extern __attribute__ ((visibility("default"))) double SDL_asin(double x);
extern __attribute__ ((visibility("default"))) double SDL_atan(double x);
extern __attribute__ ((visibility("default"))) double SDL_atan2(double x, double y);
extern __attribute__ ((visibility("default"))) double SDL_ceil(double x);
extern __attribute__ ((visibility("default"))) double SDL_copysign(double x, double y);
extern __attribute__ ((visibility("default"))) double SDL_cos(double x);
extern __attribute__ ((visibility("default"))) float SDL_cosf(float x);
extern __attribute__ ((visibility("default"))) double SDL_fabs(double x);
extern __attribute__ ((visibility("default"))) double SDL_floor(double x);
extern __attribute__ ((visibility("default"))) double SDL_log(double x);
extern __attribute__ ((visibility("default"))) double SDL_pow(double x, double y);
extern __attribute__ ((visibility("default"))) double SDL_scalbn(double x, int n);
extern __attribute__ ((visibility("default"))) double SDL_sin(double x);
extern __attribute__ ((visibility("default"))) float SDL_sinf(float x);
extern __attribute__ ((visibility("default"))) double SDL_sqrt(double x);
extern __attribute__ ((visibility("default"))) float SDL_sqrtf(float x);
extern __attribute__ ((visibility("default"))) double SDL_tan(double x);
extern __attribute__ ((visibility("default"))) float SDL_tanf(float x);
# 471 "/usr/include/SDL2/SDL_stdinc.h"
typedef struct _SDL_iconv_t *SDL_iconv_t;
extern __attribute__ ((visibility("default"))) SDL_iconv_t SDL_iconv_open(const char *tocode,
                                                   const char *fromcode);
extern __attribute__ ((visibility("default"))) int SDL_iconv_close(SDL_iconv_t cd);
extern __attribute__ ((visibility("default"))) size_t SDL_iconv(SDL_iconv_t cd, const char **inbuf,
                                         size_t * inbytesleft, char **outbuf,
                                         size_t * outbytesleft);




extern __attribute__ ((visibility("default"))) char * SDL_iconv_string(const char *tocode,
                                               const char *fromcode,
                                               const char *inbuf,
                                               size_t inbytesleft);
# 518 "/usr/include/SDL2/SDL_stdinc.h"
__attribute__((always_inline)) static __inline__ void *SDL_memcpy4( void *dst, const void *src, size_t dwords)
{
    return SDL_memcpy(dst, src, dwords * 4);
}





# 1 "/usr/include/SDL2/close_code.h" 1
# 528 "/usr/include/SDL2/SDL_stdinc.h" 2
# 26 "/usr/include/SDL2/SDL_main.h" 2
# 110 "/usr/include/SDL2/SDL_main.h"
extern int SDL_main(int argc, char *argv[]);


# 1 "/usr/include/SDL2/begin_code.h" 1
# 114 "/usr/include/SDL2/SDL_main.h" 2
# 125 "/usr/include/SDL2/SDL_main.h"
extern __attribute__ ((visibility("default"))) void SDL_SetMainReady(void);
# 157 "/usr/include/SDL2/SDL_main.h"
# 1 "/usr/include/SDL2/close_code.h" 1
# 158 "/usr/include/SDL2/SDL_main.h" 2
# 33 "/usr/include/SDL2/SDL.h" 2

# 1 "/usr/include/SDL2/SDL_assert.h" 1
# 27 "/usr/include/SDL2/SDL_assert.h"
# 1 "/usr/include/SDL2/begin_code.h" 1
# 28 "/usr/include/SDL2/SDL_assert.h" 2
# 100 "/usr/include/SDL2/SDL_assert.h"
typedef enum
{
    SDL_ASSERTION_RETRY,
    SDL_ASSERTION_BREAK,
    SDL_ASSERTION_ABORT,
    SDL_ASSERTION_IGNORE,
    SDL_ASSERTION_ALWAYS_IGNORE
} SDL_AssertState;

typedef struct SDL_AssertData
{
    int always_ignore;
    unsigned int trigger_count;
    const char *condition;
    const char *filename;
    int linenum;
    const char *function;
    const struct SDL_AssertData *next;
} SDL_AssertData;




extern __attribute__ ((visibility("default"))) SDL_AssertState SDL_ReportAssertion(SDL_AssertData *,
                                                             const char *,
                                                             const char *, int)
# 134 "/usr/include/SDL2/SDL_assert.h"
;
# 186 "/usr/include/SDL2/SDL_assert.h"
typedef SDL_AssertState ( *SDL_AssertionHandler)(
                                 const SDL_AssertData* data, void* userdata);
# 209 "/usr/include/SDL2/SDL_assert.h"
extern __attribute__ ((visibility("default"))) void SDL_SetAssertionHandler(
                                            SDL_AssertionHandler handler,
                                            void *userdata);
# 223 "/usr/include/SDL2/SDL_assert.h"
extern __attribute__ ((visibility("default"))) SDL_AssertionHandler SDL_GetDefaultAssertionHandler(void);
# 240 "/usr/include/SDL2/SDL_assert.h"
extern __attribute__ ((visibility("default"))) SDL_AssertionHandler SDL_GetAssertionHandler(void **puserdata);
# 264 "/usr/include/SDL2/SDL_assert.h"
extern __attribute__ ((visibility("default"))) const SDL_AssertData * SDL_GetAssertionReport(void);
# 273 "/usr/include/SDL2/SDL_assert.h"
extern __attribute__ ((visibility("default"))) void SDL_ResetAssertionReport(void);
# 285 "/usr/include/SDL2/SDL_assert.h"
# 1 "/usr/include/SDL2/close_code.h" 1
# 286 "/usr/include/SDL2/SDL_assert.h" 2
# 35 "/usr/include/SDL2/SDL.h" 2
# 1 "/usr/include/SDL2/SDL_atomic.h" 1
# 65 "/usr/include/SDL2/SDL_atomic.h"
# 1 "/usr/include/SDL2/begin_code.h" 1
# 66 "/usr/include/SDL2/SDL_atomic.h" 2
# 89 "/usr/include/SDL2/SDL_atomic.h"
typedef int SDL_SpinLock;
# 98 "/usr/include/SDL2/SDL_atomic.h"
extern __attribute__ ((visibility("default"))) SDL_bool SDL_AtomicTryLock(SDL_SpinLock *lock);






extern __attribute__ ((visibility("default"))) void SDL_AtomicLock(SDL_SpinLock *lock);






extern __attribute__ ((visibility("default"))) void SDL_AtomicUnlock(SDL_SpinLock *lock);
# 189 "/usr/include/SDL2/SDL_atomic.h"
typedef struct { int value; } SDL_atomic_t;
# 198 "/usr/include/SDL2/SDL_atomic.h"
extern __attribute__ ((visibility("default"))) SDL_bool SDL_AtomicCAS(SDL_atomic_t *a, int oldval, int newval);






extern __attribute__ ((visibility("default"))) int SDL_AtomicSet(SDL_atomic_t *a, int v);




extern __attribute__ ((visibility("default"))) int SDL_AtomicGet(SDL_atomic_t *a);
# 219 "/usr/include/SDL2/SDL_atomic.h"
extern __attribute__ ((visibility("default"))) int SDL_AtomicAdd(SDL_atomic_t *a, int v);
# 245 "/usr/include/SDL2/SDL_atomic.h"
extern __attribute__ ((visibility("default"))) SDL_bool SDL_AtomicCASPtr(void **a, void *oldval, void *newval);






extern __attribute__ ((visibility("default"))) void* SDL_AtomicSetPtr(void **a, void* v);




extern __attribute__ ((visibility("default"))) void* SDL_AtomicGetPtr(void **a);






# 1 "/usr/include/SDL2/close_code.h" 1
# 265 "/usr/include/SDL2/SDL_atomic.h" 2
# 36 "/usr/include/SDL2/SDL.h" 2
# 1 "/usr/include/SDL2/SDL_audio.h" 1
# 32 "/usr/include/SDL2/SDL_audio.h"
# 1 "/usr/include/SDL2/SDL_error.h" 1
# 33 "/usr/include/SDL2/SDL_error.h"
# 1 "/usr/include/SDL2/begin_code.h" 1
# 34 "/usr/include/SDL2/SDL_error.h" 2







extern __attribute__ ((visibility("default"))) int SDL_SetError( const char *fmt, ...) __attribute__ (( format( __printf__, 1, 1 +1 )));
extern __attribute__ ((visibility("default"))) const char * SDL_GetError(void);
extern __attribute__ ((visibility("default"))) void SDL_ClearError(void);
# 55 "/usr/include/SDL2/SDL_error.h"
typedef enum
{
    SDL_ENOMEM,
    SDL_EFREAD,
    SDL_EFWRITE,
    SDL_EFSEEK,
    SDL_UNSUPPORTED,
    SDL_LASTERROR
} SDL_errorcode;

extern __attribute__ ((visibility("default"))) int SDL_Error(SDL_errorcode code);






# 1 "/usr/include/SDL2/close_code.h" 1
# 73 "/usr/include/SDL2/SDL_error.h" 2
# 33 "/usr/include/SDL2/SDL_audio.h" 2
# 1 "/usr/include/SDL2/SDL_endian.h" 1
# 59 "/usr/include/SDL2/SDL_endian.h"
# 1 "/usr/include/SDL2/begin_code.h" 1
# 60 "/usr/include/SDL2/SDL_endian.h" 2
# 77 "/usr/include/SDL2/SDL_endian.h"
__attribute__((always_inline)) static __inline__ Uint16
SDL_Swap16(Uint16 x)
{
  __asm__("xchgb %b0,%h0": "=Q"(x):"0"(x));
    return x;
}
# 115 "/usr/include/SDL2/SDL_endian.h"
__attribute__((always_inline)) static __inline__ Uint32
SDL_Swap32(Uint32 x)
{
  __asm__("bswapl %0": "=r"(x):"0"(x));
    return x;
}
# 167 "/usr/include/SDL2/SDL_endian.h"
__attribute__((always_inline)) static __inline__ Uint64
SDL_Swap64(Uint64 x)
{
  __asm__("bswapq %0": "=r"(x):"0"(x));
    return x;
}
# 191 "/usr/include/SDL2/SDL_endian.h"
__attribute__((always_inline)) static __inline__ float
SDL_SwapFloat(float x)
{
    union
    {
        float f;
        Uint32 ui32;
    } swapper;
    swapper.f = x;
    swapper.ui32 = SDL_Swap32(swapper.ui32);
    return swapper.f;
}
# 235 "/usr/include/SDL2/SDL_endian.h"
# 1 "/usr/include/SDL2/close_code.h" 1
# 236 "/usr/include/SDL2/SDL_endian.h" 2
# 34 "/usr/include/SDL2/SDL_audio.h" 2
# 1 "/usr/include/SDL2/SDL_mutex.h" 1
# 34 "/usr/include/SDL2/SDL_mutex.h"
# 1 "/usr/include/SDL2/begin_code.h" 1
# 35 "/usr/include/SDL2/SDL_mutex.h" 2
# 58 "/usr/include/SDL2/SDL_mutex.h"
struct SDL_mutex;
typedef struct SDL_mutex SDL_mutex;




extern __attribute__ ((visibility("default"))) SDL_mutex * SDL_CreateMutex(void);







extern __attribute__ ((visibility("default"))) int SDL_LockMutex(SDL_mutex * mutex);






extern __attribute__ ((visibility("default"))) int SDL_TryLockMutex(SDL_mutex * mutex);
# 90 "/usr/include/SDL2/SDL_mutex.h"
extern __attribute__ ((visibility("default"))) int SDL_UnlockMutex(SDL_mutex * mutex);




extern __attribute__ ((visibility("default"))) void SDL_DestroyMutex(SDL_mutex * mutex);
# 106 "/usr/include/SDL2/SDL_mutex.h"
struct SDL_semaphore;
typedef struct SDL_semaphore SDL_sem;




extern __attribute__ ((visibility("default"))) SDL_sem * SDL_CreateSemaphore(Uint32 initial_value);




extern __attribute__ ((visibility("default"))) void SDL_DestroySemaphore(SDL_sem * sem);






extern __attribute__ ((visibility("default"))) int SDL_SemWait(SDL_sem * sem);







extern __attribute__ ((visibility("default"))) int SDL_SemTryWait(SDL_sem * sem);
# 143 "/usr/include/SDL2/SDL_mutex.h"
extern __attribute__ ((visibility("default"))) int SDL_SemWaitTimeout(SDL_sem * sem, Uint32 ms);






extern __attribute__ ((visibility("default"))) int SDL_SemPost(SDL_sem * sem);




extern __attribute__ ((visibility("default"))) Uint32 SDL_SemValue(SDL_sem * sem);
# 166 "/usr/include/SDL2/SDL_mutex.h"
struct SDL_cond;
typedef struct SDL_cond SDL_cond;
# 197 "/usr/include/SDL2/SDL_mutex.h"
extern __attribute__ ((visibility("default"))) SDL_cond * SDL_CreateCond(void);




extern __attribute__ ((visibility("default"))) void SDL_DestroyCond(SDL_cond * cond);






extern __attribute__ ((visibility("default"))) int SDL_CondSignal(SDL_cond * cond);






extern __attribute__ ((visibility("default"))) int SDL_CondBroadcast(SDL_cond * cond);
# 227 "/usr/include/SDL2/SDL_mutex.h"
extern __attribute__ ((visibility("default"))) int SDL_CondWait(SDL_cond * cond, SDL_mutex * mutex);
# 237 "/usr/include/SDL2/SDL_mutex.h"
extern __attribute__ ((visibility("default"))) int SDL_CondWaitTimeout(SDL_cond * cond,
                                                SDL_mutex * mutex, Uint32 ms);
# 247 "/usr/include/SDL2/SDL_mutex.h"
# 1 "/usr/include/SDL2/close_code.h" 1
# 248 "/usr/include/SDL2/SDL_mutex.h" 2
# 35 "/usr/include/SDL2/SDL_audio.h" 2
# 1 "/usr/include/SDL2/SDL_thread.h" 1
# 38 "/usr/include/SDL2/SDL_thread.h"
# 1 "/usr/include/SDL2/begin_code.h" 1
# 39 "/usr/include/SDL2/SDL_thread.h" 2






struct SDL_Thread;
typedef struct SDL_Thread SDL_Thread;


typedef unsigned long SDL_threadID;


typedef unsigned int SDL_TLSID;






typedef enum {
    SDL_THREAD_PRIORITY_LOW,
    SDL_THREAD_PRIORITY_NORMAL,
    SDL_THREAD_PRIORITY_HIGH
} SDL_ThreadPriority;





typedef int ( * SDL_ThreadFunction) (void *data);
# 141 "/usr/include/SDL2/SDL_thread.h"
extern __attribute__ ((visibility("default"))) SDL_Thread *
SDL_CreateThread(SDL_ThreadFunction fn, const char *name, void *data);
# 153 "/usr/include/SDL2/SDL_thread.h"
extern __attribute__ ((visibility("default"))) const char * SDL_GetThreadName(SDL_Thread *thread);




extern __attribute__ ((visibility("default"))) SDL_threadID SDL_ThreadID(void);






extern __attribute__ ((visibility("default"))) SDL_threadID SDL_GetThreadID(SDL_Thread * thread);




extern __attribute__ ((visibility("default"))) int SDL_SetThreadPriority(SDL_ThreadPriority priority);
# 190 "/usr/include/SDL2/SDL_thread.h"
extern __attribute__ ((visibility("default"))) void SDL_WaitThread(SDL_Thread * thread, int *status);
# 218 "/usr/include/SDL2/SDL_thread.h"
extern __attribute__ ((visibility("default"))) void SDL_DetachThread(SDL_Thread * thread);
# 250 "/usr/include/SDL2/SDL_thread.h"
extern __attribute__ ((visibility("default"))) SDL_TLSID SDL_TLSCreate(void);
# 262 "/usr/include/SDL2/SDL_thread.h"
extern __attribute__ ((visibility("default"))) void * SDL_TLSGet(SDL_TLSID id);
# 276 "/usr/include/SDL2/SDL_thread.h"
extern __attribute__ ((visibility("default"))) int SDL_TLSSet(SDL_TLSID id, const void *value, void (*destructor)(void*));






# 1 "/usr/include/SDL2/close_code.h" 1
# 284 "/usr/include/SDL2/SDL_thread.h" 2
# 36 "/usr/include/SDL2/SDL_audio.h" 2
# 1 "/usr/include/SDL2/SDL_rwops.h" 1
# 35 "/usr/include/SDL2/SDL_rwops.h"
# 1 "/usr/include/SDL2/begin_code.h" 1
# 36 "/usr/include/SDL2/SDL_rwops.h" 2
# 52 "/usr/include/SDL2/SDL_rwops.h"
typedef struct SDL_RWops
{



    Sint64 ( * size) (struct SDL_RWops * context);







    Sint64 ( * seek) (struct SDL_RWops * context, Sint64 offset,
                             int whence);







    size_t ( * read) (struct SDL_RWops * context, void *ptr,
                             size_t size, size_t maxnum);







    size_t ( * write) (struct SDL_RWops * context, const void *ptr,
                              size_t size, size_t num);






    int ( * close) (struct SDL_RWops * context);

    Uint32 type;
    union
    {
# 124 "/usr/include/SDL2/SDL_rwops.h"
        struct
        {
            SDL_bool autoclose;
            FILE *fp;
        } stdio;

        struct
        {
            Uint8 *base;
            Uint8 *here;
            Uint8 *stop;
        } mem;
        struct
        {
            void *data1;
            void *data2;
        } unknown;
    } hidden;

} SDL_RWops;
# 153 "/usr/include/SDL2/SDL_rwops.h"
extern __attribute__ ((visibility("default"))) SDL_RWops * SDL_RWFromFile(const char *file,
                                                  const char *mode);


extern __attribute__ ((visibility("default"))) SDL_RWops * SDL_RWFromFP(FILE * fp,
                                                SDL_bool autoclose);





extern __attribute__ ((visibility("default"))) SDL_RWops * SDL_RWFromMem(void *mem, int size);
extern __attribute__ ((visibility("default"))) SDL_RWops * SDL_RWFromConstMem(const void *mem,
                                                      int size);




extern __attribute__ ((visibility("default"))) SDL_RWops * SDL_AllocRW(void);
extern __attribute__ ((visibility("default"))) void SDL_FreeRW(SDL_RWops * area);
# 199 "/usr/include/SDL2/SDL_rwops.h"
extern __attribute__ ((visibility("default"))) Uint8 SDL_ReadU8(SDL_RWops * src);
extern __attribute__ ((visibility("default"))) Uint16 SDL_ReadLE16(SDL_RWops * src);
extern __attribute__ ((visibility("default"))) Uint16 SDL_ReadBE16(SDL_RWops * src);
extern __attribute__ ((visibility("default"))) Uint32 SDL_ReadLE32(SDL_RWops * src);
extern __attribute__ ((visibility("default"))) Uint32 SDL_ReadBE32(SDL_RWops * src);
extern __attribute__ ((visibility("default"))) Uint64 SDL_ReadLE64(SDL_RWops * src);
extern __attribute__ ((visibility("default"))) Uint64 SDL_ReadBE64(SDL_RWops * src);
# 214 "/usr/include/SDL2/SDL_rwops.h"
extern __attribute__ ((visibility("default"))) size_t SDL_WriteU8(SDL_RWops * dst, Uint8 value);
extern __attribute__ ((visibility("default"))) size_t SDL_WriteLE16(SDL_RWops * dst, Uint16 value);
extern __attribute__ ((visibility("default"))) size_t SDL_WriteBE16(SDL_RWops * dst, Uint16 value);
extern __attribute__ ((visibility("default"))) size_t SDL_WriteLE32(SDL_RWops * dst, Uint32 value);
extern __attribute__ ((visibility("default"))) size_t SDL_WriteBE32(SDL_RWops * dst, Uint32 value);
extern __attribute__ ((visibility("default"))) size_t SDL_WriteLE64(SDL_RWops * dst, Uint64 value);
extern __attribute__ ((visibility("default"))) size_t SDL_WriteBE64(SDL_RWops * dst, Uint64 value);






# 1 "/usr/include/SDL2/close_code.h" 1
# 228 "/usr/include/SDL2/SDL_rwops.h" 2
# 37 "/usr/include/SDL2/SDL_audio.h" 2

# 1 "/usr/include/SDL2/begin_code.h" 1
# 39 "/usr/include/SDL2/SDL_audio.h" 2
# 64 "/usr/include/SDL2/SDL_audio.h"
typedef Uint16 SDL_AudioFormat;
# 162 "/usr/include/SDL2/SDL_audio.h"
typedef void ( * SDL_AudioCallback) (void *userdata, Uint8 * stream,
                                            int len);




typedef struct SDL_AudioSpec
{
    int freq;
    SDL_AudioFormat format;
    Uint8 channels;
    Uint8 silence;
    Uint16 samples;
    Uint16 padding;
    Uint32 size;
    SDL_AudioCallback callback;
    void *userdata;
} SDL_AudioSpec;


struct SDL_AudioCVT;
typedef void ( * SDL_AudioFilter) (struct SDL_AudioCVT * cvt,
                                          SDL_AudioFormat format);
# 200 "/usr/include/SDL2/SDL_audio.h"
typedef struct SDL_AudioCVT
{
    int needed;
    SDL_AudioFormat src_format;
    SDL_AudioFormat dst_format;
    double rate_incr;
    Uint8 *buf;
    int len;
    int len_cvt;
    int len_mult;
    double len_ratio;
    SDL_AudioFilter filters[10];
    int filter_index;
} __attribute__((packed)) SDL_AudioCVT;
# 225 "/usr/include/SDL2/SDL_audio.h"
extern __attribute__ ((visibility("default"))) int SDL_GetNumAudioDrivers(void);
extern __attribute__ ((visibility("default"))) const char * SDL_GetAudioDriver(int index);
# 237 "/usr/include/SDL2/SDL_audio.h"
extern __attribute__ ((visibility("default"))) int SDL_AudioInit(const char *driver_name);
extern __attribute__ ((visibility("default"))) void SDL_AudioQuit(void);






extern __attribute__ ((visibility("default"))) const char * SDL_GetCurrentAudioDriver(void);
# 292 "/usr/include/SDL2/SDL_audio.h"
extern __attribute__ ((visibility("default"))) int SDL_OpenAudio(SDL_AudioSpec * desired,
                                          SDL_AudioSpec * obtained);
# 304 "/usr/include/SDL2/SDL_audio.h"
typedef Uint32 SDL_AudioDeviceID;
# 318 "/usr/include/SDL2/SDL_audio.h"
extern __attribute__ ((visibility("default"))) int SDL_GetNumAudioDevices(int iscapture);
# 333 "/usr/include/SDL2/SDL_audio.h"
extern __attribute__ ((visibility("default"))) const char * SDL_GetAudioDeviceName(int index,
                                                           int iscapture);
# 350 "/usr/include/SDL2/SDL_audio.h"
extern __attribute__ ((visibility("default"))) SDL_AudioDeviceID SDL_OpenAudioDevice(const char
                                                              *device,
                                                              int iscapture,
                                                              const
                                                              SDL_AudioSpec *
                                                              desired,
                                                              SDL_AudioSpec *
                                                              obtained,
                                                              int
                                                              allowed_changes);
# 369 "/usr/include/SDL2/SDL_audio.h"
typedef enum
{
    SDL_AUDIO_STOPPED = 0,
    SDL_AUDIO_PLAYING,
    SDL_AUDIO_PAUSED
} SDL_AudioStatus;
extern __attribute__ ((visibility("default"))) SDL_AudioStatus SDL_GetAudioStatus(void);

extern __attribute__ ((visibility("default"))) SDL_AudioStatus
SDL_GetAudioDeviceStatus(SDL_AudioDeviceID dev);
# 391 "/usr/include/SDL2/SDL_audio.h"
extern __attribute__ ((visibility("default"))) void SDL_PauseAudio(int pause_on);
extern __attribute__ ((visibility("default"))) void SDL_PauseAudioDevice(SDL_AudioDeviceID dev,
                                                  int pause_on);
# 415 "/usr/include/SDL2/SDL_audio.h"
extern __attribute__ ((visibility("default"))) SDL_AudioSpec * SDL_LoadWAV_RW(SDL_RWops * src,
                                                      int freesrc,
                                                      SDL_AudioSpec * spec,
                                                      Uint8 ** audio_buf,
                                                      Uint32 * audio_len);
# 431 "/usr/include/SDL2/SDL_audio.h"
extern __attribute__ ((visibility("default"))) void SDL_FreeWAV(Uint8 * audio_buf);
# 442 "/usr/include/SDL2/SDL_audio.h"
extern __attribute__ ((visibility("default"))) int SDL_BuildAudioCVT(SDL_AudioCVT * cvt,
                                              SDL_AudioFormat src_format,
                                              Uint8 src_channels,
                                              int src_rate,
                                              SDL_AudioFormat dst_format,
                                              Uint8 dst_channels,
                                              int dst_rate);
# 460 "/usr/include/SDL2/SDL_audio.h"
extern __attribute__ ((visibility("default"))) int SDL_ConvertAudio(SDL_AudioCVT * cvt);
# 470 "/usr/include/SDL2/SDL_audio.h"
extern __attribute__ ((visibility("default"))) void SDL_MixAudio(Uint8 * dst, const Uint8 * src,
                                          Uint32 len, int volume);






extern __attribute__ ((visibility("default"))) void SDL_MixAudioFormat(Uint8 * dst,
                                                const Uint8 * src,
                                                SDL_AudioFormat format,
                                                Uint32 len, int volume);
# 522 "/usr/include/SDL2/SDL_audio.h"
extern __attribute__ ((visibility("default"))) int SDL_QueueAudio(SDL_AudioDeviceID dev, const void *data, Uint32 len);
# 568 "/usr/include/SDL2/SDL_audio.h"
extern __attribute__ ((visibility("default"))) Uint32 SDL_DequeueAudio(SDL_AudioDeviceID dev, void *data, Uint32 len);
# 604 "/usr/include/SDL2/SDL_audio.h"
extern __attribute__ ((visibility("default"))) Uint32 SDL_GetQueuedAudioSize(SDL_AudioDeviceID dev);
# 640 "/usr/include/SDL2/SDL_audio.h"
extern __attribute__ ((visibility("default"))) void SDL_ClearQueuedAudio(SDL_AudioDeviceID dev);
# 652 "/usr/include/SDL2/SDL_audio.h"
extern __attribute__ ((visibility("default"))) void SDL_LockAudio(void);
extern __attribute__ ((visibility("default"))) void SDL_LockAudioDevice(SDL_AudioDeviceID dev);
extern __attribute__ ((visibility("default"))) void SDL_UnlockAudio(void);
extern __attribute__ ((visibility("default"))) void SDL_UnlockAudioDevice(SDL_AudioDeviceID dev);





extern __attribute__ ((visibility("default"))) void SDL_CloseAudio(void);
extern __attribute__ ((visibility("default"))) void SDL_CloseAudioDevice(SDL_AudioDeviceID dev);





# 1 "/usr/include/SDL2/close_code.h" 1
# 669 "/usr/include/SDL2/SDL_audio.h" 2
# 37 "/usr/include/SDL2/SDL.h" 2
# 1 "/usr/include/SDL2/SDL_clipboard.h" 1
# 33 "/usr/include/SDL2/SDL_clipboard.h"
# 1 "/usr/include/SDL2/begin_code.h" 1
# 34 "/usr/include/SDL2/SDL_clipboard.h" 2
# 46 "/usr/include/SDL2/SDL_clipboard.h"
extern __attribute__ ((visibility("default"))) int SDL_SetClipboardText(const char *text);






extern __attribute__ ((visibility("default"))) char * SDL_GetClipboardText(void);






extern __attribute__ ((visibility("default"))) SDL_bool SDL_HasClipboardText(void);






# 1 "/usr/include/SDL2/close_code.h" 1
# 68 "/usr/include/SDL2/SDL_clipboard.h" 2
# 38 "/usr/include/SDL2/SDL.h" 2
# 1 "/usr/include/SDL2/SDL_cpuinfo.h" 1
# 53 "/usr/include/SDL2/SDL_cpuinfo.h"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/6/include/mmintrin.h" 1 3 4
# 42 "/usr/lib/gcc/x86_64-linux-gnu/6/include/mmintrin.h" 3 4

# 42 "/usr/lib/gcc/x86_64-linux-gnu/6/include/mmintrin.h" 3 4
typedef int __m64 __attribute__ ((__vector_size__ (8), __may_alias__));


typedef int __v2si __attribute__ ((__vector_size__ (8)));
typedef short __v4hi __attribute__ ((__vector_size__ (8)));
typedef char __v8qi __attribute__ ((__vector_size__ (8)));
typedef long long __v1di __attribute__ ((__vector_size__ (8)));
typedef float __v2sf __attribute__ ((__vector_size__ (8)));


extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_empty (void)
{
  __builtin_ia32_emms ();
}

extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_empty (void)
{
  _mm_empty ();
}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsi32_si64 (int __i)
{
  return (__m64) __builtin_ia32_vec_init_v2si (__i, 0);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_from_int (int __i)
{
  return _mm_cvtsi32_si64 (__i);
}





extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_from_int64 (long long __i)
{
  return (__m64) __i;
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsi64_m64 (long long __i)
{
  return (__m64) __i;
}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsi64x_si64 (long long __i)
{
  return (__m64) __i;
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set_pi64x (long long __i)
{
  return (__m64) __i;
}



extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsi64_si32 (__m64 __i)
{
  return __builtin_ia32_vec_ext_v2si ((__v2si)__i, 0);
}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_to_int (__m64 __i)
{
  return _mm_cvtsi64_si32 (__i);
}





extern __inline long long __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_to_int64 (__m64 __i)
{
  return (long long)__i;
}

extern __inline long long __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtm64_si64 (__m64 __i)
{
  return (long long)__i;
}


extern __inline long long __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsi64_si64x (__m64 __i)
{
  return (long long)__i;
}





extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_packs_pi16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_packsswb ((__v4hi)__m1, (__v4hi)__m2);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_packsswb (__m64 __m1, __m64 __m2)
{
  return _mm_packs_pi16 (__m1, __m2);
}




extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_packs_pi32 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_packssdw ((__v2si)__m1, (__v2si)__m2);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_packssdw (__m64 __m1, __m64 __m2)
{
  return _mm_packs_pi32 (__m1, __m2);
}




extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_packs_pu16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_packuswb ((__v4hi)__m1, (__v4hi)__m2);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_packuswb (__m64 __m1, __m64 __m2)
{
  return _mm_packs_pu16 (__m1, __m2);
}



extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpackhi_pi8 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_punpckhbw ((__v8qi)__m1, (__v8qi)__m2);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_punpckhbw (__m64 __m1, __m64 __m2)
{
  return _mm_unpackhi_pi8 (__m1, __m2);
}



extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpackhi_pi16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_punpckhwd ((__v4hi)__m1, (__v4hi)__m2);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_punpckhwd (__m64 __m1, __m64 __m2)
{
  return _mm_unpackhi_pi16 (__m1, __m2);
}



extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpackhi_pi32 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_punpckhdq ((__v2si)__m1, (__v2si)__m2);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_punpckhdq (__m64 __m1, __m64 __m2)
{
  return _mm_unpackhi_pi32 (__m1, __m2);
}



extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpacklo_pi8 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_punpcklbw ((__v8qi)__m1, (__v8qi)__m2);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_punpcklbw (__m64 __m1, __m64 __m2)
{
  return _mm_unpacklo_pi8 (__m1, __m2);
}



extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpacklo_pi16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_punpcklwd ((__v4hi)__m1, (__v4hi)__m2);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_punpcklwd (__m64 __m1, __m64 __m2)
{
  return _mm_unpacklo_pi16 (__m1, __m2);
}



extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpacklo_pi32 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_punpckldq ((__v2si)__m1, (__v2si)__m2);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_punpckldq (__m64 __m1, __m64 __m2)
{
  return _mm_unpacklo_pi32 (__m1, __m2);
}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_add_pi8 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_paddb ((__v8qi)__m1, (__v8qi)__m2);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_paddb (__m64 __m1, __m64 __m2)
{
  return _mm_add_pi8 (__m1, __m2);
}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_add_pi16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_paddw ((__v4hi)__m1, (__v4hi)__m2);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_paddw (__m64 __m1, __m64 __m2)
{
  return _mm_add_pi16 (__m1, __m2);
}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_add_pi32 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_paddd ((__v2si)__m1, (__v2si)__m2);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_paddd (__m64 __m1, __m64 __m2)
{
  return _mm_add_pi32 (__m1, __m2);
}
# 319 "/usr/lib/gcc/x86_64-linux-gnu/6/include/mmintrin.h" 3 4
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_add_si64 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_paddq ((__v1di)__m1, (__v1di)__m2);
}







extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_adds_pi8 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_paddsb ((__v8qi)__m1, (__v8qi)__m2);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_paddsb (__m64 __m1, __m64 __m2)
{
  return _mm_adds_pi8 (__m1, __m2);
}



extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_adds_pi16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_paddsw ((__v4hi)__m1, (__v4hi)__m2);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_paddsw (__m64 __m1, __m64 __m2)
{
  return _mm_adds_pi16 (__m1, __m2);
}



extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_adds_pu8 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_paddusb ((__v8qi)__m1, (__v8qi)__m2);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_paddusb (__m64 __m1, __m64 __m2)
{
  return _mm_adds_pu8 (__m1, __m2);
}



extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_adds_pu16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_paddusw ((__v4hi)__m1, (__v4hi)__m2);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_paddusw (__m64 __m1, __m64 __m2)
{
  return _mm_adds_pu16 (__m1, __m2);
}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sub_pi8 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_psubb ((__v8qi)__m1, (__v8qi)__m2);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psubb (__m64 __m1, __m64 __m2)
{
  return _mm_sub_pi8 (__m1, __m2);
}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sub_pi16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_psubw ((__v4hi)__m1, (__v4hi)__m2);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psubw (__m64 __m1, __m64 __m2)
{
  return _mm_sub_pi16 (__m1, __m2);
}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sub_pi32 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_psubd ((__v2si)__m1, (__v2si)__m2);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psubd (__m64 __m1, __m64 __m2)
{
  return _mm_sub_pi32 (__m1, __m2);
}
# 431 "/usr/lib/gcc/x86_64-linux-gnu/6/include/mmintrin.h" 3 4
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sub_si64 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_psubq ((__v1di)__m1, (__v1di)__m2);
}







extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_subs_pi8 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_psubsb ((__v8qi)__m1, (__v8qi)__m2);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psubsb (__m64 __m1, __m64 __m2)
{
  return _mm_subs_pi8 (__m1, __m2);
}



extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_subs_pi16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_psubsw ((__v4hi)__m1, (__v4hi)__m2);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psubsw (__m64 __m1, __m64 __m2)
{
  return _mm_subs_pi16 (__m1, __m2);
}



extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_subs_pu8 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_psubusb ((__v8qi)__m1, (__v8qi)__m2);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psubusb (__m64 __m1, __m64 __m2)
{
  return _mm_subs_pu8 (__m1, __m2);
}



extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_subs_pu16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_psubusw ((__v4hi)__m1, (__v4hi)__m2);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psubusw (__m64 __m1, __m64 __m2)
{
  return _mm_subs_pu16 (__m1, __m2);
}




extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_madd_pi16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_pmaddwd ((__v4hi)__m1, (__v4hi)__m2);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pmaddwd (__m64 __m1, __m64 __m2)
{
  return _mm_madd_pi16 (__m1, __m2);
}



extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_mulhi_pi16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_pmulhw ((__v4hi)__m1, (__v4hi)__m2);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pmulhw (__m64 __m1, __m64 __m2)
{
  return _mm_mulhi_pi16 (__m1, __m2);
}



extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_mullo_pi16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_pmullw ((__v4hi)__m1, (__v4hi)__m2);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pmullw (__m64 __m1, __m64 __m2)
{
  return _mm_mullo_pi16 (__m1, __m2);
}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sll_pi16 (__m64 __m, __m64 __count)
{
  return (__m64) __builtin_ia32_psllw ((__v4hi)__m, (__v4hi)__count);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psllw (__m64 __m, __m64 __count)
{
  return _mm_sll_pi16 (__m, __count);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_slli_pi16 (__m64 __m, int __count)
{
  return (__m64) __builtin_ia32_psllwi ((__v4hi)__m, __count);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psllwi (__m64 __m, int __count)
{
  return _mm_slli_pi16 (__m, __count);
}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sll_pi32 (__m64 __m, __m64 __count)
{
  return (__m64) __builtin_ia32_pslld ((__v2si)__m, (__v2si)__count);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pslld (__m64 __m, __m64 __count)
{
  return _mm_sll_pi32 (__m, __count);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_slli_pi32 (__m64 __m, int __count)
{
  return (__m64) __builtin_ia32_pslldi ((__v2si)__m, __count);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pslldi (__m64 __m, int __count)
{
  return _mm_slli_pi32 (__m, __count);
}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sll_si64 (__m64 __m, __m64 __count)
{
  return (__m64) __builtin_ia32_psllq ((__v1di)__m, (__v1di)__count);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psllq (__m64 __m, __m64 __count)
{
  return _mm_sll_si64 (__m, __count);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_slli_si64 (__m64 __m, int __count)
{
  return (__m64) __builtin_ia32_psllqi ((__v1di)__m, __count);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psllqi (__m64 __m, int __count)
{
  return _mm_slli_si64 (__m, __count);
}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sra_pi16 (__m64 __m, __m64 __count)
{
  return (__m64) __builtin_ia32_psraw ((__v4hi)__m, (__v4hi)__count);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psraw (__m64 __m, __m64 __count)
{
  return _mm_sra_pi16 (__m, __count);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_srai_pi16 (__m64 __m, int __count)
{
  return (__m64) __builtin_ia32_psrawi ((__v4hi)__m, __count);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psrawi (__m64 __m, int __count)
{
  return _mm_srai_pi16 (__m, __count);
}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sra_pi32 (__m64 __m, __m64 __count)
{
  return (__m64) __builtin_ia32_psrad ((__v2si)__m, (__v2si)__count);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psrad (__m64 __m, __m64 __count)
{
  return _mm_sra_pi32 (__m, __count);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_srai_pi32 (__m64 __m, int __count)
{
  return (__m64) __builtin_ia32_psradi ((__v2si)__m, __count);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psradi (__m64 __m, int __count)
{
  return _mm_srai_pi32 (__m, __count);
}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_srl_pi16 (__m64 __m, __m64 __count)
{
  return (__m64) __builtin_ia32_psrlw ((__v4hi)__m, (__v4hi)__count);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psrlw (__m64 __m, __m64 __count)
{
  return _mm_srl_pi16 (__m, __count);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_srli_pi16 (__m64 __m, int __count)
{
  return (__m64) __builtin_ia32_psrlwi ((__v4hi)__m, __count);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psrlwi (__m64 __m, int __count)
{
  return _mm_srli_pi16 (__m, __count);
}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_srl_pi32 (__m64 __m, __m64 __count)
{
  return (__m64) __builtin_ia32_psrld ((__v2si)__m, (__v2si)__count);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psrld (__m64 __m, __m64 __count)
{
  return _mm_srl_pi32 (__m, __count);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_srli_pi32 (__m64 __m, int __count)
{
  return (__m64) __builtin_ia32_psrldi ((__v2si)__m, __count);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psrldi (__m64 __m, int __count)
{
  return _mm_srli_pi32 (__m, __count);
}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_srl_si64 (__m64 __m, __m64 __count)
{
  return (__m64) __builtin_ia32_psrlq ((__v1di)__m, (__v1di)__count);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psrlq (__m64 __m, __m64 __count)
{
  return _mm_srl_si64 (__m, __count);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_srli_si64 (__m64 __m, int __count)
{
  return (__m64) __builtin_ia32_psrlqi ((__v1di)__m, __count);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psrlqi (__m64 __m, int __count)
{
  return _mm_srli_si64 (__m, __count);
}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_and_si64 (__m64 __m1, __m64 __m2)
{
  return __builtin_ia32_pand (__m1, __m2);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pand (__m64 __m1, __m64 __m2)
{
  return _mm_and_si64 (__m1, __m2);
}



extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_andnot_si64 (__m64 __m1, __m64 __m2)
{
  return __builtin_ia32_pandn (__m1, __m2);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pandn (__m64 __m1, __m64 __m2)
{
  return _mm_andnot_si64 (__m1, __m2);
}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_or_si64 (__m64 __m1, __m64 __m2)
{
  return __builtin_ia32_por (__m1, __m2);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_por (__m64 __m1, __m64 __m2)
{
  return _mm_or_si64 (__m1, __m2);
}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_xor_si64 (__m64 __m1, __m64 __m2)
{
  return __builtin_ia32_pxor (__m1, __m2);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pxor (__m64 __m1, __m64 __m2)
{
  return _mm_xor_si64 (__m1, __m2);
}



extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpeq_pi8 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_pcmpeqb ((__v8qi)__m1, (__v8qi)__m2);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pcmpeqb (__m64 __m1, __m64 __m2)
{
  return _mm_cmpeq_pi8 (__m1, __m2);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpgt_pi8 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_pcmpgtb ((__v8qi)__m1, (__v8qi)__m2);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pcmpgtb (__m64 __m1, __m64 __m2)
{
  return _mm_cmpgt_pi8 (__m1, __m2);
}



extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpeq_pi16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_pcmpeqw ((__v4hi)__m1, (__v4hi)__m2);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pcmpeqw (__m64 __m1, __m64 __m2)
{
  return _mm_cmpeq_pi16 (__m1, __m2);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpgt_pi16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_pcmpgtw ((__v4hi)__m1, (__v4hi)__m2);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pcmpgtw (__m64 __m1, __m64 __m2)
{
  return _mm_cmpgt_pi16 (__m1, __m2);
}



extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpeq_pi32 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_pcmpeqd ((__v2si)__m1, (__v2si)__m2);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pcmpeqd (__m64 __m1, __m64 __m2)
{
  return _mm_cmpeq_pi32 (__m1, __m2);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpgt_pi32 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_pcmpgtd ((__v2si)__m1, (__v2si)__m2);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pcmpgtd (__m64 __m1, __m64 __m2)
{
  return _mm_cmpgt_pi32 (__m1, __m2);
}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_setzero_si64 (void)
{
  return (__m64)0LL;
}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set_pi32 (int __i1, int __i0)
{
  return (__m64) __builtin_ia32_vec_init_v2si (__i0, __i1);
}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set_pi16 (short __w3, short __w2, short __w1, short __w0)
{
  return (__m64) __builtin_ia32_vec_init_v4hi (__w0, __w1, __w2, __w3);
}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set_pi8 (char __b7, char __b6, char __b5, char __b4,
      char __b3, char __b2, char __b1, char __b0)
{
  return (__m64) __builtin_ia32_vec_init_v8qi (__b0, __b1, __b2, __b3,
            __b4, __b5, __b6, __b7);
}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_setr_pi32 (int __i0, int __i1)
{
  return _mm_set_pi32 (__i1, __i0);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_setr_pi16 (short __w0, short __w1, short __w2, short __w3)
{
  return _mm_set_pi16 (__w3, __w2, __w1, __w0);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_setr_pi8 (char __b0, char __b1, char __b2, char __b3,
       char __b4, char __b5, char __b6, char __b7)
{
  return _mm_set_pi8 (__b7, __b6, __b5, __b4, __b3, __b2, __b1, __b0);
}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set1_pi32 (int __i)
{
  return _mm_set_pi32 (__i, __i);
}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set1_pi16 (short __w)
{
  return _mm_set_pi16 (__w, __w, __w, __w);
}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set1_pi8 (char __b)
{
  return _mm_set_pi8 (__b, __b, __b, __b, __b, __b, __b, __b);
}
# 54 "/usr/include/SDL2/SDL_cpuinfo.h" 2





# 1 "/usr/lib/gcc/x86_64-linux-gnu/6/include/xmmintrin.h" 1 3 4
# 34 "/usr/lib/gcc/x86_64-linux-gnu/6/include/xmmintrin.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/6/include/mm_malloc.h" 1 3 4
# 32 "/usr/lib/gcc/x86_64-linux-gnu/6/include/mm_malloc.h" 3 4
extern int posix_memalign (void **, size_t, size_t);




static __inline void *
_mm_malloc (size_t size, size_t alignment)
{
  void *ptr;
  if (alignment == 1)
    return malloc (size);
  if (alignment == 2 || (sizeof (void *) == 8 && alignment == 4))
    alignment = sizeof (void *);
  if (posix_memalign (&ptr, alignment, size) == 0)
    return ptr;
  else
    return ((void *)0);
}

static __inline void
_mm_free (void * ptr)
{
  free (ptr);
}
# 35 "/usr/lib/gcc/x86_64-linux-gnu/6/include/xmmintrin.h" 2 3 4


enum _mm_hint
{

  _MM_HINT_ET0 = 7,
  _MM_HINT_ET1 = 6,
  _MM_HINT_T0 = 3,
  _MM_HINT_T1 = 2,
  _MM_HINT_T2 = 1,
  _MM_HINT_NTA = 0
};
# 69 "/usr/lib/gcc/x86_64-linux-gnu/6/include/xmmintrin.h" 3 4
typedef float __m128 __attribute__ ((__vector_size__ (16), __may_alias__));


typedef float __v4sf __attribute__ ((__vector_size__ (16)));
# 106 "/usr/lib/gcc/x86_64-linux-gnu/6/include/xmmintrin.h" 3 4
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_undefined_ps (void)
{
  __m128 __Y = __Y;
  return __Y;
}


extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_setzero_ps (void)
{
  return __extension__ (__m128){ 0.0f, 0.0f, 0.0f, 0.0f };
}





extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_add_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_addss ((__v4sf)__A, (__v4sf)__B);
}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sub_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_subss ((__v4sf)__A, (__v4sf)__B);
}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_mul_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_mulss ((__v4sf)__A, (__v4sf)__B);
}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_div_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_divss ((__v4sf)__A, (__v4sf)__B);
}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sqrt_ss (__m128 __A)
{
  return (__m128) __builtin_ia32_sqrtss ((__v4sf)__A);
}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_rcp_ss (__m128 __A)
{
  return (__m128) __builtin_ia32_rcpss ((__v4sf)__A);
}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_rsqrt_ss (__m128 __A)
{
  return (__m128) __builtin_ia32_rsqrtss ((__v4sf)__A);
}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_min_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_minss ((__v4sf)__A, (__v4sf)__B);
}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_max_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_maxss ((__v4sf)__A, (__v4sf)__B);
}



extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_add_ps (__m128 __A, __m128 __B)
{
  return (__m128) ((__v4sf)__A + (__v4sf)__B);
}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sub_ps (__m128 __A, __m128 __B)
{
  return (__m128) ((__v4sf)__A - (__v4sf)__B);
}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_mul_ps (__m128 __A, __m128 __B)
{
  return (__m128) ((__v4sf)__A * (__v4sf)__B);
}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_div_ps (__m128 __A, __m128 __B)
{
  return (__m128) ((__v4sf)__A / (__v4sf)__B);
}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sqrt_ps (__m128 __A)
{
  return (__m128) __builtin_ia32_sqrtps ((__v4sf)__A);
}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_rcp_ps (__m128 __A)
{
  return (__m128) __builtin_ia32_rcpps ((__v4sf)__A);
}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_rsqrt_ps (__m128 __A)
{
  return (__m128) __builtin_ia32_rsqrtps ((__v4sf)__A);
}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_min_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_minps ((__v4sf)__A, (__v4sf)__B);
}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_max_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_maxps ((__v4sf)__A, (__v4sf)__B);
}



extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_and_ps (__m128 __A, __m128 __B)
{
  return __builtin_ia32_andps (__A, __B);
}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_andnot_ps (__m128 __A, __m128 __B)
{
  return __builtin_ia32_andnps (__A, __B);
}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_or_ps (__m128 __A, __m128 __B)
{
  return __builtin_ia32_orps (__A, __B);
}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_xor_ps (__m128 __A, __m128 __B)
{
  return __builtin_ia32_xorps (__A, __B);
}





extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpeq_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpeqss ((__v4sf)__A, (__v4sf)__B);
}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmplt_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpltss ((__v4sf)__A, (__v4sf)__B);
}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmple_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpless ((__v4sf)__A, (__v4sf)__B);
}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpgt_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_movss ((__v4sf) __A,
     (__v4sf)
     __builtin_ia32_cmpltss ((__v4sf) __B,
        (__v4sf)
        __A));
}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpge_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_movss ((__v4sf) __A,
     (__v4sf)
     __builtin_ia32_cmpless ((__v4sf) __B,
        (__v4sf)
        __A));
}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpneq_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpneqss ((__v4sf)__A, (__v4sf)__B);
}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpnlt_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpnltss ((__v4sf)__A, (__v4sf)__B);
}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpnle_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpnless ((__v4sf)__A, (__v4sf)__B);
}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpngt_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_movss ((__v4sf) __A,
     (__v4sf)
     __builtin_ia32_cmpnltss ((__v4sf) __B,
         (__v4sf)
         __A));
}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpnge_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_movss ((__v4sf) __A,
     (__v4sf)
     __builtin_ia32_cmpnless ((__v4sf) __B,
         (__v4sf)
         __A));
}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpord_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpordss ((__v4sf)__A, (__v4sf)__B);
}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpunord_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpunordss ((__v4sf)__A, (__v4sf)__B);
}





extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpeq_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpeqps ((__v4sf)__A, (__v4sf)__B);
}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmplt_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpltps ((__v4sf)__A, (__v4sf)__B);
}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmple_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpleps ((__v4sf)__A, (__v4sf)__B);
}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpgt_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpgtps ((__v4sf)__A, (__v4sf)__B);
}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpge_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpgeps ((__v4sf)__A, (__v4sf)__B);
}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpneq_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpneqps ((__v4sf)__A, (__v4sf)__B);
}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpnlt_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpnltps ((__v4sf)__A, (__v4sf)__B);
}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpnle_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpnleps ((__v4sf)__A, (__v4sf)__B);
}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpngt_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpngtps ((__v4sf)__A, (__v4sf)__B);
}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpnge_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpngeps ((__v4sf)__A, (__v4sf)__B);
}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpord_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpordps ((__v4sf)__A, (__v4sf)__B);
}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpunord_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpunordps ((__v4sf)__A, (__v4sf)__B);
}




extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_comieq_ss (__m128 __A, __m128 __B)
{
  return __builtin_ia32_comieq ((__v4sf)__A, (__v4sf)__B);
}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_comilt_ss (__m128 __A, __m128 __B)
{
  return __builtin_ia32_comilt ((__v4sf)__A, (__v4sf)__B);
}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_comile_ss (__m128 __A, __m128 __B)
{
  return __builtin_ia32_comile ((__v4sf)__A, (__v4sf)__B);
}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_comigt_ss (__m128 __A, __m128 __B)
{
  return __builtin_ia32_comigt ((__v4sf)__A, (__v4sf)__B);
}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_comige_ss (__m128 __A, __m128 __B)
{
  return __builtin_ia32_comige ((__v4sf)__A, (__v4sf)__B);
}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_comineq_ss (__m128 __A, __m128 __B)
{
  return __builtin_ia32_comineq ((__v4sf)__A, (__v4sf)__B);
}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_ucomieq_ss (__m128 __A, __m128 __B)
{
  return __builtin_ia32_ucomieq ((__v4sf)__A, (__v4sf)__B);
}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_ucomilt_ss (__m128 __A, __m128 __B)
{
  return __builtin_ia32_ucomilt ((__v4sf)__A, (__v4sf)__B);
}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_ucomile_ss (__m128 __A, __m128 __B)
{
  return __builtin_ia32_ucomile ((__v4sf)__A, (__v4sf)__B);
}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_ucomigt_ss (__m128 __A, __m128 __B)
{
  return __builtin_ia32_ucomigt ((__v4sf)__A, (__v4sf)__B);
}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_ucomige_ss (__m128 __A, __m128 __B)
{
  return __builtin_ia32_ucomige ((__v4sf)__A, (__v4sf)__B);
}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_ucomineq_ss (__m128 __A, __m128 __B)
{
  return __builtin_ia32_ucomineq ((__v4sf)__A, (__v4sf)__B);
}



extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtss_si32 (__m128 __A)
{
  return __builtin_ia32_cvtss2si ((__v4sf) __A);
}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvt_ss2si (__m128 __A)
{
  return _mm_cvtss_si32 (__A);
}






extern __inline long long __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtss_si64 (__m128 __A)
{
  return __builtin_ia32_cvtss2si64 ((__v4sf) __A);
}


extern __inline long long __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtss_si64x (__m128 __A)
{
  return __builtin_ia32_cvtss2si64 ((__v4sf) __A);
}




extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtps_pi32 (__m128 __A)
{
  return (__m64) __builtin_ia32_cvtps2pi ((__v4sf) __A);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvt_ps2pi (__m128 __A)
{
  return _mm_cvtps_pi32 (__A);
}


extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvttss_si32 (__m128 __A)
{
  return __builtin_ia32_cvttss2si ((__v4sf) __A);
}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtt_ss2si (__m128 __A)
{
  return _mm_cvttss_si32 (__A);
}





extern __inline long long __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvttss_si64 (__m128 __A)
{
  return __builtin_ia32_cvttss2si64 ((__v4sf) __A);
}


extern __inline long long __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvttss_si64x (__m128 __A)
{
  return __builtin_ia32_cvttss2si64 ((__v4sf) __A);
}




extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvttps_pi32 (__m128 __A)
{
  return (__m64) __builtin_ia32_cvttps2pi ((__v4sf) __A);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtt_ps2pi (__m128 __A)
{
  return _mm_cvttps_pi32 (__A);
}


extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsi32_ss (__m128 __A, int __B)
{
  return (__m128) __builtin_ia32_cvtsi2ss ((__v4sf) __A, __B);
}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvt_si2ss (__m128 __A, int __B)
{
  return _mm_cvtsi32_ss (__A, __B);
}





extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsi64_ss (__m128 __A, long long __B)
{
  return (__m128) __builtin_ia32_cvtsi642ss ((__v4sf) __A, __B);
}


extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsi64x_ss (__m128 __A, long long __B)
{
  return (__m128) __builtin_ia32_cvtsi642ss ((__v4sf) __A, __B);
}




extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtpi32_ps (__m128 __A, __m64 __B)
{
  return (__m128) __builtin_ia32_cvtpi2ps ((__v4sf) __A, (__v2si)__B);
}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvt_pi2ps (__m128 __A, __m64 __B)
{
  return _mm_cvtpi32_ps (__A, __B);
}


extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtpi16_ps (__m64 __A)
{
  __v4hi __sign;
  __v2si __hisi, __losi;
  __v4sf __zero, __ra, __rb;




  __sign = __builtin_ia32_pcmpgtw ((__v4hi)0LL, (__v4hi)__A);


  __losi = (__v2si) __builtin_ia32_punpcklwd ((__v4hi)__A, __sign);
  __hisi = (__v2si) __builtin_ia32_punpckhwd ((__v4hi)__A, __sign);


  __zero = (__v4sf) _mm_setzero_ps ();
  __ra = __builtin_ia32_cvtpi2ps (__zero, __losi);
  __rb = __builtin_ia32_cvtpi2ps (__ra, __hisi);

  return (__m128) __builtin_ia32_movlhps (__ra, __rb);
}


extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtpu16_ps (__m64 __A)
{
  __v2si __hisi, __losi;
  __v4sf __zero, __ra, __rb;


  __losi = (__v2si) __builtin_ia32_punpcklwd ((__v4hi)__A, (__v4hi)0LL);
  __hisi = (__v2si) __builtin_ia32_punpckhwd ((__v4hi)__A, (__v4hi)0LL);


  __zero = (__v4sf) _mm_setzero_ps ();
  __ra = __builtin_ia32_cvtpi2ps (__zero, __losi);
  __rb = __builtin_ia32_cvtpi2ps (__ra, __hisi);

  return (__m128) __builtin_ia32_movlhps (__ra, __rb);
}


extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtpi8_ps (__m64 __A)
{
  __v8qi __sign;




  __sign = __builtin_ia32_pcmpgtb ((__v8qi)0LL, (__v8qi)__A);


  __A = (__m64) __builtin_ia32_punpcklbw ((__v8qi)__A, __sign);

  return _mm_cvtpi16_ps(__A);
}


extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtpu8_ps(__m64 __A)
{
  __A = (__m64) __builtin_ia32_punpcklbw ((__v8qi)__A, (__v8qi)0LL);
  return _mm_cvtpu16_ps(__A);
}


extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtpi32x2_ps(__m64 __A, __m64 __B)
{
  __v4sf __zero = (__v4sf) _mm_setzero_ps ();
  __v4sf __sfa = __builtin_ia32_cvtpi2ps (__zero, (__v2si)__A);
  __v4sf __sfb = __builtin_ia32_cvtpi2ps (__sfa, (__v2si)__B);
  return (__m128) __builtin_ia32_movlhps (__sfa, __sfb);
}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtps_pi16(__m128 __A)
{
  __v4sf __hisf = (__v4sf)__A;
  __v4sf __losf = __builtin_ia32_movhlps (__hisf, __hisf);
  __v2si __hisi = __builtin_ia32_cvtps2pi (__hisf);
  __v2si __losi = __builtin_ia32_cvtps2pi (__losf);
  return (__m64) __builtin_ia32_packssdw (__hisi, __losi);
}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtps_pi8(__m128 __A)
{
  __v4hi __tmp = (__v4hi) _mm_cvtps_pi16 (__A);
  return (__m64) __builtin_ia32_packsswb (__tmp, (__v4hi)0LL);
}
# 752 "/usr/lib/gcc/x86_64-linux-gnu/6/include/xmmintrin.h" 3 4
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpackhi_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_unpckhps ((__v4sf)__A, (__v4sf)__B);
}


extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpacklo_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_unpcklps ((__v4sf)__A, (__v4sf)__B);
}



extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_loadh_pi (__m128 __A, __m64 const *__P)
{
  return (__m128) __builtin_ia32_loadhps ((__v4sf)__A, (const __v2sf *)__P);
}


extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_storeh_pi (__m64 *__P, __m128 __A)
{
  __builtin_ia32_storehps ((__v2sf *)__P, (__v4sf)__A);
}


extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_movehl_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_movhlps ((__v4sf)__A, (__v4sf)__B);
}


extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_movelh_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_movlhps ((__v4sf)__A, (__v4sf)__B);
}



extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_loadl_pi (__m128 __A, __m64 const *__P)
{
  return (__m128) __builtin_ia32_loadlps ((__v4sf)__A, (const __v2sf *)__P);
}


extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_storel_pi (__m64 *__P, __m128 __A)
{
  __builtin_ia32_storelps ((__v2sf *)__P, (__v4sf)__A);
}


extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_movemask_ps (__m128 __A)
{
  return __builtin_ia32_movmskps ((__v4sf)__A);
}


extern __inline unsigned int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_getcsr (void)
{
  return __builtin_ia32_stmxcsr ();
}


extern __inline unsigned int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_MM_GET_EXCEPTION_STATE (void)
{
  return _mm_getcsr() & 0x003f;
}

extern __inline unsigned int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_MM_GET_EXCEPTION_MASK (void)
{
  return _mm_getcsr() & 0x1f80;
}

extern __inline unsigned int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_MM_GET_ROUNDING_MODE (void)
{
  return _mm_getcsr() & 0x6000;
}

extern __inline unsigned int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_MM_GET_FLUSH_ZERO_MODE (void)
{
  return _mm_getcsr() & 0x8000;
}


extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_setcsr (unsigned int __I)
{
  __builtin_ia32_ldmxcsr (__I);
}


extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_MM_SET_EXCEPTION_STATE(unsigned int __mask)
{
  _mm_setcsr((_mm_getcsr() & ~0x003f) | __mask);
}

extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_MM_SET_EXCEPTION_MASK (unsigned int __mask)
{
  _mm_setcsr((_mm_getcsr() & ~0x1f80) | __mask);
}

extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_MM_SET_ROUNDING_MODE (unsigned int __mode)
{
  _mm_setcsr((_mm_getcsr() & ~0x6000) | __mode);
}

extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_MM_SET_FLUSH_ZERO_MODE (unsigned int __mode)
{
  _mm_setcsr((_mm_getcsr() & ~0x8000) | __mode);
}


extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set_ss (float __F)
{
  return __extension__ (__m128)(__v4sf){ __F, 0.0f, 0.0f, 0.0f };
}


extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set1_ps (float __F)
{
  return __extension__ (__m128)(__v4sf){ __F, __F, __F, __F };
}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set_ps1 (float __F)
{
  return _mm_set1_ps (__F);
}


extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_load_ss (float const *__P)
{
  return _mm_set_ss (*__P);
}


extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_load1_ps (float const *__P)
{
  return _mm_set1_ps (*__P);
}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_load_ps1 (float const *__P)
{
  return _mm_load1_ps (__P);
}


extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_load_ps (float const *__P)
{
  return (__m128) *(__v4sf *)__P;
}


extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_loadu_ps (float const *__P)
{
  return (__m128) __builtin_ia32_loadups (__P);
}


extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_loadr_ps (float const *__P)
{
  __v4sf __tmp = *(__v4sf *)__P;
  return (__m128) __builtin_ia32_shufps (__tmp, __tmp, (((0) << 6) | ((1) << 4) | ((2) << 2) | (3)));
}


extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set_ps (const float __Z, const float __Y, const float __X, const float __W)
{
  return __extension__ (__m128)(__v4sf){ __W, __X, __Y, __Z };
}


extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_setr_ps (float __Z, float __Y, float __X, float __W)
{
  return __extension__ (__m128)(__v4sf){ __Z, __Y, __X, __W };
}


extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_store_ss (float *__P, __m128 __A)
{
  *__P = ((__v4sf)__A)[0];
}

extern __inline float __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtss_f32 (__m128 __A)
{
  return ((__v4sf)__A)[0];
}


extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_store_ps (float *__P, __m128 __A)
{
  *(__v4sf *)__P = (__v4sf)__A;
}


extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_storeu_ps (float *__P, __m128 __A)
{
  __builtin_ia32_storeups (__P, (__v4sf)__A);
}


extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_store1_ps (float *__P, __m128 __A)
{
  __v4sf __va = (__v4sf)__A;
  __v4sf __tmp = __builtin_ia32_shufps (__va, __va, (((0) << 6) | ((0) << 4) | ((0) << 2) | (0)));
  _mm_storeu_ps (__P, __tmp);
}

extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_store_ps1 (float *__P, __m128 __A)
{
  _mm_store1_ps (__P, __A);
}


extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_storer_ps (float *__P, __m128 __A)
{
  __v4sf __va = (__v4sf)__A;
  __v4sf __tmp = __builtin_ia32_shufps (__va, __va, (((0) << 6) | ((1) << 4) | ((2) << 2) | (3)));
  _mm_store_ps (__P, __tmp);
}


extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_move_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_movss ((__v4sf)__A, (__v4sf)__B);
}
# 1057 "/usr/lib/gcc/x86_64-linux-gnu/6/include/xmmintrin.h" 3 4
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_max_pi16 (__m64 __A, __m64 __B)
{
  return (__m64) __builtin_ia32_pmaxsw ((__v4hi)__A, (__v4hi)__B);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pmaxsw (__m64 __A, __m64 __B)
{
  return _mm_max_pi16 (__A, __B);
}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_max_pu8 (__m64 __A, __m64 __B)
{
  return (__m64) __builtin_ia32_pmaxub ((__v8qi)__A, (__v8qi)__B);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pmaxub (__m64 __A, __m64 __B)
{
  return _mm_max_pu8 (__A, __B);
}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_min_pi16 (__m64 __A, __m64 __B)
{
  return (__m64) __builtin_ia32_pminsw ((__v4hi)__A, (__v4hi)__B);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pminsw (__m64 __A, __m64 __B)
{
  return _mm_min_pi16 (__A, __B);
}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_min_pu8 (__m64 __A, __m64 __B)
{
  return (__m64) __builtin_ia32_pminub ((__v8qi)__A, (__v8qi)__B);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pminub (__m64 __A, __m64 __B)
{
  return _mm_min_pu8 (__A, __B);
}


extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_movemask_pi8 (__m64 __A)
{
  return __builtin_ia32_pmovmskb ((__v8qi)__A);
}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pmovmskb (__m64 __A)
{
  return _mm_movemask_pi8 (__A);
}



extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_mulhi_pu16 (__m64 __A, __m64 __B)
{
  return (__m64) __builtin_ia32_pmulhuw ((__v4hi)__A, (__v4hi)__B);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pmulhuw (__m64 __A, __m64 __B)
{
  return _mm_mulhi_pu16 (__A, __B);
}
# 1159 "/usr/lib/gcc/x86_64-linux-gnu/6/include/xmmintrin.h" 3 4
extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_maskmove_si64 (__m64 __A, __m64 __N, char *__P)
{
  __builtin_ia32_maskmovq ((__v8qi)__A, (__v8qi)__N, __P);
}

extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_maskmovq (__m64 __A, __m64 __N, char *__P)
{
  _mm_maskmove_si64 (__A, __N, __P);
}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_avg_pu8 (__m64 __A, __m64 __B)
{
  return (__m64) __builtin_ia32_pavgb ((__v8qi)__A, (__v8qi)__B);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pavgb (__m64 __A, __m64 __B)
{
  return _mm_avg_pu8 (__A, __B);
}


extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_avg_pu16 (__m64 __A, __m64 __B)
{
  return (__m64) __builtin_ia32_pavgw ((__v4hi)__A, (__v4hi)__B);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pavgw (__m64 __A, __m64 __B)
{
  return _mm_avg_pu16 (__A, __B);
}




extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sad_pu8 (__m64 __A, __m64 __B)
{
  return (__m64) __builtin_ia32_psadbw ((__v8qi)__A, (__v8qi)__B);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psadbw (__m64 __A, __m64 __B)
{
  return _mm_sad_pu8 (__A, __B);
}


extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_stream_pi (__m64 *__P, __m64 __A)
{
  __builtin_ia32_movntq ((unsigned long long *)__P, (unsigned long long)__A);
}


extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_stream_ps (float *__P, __m128 __A)
{
  __builtin_ia32_movntps (__P, (__v4sf)__A);
}



extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sfence (void)
{
  __builtin_ia32_sfence ();
}
# 1249 "/usr/lib/gcc/x86_64-linux-gnu/6/include/xmmintrin.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/6/include/emmintrin.h" 1 3 4
# 31 "/usr/lib/gcc/x86_64-linux-gnu/6/include/emmintrin.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/6/include/xmmintrin.h" 1 3 4
# 32 "/usr/lib/gcc/x86_64-linux-gnu/6/include/emmintrin.h" 2 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/6/include/emmintrin.h" 3 4
typedef double __v2df __attribute__ ((__vector_size__ (16)));
typedef long long __v2di __attribute__ ((__vector_size__ (16)));
typedef unsigned long long __v2du __attribute__ ((__vector_size__ (16)));
typedef int __v4si __attribute__ ((__vector_size__ (16)));
typedef unsigned int __v4su __attribute__ ((__vector_size__ (16)));
typedef short __v8hi __attribute__ ((__vector_size__ (16)));
typedef unsigned short __v8hu __attribute__ ((__vector_size__ (16)));
typedef char __v16qi __attribute__ ((__vector_size__ (16)));
typedef unsigned char __v16qu __attribute__ ((__vector_size__ (16)));



typedef long long __m128i __attribute__ ((__vector_size__ (16), __may_alias__));
typedef double __m128d __attribute__ ((__vector_size__ (16), __may_alias__));






extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set_sd (double __F)
{
  return __extension__ (__m128d){ __F, 0.0 };
}


extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set1_pd (double __F)
{
  return __extension__ (__m128d){ __F, __F };
}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set_pd1 (double __F)
{
  return _mm_set1_pd (__F);
}


extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set_pd (double __W, double __X)
{
  return __extension__ (__m128d){ __X, __W };
}


extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_setr_pd (double __W, double __X)
{
  return __extension__ (__m128d){ __W, __X };
}


extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_undefined_pd (void)
{
  __m128d __Y = __Y;
  return __Y;
}


extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_setzero_pd (void)
{
  return __extension__ (__m128d){ 0.0, 0.0 };
}


extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_move_sd (__m128d __A, __m128d __B)
{
  return (__m128d) __builtin_ia32_movsd ((__v2df)__A, (__v2df)__B);
}


extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_load_pd (double const *__P)
{
  return *(__m128d *)__P;
}


extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_loadu_pd (double const *__P)
{
  return __builtin_ia32_loadupd (__P);
}


extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_load1_pd (double const *__P)
{
  return _mm_set1_pd (*__P);
}


extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_load_sd (double const *__P)
{
  return _mm_set_sd (*__P);
}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_load_pd1 (double const *__P)
{
  return _mm_load1_pd (__P);
}


extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_loadr_pd (double const *__P)
{
  __m128d __tmp = _mm_load_pd (__P);
  return __builtin_ia32_shufpd (__tmp, __tmp, (((0) << 1) | (1)));
}


extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_store_pd (double *__P, __m128d __A)
{
  *(__m128d *)__P = __A;
}


extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_storeu_pd (double *__P, __m128d __A)
{
  __builtin_ia32_storeupd (__P, __A);
}


extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_store_sd (double *__P, __m128d __A)
{
  *__P = ((__v2df)__A)[0];
}

extern __inline double __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsd_f64 (__m128d __A)
{
  return ((__v2df)__A)[0];
}

extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_storel_pd (double *__P, __m128d __A)
{
  _mm_store_sd (__P, __A);
}


extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_storeh_pd (double *__P, __m128d __A)
{
  *__P = ((__v2df)__A)[1];
}



extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_store1_pd (double *__P, __m128d __A)
{
  _mm_store_pd (__P, __builtin_ia32_shufpd (__A, __A, (((0) << 1) | (0))));
}

extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_store_pd1 (double *__P, __m128d __A)
{
  _mm_store1_pd (__P, __A);
}


extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_storer_pd (double *__P, __m128d __A)
{
  _mm_store_pd (__P, __builtin_ia32_shufpd (__A, __A, (((0) << 1) | (1))));
}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsi128_si32 (__m128i __A)
{
  return __builtin_ia32_vec_ext_v4si ((__v4si)__A, 0);
}



extern __inline long long __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsi128_si64 (__m128i __A)
{
  return ((__v2di)__A)[0];
}


extern __inline long long __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsi128_si64x (__m128i __A)
{
  return ((__v2di)__A)[0];
}


extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_add_pd (__m128d __A, __m128d __B)
{
  return (__m128d) ((__v2df)__A + (__v2df)__B);
}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_add_sd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_addsd ((__v2df)__A, (__v2df)__B);
}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sub_pd (__m128d __A, __m128d __B)
{
  return (__m128d) ((__v2df)__A - (__v2df)__B);
}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sub_sd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_subsd ((__v2df)__A, (__v2df)__B);
}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_mul_pd (__m128d __A, __m128d __B)
{
  return (__m128d) ((__v2df)__A * (__v2df)__B);
}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_mul_sd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_mulsd ((__v2df)__A, (__v2df)__B);
}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_div_pd (__m128d __A, __m128d __B)
{
  return (__m128d) ((__v2df)__A / (__v2df)__B);
}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_div_sd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_divsd ((__v2df)__A, (__v2df)__B);
}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sqrt_pd (__m128d __A)
{
  return (__m128d)__builtin_ia32_sqrtpd ((__v2df)__A);
}


extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sqrt_sd (__m128d __A, __m128d __B)
{
  __v2df __tmp = __builtin_ia32_movsd ((__v2df)__A, (__v2df)__B);
  return (__m128d)__builtin_ia32_sqrtsd ((__v2df)__tmp);
}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_min_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_minpd ((__v2df)__A, (__v2df)__B);
}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_min_sd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_minsd ((__v2df)__A, (__v2df)__B);
}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_max_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_maxpd ((__v2df)__A, (__v2df)__B);
}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_max_sd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_maxsd ((__v2df)__A, (__v2df)__B);
}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_and_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_andpd ((__v2df)__A, (__v2df)__B);
}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_andnot_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_andnpd ((__v2df)__A, (__v2df)__B);
}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_or_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_orpd ((__v2df)__A, (__v2df)__B);
}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_xor_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_xorpd ((__v2df)__A, (__v2df)__B);
}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpeq_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpeqpd ((__v2df)__A, (__v2df)__B);
}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmplt_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpltpd ((__v2df)__A, (__v2df)__B);
}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmple_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmplepd ((__v2df)__A, (__v2df)__B);
}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpgt_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpgtpd ((__v2df)__A, (__v2df)__B);
}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpge_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpgepd ((__v2df)__A, (__v2df)__B);
}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpneq_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpneqpd ((__v2df)__A, (__v2df)__B);
}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpnlt_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpnltpd ((__v2df)__A, (__v2df)__B);
}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpnle_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpnlepd ((__v2df)__A, (__v2df)__B);
}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpngt_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpngtpd ((__v2df)__A, (__v2df)__B);
}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpnge_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpngepd ((__v2df)__A, (__v2df)__B);
}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpord_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpordpd ((__v2df)__A, (__v2df)__B);
}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpunord_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpunordpd ((__v2df)__A, (__v2df)__B);
}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpeq_sd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpeqsd ((__v2df)__A, (__v2df)__B);
}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmplt_sd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpltsd ((__v2df)__A, (__v2df)__B);
}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmple_sd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmplesd ((__v2df)__A, (__v2df)__B);
}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpgt_sd (__m128d __A, __m128d __B)
{
  return (__m128d) __builtin_ia32_movsd ((__v2df) __A,
      (__v2df)
      __builtin_ia32_cmpltsd ((__v2df) __B,
         (__v2df)
         __A));
}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpge_sd (__m128d __A, __m128d __B)
{
  return (__m128d) __builtin_ia32_movsd ((__v2df) __A,
      (__v2df)
      __builtin_ia32_cmplesd ((__v2df) __B,
         (__v2df)
         __A));
}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpneq_sd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpneqsd ((__v2df)__A, (__v2df)__B);
}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpnlt_sd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpnltsd ((__v2df)__A, (__v2df)__B);
}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpnle_sd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpnlesd ((__v2df)__A, (__v2df)__B);
}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpngt_sd (__m128d __A, __m128d __B)
{
  return (__m128d) __builtin_ia32_movsd ((__v2df) __A,
      (__v2df)
      __builtin_ia32_cmpnltsd ((__v2df) __B,
          (__v2df)
          __A));
}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpnge_sd (__m128d __A, __m128d __B)
{
  return (__m128d) __builtin_ia32_movsd ((__v2df) __A,
      (__v2df)
      __builtin_ia32_cmpnlesd ((__v2df) __B,
          (__v2df)
          __A));
}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpord_sd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpordsd ((__v2df)__A, (__v2df)__B);
}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpunord_sd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpunordsd ((__v2df)__A, (__v2df)__B);
}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_comieq_sd (__m128d __A, __m128d __B)
{
  return __builtin_ia32_comisdeq ((__v2df)__A, (__v2df)__B);
}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_comilt_sd (__m128d __A, __m128d __B)
{
  return __builtin_ia32_comisdlt ((__v2df)__A, (__v2df)__B);
}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_comile_sd (__m128d __A, __m128d __B)
{
  return __builtin_ia32_comisdle ((__v2df)__A, (__v2df)__B);
}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_comigt_sd (__m128d __A, __m128d __B)
{
  return __builtin_ia32_comisdgt ((__v2df)__A, (__v2df)__B);
}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_comige_sd (__m128d __A, __m128d __B)
{
  return __builtin_ia32_comisdge ((__v2df)__A, (__v2df)__B);
}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_comineq_sd (__m128d __A, __m128d __B)
{
  return __builtin_ia32_comisdneq ((__v2df)__A, (__v2df)__B);
}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_ucomieq_sd (__m128d __A, __m128d __B)
{
  return __builtin_ia32_ucomisdeq ((__v2df)__A, (__v2df)__B);
}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_ucomilt_sd (__m128d __A, __m128d __B)
{
  return __builtin_ia32_ucomisdlt ((__v2df)__A, (__v2df)__B);
}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_ucomile_sd (__m128d __A, __m128d __B)
{
  return __builtin_ia32_ucomisdle ((__v2df)__A, (__v2df)__B);
}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_ucomigt_sd (__m128d __A, __m128d __B)
{
  return __builtin_ia32_ucomisdgt ((__v2df)__A, (__v2df)__B);
}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_ucomige_sd (__m128d __A, __m128d __B)
{
  return __builtin_ia32_ucomisdge ((__v2df)__A, (__v2df)__B);
}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_ucomineq_sd (__m128d __A, __m128d __B)
{
  return __builtin_ia32_ucomisdneq ((__v2df)__A, (__v2df)__B);
}



extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set_epi64x (long long __q1, long long __q0)
{
  return __extension__ (__m128i)(__v2di){ __q0, __q1 };
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set_epi64 (__m64 __q1, __m64 __q0)
{
  return _mm_set_epi64x ((long long)__q1, (long long)__q0);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set_epi32 (int __q3, int __q2, int __q1, int __q0)
{
  return __extension__ (__m128i)(__v4si){ __q0, __q1, __q2, __q3 };
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set_epi16 (short __q7, short __q6, short __q5, short __q4,
        short __q3, short __q2, short __q1, short __q0)
{
  return __extension__ (__m128i)(__v8hi){
    __q0, __q1, __q2, __q3, __q4, __q5, __q6, __q7 };
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set_epi8 (char __q15, char __q14, char __q13, char __q12,
       char __q11, char __q10, char __q09, char __q08,
       char __q07, char __q06, char __q05, char __q04,
       char __q03, char __q02, char __q01, char __q00)
{
  return __extension__ (__m128i)(__v16qi){
    __q00, __q01, __q02, __q03, __q04, __q05, __q06, __q07,
    __q08, __q09, __q10, __q11, __q12, __q13, __q14, __q15
  };
}



extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set1_epi64x (long long __A)
{
  return _mm_set_epi64x (__A, __A);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set1_epi64 (__m64 __A)
{
  return _mm_set_epi64 (__A, __A);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set1_epi32 (int __A)
{
  return _mm_set_epi32 (__A, __A, __A, __A);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set1_epi16 (short __A)
{
  return _mm_set_epi16 (__A, __A, __A, __A, __A, __A, __A, __A);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set1_epi8 (char __A)
{
  return _mm_set_epi8 (__A, __A, __A, __A, __A, __A, __A, __A,
         __A, __A, __A, __A, __A, __A, __A, __A);
}




extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_setr_epi64 (__m64 __q0, __m64 __q1)
{
  return _mm_set_epi64 (__q1, __q0);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_setr_epi32 (int __q0, int __q1, int __q2, int __q3)
{
  return _mm_set_epi32 (__q3, __q2, __q1, __q0);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_setr_epi16 (short __q0, short __q1, short __q2, short __q3,
         short __q4, short __q5, short __q6, short __q7)
{
  return _mm_set_epi16 (__q7, __q6, __q5, __q4, __q3, __q2, __q1, __q0);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_setr_epi8 (char __q00, char __q01, char __q02, char __q03,
        char __q04, char __q05, char __q06, char __q07,
        char __q08, char __q09, char __q10, char __q11,
        char __q12, char __q13, char __q14, char __q15)
{
  return _mm_set_epi8 (__q15, __q14, __q13, __q12, __q11, __q10, __q09, __q08,
         __q07, __q06, __q05, __q04, __q03, __q02, __q01, __q00);
}



extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_load_si128 (__m128i const *__P)
{
  return *__P;
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_loadu_si128 (__m128i const *__P)
{
  return (__m128i) __builtin_ia32_loaddqu ((char const *)__P);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_loadl_epi64 (__m128i const *__P)
{
  return _mm_set_epi64 ((__m64)0LL, *(__m64 *)__P);
}

extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_store_si128 (__m128i *__P, __m128i __B)
{
  *__P = __B;
}

extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_storeu_si128 (__m128i *__P, __m128i __B)
{
  __builtin_ia32_storedqu ((char *)__P, (__v16qi)__B);
}

extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_storel_epi64 (__m128i *__P, __m128i __B)
{
  *(long long *)__P = ((__v2di)__B)[0];
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_movepi64_pi64 (__m128i __B)
{
  return (__m64) ((__v2di)__B)[0];
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_movpi64_epi64 (__m64 __A)
{
  return _mm_set_epi64 ((__m64)0LL, __A);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_move_epi64 (__m128i __A)
{
  return (__m128i)__builtin_ia32_movq128 ((__v2di) __A);
}


extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_undefined_si128 (void)
{
  __m128i __Y = __Y;
  return __Y;
}


extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_setzero_si128 (void)
{
  return __extension__ (__m128i)(__v4si){ 0, 0, 0, 0 };
}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtepi32_pd (__m128i __A)
{
  return (__m128d)__builtin_ia32_cvtdq2pd ((__v4si) __A);
}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtepi32_ps (__m128i __A)
{
  return (__m128)__builtin_ia32_cvtdq2ps ((__v4si) __A);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtpd_epi32 (__m128d __A)
{
  return (__m128i)__builtin_ia32_cvtpd2dq ((__v2df) __A);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtpd_pi32 (__m128d __A)
{
  return (__m64)__builtin_ia32_cvtpd2pi ((__v2df) __A);
}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtpd_ps (__m128d __A)
{
  return (__m128)__builtin_ia32_cvtpd2ps ((__v2df) __A);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvttpd_epi32 (__m128d __A)
{
  return (__m128i)__builtin_ia32_cvttpd2dq ((__v2df) __A);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvttpd_pi32 (__m128d __A)
{
  return (__m64)__builtin_ia32_cvttpd2pi ((__v2df) __A);
}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtpi32_pd (__m64 __A)
{
  return (__m128d)__builtin_ia32_cvtpi2pd ((__v2si) __A);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtps_epi32 (__m128 __A)
{
  return (__m128i)__builtin_ia32_cvtps2dq ((__v4sf) __A);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvttps_epi32 (__m128 __A)
{
  return (__m128i)__builtin_ia32_cvttps2dq ((__v4sf) __A);
}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtps_pd (__m128 __A)
{
  return (__m128d)__builtin_ia32_cvtps2pd ((__v4sf) __A);
}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsd_si32 (__m128d __A)
{
  return __builtin_ia32_cvtsd2si ((__v2df) __A);
}



extern __inline long long __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsd_si64 (__m128d __A)
{
  return __builtin_ia32_cvtsd2si64 ((__v2df) __A);
}


extern __inline long long __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsd_si64x (__m128d __A)
{
  return __builtin_ia32_cvtsd2si64 ((__v2df) __A);
}


extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvttsd_si32 (__m128d __A)
{
  return __builtin_ia32_cvttsd2si ((__v2df) __A);
}



extern __inline long long __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvttsd_si64 (__m128d __A)
{
  return __builtin_ia32_cvttsd2si64 ((__v2df) __A);
}


extern __inline long long __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvttsd_si64x (__m128d __A)
{
  return __builtin_ia32_cvttsd2si64 ((__v2df) __A);
}


extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsd_ss (__m128 __A, __m128d __B)
{
  return (__m128)__builtin_ia32_cvtsd2ss ((__v4sf) __A, (__v2df) __B);
}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsi32_sd (__m128d __A, int __B)
{
  return (__m128d)__builtin_ia32_cvtsi2sd ((__v2df) __A, __B);
}



extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsi64_sd (__m128d __A, long long __B)
{
  return (__m128d)__builtin_ia32_cvtsi642sd ((__v2df) __A, __B);
}


extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsi64x_sd (__m128d __A, long long __B)
{
  return (__m128d)__builtin_ia32_cvtsi642sd ((__v2df) __A, __B);
}


extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtss_sd (__m128d __A, __m128 __B)
{
  return (__m128d)__builtin_ia32_cvtss2sd ((__v2df) __A, (__v4sf)__B);
}
# 914 "/usr/lib/gcc/x86_64-linux-gnu/6/include/emmintrin.h" 3 4
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpackhi_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_unpckhpd ((__v2df)__A, (__v2df)__B);
}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpacklo_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_unpcklpd ((__v2df)__A, (__v2df)__B);
}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_loadh_pd (__m128d __A, double const *__B)
{
  return (__m128d)__builtin_ia32_loadhpd ((__v2df)__A, __B);
}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_loadl_pd (__m128d __A, double const *__B)
{
  return (__m128d)__builtin_ia32_loadlpd ((__v2df)__A, __B);
}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_movemask_pd (__m128d __A)
{
  return __builtin_ia32_movmskpd ((__v2df)__A);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_packs_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_packsswb128 ((__v8hi)__A, (__v8hi)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_packs_epi32 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_packssdw128 ((__v4si)__A, (__v4si)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_packus_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_packuswb128 ((__v8hi)__A, (__v8hi)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpackhi_epi8 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_punpckhbw128 ((__v16qi)__A, (__v16qi)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpackhi_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_punpckhwd128 ((__v8hi)__A, (__v8hi)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpackhi_epi32 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_punpckhdq128 ((__v4si)__A, (__v4si)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpackhi_epi64 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_punpckhqdq128 ((__v2di)__A, (__v2di)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpacklo_epi8 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_punpcklbw128 ((__v16qi)__A, (__v16qi)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpacklo_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_punpcklwd128 ((__v8hi)__A, (__v8hi)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpacklo_epi32 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_punpckldq128 ((__v4si)__A, (__v4si)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpacklo_epi64 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_punpcklqdq128 ((__v2di)__A, (__v2di)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_add_epi8 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v16qu)__A + (__v16qu)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_add_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v8hu)__A + (__v8hu)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_add_epi32 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v4su)__A + (__v4su)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_add_epi64 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v2du)__A + (__v2du)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_adds_epi8 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_paddsb128 ((__v16qi)__A, (__v16qi)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_adds_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_paddsw128 ((__v8hi)__A, (__v8hi)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_adds_epu8 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_paddusb128 ((__v16qi)__A, (__v16qi)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_adds_epu16 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_paddusw128 ((__v8hi)__A, (__v8hi)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sub_epi8 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v16qu)__A - (__v16qu)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sub_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v8hu)__A - (__v8hu)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sub_epi32 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v4su)__A - (__v4su)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sub_epi64 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v2du)__A - (__v2du)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_subs_epi8 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_psubsb128 ((__v16qi)__A, (__v16qi)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_subs_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_psubsw128 ((__v8hi)__A, (__v8hi)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_subs_epu8 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_psubusb128 ((__v16qi)__A, (__v16qi)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_subs_epu16 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_psubusw128 ((__v8hi)__A, (__v8hi)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_madd_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_pmaddwd128 ((__v8hi)__A, (__v8hi)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_mulhi_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_pmulhw128 ((__v8hi)__A, (__v8hi)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_mullo_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v8hu)__A * (__v8hu)__B);
}

extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_mul_su32 (__m64 __A, __m64 __B)
{
  return (__m64)__builtin_ia32_pmuludq ((__v2si)__A, (__v2si)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_mul_epu32 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_pmuludq128 ((__v4si)__A, (__v4si)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_slli_epi16 (__m128i __A, int __B)
{
  return (__m128i)__builtin_ia32_psllwi128 ((__v8hi)__A, __B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_slli_epi32 (__m128i __A, int __B)
{
  return (__m128i)__builtin_ia32_pslldi128 ((__v4si)__A, __B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_slli_epi64 (__m128i __A, int __B)
{
  return (__m128i)__builtin_ia32_psllqi128 ((__v2di)__A, __B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_srai_epi16 (__m128i __A, int __B)
{
  return (__m128i)__builtin_ia32_psrawi128 ((__v8hi)__A, __B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_srai_epi32 (__m128i __A, int __B)
{
  return (__m128i)__builtin_ia32_psradi128 ((__v4si)__A, __B);
}
# 1201 "/usr/lib/gcc/x86_64-linux-gnu/6/include/emmintrin.h" 3 4
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_srli_epi16 (__m128i __A, int __B)
{
  return (__m128i)__builtin_ia32_psrlwi128 ((__v8hi)__A, __B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_srli_epi32 (__m128i __A, int __B)
{
  return (__m128i)__builtin_ia32_psrldi128 ((__v4si)__A, __B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_srli_epi64 (__m128i __A, int __B)
{
  return (__m128i)__builtin_ia32_psrlqi128 ((__v2di)__A, __B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sll_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_psllw128((__v8hi)__A, (__v8hi)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sll_epi32 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_pslld128((__v4si)__A, (__v4si)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sll_epi64 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_psllq128((__v2di)__A, (__v2di)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sra_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_psraw128 ((__v8hi)__A, (__v8hi)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sra_epi32 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_psrad128 ((__v4si)__A, (__v4si)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_srl_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_psrlw128 ((__v8hi)__A, (__v8hi)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_srl_epi32 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_psrld128 ((__v4si)__A, (__v4si)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_srl_epi64 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_psrlq128 ((__v2di)__A, (__v2di)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_and_si128 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v2du)__A & (__v2du)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_andnot_si128 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_pandn128 ((__v2di)__A, (__v2di)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_or_si128 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v2du)__A | (__v2du)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_xor_si128 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v2du)__A ^ (__v2du)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpeq_epi8 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v16qi)__A == (__v16qi)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpeq_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v8hi)__A == (__v8hi)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpeq_epi32 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v4si)__A == (__v4si)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmplt_epi8 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v16qi)__A < (__v16qi)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmplt_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v8hi)__A < (__v8hi)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmplt_epi32 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v4si)__A < (__v4si)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpgt_epi8 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v16qi)__A > (__v16qi)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpgt_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v8hi)__A > (__v8hi)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpgt_epi32 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v4si)__A > (__v4si)__B);
}
# 1365 "/usr/lib/gcc/x86_64-linux-gnu/6/include/emmintrin.h" 3 4
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_max_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_pmaxsw128 ((__v8hi)__A, (__v8hi)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_max_epu8 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_pmaxub128 ((__v16qi)__A, (__v16qi)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_min_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_pminsw128 ((__v8hi)__A, (__v8hi)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_min_epu8 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_pminub128 ((__v16qi)__A, (__v16qi)__B);
}

extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_movemask_epi8 (__m128i __A)
{
  return __builtin_ia32_pmovmskb128 ((__v16qi)__A);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_mulhi_epu16 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_pmulhuw128 ((__v8hi)__A, (__v8hi)__B);
}
# 1428 "/usr/lib/gcc/x86_64-linux-gnu/6/include/emmintrin.h" 3 4
extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_maskmoveu_si128 (__m128i __A, __m128i __B, char *__C)
{
  __builtin_ia32_maskmovdqu ((__v16qi)__A, (__v16qi)__B, __C);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_avg_epu8 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_pavgb128 ((__v16qi)__A, (__v16qi)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_avg_epu16 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_pavgw128 ((__v8hi)__A, (__v8hi)__B);
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sad_epu8 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_psadbw128 ((__v16qi)__A, (__v16qi)__B);
}

extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_stream_si32 (int *__A, int __B)
{
  __builtin_ia32_movnti (__A, __B);
}


extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_stream_si64 (long long int *__A, long long int __B)
{
  __builtin_ia32_movnti64 (__A, __B);
}


extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_stream_si128 (__m128i *__A, __m128i __B)
{
  __builtin_ia32_movntdq ((__v2di *)__A, (__v2di)__B);
}

extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_stream_pd (double *__A, __m128d __B)
{
  __builtin_ia32_movntpd (__A, (__v2df)__B);
}

extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_clflush (void const *__A)
{
  __builtin_ia32_clflush (__A);
}

extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_lfence (void)
{
  __builtin_ia32_lfence ();
}

extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_mfence (void)
{
  __builtin_ia32_mfence ();
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsi32_si128 (int __A)
{
  return _mm_set_epi32 (0, 0, 0, __A);
}



extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsi64_si128 (long long __A)
{
  return _mm_set_epi64x (0, __A);
}


extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsi64x_si128 (long long __A)
{
  return _mm_set_epi64x (0, __A);
}




extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_castpd_ps(__m128d __A)
{
  return (__m128) __A;
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_castpd_si128(__m128d __A)
{
  return (__m128i) __A;
}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_castps_pd(__m128 __A)
{
  return (__m128d) __A;
}

extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_castps_si128(__m128 __A)
{
  return (__m128i) __A;
}

extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_castsi128_ps(__m128i __A)
{
  return (__m128) __A;
}

extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_castsi128_pd(__m128i __A)
{
  return (__m128d) __A;
}
# 1250 "/usr/lib/gcc/x86_64-linux-gnu/6/include/xmmintrin.h" 2 3 4
# 1261 "/usr/lib/gcc/x86_64-linux-gnu/6/include/xmmintrin.h" 3 4
extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_pause (void)
{
  __builtin_ia32_pause ();
}
# 60 "/usr/include/SDL2/SDL_cpuinfo.h" 2






# 1 "/usr/include/SDL2/begin_code.h" 1
# 67 "/usr/include/SDL2/SDL_cpuinfo.h" 2
# 82 "/usr/include/SDL2/SDL_cpuinfo.h"

# 82 "/usr/include/SDL2/SDL_cpuinfo.h"
extern __attribute__ ((visibility("default"))) int SDL_GetCPUCount(void);







extern __attribute__ ((visibility("default"))) int SDL_GetCPUCacheLineSize(void);




extern __attribute__ ((visibility("default"))) SDL_bool SDL_HasRDTSC(void);




extern __attribute__ ((visibility("default"))) SDL_bool SDL_HasAltiVec(void);




extern __attribute__ ((visibility("default"))) SDL_bool SDL_HasMMX(void);




extern __attribute__ ((visibility("default"))) SDL_bool SDL_Has3DNow(void);




extern __attribute__ ((visibility("default"))) SDL_bool SDL_HasSSE(void);




extern __attribute__ ((visibility("default"))) SDL_bool SDL_HasSSE2(void);




extern __attribute__ ((visibility("default"))) SDL_bool SDL_HasSSE3(void);




extern __attribute__ ((visibility("default"))) SDL_bool SDL_HasSSE41(void);




extern __attribute__ ((visibility("default"))) SDL_bool SDL_HasSSE42(void);




extern __attribute__ ((visibility("default"))) SDL_bool SDL_HasAVX(void);




extern __attribute__ ((visibility("default"))) SDL_bool SDL_HasAVX2(void);




extern __attribute__ ((visibility("default"))) int SDL_GetSystemRAM(void);






# 1 "/usr/include/SDL2/close_code.h" 1
# 158 "/usr/include/SDL2/SDL_cpuinfo.h" 2
# 39 "/usr/include/SDL2/SDL.h" 2


# 1 "/usr/include/SDL2/SDL_events.h" 1
# 33 "/usr/include/SDL2/SDL_events.h"
# 1 "/usr/include/SDL2/SDL_video.h" 1
# 32 "/usr/include/SDL2/SDL_video.h"
# 1 "/usr/include/SDL2/SDL_pixels.h" 1
# 34 "/usr/include/SDL2/SDL_pixels.h"
# 1 "/usr/include/SDL2/begin_code.h" 1
# 35 "/usr/include/SDL2/SDL_pixels.h" 2
# 51 "/usr/include/SDL2/SDL_pixels.h"
enum
{
    SDL_PIXELTYPE_UNKNOWN,
    SDL_PIXELTYPE_INDEX1,
    SDL_PIXELTYPE_INDEX4,
    SDL_PIXELTYPE_INDEX8,
    SDL_PIXELTYPE_PACKED8,
    SDL_PIXELTYPE_PACKED16,
    SDL_PIXELTYPE_PACKED32,
    SDL_PIXELTYPE_ARRAYU8,
    SDL_PIXELTYPE_ARRAYU16,
    SDL_PIXELTYPE_ARRAYU32,
    SDL_PIXELTYPE_ARRAYF16,
    SDL_PIXELTYPE_ARRAYF32
};


enum
{
    SDL_BITMAPORDER_NONE,
    SDL_BITMAPORDER_4321,
    SDL_BITMAPORDER_1234
};


enum
{
    SDL_PACKEDORDER_NONE,
    SDL_PACKEDORDER_XRGB,
    SDL_PACKEDORDER_RGBX,
    SDL_PACKEDORDER_ARGB,
    SDL_PACKEDORDER_RGBA,
    SDL_PACKEDORDER_XBGR,
    SDL_PACKEDORDER_BGRX,
    SDL_PACKEDORDER_ABGR,
    SDL_PACKEDORDER_BGRA
};




enum
{
    SDL_ARRAYORDER_NONE,
    SDL_ARRAYORDER_RGB,
    SDL_ARRAYORDER_RGBA,
    SDL_ARRAYORDER_ARGB,
    SDL_ARRAYORDER_BGR,
    SDL_ARRAYORDER_BGRA,
    SDL_ARRAYORDER_ABGR
};


enum
{
    SDL_PACKEDLAYOUT_NONE,
    SDL_PACKEDLAYOUT_332,
    SDL_PACKEDLAYOUT_4444,
    SDL_PACKEDLAYOUT_1555,
    SDL_PACKEDLAYOUT_5551,
    SDL_PACKEDLAYOUT_565,
    SDL_PACKEDLAYOUT_8888,
    SDL_PACKEDLAYOUT_2101010,
    SDL_PACKEDLAYOUT_1010102
};
# 171 "/usr/include/SDL2/SDL_pixels.h"
enum
{
    SDL_PIXELFORMAT_UNKNOWN,
    SDL_PIXELFORMAT_INDEX1LSB =
        ((1 << 28) | ((SDL_PIXELTYPE_INDEX1) << 24) | ((SDL_BITMAPORDER_4321) << 20) | ((0) << 16) | ((1) << 8) | ((0) << 0))
                                    ,
    SDL_PIXELFORMAT_INDEX1MSB =
        ((1 << 28) | ((SDL_PIXELTYPE_INDEX1) << 24) | ((SDL_BITMAPORDER_1234) << 20) | ((0) << 16) | ((1) << 8) | ((0) << 0))
                                    ,
    SDL_PIXELFORMAT_INDEX4LSB =
        ((1 << 28) | ((SDL_PIXELTYPE_INDEX4) << 24) | ((SDL_BITMAPORDER_4321) << 20) | ((0) << 16) | ((4) << 8) | ((0) << 0))
                                    ,
    SDL_PIXELFORMAT_INDEX4MSB =
        ((1 << 28) | ((SDL_PIXELTYPE_INDEX4) << 24) | ((SDL_BITMAPORDER_1234) << 20) | ((0) << 16) | ((4) << 8) | ((0) << 0))
                                    ,
    SDL_PIXELFORMAT_INDEX8 =
        ((1 << 28) | ((SDL_PIXELTYPE_INDEX8) << 24) | ((0) << 20) | ((0) << 16) | ((8) << 8) | ((1) << 0)),
    SDL_PIXELFORMAT_RGB332 =
        ((1 << 28) | ((SDL_PIXELTYPE_PACKED8) << 24) | ((SDL_PACKEDORDER_XRGB) << 20) | ((SDL_PACKEDLAYOUT_332) << 16) | ((8) << 8) | ((1) << 0))
                                                          ,
    SDL_PIXELFORMAT_RGB444 =
        ((1 << 28) | ((SDL_PIXELTYPE_PACKED16) << 24) | ((SDL_PACKEDORDER_XRGB) << 20) | ((SDL_PACKEDLAYOUT_4444) << 16) | ((12) << 8) | ((2) << 0))
                                                            ,
    SDL_PIXELFORMAT_RGB555 =
        ((1 << 28) | ((SDL_PIXELTYPE_PACKED16) << 24) | ((SDL_PACKEDORDER_XRGB) << 20) | ((SDL_PACKEDLAYOUT_1555) << 16) | ((15) << 8) | ((2) << 0))
                                                            ,
    SDL_PIXELFORMAT_BGR555 =
        ((1 << 28) | ((SDL_PIXELTYPE_PACKED16) << 24) | ((SDL_PACKEDORDER_XBGR) << 20) | ((SDL_PACKEDLAYOUT_1555) << 16) | ((15) << 8) | ((2) << 0))
                                                            ,
    SDL_PIXELFORMAT_ARGB4444 =
        ((1 << 28) | ((SDL_PIXELTYPE_PACKED16) << 24) | ((SDL_PACKEDORDER_ARGB) << 20) | ((SDL_PACKEDLAYOUT_4444) << 16) | ((16) << 8) | ((2) << 0))
                                                            ,
    SDL_PIXELFORMAT_RGBA4444 =
        ((1 << 28) | ((SDL_PIXELTYPE_PACKED16) << 24) | ((SDL_PACKEDORDER_RGBA) << 20) | ((SDL_PACKEDLAYOUT_4444) << 16) | ((16) << 8) | ((2) << 0))
                                                            ,
    SDL_PIXELFORMAT_ABGR4444 =
        ((1 << 28) | ((SDL_PIXELTYPE_PACKED16) << 24) | ((SDL_PACKEDORDER_ABGR) << 20) | ((SDL_PACKEDLAYOUT_4444) << 16) | ((16) << 8) | ((2) << 0))
                                                            ,
    SDL_PIXELFORMAT_BGRA4444 =
        ((1 << 28) | ((SDL_PIXELTYPE_PACKED16) << 24) | ((SDL_PACKEDORDER_BGRA) << 20) | ((SDL_PACKEDLAYOUT_4444) << 16) | ((16) << 8) | ((2) << 0))
                                                            ,
    SDL_PIXELFORMAT_ARGB1555 =
        ((1 << 28) | ((SDL_PIXELTYPE_PACKED16) << 24) | ((SDL_PACKEDORDER_ARGB) << 20) | ((SDL_PACKEDLAYOUT_1555) << 16) | ((16) << 8) | ((2) << 0))
                                                            ,
    SDL_PIXELFORMAT_RGBA5551 =
        ((1 << 28) | ((SDL_PIXELTYPE_PACKED16) << 24) | ((SDL_PACKEDORDER_RGBA) << 20) | ((SDL_PACKEDLAYOUT_5551) << 16) | ((16) << 8) | ((2) << 0))
                                                            ,
    SDL_PIXELFORMAT_ABGR1555 =
        ((1 << 28) | ((SDL_PIXELTYPE_PACKED16) << 24) | ((SDL_PACKEDORDER_ABGR) << 20) | ((SDL_PACKEDLAYOUT_1555) << 16) | ((16) << 8) | ((2) << 0))
                                                            ,
    SDL_PIXELFORMAT_BGRA5551 =
        ((1 << 28) | ((SDL_PIXELTYPE_PACKED16) << 24) | ((SDL_PACKEDORDER_BGRA) << 20) | ((SDL_PACKEDLAYOUT_5551) << 16) | ((16) << 8) | ((2) << 0))
                                                            ,
    SDL_PIXELFORMAT_RGB565 =
        ((1 << 28) | ((SDL_PIXELTYPE_PACKED16) << 24) | ((SDL_PACKEDORDER_XRGB) << 20) | ((SDL_PACKEDLAYOUT_565) << 16) | ((16) << 8) | ((2) << 0))
                                                           ,
    SDL_PIXELFORMAT_BGR565 =
        ((1 << 28) | ((SDL_PIXELTYPE_PACKED16) << 24) | ((SDL_PACKEDORDER_XBGR) << 20) | ((SDL_PACKEDLAYOUT_565) << 16) | ((16) << 8) | ((2) << 0))
                                                           ,
    SDL_PIXELFORMAT_RGB24 =
        ((1 << 28) | ((SDL_PIXELTYPE_ARRAYU8) << 24) | ((SDL_ARRAYORDER_RGB) << 20) | ((0) << 16) | ((24) << 8) | ((3) << 0))
                                     ,
    SDL_PIXELFORMAT_BGR24 =
        ((1 << 28) | ((SDL_PIXELTYPE_ARRAYU8) << 24) | ((SDL_ARRAYORDER_BGR) << 20) | ((0) << 16) | ((24) << 8) | ((3) << 0))
                                     ,
    SDL_PIXELFORMAT_RGB888 =
        ((1 << 28) | ((SDL_PIXELTYPE_PACKED32) << 24) | ((SDL_PACKEDORDER_XRGB) << 20) | ((SDL_PACKEDLAYOUT_8888) << 16) | ((24) << 8) | ((4) << 0))
                                                            ,
    SDL_PIXELFORMAT_RGBX8888 =
        ((1 << 28) | ((SDL_PIXELTYPE_PACKED32) << 24) | ((SDL_PACKEDORDER_RGBX) << 20) | ((SDL_PACKEDLAYOUT_8888) << 16) | ((24) << 8) | ((4) << 0))
                                                            ,
    SDL_PIXELFORMAT_BGR888 =
        ((1 << 28) | ((SDL_PIXELTYPE_PACKED32) << 24) | ((SDL_PACKEDORDER_XBGR) << 20) | ((SDL_PACKEDLAYOUT_8888) << 16) | ((24) << 8) | ((4) << 0))
                                                            ,
    SDL_PIXELFORMAT_BGRX8888 =
        ((1 << 28) | ((SDL_PIXELTYPE_PACKED32) << 24) | ((SDL_PACKEDORDER_BGRX) << 20) | ((SDL_PACKEDLAYOUT_8888) << 16) | ((24) << 8) | ((4) << 0))
                                                            ,
    SDL_PIXELFORMAT_ARGB8888 =
        ((1 << 28) | ((SDL_PIXELTYPE_PACKED32) << 24) | ((SDL_PACKEDORDER_ARGB) << 20) | ((SDL_PACKEDLAYOUT_8888) << 16) | ((32) << 8) | ((4) << 0))
                                                            ,
    SDL_PIXELFORMAT_RGBA8888 =
        ((1 << 28) | ((SDL_PIXELTYPE_PACKED32) << 24) | ((SDL_PACKEDORDER_RGBA) << 20) | ((SDL_PACKEDLAYOUT_8888) << 16) | ((32) << 8) | ((4) << 0))
                                                            ,
    SDL_PIXELFORMAT_ABGR8888 =
        ((1 << 28) | ((SDL_PIXELTYPE_PACKED32) << 24) | ((SDL_PACKEDORDER_ABGR) << 20) | ((SDL_PACKEDLAYOUT_8888) << 16) | ((32) << 8) | ((4) << 0))
                                                            ,
    SDL_PIXELFORMAT_BGRA8888 =
        ((1 << 28) | ((SDL_PIXELTYPE_PACKED32) << 24) | ((SDL_PACKEDORDER_BGRA) << 20) | ((SDL_PACKEDLAYOUT_8888) << 16) | ((32) << 8) | ((4) << 0))
                                                            ,
    SDL_PIXELFORMAT_ARGB2101010 =
        ((1 << 28) | ((SDL_PIXELTYPE_PACKED32) << 24) | ((SDL_PACKEDORDER_ARGB) << 20) | ((SDL_PACKEDLAYOUT_2101010) << 16) | ((32) << 8) | ((4) << 0))
                                                               ,
# 271 "/usr/include/SDL2/SDL_pixels.h"
    SDL_PIXELFORMAT_RGBA32 = SDL_PIXELFORMAT_ABGR8888,
    SDL_PIXELFORMAT_ARGB32 = SDL_PIXELFORMAT_BGRA8888,
    SDL_PIXELFORMAT_BGRA32 = SDL_PIXELFORMAT_ARGB8888,
    SDL_PIXELFORMAT_ABGR32 = SDL_PIXELFORMAT_RGBA8888,


    SDL_PIXELFORMAT_YV12 =
        ((((Uint32)(((Uint8)(('Y'))))) << 0) | (((Uint32)(((Uint8)(('V'))))) << 8) | (((Uint32)(((Uint8)(('1'))))) << 16) | (((Uint32)(((Uint8)(('2'))))) << 24)),
    SDL_PIXELFORMAT_IYUV =
        ((((Uint32)(((Uint8)(('I'))))) << 0) | (((Uint32)(((Uint8)(('Y'))))) << 8) | (((Uint32)(((Uint8)(('U'))))) << 16) | (((Uint32)(((Uint8)(('V'))))) << 24)),
    SDL_PIXELFORMAT_YUY2 =
        ((((Uint32)(((Uint8)(('Y'))))) << 0) | (((Uint32)(((Uint8)(('U'))))) << 8) | (((Uint32)(((Uint8)(('Y'))))) << 16) | (((Uint32)(((Uint8)(('2'))))) << 24)),
    SDL_PIXELFORMAT_UYVY =
        ((((Uint32)(((Uint8)(('U'))))) << 0) | (((Uint32)(((Uint8)(('Y'))))) << 8) | (((Uint32)(((Uint8)(('V'))))) << 16) | (((Uint32)(((Uint8)(('Y'))))) << 24)),
    SDL_PIXELFORMAT_YVYU =
        ((((Uint32)(((Uint8)(('Y'))))) << 0) | (((Uint32)(((Uint8)(('V'))))) << 8) | (((Uint32)(((Uint8)(('Y'))))) << 16) | (((Uint32)(((Uint8)(('U'))))) << 24)),
    SDL_PIXELFORMAT_NV12 =
        ((((Uint32)(((Uint8)(('N'))))) << 0) | (((Uint32)(((Uint8)(('V'))))) << 8) | (((Uint32)(((Uint8)(('1'))))) << 16) | (((Uint32)(((Uint8)(('2'))))) << 24)),
    SDL_PIXELFORMAT_NV21 =
        ((((Uint32)(((Uint8)(('N'))))) << 0) | (((Uint32)(((Uint8)(('V'))))) << 8) | (((Uint32)(((Uint8)(('2'))))) << 16) | (((Uint32)(((Uint8)(('1'))))) << 24))
};

typedef struct SDL_Color
{
    Uint8 r;
    Uint8 g;
    Uint8 b;
    Uint8 a;
} SDL_Color;


typedef struct SDL_Palette
{
    int ncolors;
    SDL_Color *colors;
    Uint32 version;
    int refcount;
} SDL_Palette;




typedef struct SDL_PixelFormat
{
    Uint32 format;
    SDL_Palette *palette;
    Uint8 BitsPerPixel;
    Uint8 BytesPerPixel;
    Uint8 padding[2];
    Uint32 Rmask;
    Uint32 Gmask;
    Uint32 Bmask;
    Uint32 Amask;
    Uint8 Rloss;
    Uint8 Gloss;
    Uint8 Bloss;
    Uint8 Aloss;
    Uint8 Rshift;
    Uint8 Gshift;
    Uint8 Bshift;
    Uint8 Ashift;
    int refcount;
    struct SDL_PixelFormat *next;
} SDL_PixelFormat;




extern __attribute__ ((visibility("default"))) const char* SDL_GetPixelFormatName(Uint32 format);
# 348 "/usr/include/SDL2/SDL_pixels.h"
extern __attribute__ ((visibility("default"))) SDL_bool SDL_PixelFormatEnumToMasks(Uint32 format,
                                                            int *bpp,
                                                            Uint32 * Rmask,
                                                            Uint32 * Gmask,
                                                            Uint32 * Bmask,
                                                            Uint32 * Amask);
# 363 "/usr/include/SDL2/SDL_pixels.h"
extern __attribute__ ((visibility("default"))) Uint32 SDL_MasksToPixelFormatEnum(int bpp,
                                                          Uint32 Rmask,
                                                          Uint32 Gmask,
                                                          Uint32 Bmask,
                                                          Uint32 Amask);




extern __attribute__ ((visibility("default"))) SDL_PixelFormat * SDL_AllocFormat(Uint32 pixel_format);




extern __attribute__ ((visibility("default"))) void SDL_FreeFormat(SDL_PixelFormat *format);
# 389 "/usr/include/SDL2/SDL_pixels.h"
extern __attribute__ ((visibility("default"))) SDL_Palette * SDL_AllocPalette(int ncolors);




extern __attribute__ ((visibility("default"))) int SDL_SetPixelFormatPalette(SDL_PixelFormat * format,
                                                      SDL_Palette *palette);
# 407 "/usr/include/SDL2/SDL_pixels.h"
extern __attribute__ ((visibility("default"))) int SDL_SetPaletteColors(SDL_Palette * palette,
                                                 const SDL_Color * colors,
                                                 int firstcolor, int ncolors);






extern __attribute__ ((visibility("default"))) void SDL_FreePalette(SDL_Palette * palette);






extern __attribute__ ((visibility("default"))) Uint32 SDL_MapRGB(const SDL_PixelFormat * format,
                                          Uint8 r, Uint8 g, Uint8 b);






extern __attribute__ ((visibility("default"))) Uint32 SDL_MapRGBA(const SDL_PixelFormat * format,
                                           Uint8 r, Uint8 g, Uint8 b,
                                           Uint8 a);






extern __attribute__ ((visibility("default"))) void SDL_GetRGB(Uint32 pixel,
                                        const SDL_PixelFormat * format,
                                        Uint8 * r, Uint8 * g, Uint8 * b);






extern __attribute__ ((visibility("default"))) void SDL_GetRGBA(Uint32 pixel,
                                         const SDL_PixelFormat * format,
                                         Uint8 * r, Uint8 * g, Uint8 * b,
                                         Uint8 * a);




extern __attribute__ ((visibility("default"))) void SDL_CalculateGammaRamp(float gamma, Uint16 * ramp);






# 1 "/usr/include/SDL2/close_code.h" 1
# 465 "/usr/include/SDL2/SDL_pixels.h" 2
# 33 "/usr/include/SDL2/SDL_video.h" 2
# 1 "/usr/include/SDL2/SDL_rect.h" 1
# 36 "/usr/include/SDL2/SDL_rect.h"
# 1 "/usr/include/SDL2/begin_code.h" 1
# 37 "/usr/include/SDL2/SDL_rect.h" 2
# 48 "/usr/include/SDL2/SDL_rect.h"
typedef struct SDL_Point
{
    int x;
    int y;
} SDL_Point;
# 64 "/usr/include/SDL2/SDL_rect.h"
typedef struct SDL_Rect
{
    int x, y;
    int w, h;
} SDL_Rect;




__attribute__((always_inline)) static __inline__ SDL_bool SDL_PointInRect(const SDL_Point *p, const SDL_Rect *r)
{
    return ( (p->x >= r->x) && (p->x < (r->x + r->w)) &&
             (p->y >= r->y) && (p->y < (r->y + r->h)) ) ? SDL_TRUE : SDL_FALSE;
}




__attribute__((always_inline)) static __inline__ SDL_bool SDL_RectEmpty(const SDL_Rect *r)
{
    return ((!r) || (r->w <= 0) || (r->h <= 0)) ? SDL_TRUE : SDL_FALSE;
}




__attribute__((always_inline)) static __inline__ SDL_bool SDL_RectEquals(const SDL_Rect *a, const SDL_Rect *b)
{
    return (a && b && (a->x == b->x) && (a->y == b->y) &&
            (a->w == b->w) && (a->h == b->h)) ? SDL_TRUE : SDL_FALSE;
}






extern __attribute__ ((visibility("default"))) SDL_bool SDL_HasIntersection(const SDL_Rect * A,
                                                     const SDL_Rect * B);






extern __attribute__ ((visibility("default"))) SDL_bool SDL_IntersectRect(const SDL_Rect * A,
                                                   const SDL_Rect * B,
                                                   SDL_Rect * result);




extern __attribute__ ((visibility("default"))) void SDL_UnionRect(const SDL_Rect * A,
                                           const SDL_Rect * B,
                                           SDL_Rect * result);






extern __attribute__ ((visibility("default"))) SDL_bool SDL_EnclosePoints(const SDL_Point * points,
                                                   int count,
                                                   const SDL_Rect * clip,
                                                   SDL_Rect * result);






extern __attribute__ ((visibility("default"))) SDL_bool SDL_IntersectRectAndLine(const SDL_Rect *
                                                          rect, int *X1,
                                                          int *Y1, int *X2,
                                                          int *Y2);





# 1 "/usr/include/SDL2/close_code.h" 1
# 145 "/usr/include/SDL2/SDL_rect.h" 2
# 34 "/usr/include/SDL2/SDL_video.h" 2
# 1 "/usr/include/SDL2/SDL_surface.h" 1
# 34 "/usr/include/SDL2/SDL_surface.h"
# 1 "/usr/include/SDL2/SDL_blendmode.h" 1
# 31 "/usr/include/SDL2/SDL_blendmode.h"
# 1 "/usr/include/SDL2/begin_code.h" 1
# 32 "/usr/include/SDL2/SDL_blendmode.h" 2
# 40 "/usr/include/SDL2/SDL_blendmode.h"
typedef enum
{
    SDL_BLENDMODE_NONE = 0x00000000,

    SDL_BLENDMODE_BLEND = 0x00000001,


    SDL_BLENDMODE_ADD = 0x00000002,


    SDL_BLENDMODE_MOD = 0x00000004


} SDL_BlendMode;





# 1 "/usr/include/SDL2/close_code.h" 1
# 60 "/usr/include/SDL2/SDL_blendmode.h" 2
# 35 "/usr/include/SDL2/SDL_surface.h" 2


# 1 "/usr/include/SDL2/begin_code.h" 1
# 38 "/usr/include/SDL2/SDL_surface.h" 2
# 69 "/usr/include/SDL2/SDL_surface.h"
typedef struct SDL_Surface
{
    Uint32 flags;
    SDL_PixelFormat *format;
    int w, h;
    int pitch;
    void *pixels;


    void *userdata;


    int locked;
    void *lock_data;


    SDL_Rect clip_rect;


    struct SDL_BlitMap *map;


    int refcount;
} SDL_Surface;




typedef int (*SDL_blit) (struct SDL_Surface * src, SDL_Rect * srcrect,
                         struct SDL_Surface * dst, SDL_Rect * dstrect);
# 118 "/usr/include/SDL2/SDL_surface.h"
extern __attribute__ ((visibility("default"))) SDL_Surface * SDL_CreateRGBSurface
    (Uint32 flags, int width, int height, int depth,
     Uint32 Rmask, Uint32 Gmask, Uint32 Bmask, Uint32 Amask);
extern __attribute__ ((visibility("default"))) SDL_Surface * SDL_CreateRGBSurfaceWithFormat
    (Uint32 flags, int width, int height, int depth, Uint32 format);
extern __attribute__ ((visibility("default"))) SDL_Surface * SDL_CreateRGBSurfaceFrom(void *pixels,
                                                              int width,
                                                              int height,
                                                              int depth,
                                                              int pitch,
                                                              Uint32 Rmask,
                                                              Uint32 Gmask,
                                                              Uint32 Bmask,
                                                              Uint32 Amask);
extern __attribute__ ((visibility("default"))) SDL_Surface * SDL_CreateRGBSurfaceWithFormatFrom
    (void *pixels, int width, int height, int depth, int pitch, Uint32 format);
extern __attribute__ ((visibility("default"))) void SDL_FreeSurface(SDL_Surface * surface);
# 143 "/usr/include/SDL2/SDL_surface.h"
extern __attribute__ ((visibility("default"))) int SDL_SetSurfacePalette(SDL_Surface * surface,
                                                  SDL_Palette * palette);
# 165 "/usr/include/SDL2/SDL_surface.h"
extern __attribute__ ((visibility("default"))) int SDL_LockSurface(SDL_Surface * surface);

extern __attribute__ ((visibility("default"))) void SDL_UnlockSurface(SDL_Surface * surface);
# 178 "/usr/include/SDL2/SDL_surface.h"
extern __attribute__ ((visibility("default"))) SDL_Surface * SDL_LoadBMP_RW(SDL_RWops * src,
                                                    int freesrc);
# 201 "/usr/include/SDL2/SDL_surface.h"
extern __attribute__ ((visibility("default"))) int SDL_SaveBMP_RW
    (SDL_Surface * surface, SDL_RWops * dst, int freedst);
# 220 "/usr/include/SDL2/SDL_surface.h"
extern __attribute__ ((visibility("default"))) int SDL_SetSurfaceRLE(SDL_Surface * surface,
                                              int flag);
# 234 "/usr/include/SDL2/SDL_surface.h"
extern __attribute__ ((visibility("default"))) int SDL_SetColorKey(SDL_Surface * surface,
                                            int flag, Uint32 key);
# 247 "/usr/include/SDL2/SDL_surface.h"
extern __attribute__ ((visibility("default"))) int SDL_GetColorKey(SDL_Surface * surface,
                                            Uint32 * key);
# 262 "/usr/include/SDL2/SDL_surface.h"
extern __attribute__ ((visibility("default"))) int SDL_SetSurfaceColorMod(SDL_Surface * surface,
                                                   Uint8 r, Uint8 g, Uint8 b);
# 278 "/usr/include/SDL2/SDL_surface.h"
extern __attribute__ ((visibility("default"))) int SDL_GetSurfaceColorMod(SDL_Surface * surface,
                                                   Uint8 * r, Uint8 * g,
                                                   Uint8 * b);
# 292 "/usr/include/SDL2/SDL_surface.h"
extern __attribute__ ((visibility("default"))) int SDL_SetSurfaceAlphaMod(SDL_Surface * surface,
                                                   Uint8 alpha);
# 305 "/usr/include/SDL2/SDL_surface.h"
extern __attribute__ ((visibility("default"))) int SDL_GetSurfaceAlphaMod(SDL_Surface * surface,
                                                   Uint8 * alpha);
# 318 "/usr/include/SDL2/SDL_surface.h"
extern __attribute__ ((visibility("default"))) int SDL_SetSurfaceBlendMode(SDL_Surface * surface,
                                                    SDL_BlendMode blendMode);
# 331 "/usr/include/SDL2/SDL_surface.h"
extern __attribute__ ((visibility("default"))) int SDL_GetSurfaceBlendMode(SDL_Surface * surface,
                                                    SDL_BlendMode *blendMode);
# 347 "/usr/include/SDL2/SDL_surface.h"
extern __attribute__ ((visibility("default"))) SDL_bool SDL_SetClipRect(SDL_Surface * surface,
                                                 const SDL_Rect * rect);







extern __attribute__ ((visibility("default"))) void SDL_GetClipRect(SDL_Surface * surface,
                                             SDL_Rect * rect);
# 369 "/usr/include/SDL2/SDL_surface.h"
extern __attribute__ ((visibility("default"))) SDL_Surface * SDL_ConvertSurface
    (SDL_Surface * src, const SDL_PixelFormat * fmt, Uint32 flags);
extern __attribute__ ((visibility("default"))) SDL_Surface * SDL_ConvertSurfaceFormat
    (SDL_Surface * src, Uint32 pixel_format, Uint32 flags);






extern __attribute__ ((visibility("default"))) int SDL_ConvertPixels(int width, int height,
                                              Uint32 src_format,
                                              const void * src, int src_pitch,
                                              Uint32 dst_format,
                                              void * dst, int dst_pitch);
# 395 "/usr/include/SDL2/SDL_surface.h"
extern __attribute__ ((visibility("default"))) int SDL_FillRect
    (SDL_Surface * dst, const SDL_Rect * rect, Uint32 color);
extern __attribute__ ((visibility("default"))) int SDL_FillRects
    (SDL_Surface * dst, const SDL_Rect * rects, int count, Uint32 color);
# 463 "/usr/include/SDL2/SDL_surface.h"
extern __attribute__ ((visibility("default"))) int SDL_UpperBlit
    (SDL_Surface * src, const SDL_Rect * srcrect,
     SDL_Surface * dst, SDL_Rect * dstrect);





extern __attribute__ ((visibility("default"))) int SDL_LowerBlit
    (SDL_Surface * src, SDL_Rect * srcrect,
     SDL_Surface * dst, SDL_Rect * dstrect);







extern __attribute__ ((visibility("default"))) int SDL_SoftStretch(SDL_Surface * src,
                                            const SDL_Rect * srcrect,
                                            SDL_Surface * dst,
                                            const SDL_Rect * dstrect);







extern __attribute__ ((visibility("default"))) int SDL_UpperBlitScaled
    (SDL_Surface * src, const SDL_Rect * srcrect,
    SDL_Surface * dst, SDL_Rect * dstrect);





extern __attribute__ ((visibility("default"))) int SDL_LowerBlitScaled
    (SDL_Surface * src, SDL_Rect * srcrect,
    SDL_Surface * dst, SDL_Rect * dstrect);






# 1 "/usr/include/SDL2/close_code.h" 1
# 510 "/usr/include/SDL2/SDL_surface.h" 2
# 35 "/usr/include/SDL2/SDL_video.h" 2

# 1 "/usr/include/SDL2/begin_code.h" 1
# 37 "/usr/include/SDL2/SDL_video.h" 2
# 53 "/usr/include/SDL2/SDL_video.h"
typedef struct
{
    Uint32 format;
    int w;
    int h;
    int refresh_rate;
    void *driverdata;
} SDL_DisplayMode;
# 90 "/usr/include/SDL2/SDL_video.h"
typedef struct SDL_Window SDL_Window;






typedef enum
{

    SDL_WINDOW_FULLSCREEN = 0x00000001,
    SDL_WINDOW_OPENGL = 0x00000002,
    SDL_WINDOW_SHOWN = 0x00000004,
    SDL_WINDOW_HIDDEN = 0x00000008,
    SDL_WINDOW_BORDERLESS = 0x00000010,
    SDL_WINDOW_RESIZABLE = 0x00000020,
    SDL_WINDOW_MINIMIZED = 0x00000040,
    SDL_WINDOW_MAXIMIZED = 0x00000080,
    SDL_WINDOW_INPUT_GRABBED = 0x00000100,
    SDL_WINDOW_INPUT_FOCUS = 0x00000200,
    SDL_WINDOW_MOUSE_FOCUS = 0x00000400,
    SDL_WINDOW_FULLSCREEN_DESKTOP = ( SDL_WINDOW_FULLSCREEN | 0x00001000 ),
    SDL_WINDOW_FOREIGN = 0x00000800,
    SDL_WINDOW_ALLOW_HIGHDPI = 0x00002000,
    SDL_WINDOW_MOUSE_CAPTURE = 0x00004000,
    SDL_WINDOW_ALWAYS_ON_TOP = 0x00008000,
    SDL_WINDOW_SKIP_TASKBAR = 0x00010000,
    SDL_WINDOW_UTILITY = 0x00020000,
    SDL_WINDOW_TOOLTIP = 0x00040000,
    SDL_WINDOW_POPUP_MENU = 0x00080000
} SDL_WindowFlags;
# 143 "/usr/include/SDL2/SDL_video.h"
typedef enum
{
    SDL_WINDOWEVENT_NONE,
    SDL_WINDOWEVENT_SHOWN,
    SDL_WINDOWEVENT_HIDDEN,
    SDL_WINDOWEVENT_EXPOSED,

    SDL_WINDOWEVENT_MOVED,

    SDL_WINDOWEVENT_RESIZED,
    SDL_WINDOWEVENT_SIZE_CHANGED,


    SDL_WINDOWEVENT_MINIMIZED,
    SDL_WINDOWEVENT_MAXIMIZED,
    SDL_WINDOWEVENT_RESTORED,

    SDL_WINDOWEVENT_ENTER,
    SDL_WINDOWEVENT_LEAVE,
    SDL_WINDOWEVENT_FOCUS_GAINED,
    SDL_WINDOWEVENT_FOCUS_LOST,
    SDL_WINDOWEVENT_CLOSE,
    SDL_WINDOWEVENT_TAKE_FOCUS,
    SDL_WINDOWEVENT_HIT_TEST
} SDL_WindowEventID;




typedef void *SDL_GLContext;




typedef enum
{
    SDL_GL_RED_SIZE,
    SDL_GL_GREEN_SIZE,
    SDL_GL_BLUE_SIZE,
    SDL_GL_ALPHA_SIZE,
    SDL_GL_BUFFER_SIZE,
    SDL_GL_DOUBLEBUFFER,
    SDL_GL_DEPTH_SIZE,
    SDL_GL_STENCIL_SIZE,
    SDL_GL_ACCUM_RED_SIZE,
    SDL_GL_ACCUM_GREEN_SIZE,
    SDL_GL_ACCUM_BLUE_SIZE,
    SDL_GL_ACCUM_ALPHA_SIZE,
    SDL_GL_STEREO,
    SDL_GL_MULTISAMPLEBUFFERS,
    SDL_GL_MULTISAMPLESAMPLES,
    SDL_GL_ACCELERATED_VISUAL,
    SDL_GL_RETAINED_BACKING,
    SDL_GL_CONTEXT_MAJOR_VERSION,
    SDL_GL_CONTEXT_MINOR_VERSION,
    SDL_GL_CONTEXT_EGL,
    SDL_GL_CONTEXT_FLAGS,
    SDL_GL_CONTEXT_PROFILE_MASK,
    SDL_GL_SHARE_WITH_CURRENT_CONTEXT,
    SDL_GL_FRAMEBUFFER_SRGB_CAPABLE,
    SDL_GL_CONTEXT_RELEASE_BEHAVIOR
} SDL_GLattr;

typedef enum
{
    SDL_GL_CONTEXT_PROFILE_CORE = 0x0001,
    SDL_GL_CONTEXT_PROFILE_COMPATIBILITY = 0x0002,
    SDL_GL_CONTEXT_PROFILE_ES = 0x0004
} SDL_GLprofile;

typedef enum
{
    SDL_GL_CONTEXT_DEBUG_FLAG = 0x0001,
    SDL_GL_CONTEXT_FORWARD_COMPATIBLE_FLAG = 0x0002,
    SDL_GL_CONTEXT_ROBUST_ACCESS_FLAG = 0x0004,
    SDL_GL_CONTEXT_RESET_ISOLATION_FLAG = 0x0008
} SDL_GLcontextFlag;

typedef enum
{
    SDL_GL_CONTEXT_RELEASE_BEHAVIOR_NONE = 0x0000,
    SDL_GL_CONTEXT_RELEASE_BEHAVIOR_FLUSH = 0x0001
} SDL_GLcontextReleaseFlag;
# 235 "/usr/include/SDL2/SDL_video.h"
extern __attribute__ ((visibility("default"))) int SDL_GetNumVideoDrivers(void);
# 245 "/usr/include/SDL2/SDL_video.h"
extern __attribute__ ((visibility("default"))) const char * SDL_GetVideoDriver(int index);
# 261 "/usr/include/SDL2/SDL_video.h"
extern __attribute__ ((visibility("default"))) int SDL_VideoInit(const char *driver_name);
# 270 "/usr/include/SDL2/SDL_video.h"
extern __attribute__ ((visibility("default"))) void SDL_VideoQuit(void);
# 281 "/usr/include/SDL2/SDL_video.h"
extern __attribute__ ((visibility("default"))) const char * SDL_GetCurrentVideoDriver(void);






extern __attribute__ ((visibility("default"))) int SDL_GetNumVideoDisplays(void);
# 297 "/usr/include/SDL2/SDL_video.h"
extern __attribute__ ((visibility("default"))) const char * SDL_GetDisplayName(int displayIndex);
# 307 "/usr/include/SDL2/SDL_video.h"
extern __attribute__ ((visibility("default"))) int SDL_GetDisplayBounds(int displayIndex, SDL_Rect * rect);
# 319 "/usr/include/SDL2/SDL_video.h"
extern __attribute__ ((visibility("default"))) int SDL_GetDisplayDPI(int displayIndex, float * ddpi, float * hdpi, float * vdpi);
# 338 "/usr/include/SDL2/SDL_video.h"
extern __attribute__ ((visibility("default"))) int SDL_GetDisplayUsableBounds(int displayIndex, SDL_Rect * rect);






extern __attribute__ ((visibility("default"))) int SDL_GetNumDisplayModes(int displayIndex);
# 358 "/usr/include/SDL2/SDL_video.h"
extern __attribute__ ((visibility("default"))) int SDL_GetDisplayMode(int displayIndex, int modeIndex,
                                               SDL_DisplayMode * mode);




extern __attribute__ ((visibility("default"))) int SDL_GetDesktopDisplayMode(int displayIndex, SDL_DisplayMode * mode);




extern __attribute__ ((visibility("default"))) int SDL_GetCurrentDisplayMode(int displayIndex, SDL_DisplayMode * mode);
# 393 "/usr/include/SDL2/SDL_video.h"
extern __attribute__ ((visibility("default"))) SDL_DisplayMode * SDL_GetClosestDisplayMode(int displayIndex, const SDL_DisplayMode * mode, SDL_DisplayMode * closest);







extern __attribute__ ((visibility("default"))) int SDL_GetWindowDisplayIndex(SDL_Window * window);
# 417 "/usr/include/SDL2/SDL_video.h"
extern __attribute__ ((visibility("default"))) int SDL_SetWindowDisplayMode(SDL_Window * window,
                                                     const SDL_DisplayMode
                                                         * mode);
# 428 "/usr/include/SDL2/SDL_video.h"
extern __attribute__ ((visibility("default"))) int SDL_GetWindowDisplayMode(SDL_Window * window,
                                                     SDL_DisplayMode * mode);




extern __attribute__ ((visibility("default"))) Uint32 SDL_GetWindowPixelFormat(SDL_Window * window);
# 463 "/usr/include/SDL2/SDL_video.h"
extern __attribute__ ((visibility("default"))) SDL_Window * SDL_CreateWindow(const char *title,
                                                      int x, int y, int w,
                                                      int h, Uint32 flags);
# 476 "/usr/include/SDL2/SDL_video.h"
extern __attribute__ ((visibility("default"))) SDL_Window * SDL_CreateWindowFrom(const void *data);




extern __attribute__ ((visibility("default"))) Uint32 SDL_GetWindowID(SDL_Window * window);




extern __attribute__ ((visibility("default"))) SDL_Window * SDL_GetWindowFromID(Uint32 id);




extern __attribute__ ((visibility("default"))) Uint32 SDL_GetWindowFlags(SDL_Window * window);






extern __attribute__ ((visibility("default"))) void SDL_SetWindowTitle(SDL_Window * window,
                                                const char *title);






extern __attribute__ ((visibility("default"))) const char * SDL_GetWindowTitle(SDL_Window * window);







extern __attribute__ ((visibility("default"))) void SDL_SetWindowIcon(SDL_Window * window,
                                               SDL_Surface * icon);
# 530 "/usr/include/SDL2/SDL_video.h"
extern __attribute__ ((visibility("default"))) void* SDL_SetWindowData(SDL_Window * window,
                                                const char *name,
                                                void *userdata);
# 544 "/usr/include/SDL2/SDL_video.h"
extern __attribute__ ((visibility("default"))) void * SDL_GetWindowData(SDL_Window * window,
                                                const char *name);
# 560 "/usr/include/SDL2/SDL_video.h"
extern __attribute__ ((visibility("default"))) void SDL_SetWindowPosition(SDL_Window * window,
                                                   int x, int y);
# 574 "/usr/include/SDL2/SDL_video.h"
extern __attribute__ ((visibility("default"))) void SDL_GetWindowPosition(SDL_Window * window,
                                                   int *x, int *y);
# 594 "/usr/include/SDL2/SDL_video.h"
extern __attribute__ ((visibility("default"))) void SDL_SetWindowSize(SDL_Window * window, int w,
                                               int h);
# 613 "/usr/include/SDL2/SDL_video.h"
extern __attribute__ ((visibility("default"))) void SDL_GetWindowSize(SDL_Window * window, int *w,
                                               int *h);
# 631 "/usr/include/SDL2/SDL_video.h"
extern __attribute__ ((visibility("default"))) int SDL_GetWindowBordersSize(SDL_Window * window,
                                                     int *top, int *left,
                                                     int *bottom, int *right);
# 648 "/usr/include/SDL2/SDL_video.h"
extern __attribute__ ((visibility("default"))) void SDL_SetWindowMinimumSize(SDL_Window * window,
                                                      int min_w, int min_h);
# 661 "/usr/include/SDL2/SDL_video.h"
extern __attribute__ ((visibility("default"))) void SDL_GetWindowMinimumSize(SDL_Window * window,
                                                      int *w, int *h);
# 677 "/usr/include/SDL2/SDL_video.h"
extern __attribute__ ((visibility("default"))) void SDL_SetWindowMaximumSize(SDL_Window * window,
                                                      int max_w, int max_h);
# 690 "/usr/include/SDL2/SDL_video.h"
extern __attribute__ ((visibility("default"))) void SDL_GetWindowMaximumSize(SDL_Window * window,
                                                      int *w, int *h);
# 707 "/usr/include/SDL2/SDL_video.h"
extern __attribute__ ((visibility("default"))) void SDL_SetWindowBordered(SDL_Window * window,
                                                   SDL_bool bordered);
# 724 "/usr/include/SDL2/SDL_video.h"
extern __attribute__ ((visibility("default"))) void SDL_SetWindowResizable(SDL_Window * window,
                                                    SDL_bool resizable);






extern __attribute__ ((visibility("default"))) void SDL_ShowWindow(SDL_Window * window);






extern __attribute__ ((visibility("default"))) void SDL_HideWindow(SDL_Window * window);




extern __attribute__ ((visibility("default"))) void SDL_RaiseWindow(SDL_Window * window);






extern __attribute__ ((visibility("default"))) void SDL_MaximizeWindow(SDL_Window * window);






extern __attribute__ ((visibility("default"))) void SDL_MinimizeWindow(SDL_Window * window);







extern __attribute__ ((visibility("default"))) void SDL_RestoreWindow(SDL_Window * window);
# 776 "/usr/include/SDL2/SDL_video.h"
extern __attribute__ ((visibility("default"))) int SDL_SetWindowFullscreen(SDL_Window * window,
                                                    Uint32 flags);
# 792 "/usr/include/SDL2/SDL_video.h"
extern __attribute__ ((visibility("default"))) SDL_Surface * SDL_GetWindowSurface(SDL_Window * window);
# 802 "/usr/include/SDL2/SDL_video.h"
extern __attribute__ ((visibility("default"))) int SDL_UpdateWindowSurface(SDL_Window * window);
# 812 "/usr/include/SDL2/SDL_video.h"
extern __attribute__ ((visibility("default"))) int SDL_UpdateWindowSurfaceRects(SDL_Window * window,
                                                         const SDL_Rect * rects,
                                                         int numrects);
# 827 "/usr/include/SDL2/SDL_video.h"
extern __attribute__ ((visibility("default"))) void SDL_SetWindowGrab(SDL_Window * window,
                                               SDL_bool grabbed);
# 837 "/usr/include/SDL2/SDL_video.h"
extern __attribute__ ((visibility("default"))) SDL_bool SDL_GetWindowGrab(SDL_Window * window);
# 846 "/usr/include/SDL2/SDL_video.h"
extern __attribute__ ((visibility("default"))) SDL_Window * SDL_GetGrabbedWindow(void);
# 856 "/usr/include/SDL2/SDL_video.h"
extern __attribute__ ((visibility("default"))) int SDL_SetWindowBrightness(SDL_Window * window, float brightness);
# 865 "/usr/include/SDL2/SDL_video.h"
extern __attribute__ ((visibility("default"))) float SDL_GetWindowBrightness(SDL_Window * window);
# 878 "/usr/include/SDL2/SDL_video.h"
extern __attribute__ ((visibility("default"))) int SDL_SetWindowOpacity(SDL_Window * window, float opacity);
# 893 "/usr/include/SDL2/SDL_video.h"
extern __attribute__ ((visibility("default"))) int SDL_GetWindowOpacity(SDL_Window * window, float * out_opacity);
# 903 "/usr/include/SDL2/SDL_video.h"
extern __attribute__ ((visibility("default"))) int SDL_SetWindowModalFor(SDL_Window * modal_window, SDL_Window * parent_window);
# 917 "/usr/include/SDL2/SDL_video.h"
extern __attribute__ ((visibility("default"))) int SDL_SetWindowInputFocus(SDL_Window * window);
# 937 "/usr/include/SDL2/SDL_video.h"
extern __attribute__ ((visibility("default"))) int SDL_SetWindowGammaRamp(SDL_Window * window,
                                                   const Uint16 * red,
                                                   const Uint16 * green,
                                                   const Uint16 * blue);
# 957 "/usr/include/SDL2/SDL_video.h"
extern __attribute__ ((visibility("default"))) int SDL_GetWindowGammaRamp(SDL_Window * window,
                                                   Uint16 * red,
                                                   Uint16 * green,
                                                   Uint16 * blue);






typedef enum
{
    SDL_HITTEST_NORMAL,
    SDL_HITTEST_DRAGGABLE,
    SDL_HITTEST_RESIZE_TOPLEFT,
    SDL_HITTEST_RESIZE_TOP,
    SDL_HITTEST_RESIZE_TOPRIGHT,
    SDL_HITTEST_RESIZE_RIGHT,
    SDL_HITTEST_RESIZE_BOTTOMRIGHT,
    SDL_HITTEST_RESIZE_BOTTOM,
    SDL_HITTEST_RESIZE_BOTTOMLEFT,
    SDL_HITTEST_RESIZE_LEFT
} SDL_HitTestResult;






typedef SDL_HitTestResult ( *SDL_HitTest)(SDL_Window *win,
                                                 const SDL_Point *area,
                                                 void *data);
# 1027 "/usr/include/SDL2/SDL_video.h"
extern __attribute__ ((visibility("default"))) int SDL_SetWindowHitTest(SDL_Window * window,
                                                 SDL_HitTest callback,
                                                 void *callback_data);




extern __attribute__ ((visibility("default"))) void SDL_DestroyWindow(SDL_Window * window);
# 1043 "/usr/include/SDL2/SDL_video.h"
extern __attribute__ ((visibility("default"))) SDL_bool SDL_IsScreenSaverEnabled(void);







extern __attribute__ ((visibility("default"))) void SDL_EnableScreenSaver(void);







extern __attribute__ ((visibility("default"))) void SDL_DisableScreenSaver(void);
# 1085 "/usr/include/SDL2/SDL_video.h"
extern __attribute__ ((visibility("default"))) int SDL_GL_LoadLibrary(const char *path);




extern __attribute__ ((visibility("default"))) void * SDL_GL_GetProcAddress(const char *proc);






extern __attribute__ ((visibility("default"))) void SDL_GL_UnloadLibrary(void);





extern __attribute__ ((visibility("default"))) SDL_bool SDL_GL_ExtensionSupported(const char
                                                           *extension);




extern __attribute__ ((visibility("default"))) void SDL_GL_ResetAttributes(void);




extern __attribute__ ((visibility("default"))) int SDL_GL_SetAttribute(SDL_GLattr attr, int value);




extern __attribute__ ((visibility("default"))) int SDL_GL_GetAttribute(SDL_GLattr attr, int *value);







extern __attribute__ ((visibility("default"))) SDL_GLContext SDL_GL_CreateContext(SDL_Window *
                                                           window);






extern __attribute__ ((visibility("default"))) int SDL_GL_MakeCurrent(SDL_Window * window,
                                               SDL_GLContext context);




extern __attribute__ ((visibility("default"))) SDL_Window* SDL_GL_GetCurrentWindow(void);




extern __attribute__ ((visibility("default"))) SDL_GLContext SDL_GL_GetCurrentContext(void);
# 1164 "/usr/include/SDL2/SDL_video.h"
extern __attribute__ ((visibility("default"))) void SDL_GL_GetDrawableSize(SDL_Window * window, int *w,
                                                    int *h);
# 1179 "/usr/include/SDL2/SDL_video.h"
extern __attribute__ ((visibility("default"))) int SDL_GL_SetSwapInterval(int interval);
# 1192 "/usr/include/SDL2/SDL_video.h"
extern __attribute__ ((visibility("default"))) int SDL_GL_GetSwapInterval(void);





extern __attribute__ ((visibility("default"))) void SDL_GL_SwapWindow(SDL_Window * window);






extern __attribute__ ((visibility("default"))) void SDL_GL_DeleteContext(SDL_GLContext context);
# 1214 "/usr/include/SDL2/SDL_video.h"
# 1 "/usr/include/SDL2/close_code.h" 1
# 1215 "/usr/include/SDL2/SDL_video.h" 2
# 34 "/usr/include/SDL2/SDL_events.h" 2
# 1 "/usr/include/SDL2/SDL_keyboard.h" 1
# 33 "/usr/include/SDL2/SDL_keyboard.h"
# 1 "/usr/include/SDL2/SDL_keycode.h" 1
# 32 "/usr/include/SDL2/SDL_keycode.h"
# 1 "/usr/include/SDL2/SDL_scancode.h" 1
# 43 "/usr/include/SDL2/SDL_scancode.h"
typedef enum
{
    SDL_SCANCODE_UNKNOWN = 0,
# 54 "/usr/include/SDL2/SDL_scancode.h"
    SDL_SCANCODE_A = 4,
    SDL_SCANCODE_B = 5,
    SDL_SCANCODE_C = 6,
    SDL_SCANCODE_D = 7,
    SDL_SCANCODE_E = 8,
    SDL_SCANCODE_F = 9,
    SDL_SCANCODE_G = 10,
    SDL_SCANCODE_H = 11,
    SDL_SCANCODE_I = 12,
    SDL_SCANCODE_J = 13,
    SDL_SCANCODE_K = 14,
    SDL_SCANCODE_L = 15,
    SDL_SCANCODE_M = 16,
    SDL_SCANCODE_N = 17,
    SDL_SCANCODE_O = 18,
    SDL_SCANCODE_P = 19,
    SDL_SCANCODE_Q = 20,
    SDL_SCANCODE_R = 21,
    SDL_SCANCODE_S = 22,
    SDL_SCANCODE_T = 23,
    SDL_SCANCODE_U = 24,
    SDL_SCANCODE_V = 25,
    SDL_SCANCODE_W = 26,
    SDL_SCANCODE_X = 27,
    SDL_SCANCODE_Y = 28,
    SDL_SCANCODE_Z = 29,

    SDL_SCANCODE_1 = 30,
    SDL_SCANCODE_2 = 31,
    SDL_SCANCODE_3 = 32,
    SDL_SCANCODE_4 = 33,
    SDL_SCANCODE_5 = 34,
    SDL_SCANCODE_6 = 35,
    SDL_SCANCODE_7 = 36,
    SDL_SCANCODE_8 = 37,
    SDL_SCANCODE_9 = 38,
    SDL_SCANCODE_0 = 39,

    SDL_SCANCODE_RETURN = 40,
    SDL_SCANCODE_ESCAPE = 41,
    SDL_SCANCODE_BACKSPACE = 42,
    SDL_SCANCODE_TAB = 43,
    SDL_SCANCODE_SPACE = 44,

    SDL_SCANCODE_MINUS = 45,
    SDL_SCANCODE_EQUALS = 46,
    SDL_SCANCODE_LEFTBRACKET = 47,
    SDL_SCANCODE_RIGHTBRACKET = 48,
    SDL_SCANCODE_BACKSLASH = 49,
# 116 "/usr/include/SDL2/SDL_scancode.h"
    SDL_SCANCODE_NONUSHASH = 50,
# 128 "/usr/include/SDL2/SDL_scancode.h"
    SDL_SCANCODE_SEMICOLON = 51,
    SDL_SCANCODE_APOSTROPHE = 52,
    SDL_SCANCODE_GRAVE = 53,
# 147 "/usr/include/SDL2/SDL_scancode.h"
    SDL_SCANCODE_COMMA = 54,
    SDL_SCANCODE_PERIOD = 55,
    SDL_SCANCODE_SLASH = 56,

    SDL_SCANCODE_CAPSLOCK = 57,

    SDL_SCANCODE_F1 = 58,
    SDL_SCANCODE_F2 = 59,
    SDL_SCANCODE_F3 = 60,
    SDL_SCANCODE_F4 = 61,
    SDL_SCANCODE_F5 = 62,
    SDL_SCANCODE_F6 = 63,
    SDL_SCANCODE_F7 = 64,
    SDL_SCANCODE_F8 = 65,
    SDL_SCANCODE_F9 = 66,
    SDL_SCANCODE_F10 = 67,
    SDL_SCANCODE_F11 = 68,
    SDL_SCANCODE_F12 = 69,

    SDL_SCANCODE_PRINTSCREEN = 70,
    SDL_SCANCODE_SCROLLLOCK = 71,
    SDL_SCANCODE_PAUSE = 72,
    SDL_SCANCODE_INSERT = 73,

    SDL_SCANCODE_HOME = 74,
    SDL_SCANCODE_PAGEUP = 75,
    SDL_SCANCODE_DELETE = 76,
    SDL_SCANCODE_END = 77,
    SDL_SCANCODE_PAGEDOWN = 78,
    SDL_SCANCODE_RIGHT = 79,
    SDL_SCANCODE_LEFT = 80,
    SDL_SCANCODE_DOWN = 81,
    SDL_SCANCODE_UP = 82,

    SDL_SCANCODE_NUMLOCKCLEAR = 83,

    SDL_SCANCODE_KP_DIVIDE = 84,
    SDL_SCANCODE_KP_MULTIPLY = 85,
    SDL_SCANCODE_KP_MINUS = 86,
    SDL_SCANCODE_KP_PLUS = 87,
    SDL_SCANCODE_KP_ENTER = 88,
    SDL_SCANCODE_KP_1 = 89,
    SDL_SCANCODE_KP_2 = 90,
    SDL_SCANCODE_KP_3 = 91,
    SDL_SCANCODE_KP_4 = 92,
    SDL_SCANCODE_KP_5 = 93,
    SDL_SCANCODE_KP_6 = 94,
    SDL_SCANCODE_KP_7 = 95,
    SDL_SCANCODE_KP_8 = 96,
    SDL_SCANCODE_KP_9 = 97,
    SDL_SCANCODE_KP_0 = 98,
    SDL_SCANCODE_KP_PERIOD = 99,

    SDL_SCANCODE_NONUSBACKSLASH = 100,
# 210 "/usr/include/SDL2/SDL_scancode.h"
    SDL_SCANCODE_APPLICATION = 101,
    SDL_SCANCODE_POWER = 102,


    SDL_SCANCODE_KP_EQUALS = 103,
    SDL_SCANCODE_F13 = 104,
    SDL_SCANCODE_F14 = 105,
    SDL_SCANCODE_F15 = 106,
    SDL_SCANCODE_F16 = 107,
    SDL_SCANCODE_F17 = 108,
    SDL_SCANCODE_F18 = 109,
    SDL_SCANCODE_F19 = 110,
    SDL_SCANCODE_F20 = 111,
    SDL_SCANCODE_F21 = 112,
    SDL_SCANCODE_F22 = 113,
    SDL_SCANCODE_F23 = 114,
    SDL_SCANCODE_F24 = 115,
    SDL_SCANCODE_EXECUTE = 116,
    SDL_SCANCODE_HELP = 117,
    SDL_SCANCODE_MENU = 118,
    SDL_SCANCODE_SELECT = 119,
    SDL_SCANCODE_STOP = 120,
    SDL_SCANCODE_AGAIN = 121,
    SDL_SCANCODE_UNDO = 122,
    SDL_SCANCODE_CUT = 123,
    SDL_SCANCODE_COPY = 124,
    SDL_SCANCODE_PASTE = 125,
    SDL_SCANCODE_FIND = 126,
    SDL_SCANCODE_MUTE = 127,
    SDL_SCANCODE_VOLUMEUP = 128,
    SDL_SCANCODE_VOLUMEDOWN = 129,




    SDL_SCANCODE_KP_COMMA = 133,
    SDL_SCANCODE_KP_EQUALSAS400 = 134,

    SDL_SCANCODE_INTERNATIONAL1 = 135,

    SDL_SCANCODE_INTERNATIONAL2 = 136,
    SDL_SCANCODE_INTERNATIONAL3 = 137,
    SDL_SCANCODE_INTERNATIONAL4 = 138,
    SDL_SCANCODE_INTERNATIONAL5 = 139,
    SDL_SCANCODE_INTERNATIONAL6 = 140,
    SDL_SCANCODE_INTERNATIONAL7 = 141,
    SDL_SCANCODE_INTERNATIONAL8 = 142,
    SDL_SCANCODE_INTERNATIONAL9 = 143,
    SDL_SCANCODE_LANG1 = 144,
    SDL_SCANCODE_LANG2 = 145,
    SDL_SCANCODE_LANG3 = 146,
    SDL_SCANCODE_LANG4 = 147,
    SDL_SCANCODE_LANG5 = 148,
    SDL_SCANCODE_LANG6 = 149,
    SDL_SCANCODE_LANG7 = 150,
    SDL_SCANCODE_LANG8 = 151,
    SDL_SCANCODE_LANG9 = 152,

    SDL_SCANCODE_ALTERASE = 153,
    SDL_SCANCODE_SYSREQ = 154,
    SDL_SCANCODE_CANCEL = 155,
    SDL_SCANCODE_CLEAR = 156,
    SDL_SCANCODE_PRIOR = 157,
    SDL_SCANCODE_RETURN2 = 158,
    SDL_SCANCODE_SEPARATOR = 159,
    SDL_SCANCODE_OUT = 160,
    SDL_SCANCODE_OPER = 161,
    SDL_SCANCODE_CLEARAGAIN = 162,
    SDL_SCANCODE_CRSEL = 163,
    SDL_SCANCODE_EXSEL = 164,

    SDL_SCANCODE_KP_00 = 176,
    SDL_SCANCODE_KP_000 = 177,
    SDL_SCANCODE_THOUSANDSSEPARATOR = 178,
    SDL_SCANCODE_DECIMALSEPARATOR = 179,
    SDL_SCANCODE_CURRENCYUNIT = 180,
    SDL_SCANCODE_CURRENCYSUBUNIT = 181,
    SDL_SCANCODE_KP_LEFTPAREN = 182,
    SDL_SCANCODE_KP_RIGHTPAREN = 183,
    SDL_SCANCODE_KP_LEFTBRACE = 184,
    SDL_SCANCODE_KP_RIGHTBRACE = 185,
    SDL_SCANCODE_KP_TAB = 186,
    SDL_SCANCODE_KP_BACKSPACE = 187,
    SDL_SCANCODE_KP_A = 188,
    SDL_SCANCODE_KP_B = 189,
    SDL_SCANCODE_KP_C = 190,
    SDL_SCANCODE_KP_D = 191,
    SDL_SCANCODE_KP_E = 192,
    SDL_SCANCODE_KP_F = 193,
    SDL_SCANCODE_KP_XOR = 194,
    SDL_SCANCODE_KP_POWER = 195,
    SDL_SCANCODE_KP_PERCENT = 196,
    SDL_SCANCODE_KP_LESS = 197,
    SDL_SCANCODE_KP_GREATER = 198,
    SDL_SCANCODE_KP_AMPERSAND = 199,
    SDL_SCANCODE_KP_DBLAMPERSAND = 200,
    SDL_SCANCODE_KP_VERTICALBAR = 201,
    SDL_SCANCODE_KP_DBLVERTICALBAR = 202,
    SDL_SCANCODE_KP_COLON = 203,
    SDL_SCANCODE_KP_HASH = 204,
    SDL_SCANCODE_KP_SPACE = 205,
    SDL_SCANCODE_KP_AT = 206,
    SDL_SCANCODE_KP_EXCLAM = 207,
    SDL_SCANCODE_KP_MEMSTORE = 208,
    SDL_SCANCODE_KP_MEMRECALL = 209,
    SDL_SCANCODE_KP_MEMCLEAR = 210,
    SDL_SCANCODE_KP_MEMADD = 211,
    SDL_SCANCODE_KP_MEMSUBTRACT = 212,
    SDL_SCANCODE_KP_MEMMULTIPLY = 213,
    SDL_SCANCODE_KP_MEMDIVIDE = 214,
    SDL_SCANCODE_KP_PLUSMINUS = 215,
    SDL_SCANCODE_KP_CLEAR = 216,
    SDL_SCANCODE_KP_CLEARENTRY = 217,
    SDL_SCANCODE_KP_BINARY = 218,
    SDL_SCANCODE_KP_OCTAL = 219,
    SDL_SCANCODE_KP_DECIMAL = 220,
    SDL_SCANCODE_KP_HEXADECIMAL = 221,

    SDL_SCANCODE_LCTRL = 224,
    SDL_SCANCODE_LSHIFT = 225,
    SDL_SCANCODE_LALT = 226,
    SDL_SCANCODE_LGUI = 227,
    SDL_SCANCODE_RCTRL = 228,
    SDL_SCANCODE_RSHIFT = 229,
    SDL_SCANCODE_RALT = 230,
    SDL_SCANCODE_RGUI = 231,

    SDL_SCANCODE_MODE = 257,
# 351 "/usr/include/SDL2/SDL_scancode.h"
    SDL_SCANCODE_AUDIONEXT = 258,
    SDL_SCANCODE_AUDIOPREV = 259,
    SDL_SCANCODE_AUDIOSTOP = 260,
    SDL_SCANCODE_AUDIOPLAY = 261,
    SDL_SCANCODE_AUDIOMUTE = 262,
    SDL_SCANCODE_MEDIASELECT = 263,
    SDL_SCANCODE_WWW = 264,
    SDL_SCANCODE_MAIL = 265,
    SDL_SCANCODE_CALCULATOR = 266,
    SDL_SCANCODE_COMPUTER = 267,
    SDL_SCANCODE_AC_SEARCH = 268,
    SDL_SCANCODE_AC_HOME = 269,
    SDL_SCANCODE_AC_BACK = 270,
    SDL_SCANCODE_AC_FORWARD = 271,
    SDL_SCANCODE_AC_STOP = 272,
    SDL_SCANCODE_AC_REFRESH = 273,
    SDL_SCANCODE_AC_BOOKMARKS = 274,
# 378 "/usr/include/SDL2/SDL_scancode.h"
    SDL_SCANCODE_BRIGHTNESSDOWN = 275,
    SDL_SCANCODE_BRIGHTNESSUP = 276,
    SDL_SCANCODE_DISPLAYSWITCH = 277,

    SDL_SCANCODE_KBDILLUMTOGGLE = 278,
    SDL_SCANCODE_KBDILLUMDOWN = 279,
    SDL_SCANCODE_KBDILLUMUP = 280,
    SDL_SCANCODE_EJECT = 281,
    SDL_SCANCODE_SLEEP = 282,

    SDL_SCANCODE_APP1 = 283,
    SDL_SCANCODE_APP2 = 284,





    SDL_NUM_SCANCODES = 512

} SDL_Scancode;
# 33 "/usr/include/SDL2/SDL_keycode.h" 2
# 42 "/usr/include/SDL2/SDL_keycode.h"
typedef Sint32 SDL_Keycode;




enum
{
    SDLK_UNKNOWN = 0,

    SDLK_RETURN = '\r',
    SDLK_ESCAPE = '\033',
    SDLK_BACKSPACE = '\b',
    SDLK_TAB = '\t',
    SDLK_SPACE = ' ',
    SDLK_EXCLAIM = '!',
    SDLK_QUOTEDBL = '"',
    SDLK_HASH = '#',
    SDLK_PERCENT = '%',
    SDLK_DOLLAR = '$',
    SDLK_AMPERSAND = '&',
    SDLK_QUOTE = '\'',
    SDLK_LEFTPAREN = '(',
    SDLK_RIGHTPAREN = ')',
    SDLK_ASTERISK = '*',
    SDLK_PLUS = '+',
    SDLK_COMMA = ',',
    SDLK_MINUS = '-',
    SDLK_PERIOD = '.',
    SDLK_SLASH = '/',
    SDLK_0 = '0',
    SDLK_1 = '1',
    SDLK_2 = '2',
    SDLK_3 = '3',
    SDLK_4 = '4',
    SDLK_5 = '5',
    SDLK_6 = '6',
    SDLK_7 = '7',
    SDLK_8 = '8',
    SDLK_9 = '9',
    SDLK_COLON = ':',
    SDLK_SEMICOLON = ';',
    SDLK_LESS = '<',
    SDLK_EQUALS = '=',
    SDLK_GREATER = '>',
    SDLK_QUESTION = '?',
    SDLK_AT = '@',



    SDLK_LEFTBRACKET = '[',
    SDLK_BACKSLASH = '\\',
    SDLK_RIGHTBRACKET = ']',
    SDLK_CARET = '^',
    SDLK_UNDERSCORE = '_',
    SDLK_BACKQUOTE = '`',
    SDLK_a = 'a',
    SDLK_b = 'b',
    SDLK_c = 'c',
    SDLK_d = 'd',
    SDLK_e = 'e',
    SDLK_f = 'f',
    SDLK_g = 'g',
    SDLK_h = 'h',
    SDLK_i = 'i',
    SDLK_j = 'j',
    SDLK_k = 'k',
    SDLK_l = 'l',
    SDLK_m = 'm',
    SDLK_n = 'n',
    SDLK_o = 'o',
    SDLK_p = 'p',
    SDLK_q = 'q',
    SDLK_r = 'r',
    SDLK_s = 's',
    SDLK_t = 't',
    SDLK_u = 'u',
    SDLK_v = 'v',
    SDLK_w = 'w',
    SDLK_x = 'x',
    SDLK_y = 'y',
    SDLK_z = 'z',

    SDLK_CAPSLOCK = (SDL_SCANCODE_CAPSLOCK | (1<<30)),

    SDLK_F1 = (SDL_SCANCODE_F1 | (1<<30)),
    SDLK_F2 = (SDL_SCANCODE_F2 | (1<<30)),
    SDLK_F3 = (SDL_SCANCODE_F3 | (1<<30)),
    SDLK_F4 = (SDL_SCANCODE_F4 | (1<<30)),
    SDLK_F5 = (SDL_SCANCODE_F5 | (1<<30)),
    SDLK_F6 = (SDL_SCANCODE_F6 | (1<<30)),
    SDLK_F7 = (SDL_SCANCODE_F7 | (1<<30)),
    SDLK_F8 = (SDL_SCANCODE_F8 | (1<<30)),
    SDLK_F9 = (SDL_SCANCODE_F9 | (1<<30)),
    SDLK_F10 = (SDL_SCANCODE_F10 | (1<<30)),
    SDLK_F11 = (SDL_SCANCODE_F11 | (1<<30)),
    SDLK_F12 = (SDL_SCANCODE_F12 | (1<<30)),

    SDLK_PRINTSCREEN = (SDL_SCANCODE_PRINTSCREEN | (1<<30)),
    SDLK_SCROLLLOCK = (SDL_SCANCODE_SCROLLLOCK | (1<<30)),
    SDLK_PAUSE = (SDL_SCANCODE_PAUSE | (1<<30)),
    SDLK_INSERT = (SDL_SCANCODE_INSERT | (1<<30)),
    SDLK_HOME = (SDL_SCANCODE_HOME | (1<<30)),
    SDLK_PAGEUP = (SDL_SCANCODE_PAGEUP | (1<<30)),
    SDLK_DELETE = '\177',
    SDLK_END = (SDL_SCANCODE_END | (1<<30)),
    SDLK_PAGEDOWN = (SDL_SCANCODE_PAGEDOWN | (1<<30)),
    SDLK_RIGHT = (SDL_SCANCODE_RIGHT | (1<<30)),
    SDLK_LEFT = (SDL_SCANCODE_LEFT | (1<<30)),
    SDLK_DOWN = (SDL_SCANCODE_DOWN | (1<<30)),
    SDLK_UP = (SDL_SCANCODE_UP | (1<<30)),

    SDLK_NUMLOCKCLEAR = (SDL_SCANCODE_NUMLOCKCLEAR | (1<<30)),
    SDLK_KP_DIVIDE = (SDL_SCANCODE_KP_DIVIDE | (1<<30)),
    SDLK_KP_MULTIPLY = (SDL_SCANCODE_KP_MULTIPLY | (1<<30)),
    SDLK_KP_MINUS = (SDL_SCANCODE_KP_MINUS | (1<<30)),
    SDLK_KP_PLUS = (SDL_SCANCODE_KP_PLUS | (1<<30)),
    SDLK_KP_ENTER = (SDL_SCANCODE_KP_ENTER | (1<<30)),
    SDLK_KP_1 = (SDL_SCANCODE_KP_1 | (1<<30)),
    SDLK_KP_2 = (SDL_SCANCODE_KP_2 | (1<<30)),
    SDLK_KP_3 = (SDL_SCANCODE_KP_3 | (1<<30)),
    SDLK_KP_4 = (SDL_SCANCODE_KP_4 | (1<<30)),
    SDLK_KP_5 = (SDL_SCANCODE_KP_5 | (1<<30)),
    SDLK_KP_6 = (SDL_SCANCODE_KP_6 | (1<<30)),
    SDLK_KP_7 = (SDL_SCANCODE_KP_7 | (1<<30)),
    SDLK_KP_8 = (SDL_SCANCODE_KP_8 | (1<<30)),
    SDLK_KP_9 = (SDL_SCANCODE_KP_9 | (1<<30)),
    SDLK_KP_0 = (SDL_SCANCODE_KP_0 | (1<<30)),
    SDLK_KP_PERIOD = (SDL_SCANCODE_KP_PERIOD | (1<<30)),

    SDLK_APPLICATION = (SDL_SCANCODE_APPLICATION | (1<<30)),
    SDLK_POWER = (SDL_SCANCODE_POWER | (1<<30)),
    SDLK_KP_EQUALS = (SDL_SCANCODE_KP_EQUALS | (1<<30)),
    SDLK_F13 = (SDL_SCANCODE_F13 | (1<<30)),
    SDLK_F14 = (SDL_SCANCODE_F14 | (1<<30)),
    SDLK_F15 = (SDL_SCANCODE_F15 | (1<<30)),
    SDLK_F16 = (SDL_SCANCODE_F16 | (1<<30)),
    SDLK_F17 = (SDL_SCANCODE_F17 | (1<<30)),
    SDLK_F18 = (SDL_SCANCODE_F18 | (1<<30)),
    SDLK_F19 = (SDL_SCANCODE_F19 | (1<<30)),
    SDLK_F20 = (SDL_SCANCODE_F20 | (1<<30)),
    SDLK_F21 = (SDL_SCANCODE_F21 | (1<<30)),
    SDLK_F22 = (SDL_SCANCODE_F22 | (1<<30)),
    SDLK_F23 = (SDL_SCANCODE_F23 | (1<<30)),
    SDLK_F24 = (SDL_SCANCODE_F24 | (1<<30)),
    SDLK_EXECUTE = (SDL_SCANCODE_EXECUTE | (1<<30)),
    SDLK_HELP = (SDL_SCANCODE_HELP | (1<<30)),
    SDLK_MENU = (SDL_SCANCODE_MENU | (1<<30)),
    SDLK_SELECT = (SDL_SCANCODE_SELECT | (1<<30)),
    SDLK_STOP = (SDL_SCANCODE_STOP | (1<<30)),
    SDLK_AGAIN = (SDL_SCANCODE_AGAIN | (1<<30)),
    SDLK_UNDO = (SDL_SCANCODE_UNDO | (1<<30)),
    SDLK_CUT = (SDL_SCANCODE_CUT | (1<<30)),
    SDLK_COPY = (SDL_SCANCODE_COPY | (1<<30)),
    SDLK_PASTE = (SDL_SCANCODE_PASTE | (1<<30)),
    SDLK_FIND = (SDL_SCANCODE_FIND | (1<<30)),
    SDLK_MUTE = (SDL_SCANCODE_MUTE | (1<<30)),
    SDLK_VOLUMEUP = (SDL_SCANCODE_VOLUMEUP | (1<<30)),
    SDLK_VOLUMEDOWN = (SDL_SCANCODE_VOLUMEDOWN | (1<<30)),
    SDLK_KP_COMMA = (SDL_SCANCODE_KP_COMMA | (1<<30)),
    SDLK_KP_EQUALSAS400 =
        (SDL_SCANCODE_KP_EQUALSAS400 | (1<<30)),

    SDLK_ALTERASE = (SDL_SCANCODE_ALTERASE | (1<<30)),
    SDLK_SYSREQ = (SDL_SCANCODE_SYSREQ | (1<<30)),
    SDLK_CANCEL = (SDL_SCANCODE_CANCEL | (1<<30)),
    SDLK_CLEAR = (SDL_SCANCODE_CLEAR | (1<<30)),
    SDLK_PRIOR = (SDL_SCANCODE_PRIOR | (1<<30)),
    SDLK_RETURN2 = (SDL_SCANCODE_RETURN2 | (1<<30)),
    SDLK_SEPARATOR = (SDL_SCANCODE_SEPARATOR | (1<<30)),
    SDLK_OUT = (SDL_SCANCODE_OUT | (1<<30)),
    SDLK_OPER = (SDL_SCANCODE_OPER | (1<<30)),
    SDLK_CLEARAGAIN = (SDL_SCANCODE_CLEARAGAIN | (1<<30)),
    SDLK_CRSEL = (SDL_SCANCODE_CRSEL | (1<<30)),
    SDLK_EXSEL = (SDL_SCANCODE_EXSEL | (1<<30)),

    SDLK_KP_00 = (SDL_SCANCODE_KP_00 | (1<<30)),
    SDLK_KP_000 = (SDL_SCANCODE_KP_000 | (1<<30)),
    SDLK_THOUSANDSSEPARATOR =
        (SDL_SCANCODE_THOUSANDSSEPARATOR | (1<<30)),
    SDLK_DECIMALSEPARATOR =
        (SDL_SCANCODE_DECIMALSEPARATOR | (1<<30)),
    SDLK_CURRENCYUNIT = (SDL_SCANCODE_CURRENCYUNIT | (1<<30)),
    SDLK_CURRENCYSUBUNIT =
        (SDL_SCANCODE_CURRENCYSUBUNIT | (1<<30)),
    SDLK_KP_LEFTPAREN = (SDL_SCANCODE_KP_LEFTPAREN | (1<<30)),
    SDLK_KP_RIGHTPAREN = (SDL_SCANCODE_KP_RIGHTPAREN | (1<<30)),
    SDLK_KP_LEFTBRACE = (SDL_SCANCODE_KP_LEFTBRACE | (1<<30)),
    SDLK_KP_RIGHTBRACE = (SDL_SCANCODE_KP_RIGHTBRACE | (1<<30)),
    SDLK_KP_TAB = (SDL_SCANCODE_KP_TAB | (1<<30)),
    SDLK_KP_BACKSPACE = (SDL_SCANCODE_KP_BACKSPACE | (1<<30)),
    SDLK_KP_A = (SDL_SCANCODE_KP_A | (1<<30)),
    SDLK_KP_B = (SDL_SCANCODE_KP_B | (1<<30)),
    SDLK_KP_C = (SDL_SCANCODE_KP_C | (1<<30)),
    SDLK_KP_D = (SDL_SCANCODE_KP_D | (1<<30)),
    SDLK_KP_E = (SDL_SCANCODE_KP_E | (1<<30)),
    SDLK_KP_F = (SDL_SCANCODE_KP_F | (1<<30)),
    SDLK_KP_XOR = (SDL_SCANCODE_KP_XOR | (1<<30)),
    SDLK_KP_POWER = (SDL_SCANCODE_KP_POWER | (1<<30)),
    SDLK_KP_PERCENT = (SDL_SCANCODE_KP_PERCENT | (1<<30)),
    SDLK_KP_LESS = (SDL_SCANCODE_KP_LESS | (1<<30)),
    SDLK_KP_GREATER = (SDL_SCANCODE_KP_GREATER | (1<<30)),
    SDLK_KP_AMPERSAND = (SDL_SCANCODE_KP_AMPERSAND | (1<<30)),
    SDLK_KP_DBLAMPERSAND =
        (SDL_SCANCODE_KP_DBLAMPERSAND | (1<<30)),
    SDLK_KP_VERTICALBAR =
        (SDL_SCANCODE_KP_VERTICALBAR | (1<<30)),
    SDLK_KP_DBLVERTICALBAR =
        (SDL_SCANCODE_KP_DBLVERTICALBAR | (1<<30)),
    SDLK_KP_COLON = (SDL_SCANCODE_KP_COLON | (1<<30)),
    SDLK_KP_HASH = (SDL_SCANCODE_KP_HASH | (1<<30)),
    SDLK_KP_SPACE = (SDL_SCANCODE_KP_SPACE | (1<<30)),
    SDLK_KP_AT = (SDL_SCANCODE_KP_AT | (1<<30)),
    SDLK_KP_EXCLAM = (SDL_SCANCODE_KP_EXCLAM | (1<<30)),
    SDLK_KP_MEMSTORE = (SDL_SCANCODE_KP_MEMSTORE | (1<<30)),
    SDLK_KP_MEMRECALL = (SDL_SCANCODE_KP_MEMRECALL | (1<<30)),
    SDLK_KP_MEMCLEAR = (SDL_SCANCODE_KP_MEMCLEAR | (1<<30)),
    SDLK_KP_MEMADD = (SDL_SCANCODE_KP_MEMADD | (1<<30)),
    SDLK_KP_MEMSUBTRACT =
        (SDL_SCANCODE_KP_MEMSUBTRACT | (1<<30)),
    SDLK_KP_MEMMULTIPLY =
        (SDL_SCANCODE_KP_MEMMULTIPLY | (1<<30)),
    SDLK_KP_MEMDIVIDE = (SDL_SCANCODE_KP_MEMDIVIDE | (1<<30)),
    SDLK_KP_PLUSMINUS = (SDL_SCANCODE_KP_PLUSMINUS | (1<<30)),
    SDLK_KP_CLEAR = (SDL_SCANCODE_KP_CLEAR | (1<<30)),
    SDLK_KP_CLEARENTRY = (SDL_SCANCODE_KP_CLEARENTRY | (1<<30)),
    SDLK_KP_BINARY = (SDL_SCANCODE_KP_BINARY | (1<<30)),
    SDLK_KP_OCTAL = (SDL_SCANCODE_KP_OCTAL | (1<<30)),
    SDLK_KP_DECIMAL = (SDL_SCANCODE_KP_DECIMAL | (1<<30)),
    SDLK_KP_HEXADECIMAL =
        (SDL_SCANCODE_KP_HEXADECIMAL | (1<<30)),

    SDLK_LCTRL = (SDL_SCANCODE_LCTRL | (1<<30)),
    SDLK_LSHIFT = (SDL_SCANCODE_LSHIFT | (1<<30)),
    SDLK_LALT = (SDL_SCANCODE_LALT | (1<<30)),
    SDLK_LGUI = (SDL_SCANCODE_LGUI | (1<<30)),
    SDLK_RCTRL = (SDL_SCANCODE_RCTRL | (1<<30)),
    SDLK_RSHIFT = (SDL_SCANCODE_RSHIFT | (1<<30)),
    SDLK_RALT = (SDL_SCANCODE_RALT | (1<<30)),
    SDLK_RGUI = (SDL_SCANCODE_RGUI | (1<<30)),

    SDLK_MODE = (SDL_SCANCODE_MODE | (1<<30)),

    SDLK_AUDIONEXT = (SDL_SCANCODE_AUDIONEXT | (1<<30)),
    SDLK_AUDIOPREV = (SDL_SCANCODE_AUDIOPREV | (1<<30)),
    SDLK_AUDIOSTOP = (SDL_SCANCODE_AUDIOSTOP | (1<<30)),
    SDLK_AUDIOPLAY = (SDL_SCANCODE_AUDIOPLAY | (1<<30)),
    SDLK_AUDIOMUTE = (SDL_SCANCODE_AUDIOMUTE | (1<<30)),
    SDLK_MEDIASELECT = (SDL_SCANCODE_MEDIASELECT | (1<<30)),
    SDLK_WWW = (SDL_SCANCODE_WWW | (1<<30)),
    SDLK_MAIL = (SDL_SCANCODE_MAIL | (1<<30)),
    SDLK_CALCULATOR = (SDL_SCANCODE_CALCULATOR | (1<<30)),
    SDLK_COMPUTER = (SDL_SCANCODE_COMPUTER | (1<<30)),
    SDLK_AC_SEARCH = (SDL_SCANCODE_AC_SEARCH | (1<<30)),
    SDLK_AC_HOME = (SDL_SCANCODE_AC_HOME | (1<<30)),
    SDLK_AC_BACK = (SDL_SCANCODE_AC_BACK | (1<<30)),
    SDLK_AC_FORWARD = (SDL_SCANCODE_AC_FORWARD | (1<<30)),
    SDLK_AC_STOP = (SDL_SCANCODE_AC_STOP | (1<<30)),
    SDLK_AC_REFRESH = (SDL_SCANCODE_AC_REFRESH | (1<<30)),
    SDLK_AC_BOOKMARKS = (SDL_SCANCODE_AC_BOOKMARKS | (1<<30)),

    SDLK_BRIGHTNESSDOWN =
        (SDL_SCANCODE_BRIGHTNESSDOWN | (1<<30)),
    SDLK_BRIGHTNESSUP = (SDL_SCANCODE_BRIGHTNESSUP | (1<<30)),
    SDLK_DISPLAYSWITCH = (SDL_SCANCODE_DISPLAYSWITCH | (1<<30)),
    SDLK_KBDILLUMTOGGLE =
        (SDL_SCANCODE_KBDILLUMTOGGLE | (1<<30)),
    SDLK_KBDILLUMDOWN = (SDL_SCANCODE_KBDILLUMDOWN | (1<<30)),
    SDLK_KBDILLUMUP = (SDL_SCANCODE_KBDILLUMUP | (1<<30)),
    SDLK_EJECT = (SDL_SCANCODE_EJECT | (1<<30)),
    SDLK_SLEEP = (SDL_SCANCODE_SLEEP | (1<<30))
};




typedef enum
{
    KMOD_NONE = 0x0000,
    KMOD_LSHIFT = 0x0001,
    KMOD_RSHIFT = 0x0002,
    KMOD_LCTRL = 0x0040,
    KMOD_RCTRL = 0x0080,
    KMOD_LALT = 0x0100,
    KMOD_RALT = 0x0200,
    KMOD_LGUI = 0x0400,
    KMOD_RGUI = 0x0800,
    KMOD_NUM = 0x1000,
    KMOD_CAPS = 0x2000,
    KMOD_MODE = 0x4000,
    KMOD_RESERVED = 0x8000
} SDL_Keymod;
# 34 "/usr/include/SDL2/SDL_keyboard.h" 2


# 1 "/usr/include/SDL2/begin_code.h" 1
# 37 "/usr/include/SDL2/SDL_keyboard.h" 2
# 47 "/usr/include/SDL2/SDL_keyboard.h"
typedef struct SDL_Keysym
{
    SDL_Scancode scancode;
    SDL_Keycode sym;
    Uint16 mod;
    Uint32 unused;
} SDL_Keysym;






extern __attribute__ ((visibility("default"))) SDL_Window * SDL_GetKeyboardFocus(void);
# 77 "/usr/include/SDL2/SDL_keyboard.h"
extern __attribute__ ((visibility("default"))) const Uint8 * SDL_GetKeyboardState(int *numkeys);




extern __attribute__ ((visibility("default"))) SDL_Keymod SDL_GetModState(void);






extern __attribute__ ((visibility("default"))) void SDL_SetModState(SDL_Keymod modstate);
# 99 "/usr/include/SDL2/SDL_keyboard.h"
extern __attribute__ ((visibility("default"))) SDL_Keycode SDL_GetKeyFromScancode(SDL_Scancode scancode);
# 109 "/usr/include/SDL2/SDL_keyboard.h"
extern __attribute__ ((visibility("default"))) SDL_Scancode SDL_GetScancodeFromKey(SDL_Keycode key);
# 120 "/usr/include/SDL2/SDL_keyboard.h"
extern __attribute__ ((visibility("default"))) const char * SDL_GetScancodeName(SDL_Scancode scancode);
# 129 "/usr/include/SDL2/SDL_keyboard.h"
extern __attribute__ ((visibility("default"))) SDL_Scancode SDL_GetScancodeFromName(const char *name);
# 141 "/usr/include/SDL2/SDL_keyboard.h"
extern __attribute__ ((visibility("default"))) const char * SDL_GetKeyName(SDL_Keycode key);
# 150 "/usr/include/SDL2/SDL_keyboard.h"
extern __attribute__ ((visibility("default"))) SDL_Keycode SDL_GetKeyFromName(const char *name);
# 160 "/usr/include/SDL2/SDL_keyboard.h"
extern __attribute__ ((visibility("default"))) void SDL_StartTextInput(void);







extern __attribute__ ((visibility("default"))) SDL_bool SDL_IsTextInputActive(void);
# 177 "/usr/include/SDL2/SDL_keyboard.h"
extern __attribute__ ((visibility("default"))) void SDL_StopTextInput(void);







extern __attribute__ ((visibility("default"))) void SDL_SetTextInputRect(SDL_Rect *rect);
# 196 "/usr/include/SDL2/SDL_keyboard.h"
extern __attribute__ ((visibility("default"))) SDL_bool SDL_HasScreenKeyboardSupport(void);
# 207 "/usr/include/SDL2/SDL_keyboard.h"
extern __attribute__ ((visibility("default"))) SDL_bool SDL_IsScreenKeyboardShown(SDL_Window *window);





# 1 "/usr/include/SDL2/close_code.h" 1
# 214 "/usr/include/SDL2/SDL_keyboard.h" 2
# 35 "/usr/include/SDL2/SDL_events.h" 2
# 1 "/usr/include/SDL2/SDL_mouse.h" 1
# 35 "/usr/include/SDL2/SDL_mouse.h"
# 1 "/usr/include/SDL2/begin_code.h" 1
# 36 "/usr/include/SDL2/SDL_mouse.h" 2





typedef struct SDL_Cursor SDL_Cursor;




typedef enum
{
    SDL_SYSTEM_CURSOR_ARROW,
    SDL_SYSTEM_CURSOR_IBEAM,
    SDL_SYSTEM_CURSOR_WAIT,
    SDL_SYSTEM_CURSOR_CROSSHAIR,
    SDL_SYSTEM_CURSOR_WAITARROW,
    SDL_SYSTEM_CURSOR_SIZENWSE,
    SDL_SYSTEM_CURSOR_SIZENESW,
    SDL_SYSTEM_CURSOR_SIZEWE,
    SDL_SYSTEM_CURSOR_SIZENS,
    SDL_SYSTEM_CURSOR_SIZEALL,
    SDL_SYSTEM_CURSOR_NO,
    SDL_SYSTEM_CURSOR_HAND,
    SDL_NUM_SYSTEM_CURSORS
} SDL_SystemCursor;




typedef enum
{
    SDL_MOUSEWHEEL_NORMAL,
    SDL_MOUSEWHEEL_FLIPPED
} SDL_MouseWheelDirection;






extern __attribute__ ((visibility("default"))) SDL_Window * SDL_GetMouseFocus(void);
# 87 "/usr/include/SDL2/SDL_mouse.h"
extern __attribute__ ((visibility("default"))) Uint32 SDL_GetMouseState(int *x, int *y);
# 112 "/usr/include/SDL2/SDL_mouse.h"
extern __attribute__ ((visibility("default"))) Uint32 SDL_GetGlobalMouseState(int *x, int *y);
# 121 "/usr/include/SDL2/SDL_mouse.h"
extern __attribute__ ((visibility("default"))) Uint32 SDL_GetRelativeMouseState(int *x, int *y);
# 132 "/usr/include/SDL2/SDL_mouse.h"
extern __attribute__ ((visibility("default"))) void SDL_WarpMouseInWindow(SDL_Window * window,
                                                   int x, int y);
# 144 "/usr/include/SDL2/SDL_mouse.h"
extern __attribute__ ((visibility("default"))) int SDL_WarpMouseGlobal(int x, int y);
# 162 "/usr/include/SDL2/SDL_mouse.h"
extern __attribute__ ((visibility("default"))) int SDL_SetRelativeMouseMode(SDL_bool enabled);
# 193 "/usr/include/SDL2/SDL_mouse.h"
extern __attribute__ ((visibility("default"))) int SDL_CaptureMouse(SDL_bool enabled);






extern __attribute__ ((visibility("default"))) SDL_bool SDL_GetRelativeMouseMode(void);
# 220 "/usr/include/SDL2/SDL_mouse.h"
extern __attribute__ ((visibility("default"))) SDL_Cursor * SDL_CreateCursor(const Uint8 * data,
                                                     const Uint8 * mask,
                                                     int w, int h, int hot_x,
                                                     int hot_y);






extern __attribute__ ((visibility("default"))) SDL_Cursor * SDL_CreateColorCursor(SDL_Surface *surface,
                                                          int hot_x,
                                                          int hot_y);






extern __attribute__ ((visibility("default"))) SDL_Cursor * SDL_CreateSystemCursor(SDL_SystemCursor id);




extern __attribute__ ((visibility("default"))) void SDL_SetCursor(SDL_Cursor * cursor);




extern __attribute__ ((visibility("default"))) SDL_Cursor * SDL_GetCursor(void);




extern __attribute__ ((visibility("default"))) SDL_Cursor * SDL_GetDefaultCursor(void);
# 263 "/usr/include/SDL2/SDL_mouse.h"
extern __attribute__ ((visibility("default"))) void SDL_FreeCursor(SDL_Cursor * cursor);
# 273 "/usr/include/SDL2/SDL_mouse.h"
extern __attribute__ ((visibility("default"))) int SDL_ShowCursor(int toggle);
# 298 "/usr/include/SDL2/SDL_mouse.h"
# 1 "/usr/include/SDL2/close_code.h" 1
# 299 "/usr/include/SDL2/SDL_mouse.h" 2
# 36 "/usr/include/SDL2/SDL_events.h" 2
# 1 "/usr/include/SDL2/SDL_joystick.h" 1
# 45 "/usr/include/SDL2/SDL_joystick.h"
# 1 "/usr/include/SDL2/begin_code.h" 1
# 46 "/usr/include/SDL2/SDL_joystick.h" 2
# 64 "/usr/include/SDL2/SDL_joystick.h"
struct _SDL_Joystick;
typedef struct _SDL_Joystick SDL_Joystick;


typedef struct {
    Uint8 data[16];
} SDL_JoystickGUID;

typedef Sint32 SDL_JoystickID;

typedef enum
{
    SDL_JOYSTICK_POWER_UNKNOWN = -1,
    SDL_JOYSTICK_POWER_EMPTY,
    SDL_JOYSTICK_POWER_LOW,
    SDL_JOYSTICK_POWER_MEDIUM,
    SDL_JOYSTICK_POWER_FULL,
    SDL_JOYSTICK_POWER_WIRED,
    SDL_JOYSTICK_POWER_MAX
} SDL_JoystickPowerLevel;





extern __attribute__ ((visibility("default"))) int SDL_NumJoysticks(void);






extern __attribute__ ((visibility("default"))) const char * SDL_JoystickNameForIndex(int device_index);
# 107 "/usr/include/SDL2/SDL_joystick.h"
extern __attribute__ ((visibility("default"))) SDL_Joystick * SDL_JoystickOpen(int device_index);




extern __attribute__ ((visibility("default"))) SDL_Joystick * SDL_JoystickFromInstanceID(SDL_JoystickID joyid);





extern __attribute__ ((visibility("default"))) const char * SDL_JoystickName(SDL_Joystick * joystick);




extern __attribute__ ((visibility("default"))) SDL_JoystickGUID SDL_JoystickGetDeviceGUID(int device_index);




extern __attribute__ ((visibility("default"))) SDL_JoystickGUID SDL_JoystickGetGUID(SDL_Joystick * joystick);





extern __attribute__ ((visibility("default"))) void SDL_JoystickGetGUIDString(SDL_JoystickGUID guid, char *pszGUID, int cbGUID);




extern __attribute__ ((visibility("default"))) SDL_JoystickGUID SDL_JoystickGetGUIDFromString(const char *pchGUID);




extern __attribute__ ((visibility("default"))) SDL_bool SDL_JoystickGetAttached(SDL_Joystick * joystick);




extern __attribute__ ((visibility("default"))) SDL_JoystickID SDL_JoystickInstanceID(SDL_Joystick * joystick);




extern __attribute__ ((visibility("default"))) int SDL_JoystickNumAxes(SDL_Joystick * joystick);







extern __attribute__ ((visibility("default"))) int SDL_JoystickNumBalls(SDL_Joystick * joystick);




extern __attribute__ ((visibility("default"))) int SDL_JoystickNumHats(SDL_Joystick * joystick);




extern __attribute__ ((visibility("default"))) int SDL_JoystickNumButtons(SDL_Joystick * joystick);







extern __attribute__ ((visibility("default"))) void SDL_JoystickUpdate(void);
# 191 "/usr/include/SDL2/SDL_joystick.h"
extern __attribute__ ((visibility("default"))) int SDL_JoystickEventState(int state);
# 200 "/usr/include/SDL2/SDL_joystick.h"
extern __attribute__ ((visibility("default"))) Sint16 SDL_JoystickGetAxis(SDL_Joystick * joystick,
                                                   int axis);
# 234 "/usr/include/SDL2/SDL_joystick.h"
extern __attribute__ ((visibility("default"))) Uint8 SDL_JoystickGetHat(SDL_Joystick * joystick,
                                                 int hat);
# 244 "/usr/include/SDL2/SDL_joystick.h"
extern __attribute__ ((visibility("default"))) int SDL_JoystickGetBall(SDL_Joystick * joystick,
                                                int ball, int *dx, int *dy);






extern __attribute__ ((visibility("default"))) Uint8 SDL_JoystickGetButton(SDL_Joystick * joystick,
                                                    int button);




extern __attribute__ ((visibility("default"))) void SDL_JoystickClose(SDL_Joystick * joystick);




extern __attribute__ ((visibility("default"))) SDL_JoystickPowerLevel SDL_JoystickCurrentPowerLevel(SDL_Joystick * joystick);





# 1 "/usr/include/SDL2/close_code.h" 1
# 270 "/usr/include/SDL2/SDL_joystick.h" 2
# 37 "/usr/include/SDL2/SDL_events.h" 2
# 1 "/usr/include/SDL2/SDL_gamecontroller.h" 1
# 36 "/usr/include/SDL2/SDL_gamecontroller.h"
# 1 "/usr/include/SDL2/begin_code.h" 1
# 37 "/usr/include/SDL2/SDL_gamecontroller.h" 2
# 55 "/usr/include/SDL2/SDL_gamecontroller.h"
struct _SDL_GameController;
typedef struct _SDL_GameController SDL_GameController;


typedef enum
{
    SDL_CONTROLLER_BINDTYPE_NONE = 0,
    SDL_CONTROLLER_BINDTYPE_BUTTON,
    SDL_CONTROLLER_BINDTYPE_AXIS,
    SDL_CONTROLLER_BINDTYPE_HAT
} SDL_GameControllerBindType;




typedef struct SDL_GameControllerButtonBind
{
    SDL_GameControllerBindType bindType;
    union
    {
        int button;
        int axis;
        struct {
            int hat;
            int hat_mask;
        } hat;
    } value;

} SDL_GameControllerButtonBind;
# 120 "/usr/include/SDL2/SDL_gamecontroller.h"
extern __attribute__ ((visibility("default"))) int SDL_GameControllerAddMappingsFromRW( SDL_RWops * rw, int freerw );
# 134 "/usr/include/SDL2/SDL_gamecontroller.h"
extern __attribute__ ((visibility("default"))) int SDL_GameControllerAddMapping( const char* mappingString );






extern __attribute__ ((visibility("default"))) char * SDL_GameControllerMappingForGUID( SDL_JoystickGUID guid );






extern __attribute__ ((visibility("default"))) char * SDL_GameControllerMapping( SDL_GameController * gamecontroller );




extern __attribute__ ((visibility("default"))) SDL_bool SDL_IsGameController(int joystick_index);







extern __attribute__ ((visibility("default"))) const char * SDL_GameControllerNameForIndex(int joystick_index);
# 172 "/usr/include/SDL2/SDL_gamecontroller.h"
extern __attribute__ ((visibility("default"))) SDL_GameController * SDL_GameControllerOpen(int joystick_index);




extern __attribute__ ((visibility("default"))) SDL_GameController * SDL_GameControllerFromInstanceID(SDL_JoystickID joyid);




extern __attribute__ ((visibility("default"))) const char * SDL_GameControllerName(SDL_GameController *gamecontroller);





extern __attribute__ ((visibility("default"))) SDL_bool SDL_GameControllerGetAttached(SDL_GameController *gamecontroller);




extern __attribute__ ((visibility("default"))) SDL_Joystick * SDL_GameControllerGetJoystick(SDL_GameController *gamecontroller);
# 204 "/usr/include/SDL2/SDL_gamecontroller.h"
extern __attribute__ ((visibility("default"))) int SDL_GameControllerEventState(int state);







extern __attribute__ ((visibility("default"))) void SDL_GameControllerUpdate(void);





typedef enum
{
    SDL_CONTROLLER_AXIS_INVALID = -1,
    SDL_CONTROLLER_AXIS_LEFTX,
    SDL_CONTROLLER_AXIS_LEFTY,
    SDL_CONTROLLER_AXIS_RIGHTX,
    SDL_CONTROLLER_AXIS_RIGHTY,
    SDL_CONTROLLER_AXIS_TRIGGERLEFT,
    SDL_CONTROLLER_AXIS_TRIGGERRIGHT,
    SDL_CONTROLLER_AXIS_MAX
} SDL_GameControllerAxis;




extern __attribute__ ((visibility("default"))) SDL_GameControllerAxis SDL_GameControllerGetAxisFromString(const char *pchString);




extern __attribute__ ((visibility("default"))) const char* SDL_GameControllerGetStringForAxis(SDL_GameControllerAxis axis);




extern __attribute__ ((visibility("default"))) SDL_GameControllerButtonBind
SDL_GameControllerGetBindForAxis(SDL_GameController *gamecontroller,
                                 SDL_GameControllerAxis axis);
# 255 "/usr/include/SDL2/SDL_gamecontroller.h"
extern __attribute__ ((visibility("default"))) Sint16
SDL_GameControllerGetAxis(SDL_GameController *gamecontroller,
                          SDL_GameControllerAxis axis);




typedef enum
{
    SDL_CONTROLLER_BUTTON_INVALID = -1,
    SDL_CONTROLLER_BUTTON_A,
    SDL_CONTROLLER_BUTTON_B,
    SDL_CONTROLLER_BUTTON_X,
    SDL_CONTROLLER_BUTTON_Y,
    SDL_CONTROLLER_BUTTON_BACK,
    SDL_CONTROLLER_BUTTON_GUIDE,
    SDL_CONTROLLER_BUTTON_START,
    SDL_CONTROLLER_BUTTON_LEFTSTICK,
    SDL_CONTROLLER_BUTTON_RIGHTSTICK,
    SDL_CONTROLLER_BUTTON_LEFTSHOULDER,
    SDL_CONTROLLER_BUTTON_RIGHTSHOULDER,
    SDL_CONTROLLER_BUTTON_DPAD_UP,
    SDL_CONTROLLER_BUTTON_DPAD_DOWN,
    SDL_CONTROLLER_BUTTON_DPAD_LEFT,
    SDL_CONTROLLER_BUTTON_DPAD_RIGHT,
    SDL_CONTROLLER_BUTTON_MAX
} SDL_GameControllerButton;




extern __attribute__ ((visibility("default"))) SDL_GameControllerButton SDL_GameControllerGetButtonFromString(const char *pchString);




extern __attribute__ ((visibility("default"))) const char* SDL_GameControllerGetStringForButton(SDL_GameControllerButton button);




extern __attribute__ ((visibility("default"))) SDL_GameControllerButtonBind
SDL_GameControllerGetBindForButton(SDL_GameController *gamecontroller,
                                   SDL_GameControllerButton button);







extern __attribute__ ((visibility("default"))) Uint8 SDL_GameControllerGetButton(SDL_GameController *gamecontroller,
                                                          SDL_GameControllerButton button);




extern __attribute__ ((visibility("default"))) void SDL_GameControllerClose(SDL_GameController *gamecontroller);






# 1 "/usr/include/SDL2/close_code.h" 1
# 320 "/usr/include/SDL2/SDL_gamecontroller.h" 2
# 38 "/usr/include/SDL2/SDL_events.h" 2
# 1 "/usr/include/SDL2/SDL_quit.h" 1
# 39 "/usr/include/SDL2/SDL_events.h" 2
# 1 "/usr/include/SDL2/SDL_gesture.h" 1
# 35 "/usr/include/SDL2/SDL_gesture.h"
# 1 "/usr/include/SDL2/SDL_touch.h" 1
# 35 "/usr/include/SDL2/SDL_touch.h"
# 1 "/usr/include/SDL2/begin_code.h" 1
# 36 "/usr/include/SDL2/SDL_touch.h" 2





typedef Sint64 SDL_TouchID;
typedef Sint64 SDL_FingerID;

typedef struct SDL_Finger
{
    SDL_FingerID id;
    float x;
    float y;
    float pressure;
} SDL_Finger;
# 61 "/usr/include/SDL2/SDL_touch.h"
extern __attribute__ ((visibility("default"))) int SDL_GetNumTouchDevices(void);




extern __attribute__ ((visibility("default"))) SDL_TouchID SDL_GetTouchDevice(int index);




extern __attribute__ ((visibility("default"))) int SDL_GetNumTouchFingers(SDL_TouchID touchID);




extern __attribute__ ((visibility("default"))) SDL_Finger * SDL_GetTouchFinger(SDL_TouchID touchID, int index);





# 1 "/usr/include/SDL2/close_code.h" 1
# 83 "/usr/include/SDL2/SDL_touch.h" 2
# 36 "/usr/include/SDL2/SDL_gesture.h" 2


# 1 "/usr/include/SDL2/begin_code.h" 1
# 39 "/usr/include/SDL2/SDL_gesture.h" 2





typedef Sint64 SDL_GestureID;
# 53 "/usr/include/SDL2/SDL_gesture.h"
extern __attribute__ ((visibility("default"))) int SDL_RecordGesture(SDL_TouchID touchId);







extern __attribute__ ((visibility("default"))) int SDL_SaveAllDollarTemplates(SDL_RWops *dst);






extern __attribute__ ((visibility("default"))) int SDL_SaveDollarTemplate(SDL_GestureID gestureId,SDL_RWops *dst);







extern __attribute__ ((visibility("default"))) int SDL_LoadDollarTemplates(SDL_TouchID touchId, SDL_RWops *src);






# 1 "/usr/include/SDL2/close_code.h" 1
# 84 "/usr/include/SDL2/SDL_gesture.h" 2
# 40 "/usr/include/SDL2/SDL_events.h" 2


# 1 "/usr/include/SDL2/begin_code.h" 1
# 43 "/usr/include/SDL2/SDL_events.h" 2
# 55 "/usr/include/SDL2/SDL_events.h"
typedef enum
{
    SDL_FIRSTEVENT = 0,


    SDL_QUIT = 0x100,


    SDL_APP_TERMINATING,



    SDL_APP_LOWMEMORY,



    SDL_APP_WILLENTERBACKGROUND,



    SDL_APP_DIDENTERBACKGROUND,



    SDL_APP_WILLENTERFOREGROUND,



    SDL_APP_DIDENTERFOREGROUND,





    SDL_WINDOWEVENT = 0x200,
    SDL_SYSWMEVENT,


    SDL_KEYDOWN = 0x300,
    SDL_KEYUP,
    SDL_TEXTEDITING,
    SDL_TEXTINPUT,
    SDL_KEYMAPCHANGED,




    SDL_MOUSEMOTION = 0x400,
    SDL_MOUSEBUTTONDOWN,
    SDL_MOUSEBUTTONUP,
    SDL_MOUSEWHEEL,


    SDL_JOYAXISMOTION = 0x600,
    SDL_JOYBALLMOTION,
    SDL_JOYHATMOTION,
    SDL_JOYBUTTONDOWN,
    SDL_JOYBUTTONUP,
    SDL_JOYDEVICEADDED,
    SDL_JOYDEVICEREMOVED,


    SDL_CONTROLLERAXISMOTION = 0x650,
    SDL_CONTROLLERBUTTONDOWN,
    SDL_CONTROLLERBUTTONUP,
    SDL_CONTROLLERDEVICEADDED,
    SDL_CONTROLLERDEVICEREMOVED,
    SDL_CONTROLLERDEVICEREMAPPED,


    SDL_FINGERDOWN = 0x700,
    SDL_FINGERUP,
    SDL_FINGERMOTION,


    SDL_DOLLARGESTURE = 0x800,
    SDL_DOLLARRECORD,
    SDL_MULTIGESTURE,


    SDL_CLIPBOARDUPDATE = 0x900,


    SDL_DROPFILE = 0x1000,
    SDL_DROPTEXT,
    SDL_DROPBEGIN,
    SDL_DROPCOMPLETE,


    SDL_AUDIODEVICEADDED = 0x1100,
    SDL_AUDIODEVICEREMOVED,


    SDL_RENDER_TARGETS_RESET = 0x2000,
    SDL_RENDER_DEVICE_RESET,




    SDL_USEREVENT = 0x8000,




    SDL_LASTEVENT = 0xFFFF
} SDL_EventType;




typedef struct SDL_CommonEvent
{
    Uint32 type;
    Uint32 timestamp;
} SDL_CommonEvent;




typedef struct SDL_WindowEvent
{
    Uint32 type;
    Uint32 timestamp;
    Uint32 windowID;
    Uint8 event;
    Uint8 padding1;
    Uint8 padding2;
    Uint8 padding3;
    Sint32 data1;
    Sint32 data2;
} SDL_WindowEvent;




typedef struct SDL_KeyboardEvent
{
    Uint32 type;
    Uint32 timestamp;
    Uint32 windowID;
    Uint8 state;
    Uint8 repeat;
    Uint8 padding2;
    Uint8 padding3;
    SDL_Keysym keysym;
} SDL_KeyboardEvent;





typedef struct SDL_TextEditingEvent
{
    Uint32 type;
    Uint32 timestamp;
    Uint32 windowID;
    char text[(32)];
    Sint32 start;
    Sint32 length;
} SDL_TextEditingEvent;






typedef struct SDL_TextInputEvent
{
    Uint32 type;
    Uint32 timestamp;
    Uint32 windowID;
    char text[(32)];
} SDL_TextInputEvent;




typedef struct SDL_MouseMotionEvent
{
    Uint32 type;
    Uint32 timestamp;
    Uint32 windowID;
    Uint32 which;
    Uint32 state;
    Sint32 x;
    Sint32 y;
    Sint32 xrel;
    Sint32 yrel;
} SDL_MouseMotionEvent;




typedef struct SDL_MouseButtonEvent
{
    Uint32 type;
    Uint32 timestamp;
    Uint32 windowID;
    Uint32 which;
    Uint8 button;
    Uint8 state;
    Uint8 clicks;
    Uint8 padding1;
    Sint32 x;
    Sint32 y;
} SDL_MouseButtonEvent;




typedef struct SDL_MouseWheelEvent
{
    Uint32 type;
    Uint32 timestamp;
    Uint32 windowID;
    Uint32 which;
    Sint32 x;
    Sint32 y;
    Uint32 direction;
} SDL_MouseWheelEvent;




typedef struct SDL_JoyAxisEvent
{
    Uint32 type;
    Uint32 timestamp;
    SDL_JoystickID which;
    Uint8 axis;
    Uint8 padding1;
    Uint8 padding2;
    Uint8 padding3;
    Sint16 value;
    Uint16 padding4;
} SDL_JoyAxisEvent;




typedef struct SDL_JoyBallEvent
{
    Uint32 type;
    Uint32 timestamp;
    SDL_JoystickID which;
    Uint8 ball;
    Uint8 padding1;
    Uint8 padding2;
    Uint8 padding3;
    Sint16 xrel;
    Sint16 yrel;
} SDL_JoyBallEvent;




typedef struct SDL_JoyHatEvent
{
    Uint32 type;
    Uint32 timestamp;
    SDL_JoystickID which;
    Uint8 hat;
    Uint8 value;






    Uint8 padding1;
    Uint8 padding2;
} SDL_JoyHatEvent;




typedef struct SDL_JoyButtonEvent
{
    Uint32 type;
    Uint32 timestamp;
    SDL_JoystickID which;
    Uint8 button;
    Uint8 state;
    Uint8 padding1;
    Uint8 padding2;
} SDL_JoyButtonEvent;




typedef struct SDL_JoyDeviceEvent
{
    Uint32 type;
    Uint32 timestamp;
    Sint32 which;
} SDL_JoyDeviceEvent;





typedef struct SDL_ControllerAxisEvent
{
    Uint32 type;
    Uint32 timestamp;
    SDL_JoystickID which;
    Uint8 axis;
    Uint8 padding1;
    Uint8 padding2;
    Uint8 padding3;
    Sint16 value;
    Uint16 padding4;
} SDL_ControllerAxisEvent;





typedef struct SDL_ControllerButtonEvent
{
    Uint32 type;
    Uint32 timestamp;
    SDL_JoystickID which;
    Uint8 button;
    Uint8 state;
    Uint8 padding1;
    Uint8 padding2;
} SDL_ControllerButtonEvent;





typedef struct SDL_ControllerDeviceEvent
{
    Uint32 type;
    Uint32 timestamp;
    Sint32 which;
} SDL_ControllerDeviceEvent;




typedef struct SDL_AudioDeviceEvent
{
    Uint32 type;
    Uint32 timestamp;
    Uint32 which;
    Uint8 iscapture;
    Uint8 padding1;
    Uint8 padding2;
    Uint8 padding3;
} SDL_AudioDeviceEvent;





typedef struct SDL_TouchFingerEvent
{
    Uint32 type;
    Uint32 timestamp;
    SDL_TouchID touchId;
    SDL_FingerID fingerId;
    float x;
    float y;
    float dx;
    float dy;
    float pressure;
} SDL_TouchFingerEvent;





typedef struct SDL_MultiGestureEvent
{
    Uint32 type;
    Uint32 timestamp;
    SDL_TouchID touchId;
    float dTheta;
    float dDist;
    float x;
    float y;
    Uint16 numFingers;
    Uint16 padding;
} SDL_MultiGestureEvent;





typedef struct SDL_DollarGestureEvent
{
    Uint32 type;
    Uint32 timestamp;
    SDL_TouchID touchId;
    SDL_GestureID gestureId;
    Uint32 numFingers;
    float error;
    float x;
    float y;
} SDL_DollarGestureEvent;







typedef struct SDL_DropEvent
{
    Uint32 type;
    Uint32 timestamp;
    char *file;
    Uint32 windowID;
} SDL_DropEvent;





typedef struct SDL_QuitEvent
{
    Uint32 type;
    Uint32 timestamp;
} SDL_QuitEvent;




typedef struct SDL_OSEvent
{
    Uint32 type;
    Uint32 timestamp;
} SDL_OSEvent;




typedef struct SDL_UserEvent
{
    Uint32 type;
    Uint32 timestamp;
    Uint32 windowID;
    Sint32 code;
    void *data1;
    void *data2;
} SDL_UserEvent;


struct SDL_SysWMmsg;
typedef struct SDL_SysWMmsg SDL_SysWMmsg;







typedef struct SDL_SysWMEvent
{
    Uint32 type;
    Uint32 timestamp;
    SDL_SysWMmsg *msg;
} SDL_SysWMEvent;




typedef union SDL_Event
{
    Uint32 type;
    SDL_CommonEvent common;
    SDL_WindowEvent window;
    SDL_KeyboardEvent key;
    SDL_TextEditingEvent edit;
    SDL_TextInputEvent text;
    SDL_MouseMotionEvent motion;
    SDL_MouseButtonEvent button;
    SDL_MouseWheelEvent wheel;
    SDL_JoyAxisEvent jaxis;
    SDL_JoyBallEvent jball;
    SDL_JoyHatEvent jhat;
    SDL_JoyButtonEvent jbutton;
    SDL_JoyDeviceEvent jdevice;
    SDL_ControllerAxisEvent caxis;
    SDL_ControllerButtonEvent cbutton;
    SDL_ControllerDeviceEvent cdevice;
    SDL_AudioDeviceEvent adevice;
    SDL_QuitEvent quit;
    SDL_UserEvent user;
    SDL_SysWMEvent syswm;
    SDL_TouchFingerEvent tfinger;
    SDL_MultiGestureEvent mgesture;
    SDL_DollarGestureEvent dgesture;
    SDL_DropEvent drop;
# 560 "/usr/include/SDL2/SDL_events.h"
    Uint8 padding[56];
} SDL_Event;
# 573 "/usr/include/SDL2/SDL_events.h"
extern __attribute__ ((visibility("default"))) void SDL_PumpEvents(void);


typedef enum
{
    SDL_ADDEVENT,
    SDL_PEEKEVENT,
    SDL_GETEVENT
} SDL_eventaction;
# 601 "/usr/include/SDL2/SDL_events.h"
extern __attribute__ ((visibility("default"))) int SDL_PeepEvents(SDL_Event * events, int numevents,
                                           SDL_eventaction action,
                                           Uint32 minType, Uint32 maxType);





extern __attribute__ ((visibility("default"))) SDL_bool SDL_HasEvent(Uint32 type);
extern __attribute__ ((visibility("default"))) SDL_bool SDL_HasEvents(Uint32 minType, Uint32 maxType);







extern __attribute__ ((visibility("default"))) void SDL_FlushEvent(Uint32 type);
extern __attribute__ ((visibility("default"))) void SDL_FlushEvents(Uint32 minType, Uint32 maxType);
# 629 "/usr/include/SDL2/SDL_events.h"
extern __attribute__ ((visibility("default"))) int SDL_PollEvent(SDL_Event * event);
# 639 "/usr/include/SDL2/SDL_events.h"
extern __attribute__ ((visibility("default"))) int SDL_WaitEvent(SDL_Event * event);
# 651 "/usr/include/SDL2/SDL_events.h"
extern __attribute__ ((visibility("default"))) int SDL_WaitEventTimeout(SDL_Event * event,
                                                 int timeout);







extern __attribute__ ((visibility("default"))) int SDL_PushEvent(SDL_Event * event);

typedef int ( * SDL_EventFilter) (void *userdata, SDL_Event * event);
# 689 "/usr/include/SDL2/SDL_events.h"
extern __attribute__ ((visibility("default"))) void SDL_SetEventFilter(SDL_EventFilter filter,
                                                void *userdata);





extern __attribute__ ((visibility("default"))) SDL_bool SDL_GetEventFilter(SDL_EventFilter * filter,
                                                    void **userdata);




extern __attribute__ ((visibility("default"))) void SDL_AddEventWatch(SDL_EventFilter filter,
                                               void *userdata);




extern __attribute__ ((visibility("default"))) void SDL_DelEventWatch(SDL_EventFilter filter,
                                               void *userdata);





extern __attribute__ ((visibility("default"))) void SDL_FilterEvents(SDL_EventFilter filter,
                                              void *userdata);
# 733 "/usr/include/SDL2/SDL_events.h"
extern __attribute__ ((visibility("default"))) Uint8 SDL_EventState(Uint32 type, int state);
# 744 "/usr/include/SDL2/SDL_events.h"
extern __attribute__ ((visibility("default"))) Uint32 SDL_RegisterEvents(int numevents);





# 1 "/usr/include/SDL2/close_code.h" 1
# 751 "/usr/include/SDL2/SDL_events.h" 2
# 42 "/usr/include/SDL2/SDL.h" 2
# 1 "/usr/include/SDL2/SDL_filesystem.h" 1
# 33 "/usr/include/SDL2/SDL_filesystem.h"
# 1 "/usr/include/SDL2/begin_code.h" 1
# 34 "/usr/include/SDL2/SDL_filesystem.h" 2
# 63 "/usr/include/SDL2/SDL_filesystem.h"
extern __attribute__ ((visibility("default"))) char * SDL_GetBasePath(void);
# 126 "/usr/include/SDL2/SDL_filesystem.h"
extern __attribute__ ((visibility("default"))) char * SDL_GetPrefPath(const char *org, const char *app);





# 1 "/usr/include/SDL2/close_code.h" 1
# 133 "/usr/include/SDL2/SDL_filesystem.h" 2
# 43 "/usr/include/SDL2/SDL.h" 2


# 1 "/usr/include/SDL2/SDL_haptic.h" 1
# 114 "/usr/include/SDL2/SDL_haptic.h"
# 1 "/usr/include/SDL2/begin_code.h" 1
# 115 "/usr/include/SDL2/SDL_haptic.h" 2
# 129 "/usr/include/SDL2/SDL_haptic.h"
struct _SDL_Haptic;
typedef struct _SDL_Haptic SDL_Haptic;
# 437 "/usr/include/SDL2/SDL_haptic.h"
typedef struct SDL_HapticDirection
{
    Uint8 type;
    Sint32 dir[3];
} SDL_HapticDirection;
# 455 "/usr/include/SDL2/SDL_haptic.h"
typedef struct SDL_HapticConstant
{

    Uint16 type;
    SDL_HapticDirection direction;


    Uint32 length;
    Uint16 delay;


    Uint16 button;
    Uint16 interval;


    Sint16 level;


    Uint16 attack_length;
    Uint16 attack_level;
    Uint16 fade_length;
    Uint16 fade_level;
} SDL_HapticConstant;
# 536 "/usr/include/SDL2/SDL_haptic.h"
typedef struct SDL_HapticPeriodic
{

    Uint16 type;


    SDL_HapticDirection direction;


    Uint32 length;
    Uint16 delay;


    Uint16 button;
    Uint16 interval;


    Uint16 period;
    Sint16 magnitude;
    Sint16 offset;
    Uint16 phase;


    Uint16 attack_length;
    Uint16 attack_level;
    Uint16 fade_length;
    Uint16 fade_level;
} SDL_HapticPeriodic;
# 589 "/usr/include/SDL2/SDL_haptic.h"
typedef struct SDL_HapticCondition
{

    Uint16 type;

    SDL_HapticDirection direction;


    Uint32 length;
    Uint16 delay;


    Uint16 button;
    Uint16 interval;


    Uint16 right_sat[3];
    Uint16 left_sat[3];
    Sint16 right_coeff[3];
    Sint16 left_coeff[3];
    Uint16 deadband[3];
    Sint16 center[3];
} SDL_HapticCondition;
# 626 "/usr/include/SDL2/SDL_haptic.h"
typedef struct SDL_HapticRamp
{

    Uint16 type;
    SDL_HapticDirection direction;


    Uint32 length;
    Uint16 delay;


    Uint16 button;
    Uint16 interval;


    Sint16 start;
    Sint16 end;


    Uint16 attack_length;
    Uint16 attack_level;
    Uint16 fade_length;
    Uint16 fade_level;
} SDL_HapticRamp;
# 663 "/usr/include/SDL2/SDL_haptic.h"
typedef struct SDL_HapticLeftRight
{

    Uint16 type;


    Uint32 length;


    Uint16 large_magnitude;
    Uint16 small_magnitude;
} SDL_HapticLeftRight;
# 689 "/usr/include/SDL2/SDL_haptic.h"
typedef struct SDL_HapticCustom
{

    Uint16 type;
    SDL_HapticDirection direction;


    Uint32 length;
    Uint16 delay;


    Uint16 button;
    Uint16 interval;


    Uint8 channels;
    Uint16 period;
    Uint16 samples;
    Uint16 *data;


    Uint16 attack_length;
    Uint16 attack_level;
    Uint16 fade_length;
    Uint16 fade_level;
} SDL_HapticCustom;
# 785 "/usr/include/SDL2/SDL_haptic.h"
typedef union SDL_HapticEffect
{

    Uint16 type;
    SDL_HapticConstant constant;
    SDL_HapticPeriodic periodic;
    SDL_HapticCondition condition;
    SDL_HapticRamp ramp;
    SDL_HapticLeftRight leftright;
    SDL_HapticCustom custom;
} SDL_HapticEffect;
# 804 "/usr/include/SDL2/SDL_haptic.h"
extern __attribute__ ((visibility("default"))) int SDL_NumHaptics(void);
# 817 "/usr/include/SDL2/SDL_haptic.h"
extern __attribute__ ((visibility("default"))) const char * SDL_HapticName(int device_index);
# 841 "/usr/include/SDL2/SDL_haptic.h"
extern __attribute__ ((visibility("default"))) SDL_Haptic * SDL_HapticOpen(int device_index);
# 852 "/usr/include/SDL2/SDL_haptic.h"
extern __attribute__ ((visibility("default"))) int SDL_HapticOpened(int device_index);
# 863 "/usr/include/SDL2/SDL_haptic.h"
extern __attribute__ ((visibility("default"))) int SDL_HapticIndex(SDL_Haptic * haptic);
# 872 "/usr/include/SDL2/SDL_haptic.h"
extern __attribute__ ((visibility("default"))) int SDL_MouseIsHaptic(void);
# 882 "/usr/include/SDL2/SDL_haptic.h"
extern __attribute__ ((visibility("default"))) SDL_Haptic * SDL_HapticOpenFromMouse(void);
# 893 "/usr/include/SDL2/SDL_haptic.h"
extern __attribute__ ((visibility("default"))) int SDL_JoystickIsHaptic(SDL_Joystick * joystick);
# 912 "/usr/include/SDL2/SDL_haptic.h"
extern __attribute__ ((visibility("default"))) SDL_Haptic * SDL_HapticOpenFromJoystick(SDL_Joystick *
                                                               joystick);






extern __attribute__ ((visibility("default"))) void SDL_HapticClose(SDL_Haptic * haptic);
# 936 "/usr/include/SDL2/SDL_haptic.h"
extern __attribute__ ((visibility("default"))) int SDL_HapticNumEffects(SDL_Haptic * haptic);
# 952 "/usr/include/SDL2/SDL_haptic.h"
extern __attribute__ ((visibility("default"))) int SDL_HapticNumEffectsPlaying(SDL_Haptic * haptic);
# 970 "/usr/include/SDL2/SDL_haptic.h"
extern __attribute__ ((visibility("default"))) unsigned int SDL_HapticQuery(SDL_Haptic * haptic);







extern __attribute__ ((visibility("default"))) int SDL_HapticNumAxes(SDL_Haptic * haptic);
# 990 "/usr/include/SDL2/SDL_haptic.h"
extern __attribute__ ((visibility("default"))) int SDL_HapticEffectSupported(SDL_Haptic * haptic,
                                                      SDL_HapticEffect *
                                                      effect);
# 1005 "/usr/include/SDL2/SDL_haptic.h"
extern __attribute__ ((visibility("default"))) int SDL_HapticNewEffect(SDL_Haptic * haptic,
                                                SDL_HapticEffect * effect);
# 1025 "/usr/include/SDL2/SDL_haptic.h"
extern __attribute__ ((visibility("default"))) int SDL_HapticUpdateEffect(SDL_Haptic * haptic,
                                                   int effect,
                                                   SDL_HapticEffect * data);
# 1047 "/usr/include/SDL2/SDL_haptic.h"
extern __attribute__ ((visibility("default"))) int SDL_HapticRunEffect(SDL_Haptic * haptic,
                                                int effect,
                                                Uint32 iterations);
# 1061 "/usr/include/SDL2/SDL_haptic.h"
extern __attribute__ ((visibility("default"))) int SDL_HapticStopEffect(SDL_Haptic * haptic,
                                                 int effect);
# 1075 "/usr/include/SDL2/SDL_haptic.h"
extern __attribute__ ((visibility("default"))) void SDL_HapticDestroyEffect(SDL_Haptic * haptic,
                                                     int effect);
# 1090 "/usr/include/SDL2/SDL_haptic.h"
extern __attribute__ ((visibility("default"))) int SDL_HapticGetEffectStatus(SDL_Haptic * haptic,
                                                      int effect);
# 1109 "/usr/include/SDL2/SDL_haptic.h"
extern __attribute__ ((visibility("default"))) int SDL_HapticSetGain(SDL_Haptic * haptic, int gain);
# 1125 "/usr/include/SDL2/SDL_haptic.h"
extern __attribute__ ((visibility("default"))) int SDL_HapticSetAutocenter(SDL_Haptic * haptic,
                                                    int autocenter);
# 1142 "/usr/include/SDL2/SDL_haptic.h"
extern __attribute__ ((visibility("default"))) int SDL_HapticPause(SDL_Haptic * haptic);
# 1154 "/usr/include/SDL2/SDL_haptic.h"
extern __attribute__ ((visibility("default"))) int SDL_HapticUnpause(SDL_Haptic * haptic);







extern __attribute__ ((visibility("default"))) int SDL_HapticStopAll(SDL_Haptic * haptic);
# 1174 "/usr/include/SDL2/SDL_haptic.h"
extern __attribute__ ((visibility("default"))) int SDL_HapticRumbleSupported(SDL_Haptic * haptic);
# 1187 "/usr/include/SDL2/SDL_haptic.h"
extern __attribute__ ((visibility("default"))) int SDL_HapticRumbleInit(SDL_Haptic * haptic);
# 1201 "/usr/include/SDL2/SDL_haptic.h"
extern __attribute__ ((visibility("default"))) int SDL_HapticRumblePlay(SDL_Haptic * haptic, float strength, Uint32 length );
# 1213 "/usr/include/SDL2/SDL_haptic.h"
extern __attribute__ ((visibility("default"))) int SDL_HapticRumbleStop(SDL_Haptic * haptic);





# 1 "/usr/include/SDL2/close_code.h" 1
# 1220 "/usr/include/SDL2/SDL_haptic.h" 2
# 46 "/usr/include/SDL2/SDL.h" 2
# 1 "/usr/include/SDL2/SDL_hints.h" 1
# 44 "/usr/include/SDL2/SDL_hints.h"
# 1 "/usr/include/SDL2/begin_code.h" 1
# 45 "/usr/include/SDL2/SDL_hints.h" 2
# 713 "/usr/include/SDL2/SDL_hints.h"
typedef enum
{
    SDL_HINT_DEFAULT,
    SDL_HINT_NORMAL,
    SDL_HINT_OVERRIDE
} SDL_HintPriority;
# 730 "/usr/include/SDL2/SDL_hints.h"
extern __attribute__ ((visibility("default"))) SDL_bool SDL_SetHintWithPriority(const char *name,
                                                         const char *value,
                                                         SDL_HintPriority priority);






extern __attribute__ ((visibility("default"))) SDL_bool SDL_SetHint(const char *name,
                                             const char *value);






extern __attribute__ ((visibility("default"))) const char * SDL_GetHint(const char *name);






extern __attribute__ ((visibility("default"))) SDL_bool SDL_GetHintBoolean(const char *name, SDL_bool default_value);
# 763 "/usr/include/SDL2/SDL_hints.h"
typedef void (*SDL_HintCallback)(void *userdata, const char *name, const char *oldValue, const char *newValue);
extern __attribute__ ((visibility("default"))) void SDL_AddHintCallback(const char *name,
                                                 SDL_HintCallback callback,
                                                 void *userdata);
# 775 "/usr/include/SDL2/SDL_hints.h"
extern __attribute__ ((visibility("default"))) void SDL_DelHintCallback(const char *name,
                                                 SDL_HintCallback callback,
                                                 void *userdata);






extern __attribute__ ((visibility("default"))) void SDL_ClearHints(void);






# 1 "/usr/include/SDL2/close_code.h" 1
# 792 "/usr/include/SDL2/SDL_hints.h" 2
# 47 "/usr/include/SDL2/SDL.h" 2
# 1 "/usr/include/SDL2/SDL_loadso.h" 1
# 47 "/usr/include/SDL2/SDL_loadso.h"
# 1 "/usr/include/SDL2/begin_code.h" 1
# 48 "/usr/include/SDL2/SDL_loadso.h" 2
# 58 "/usr/include/SDL2/SDL_loadso.h"
extern __attribute__ ((visibility("default"))) void * SDL_LoadObject(const char *sofile);






extern __attribute__ ((visibility("default"))) void * SDL_LoadFunction(void *handle,
                                               const char *name);




extern __attribute__ ((visibility("default"))) void SDL_UnloadObject(void *handle);





# 1 "/usr/include/SDL2/close_code.h" 1
# 78 "/usr/include/SDL2/SDL_loadso.h" 2
# 48 "/usr/include/SDL2/SDL.h" 2
# 1 "/usr/include/SDL2/SDL_log.h" 1
# 42 "/usr/include/SDL2/SDL_log.h"
# 1 "/usr/include/SDL2/begin_code.h" 1
# 43 "/usr/include/SDL2/SDL_log.h" 2
# 64 "/usr/include/SDL2/SDL_log.h"
enum
{
    SDL_LOG_CATEGORY_APPLICATION,
    SDL_LOG_CATEGORY_ERROR,
    SDL_LOG_CATEGORY_ASSERT,
    SDL_LOG_CATEGORY_SYSTEM,
    SDL_LOG_CATEGORY_AUDIO,
    SDL_LOG_CATEGORY_VIDEO,
    SDL_LOG_CATEGORY_RENDER,
    SDL_LOG_CATEGORY_INPUT,
    SDL_LOG_CATEGORY_TEST,


    SDL_LOG_CATEGORY_RESERVED1,
    SDL_LOG_CATEGORY_RESERVED2,
    SDL_LOG_CATEGORY_RESERVED3,
    SDL_LOG_CATEGORY_RESERVED4,
    SDL_LOG_CATEGORY_RESERVED5,
    SDL_LOG_CATEGORY_RESERVED6,
    SDL_LOG_CATEGORY_RESERVED7,
    SDL_LOG_CATEGORY_RESERVED8,
    SDL_LOG_CATEGORY_RESERVED9,
    SDL_LOG_CATEGORY_RESERVED10,
# 96 "/usr/include/SDL2/SDL_log.h"
    SDL_LOG_CATEGORY_CUSTOM
};




typedef enum
{
    SDL_LOG_PRIORITY_VERBOSE = 1,
    SDL_LOG_PRIORITY_DEBUG,
    SDL_LOG_PRIORITY_INFO,
    SDL_LOG_PRIORITY_WARN,
    SDL_LOG_PRIORITY_ERROR,
    SDL_LOG_PRIORITY_CRITICAL,
    SDL_NUM_LOG_PRIORITIES
} SDL_LogPriority;





extern __attribute__ ((visibility("default"))) void SDL_LogSetAllPriority(SDL_LogPriority priority);




extern __attribute__ ((visibility("default"))) void SDL_LogSetPriority(int category,
                                                SDL_LogPriority priority);




extern __attribute__ ((visibility("default"))) SDL_LogPriority SDL_LogGetPriority(int category);






extern __attribute__ ((visibility("default"))) void SDL_LogResetPriorities(void);




extern __attribute__ ((visibility("default"))) void SDL_Log( const char *fmt, ...) __attribute__ (( format( __printf__, 1, 1 +1 )));




extern __attribute__ ((visibility("default"))) void SDL_LogVerbose(int category, const char *fmt, ...) __attribute__ (( format( __printf__, 2, 2 +1 )));




extern __attribute__ ((visibility("default"))) void SDL_LogDebug(int category, const char *fmt, ...) __attribute__ (( format( __printf__, 2, 2 +1 )));




extern __attribute__ ((visibility("default"))) void SDL_LogInfo(int category, const char *fmt, ...) __attribute__ (( format( __printf__, 2, 2 +1 )));




extern __attribute__ ((visibility("default"))) void SDL_LogWarn(int category, const char *fmt, ...) __attribute__ (( format( __printf__, 2, 2 +1 )));




extern __attribute__ ((visibility("default"))) void SDL_LogError(int category, const char *fmt, ...) __attribute__ (( format( __printf__, 2, 2 +1 )));




extern __attribute__ ((visibility("default"))) void SDL_LogCritical(int category, const char *fmt, ...) __attribute__ (( format( __printf__, 2, 2 +1 )));




extern __attribute__ ((visibility("default"))) void SDL_LogMessage(int category,
                                            SDL_LogPriority priority,
                                            const char *fmt, ...) __attribute__ (( format( __printf__, 3, 3 +1 )));




extern __attribute__ ((visibility("default"))) void SDL_LogMessageV(int category,
                                             SDL_LogPriority priority,
                                             const char *fmt, va_list ap);




typedef void (*SDL_LogOutputFunction)(void *userdata, int category, SDL_LogPriority priority, const char *message);




extern __attribute__ ((visibility("default"))) void SDL_LogGetOutputFunction(SDL_LogOutputFunction *callback, void **userdata);





extern __attribute__ ((visibility("default"))) void SDL_LogSetOutputFunction(SDL_LogOutputFunction callback, void *userdata);






# 1 "/usr/include/SDL2/close_code.h" 1
# 208 "/usr/include/SDL2/SDL_log.h" 2
# 49 "/usr/include/SDL2/SDL.h" 2
# 1 "/usr/include/SDL2/SDL_messagebox.h" 1
# 28 "/usr/include/SDL2/SDL_messagebox.h"
# 1 "/usr/include/SDL2/begin_code.h" 1
# 29 "/usr/include/SDL2/SDL_messagebox.h" 2
# 37 "/usr/include/SDL2/SDL_messagebox.h"
typedef enum
{
    SDL_MESSAGEBOX_ERROR = 0x00000010,
    SDL_MESSAGEBOX_WARNING = 0x00000020,
    SDL_MESSAGEBOX_INFORMATION = 0x00000040
} SDL_MessageBoxFlags;




typedef enum
{
    SDL_MESSAGEBOX_BUTTON_RETURNKEY_DEFAULT = 0x00000001,
    SDL_MESSAGEBOX_BUTTON_ESCAPEKEY_DEFAULT = 0x00000002
} SDL_MessageBoxButtonFlags;




typedef struct
{
    Uint32 flags;
    int buttonid;
    const char * text;
} SDL_MessageBoxButtonData;




typedef struct
{
    Uint8 r, g, b;
} SDL_MessageBoxColor;

typedef enum
{
    SDL_MESSAGEBOX_COLOR_BACKGROUND,
    SDL_MESSAGEBOX_COLOR_TEXT,
    SDL_MESSAGEBOX_COLOR_BUTTON_BORDER,
    SDL_MESSAGEBOX_COLOR_BUTTON_BACKGROUND,
    SDL_MESSAGEBOX_COLOR_BUTTON_SELECTED,
    SDL_MESSAGEBOX_COLOR_MAX
} SDL_MessageBoxColorType;




typedef struct
{
    SDL_MessageBoxColor colors[SDL_MESSAGEBOX_COLOR_MAX];
} SDL_MessageBoxColorScheme;




typedef struct
{
    Uint32 flags;
    SDL_Window *window;
    const char *title;
    const char *message;

    int numbuttons;
    const SDL_MessageBoxButtonData *buttons;

    const SDL_MessageBoxColorScheme *colorScheme;
} SDL_MessageBoxData;
# 119 "/usr/include/SDL2/SDL_messagebox.h"
extern __attribute__ ((visibility("default"))) int SDL_ShowMessageBox(const SDL_MessageBoxData *messageboxdata, int *buttonid);
# 133 "/usr/include/SDL2/SDL_messagebox.h"
extern __attribute__ ((visibility("default"))) int SDL_ShowSimpleMessageBox(Uint32 flags, const char *title, const char *message, SDL_Window *window);






# 1 "/usr/include/SDL2/close_code.h" 1
# 141 "/usr/include/SDL2/SDL_messagebox.h" 2
# 50 "/usr/include/SDL2/SDL.h" 2

# 1 "/usr/include/SDL2/SDL_power.h" 1
# 33 "/usr/include/SDL2/SDL_power.h"
# 1 "/usr/include/SDL2/begin_code.h" 1
# 34 "/usr/include/SDL2/SDL_power.h" 2
# 42 "/usr/include/SDL2/SDL_power.h"
typedef enum
{
    SDL_POWERSTATE_UNKNOWN,
    SDL_POWERSTATE_ON_BATTERY,
    SDL_POWERSTATE_NO_BATTERY,
    SDL_POWERSTATE_CHARGING,
    SDL_POWERSTATE_CHARGED
} SDL_PowerState;
# 65 "/usr/include/SDL2/SDL_power.h"
extern __attribute__ ((visibility("default"))) SDL_PowerState SDL_GetPowerInfo(int *secs, int *pct);





# 1 "/usr/include/SDL2/close_code.h" 1
# 72 "/usr/include/SDL2/SDL_power.h" 2
# 52 "/usr/include/SDL2/SDL.h" 2
# 1 "/usr/include/SDL2/SDL_render.h" 1
# 55 "/usr/include/SDL2/SDL_render.h"
# 1 "/usr/include/SDL2/begin_code.h" 1
# 56 "/usr/include/SDL2/SDL_render.h" 2
# 64 "/usr/include/SDL2/SDL_render.h"
typedef enum
{
    SDL_RENDERER_SOFTWARE = 0x00000001,
    SDL_RENDERER_ACCELERATED = 0x00000002,

    SDL_RENDERER_PRESENTVSYNC = 0x00000004,

    SDL_RENDERER_TARGETTEXTURE = 0x00000008

} SDL_RendererFlags;




typedef struct SDL_RendererInfo
{
    const char *name;
    Uint32 flags;
    Uint32 num_texture_formats;
    Uint32 texture_formats[16];
    int max_texture_width;
    int max_texture_height;
} SDL_RendererInfo;




typedef enum
{
    SDL_TEXTUREACCESS_STATIC,
    SDL_TEXTUREACCESS_STREAMING,
    SDL_TEXTUREACCESS_TARGET
} SDL_TextureAccess;




typedef enum
{
    SDL_TEXTUREMODULATE_NONE = 0x00000000,
    SDL_TEXTUREMODULATE_COLOR = 0x00000001,
    SDL_TEXTUREMODULATE_ALPHA = 0x00000002
} SDL_TextureModulate;




typedef enum
{
    SDL_FLIP_NONE = 0x00000000,
    SDL_FLIP_HORIZONTAL = 0x00000001,
    SDL_FLIP_VERTICAL = 0x00000002
} SDL_RendererFlip;




struct SDL_Renderer;
typedef struct SDL_Renderer SDL_Renderer;




struct SDL_Texture;
typedef struct SDL_Texture SDL_Texture;
# 144 "/usr/include/SDL2/SDL_render.h"
extern __attribute__ ((visibility("default"))) int SDL_GetNumRenderDrivers(void);
# 158 "/usr/include/SDL2/SDL_render.h"
extern __attribute__ ((visibility("default"))) int SDL_GetRenderDriverInfo(int index,
                                                    SDL_RendererInfo * info);
# 172 "/usr/include/SDL2/SDL_render.h"
extern __attribute__ ((visibility("default"))) int SDL_CreateWindowAndRenderer(
                                int width, int height, Uint32 window_flags,
                                SDL_Window **window, SDL_Renderer **renderer);
# 191 "/usr/include/SDL2/SDL_render.h"
extern __attribute__ ((visibility("default"))) SDL_Renderer * SDL_CreateRenderer(SDL_Window * window,
                                               int index, Uint32 flags);
# 204 "/usr/include/SDL2/SDL_render.h"
extern __attribute__ ((visibility("default"))) SDL_Renderer * SDL_CreateSoftwareRenderer(SDL_Surface * surface);




extern __attribute__ ((visibility("default"))) SDL_Renderer * SDL_GetRenderer(SDL_Window * window);




extern __attribute__ ((visibility("default"))) int SDL_GetRendererInfo(SDL_Renderer * renderer,
                                                SDL_RendererInfo * info);




extern __attribute__ ((visibility("default"))) int SDL_GetRendererOutputSize(SDL_Renderer * renderer,
                                                      int *w, int *h);
# 240 "/usr/include/SDL2/SDL_render.h"
extern __attribute__ ((visibility("default"))) SDL_Texture * SDL_CreateTexture(SDL_Renderer * renderer,
                                                        Uint32 format,
                                                        int access, int w,
                                                        int h);
# 258 "/usr/include/SDL2/SDL_render.h"
extern __attribute__ ((visibility("default"))) SDL_Texture * SDL_CreateTextureFromSurface(SDL_Renderer * renderer, SDL_Surface * surface);
# 273 "/usr/include/SDL2/SDL_render.h"
extern __attribute__ ((visibility("default"))) int SDL_QueryTexture(SDL_Texture * texture,
                                             Uint32 * format, int *access,
                                             int *w, int *h);
# 290 "/usr/include/SDL2/SDL_render.h"
extern __attribute__ ((visibility("default"))) int SDL_SetTextureColorMod(SDL_Texture * texture,
                                                   Uint8 r, Uint8 g, Uint8 b);
# 306 "/usr/include/SDL2/SDL_render.h"
extern __attribute__ ((visibility("default"))) int SDL_GetTextureColorMod(SDL_Texture * texture,
                                                   Uint8 * r, Uint8 * g,
                                                   Uint8 * b);
# 321 "/usr/include/SDL2/SDL_render.h"
extern __attribute__ ((visibility("default"))) int SDL_SetTextureAlphaMod(SDL_Texture * texture,
                                                   Uint8 alpha);
# 334 "/usr/include/SDL2/SDL_render.h"
extern __attribute__ ((visibility("default"))) int SDL_GetTextureAlphaMod(SDL_Texture * texture,
                                                   Uint8 * alpha);
# 351 "/usr/include/SDL2/SDL_render.h"
extern __attribute__ ((visibility("default"))) int SDL_SetTextureBlendMode(SDL_Texture * texture,
                                                    SDL_BlendMode blendMode);
# 364 "/usr/include/SDL2/SDL_render.h"
extern __attribute__ ((visibility("default"))) int SDL_GetTextureBlendMode(SDL_Texture * texture,
                                                    SDL_BlendMode *blendMode);
# 380 "/usr/include/SDL2/SDL_render.h"
extern __attribute__ ((visibility("default"))) int SDL_UpdateTexture(SDL_Texture * texture,
                                              const SDL_Rect * rect,
                                              const void *pixels, int pitch);
# 403 "/usr/include/SDL2/SDL_render.h"
extern __attribute__ ((visibility("default"))) int SDL_UpdateYUVTexture(SDL_Texture * texture,
                                                 const SDL_Rect * rect,
                                                 const Uint8 *Yplane, int Ypitch,
                                                 const Uint8 *Uplane, int Upitch,
                                                 const Uint8 *Vplane, int Vpitch);
# 424 "/usr/include/SDL2/SDL_render.h"
extern __attribute__ ((visibility("default"))) int SDL_LockTexture(SDL_Texture * texture,
                                            const SDL_Rect * rect,
                                            void **pixels, int *pitch);






extern __attribute__ ((visibility("default"))) void SDL_UnlockTexture(SDL_Texture * texture);
# 442 "/usr/include/SDL2/SDL_render.h"
extern __attribute__ ((visibility("default"))) SDL_bool SDL_RenderTargetSupported(SDL_Renderer *renderer);
# 454 "/usr/include/SDL2/SDL_render.h"
extern __attribute__ ((visibility("default"))) int SDL_SetRenderTarget(SDL_Renderer *renderer,
                                                SDL_Texture *texture);
# 464 "/usr/include/SDL2/SDL_render.h"
extern __attribute__ ((visibility("default"))) SDL_Texture * SDL_GetRenderTarget(SDL_Renderer *renderer);
# 489 "/usr/include/SDL2/SDL_render.h"
extern __attribute__ ((visibility("default"))) int SDL_RenderSetLogicalSize(SDL_Renderer * renderer, int w, int h);
# 500 "/usr/include/SDL2/SDL_render.h"
extern __attribute__ ((visibility("default"))) void SDL_RenderGetLogicalSize(SDL_Renderer * renderer, int *w, int *h);
# 514 "/usr/include/SDL2/SDL_render.h"
extern __attribute__ ((visibility("default"))) int SDL_RenderSetIntegerScale(SDL_Renderer * renderer,
                                                      SDL_bool enable);
# 524 "/usr/include/SDL2/SDL_render.h"
extern __attribute__ ((visibility("default"))) SDL_bool SDL_RenderGetIntegerScale(SDL_Renderer * renderer);
# 541 "/usr/include/SDL2/SDL_render.h"
extern __attribute__ ((visibility("default"))) int SDL_RenderSetViewport(SDL_Renderer * renderer,
                                                  const SDL_Rect * rect);






extern __attribute__ ((visibility("default"))) void SDL_RenderGetViewport(SDL_Renderer * renderer,
                                                   SDL_Rect * rect);
# 563 "/usr/include/SDL2/SDL_render.h"
extern __attribute__ ((visibility("default"))) int SDL_RenderSetClipRect(SDL_Renderer * renderer,
                                                  const SDL_Rect * rect);
# 575 "/usr/include/SDL2/SDL_render.h"
extern __attribute__ ((visibility("default"))) void SDL_RenderGetClipRect(SDL_Renderer * renderer,
                                                   SDL_Rect * rect);
# 585 "/usr/include/SDL2/SDL_render.h"
extern __attribute__ ((visibility("default"))) SDL_bool SDL_RenderIsClipEnabled(SDL_Renderer * renderer);
# 606 "/usr/include/SDL2/SDL_render.h"
extern __attribute__ ((visibility("default"))) int SDL_RenderSetScale(SDL_Renderer * renderer,
                                               float scaleX, float scaleY);
# 618 "/usr/include/SDL2/SDL_render.h"
extern __attribute__ ((visibility("default"))) void SDL_RenderGetScale(SDL_Renderer * renderer,
                                               float *scaleX, float *scaleY);
# 633 "/usr/include/SDL2/SDL_render.h"
extern __attribute__ ((visibility("default"))) int SDL_SetRenderDrawColor(SDL_Renderer * renderer,
                                           Uint8 r, Uint8 g, Uint8 b,
                                           Uint8 a);
# 649 "/usr/include/SDL2/SDL_render.h"
extern __attribute__ ((visibility("default"))) int SDL_GetRenderDrawColor(SDL_Renderer * renderer,
                                           Uint8 * r, Uint8 * g, Uint8 * b,
                                           Uint8 * a);
# 666 "/usr/include/SDL2/SDL_render.h"
extern __attribute__ ((visibility("default"))) int SDL_SetRenderDrawBlendMode(SDL_Renderer * renderer,
                                                       SDL_BlendMode blendMode);
# 679 "/usr/include/SDL2/SDL_render.h"
extern __attribute__ ((visibility("default"))) int SDL_GetRenderDrawBlendMode(SDL_Renderer * renderer,
                                                       SDL_BlendMode *blendMode);
# 690 "/usr/include/SDL2/SDL_render.h"
extern __attribute__ ((visibility("default"))) int SDL_RenderClear(SDL_Renderer * renderer);
# 701 "/usr/include/SDL2/SDL_render.h"
extern __attribute__ ((visibility("default"))) int SDL_RenderDrawPoint(SDL_Renderer * renderer,
                                                int x, int y);
# 713 "/usr/include/SDL2/SDL_render.h"
extern __attribute__ ((visibility("default"))) int SDL_RenderDrawPoints(SDL_Renderer * renderer,
                                                 const SDL_Point * points,
                                                 int count);
# 728 "/usr/include/SDL2/SDL_render.h"
extern __attribute__ ((visibility("default"))) int SDL_RenderDrawLine(SDL_Renderer * renderer,
                                               int x1, int y1, int x2, int y2);
# 740 "/usr/include/SDL2/SDL_render.h"
extern __attribute__ ((visibility("default"))) int SDL_RenderDrawLines(SDL_Renderer * renderer,
                                                const SDL_Point * points,
                                                int count);
# 752 "/usr/include/SDL2/SDL_render.h"
extern __attribute__ ((visibility("default"))) int SDL_RenderDrawRect(SDL_Renderer * renderer,
                                               const SDL_Rect * rect);
# 764 "/usr/include/SDL2/SDL_render.h"
extern __attribute__ ((visibility("default"))) int SDL_RenderDrawRects(SDL_Renderer * renderer,
                                                const SDL_Rect * rects,
                                                int count);
# 777 "/usr/include/SDL2/SDL_render.h"
extern __attribute__ ((visibility("default"))) int SDL_RenderFillRect(SDL_Renderer * renderer,
                                               const SDL_Rect * rect);
# 789 "/usr/include/SDL2/SDL_render.h"
extern __attribute__ ((visibility("default"))) int SDL_RenderFillRects(SDL_Renderer * renderer,
                                                const SDL_Rect * rects,
                                                int count);
# 805 "/usr/include/SDL2/SDL_render.h"
extern __attribute__ ((visibility("default"))) int SDL_RenderCopy(SDL_Renderer * renderer,
                                           SDL_Texture * texture,
                                           const SDL_Rect * srcrect,
                                           const SDL_Rect * dstrect);
# 825 "/usr/include/SDL2/SDL_render.h"
extern __attribute__ ((visibility("default"))) int SDL_RenderCopyEx(SDL_Renderer * renderer,
                                           SDL_Texture * texture,
                                           const SDL_Rect * srcrect,
                                           const SDL_Rect * dstrect,
                                           const double angle,
                                           const SDL_Point *center,
                                           const SDL_RendererFlip flip);
# 848 "/usr/include/SDL2/SDL_render.h"
extern __attribute__ ((visibility("default"))) int SDL_RenderReadPixels(SDL_Renderer * renderer,
                                                 const SDL_Rect * rect,
                                                 Uint32 format,
                                                 void *pixels, int pitch);




extern __attribute__ ((visibility("default"))) void SDL_RenderPresent(SDL_Renderer * renderer);







extern __attribute__ ((visibility("default"))) void SDL_DestroyTexture(SDL_Texture * texture);







extern __attribute__ ((visibility("default"))) void SDL_DestroyRenderer(SDL_Renderer * renderer);
# 885 "/usr/include/SDL2/SDL_render.h"
extern __attribute__ ((visibility("default"))) int SDL_GL_BindTexture(SDL_Texture *texture, float *texw, float *texh);
# 894 "/usr/include/SDL2/SDL_render.h"
extern __attribute__ ((visibility("default"))) int SDL_GL_UnbindTexture(SDL_Texture *texture);






# 1 "/usr/include/SDL2/close_code.h" 1
# 902 "/usr/include/SDL2/SDL_render.h" 2
# 53 "/usr/include/SDL2/SDL.h" 2

# 1 "/usr/include/SDL2/SDL_system.h" 1
# 36 "/usr/include/SDL2/SDL_system.h"
# 1 "/usr/include/SDL2/begin_code.h" 1
# 37 "/usr/include/SDL2/SDL_system.h" 2
# 212 "/usr/include/SDL2/SDL_system.h"
# 1 "/usr/include/SDL2/close_code.h" 1
# 213 "/usr/include/SDL2/SDL_system.h" 2
# 55 "/usr/include/SDL2/SDL.h" 2

# 1 "/usr/include/SDL2/SDL_timer.h" 1
# 34 "/usr/include/SDL2/SDL_timer.h"
# 1 "/usr/include/SDL2/begin_code.h" 1
# 35 "/usr/include/SDL2/SDL_timer.h" 2
# 45 "/usr/include/SDL2/SDL_timer.h"
extern __attribute__ ((visibility("default"))) Uint32 SDL_GetTicks(void);
# 61 "/usr/include/SDL2/SDL_timer.h"
extern __attribute__ ((visibility("default"))) Uint64 SDL_GetPerformanceCounter(void);




extern __attribute__ ((visibility("default"))) Uint64 SDL_GetPerformanceFrequency(void);




extern __attribute__ ((visibility("default"))) void SDL_Delay(Uint32 ms);
# 81 "/usr/include/SDL2/SDL_timer.h"
typedef Uint32 ( * SDL_TimerCallback) (Uint32 interval, void *param);




typedef int SDL_TimerID;






extern __attribute__ ((visibility("default"))) SDL_TimerID SDL_AddTimer(Uint32 interval,
                                                 SDL_TimerCallback callback,
                                                 void *param);
# 104 "/usr/include/SDL2/SDL_timer.h"
extern __attribute__ ((visibility("default"))) SDL_bool SDL_RemoveTimer(SDL_TimerID id);






# 1 "/usr/include/SDL2/close_code.h" 1
# 112 "/usr/include/SDL2/SDL_timer.h" 2
# 57 "/usr/include/SDL2/SDL.h" 2
# 1 "/usr/include/SDL2/SDL_version.h" 1
# 33 "/usr/include/SDL2/SDL_version.h"
# 1 "/usr/include/SDL2/begin_code.h" 1
# 34 "/usr/include/SDL2/SDL_version.h" 2
# 51 "/usr/include/SDL2/SDL_version.h"
typedef struct SDL_version
{
    Uint8 major;
    Uint8 minor;
    Uint8 patch;
} SDL_version;
# 133 "/usr/include/SDL2/SDL_version.h"
extern __attribute__ ((visibility("default"))) void SDL_GetVersion(SDL_version * ver);
# 142 "/usr/include/SDL2/SDL_version.h"
extern __attribute__ ((visibility("default"))) const char * SDL_GetRevision(void);
# 151 "/usr/include/SDL2/SDL_version.h"
extern __attribute__ ((visibility("default"))) int SDL_GetRevisionNumber(void);






# 1 "/usr/include/SDL2/close_code.h" 1
# 159 "/usr/include/SDL2/SDL_version.h" 2
# 58 "/usr/include/SDL2/SDL.h" 2


# 1 "/usr/include/SDL2/begin_code.h" 1
# 61 "/usr/include/SDL2/SDL.h" 2
# 92 "/usr/include/SDL2/SDL.h"
extern __attribute__ ((visibility("default"))) int SDL_Init(Uint32 flags);
# 103 "/usr/include/SDL2/SDL.h"
extern __attribute__ ((visibility("default"))) int SDL_InitSubSystem(Uint32 flags);




extern __attribute__ ((visibility("default"))) void SDL_QuitSubSystem(Uint32 flags);







extern __attribute__ ((visibility("default"))) Uint32 SDL_WasInit(Uint32 flags);





extern __attribute__ ((visibility("default"))) void SDL_Quit(void);





# 1 "/usr/include/SDL2/close_code.h" 1
# 129 "/usr/include/SDL2/SDL.h" 2
# 14 "lib/core/saturn_engine_core.h" 2
# 1 "/usr/include/SDL2/SDL_image.h" 1
# 27 "/usr/include/SDL2/SDL_image.h"
# 1 "/usr/include/SDL2/SDL.h" 1
# 28 "/usr/include/SDL2/SDL_image.h" 2

# 1 "/usr/include/SDL2/begin_code.h" 1
# 30 "/usr/include/SDL2/SDL_image.h" 2
# 56 "/usr/include/SDL2/SDL_image.h"
extern __attribute__ ((visibility("default"))) const SDL_version * IMG_Linked_Version(void);

typedef enum
{
    IMG_INIT_JPG = 0x00000001,
    IMG_INIT_PNG = 0x00000002,
    IMG_INIT_TIF = 0x00000004,
    IMG_INIT_WEBP = 0x00000008
} IMG_InitFlags;





extern __attribute__ ((visibility("default"))) int IMG_Init(int flags);


extern __attribute__ ((visibility("default"))) void IMG_Quit(void);
# 83 "/usr/include/SDL2/SDL_image.h"
extern __attribute__ ((visibility("default"))) SDL_Surface * IMG_LoadTyped_RW(SDL_RWops *src, int freesrc, const char *type);

extern __attribute__ ((visibility("default"))) SDL_Surface * IMG_Load(const char *file);
extern __attribute__ ((visibility("default"))) SDL_Surface * IMG_Load_RW(SDL_RWops *src, int freesrc);




extern __attribute__ ((visibility("default"))) SDL_Texture * IMG_LoadTexture(SDL_Renderer *renderer, const char *file);
extern __attribute__ ((visibility("default"))) SDL_Texture * IMG_LoadTexture_RW(SDL_Renderer *renderer, SDL_RWops *src, int freesrc);
extern __attribute__ ((visibility("default"))) SDL_Texture * IMG_LoadTextureTyped_RW(SDL_Renderer *renderer, SDL_RWops *src, int freesrc, const char *type);



extern __attribute__ ((visibility("default"))) int IMG_isICO(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) int IMG_isCUR(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) int IMG_isBMP(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) int IMG_isGIF(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) int IMG_isJPG(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) int IMG_isLBM(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) int IMG_isPCX(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) int IMG_isPNG(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) int IMG_isPNM(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) int IMG_isTIF(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) int IMG_isXCF(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) int IMG_isXPM(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) int IMG_isXV(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) int IMG_isWEBP(SDL_RWops *src);


extern __attribute__ ((visibility("default"))) SDL_Surface * IMG_LoadICO_RW(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) SDL_Surface * IMG_LoadCUR_RW(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) SDL_Surface * IMG_LoadBMP_RW(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) SDL_Surface * IMG_LoadGIF_RW(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) SDL_Surface * IMG_LoadJPG_RW(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) SDL_Surface * IMG_LoadLBM_RW(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) SDL_Surface * IMG_LoadPCX_RW(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) SDL_Surface * IMG_LoadPNG_RW(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) SDL_Surface * IMG_LoadPNM_RW(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) SDL_Surface * IMG_LoadTGA_RW(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) SDL_Surface * IMG_LoadTIF_RW(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) SDL_Surface * IMG_LoadXCF_RW(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) SDL_Surface * IMG_LoadXPM_RW(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) SDL_Surface * IMG_LoadXV_RW(SDL_RWops *src);
extern __attribute__ ((visibility("default"))) SDL_Surface * IMG_LoadWEBP_RW(SDL_RWops *src);

extern __attribute__ ((visibility("default"))) SDL_Surface * IMG_ReadXPMFromArray(char **xpm);


extern __attribute__ ((visibility("default"))) int IMG_SavePNG(SDL_Surface *surface, const char *file);
extern __attribute__ ((visibility("default"))) int IMG_SavePNG_RW(SDL_Surface *surface, SDL_RWops *dst, int freedst);
# 143 "/usr/include/SDL2/SDL_image.h"
# 1 "/usr/include/SDL2/close_code.h" 1
# 144 "/usr/include/SDL2/SDL_image.h" 2
# 15 "lib/core/saturn_engine_core.h" 2
# 1 "/usr/include/SDL2/SDL_mixer.h" 1
# 32 "/usr/include/SDL2/SDL_mixer.h"
# 1 "/usr/include/SDL2/begin_code.h" 1
# 33 "/usr/include/SDL2/SDL_mixer.h" 2
# 65 "/usr/include/SDL2/SDL_mixer.h"
extern __attribute__ ((visibility("default"))) const SDL_version * Mix_Linked_Version(void);

typedef enum
{
    MIX_INIT_FLAC = 0x00000001,
    MIX_INIT_MOD = 0x00000002,
    MIX_INIT_MODPLUG = 0x00000004,
    MIX_INIT_MP3 = 0x00000008,
    MIX_INIT_OGG = 0x00000010,
    MIX_INIT_FLUIDSYNTH = 0x00000020
} MIX_InitFlags;





extern __attribute__ ((visibility("default"))) int Mix_Init(int flags);


extern __attribute__ ((visibility("default"))) void Mix_Quit(void);
# 103 "/usr/include/SDL2/SDL_mixer.h"
typedef struct Mix_Chunk {
    int allocated;
    Uint8 *abuf;
    Uint32 alen;
    Uint8 volume;
} Mix_Chunk;


typedef enum {
    MIX_NO_FADING,
    MIX_FADING_OUT,
    MIX_FADING_IN
} Mix_Fading;

typedef enum {
    MUS_NONE,
    MUS_CMD,
    MUS_WAV,
    MUS_MOD,
    MUS_MID,
    MUS_OGG,
    MUS_MP3,
    MUS_MP3_MAD,
    MUS_FLAC,
    MUS_MODPLUG
} Mix_MusicType;


typedef struct _Mix_Music Mix_Music;


extern __attribute__ ((visibility("default"))) int Mix_OpenAudio(int frequency, Uint16 format, int channels, int chunksize);






extern __attribute__ ((visibility("default"))) int Mix_AllocateChannels(int numchans);




extern __attribute__ ((visibility("default"))) int Mix_QuerySpec(int *frequency,Uint16 *format,int *channels);


extern __attribute__ ((visibility("default"))) Mix_Chunk * Mix_LoadWAV_RW(SDL_RWops *src, int freesrc);

extern __attribute__ ((visibility("default"))) Mix_Music * Mix_LoadMUS(const char *file);



extern __attribute__ ((visibility("default"))) Mix_Music * Mix_LoadMUS_RW(SDL_RWops *src, int freesrc);


extern __attribute__ ((visibility("default"))) Mix_Music * Mix_LoadMUSType_RW(SDL_RWops *src, Mix_MusicType type, int freesrc);


extern __attribute__ ((visibility("default"))) Mix_Chunk * Mix_QuickLoad_WAV(Uint8 *mem);


extern __attribute__ ((visibility("default"))) Mix_Chunk * Mix_QuickLoad_RAW(Uint8 *mem, Uint32 len);


extern __attribute__ ((visibility("default"))) void Mix_FreeChunk(Mix_Chunk *chunk);
extern __attribute__ ((visibility("default"))) void Mix_FreeMusic(Mix_Music *music);
# 189 "/usr/include/SDL2/SDL_mixer.h"
extern __attribute__ ((visibility("default"))) int Mix_GetNumChunkDecoders(void);
extern __attribute__ ((visibility("default"))) const char * Mix_GetChunkDecoder(int index);
extern __attribute__ ((visibility("default"))) int Mix_GetNumMusicDecoders(void);
extern __attribute__ ((visibility("default"))) const char * Mix_GetMusicDecoder(int index);




extern __attribute__ ((visibility("default"))) Mix_MusicType Mix_GetMusicType(const Mix_Music *music);





extern __attribute__ ((visibility("default"))) void Mix_SetPostMix(void (*mix_func)(void *udata, Uint8 *stream, int len), void *arg);




extern __attribute__ ((visibility("default"))) void Mix_HookMusic(void (*mix_func)(void *udata, Uint8 *stream, int len), void *arg);




extern __attribute__ ((visibility("default"))) void Mix_HookMusicFinished(void (*music_finished)(void));


extern __attribute__ ((visibility("default"))) void * Mix_GetMusicHookData(void);
# 226 "/usr/include/SDL2/SDL_mixer.h"
extern __attribute__ ((visibility("default"))) void Mix_ChannelFinished(void (*channel_finished)(int channel));
# 250 "/usr/include/SDL2/SDL_mixer.h"
typedef void (*Mix_EffectFunc_t)(int chan, void *stream, int len, void *udata);
# 261 "/usr/include/SDL2/SDL_mixer.h"
typedef void (*Mix_EffectDone_t)(int chan, void *udata);
# 310 "/usr/include/SDL2/SDL_mixer.h"
extern __attribute__ ((visibility("default"))) int Mix_RegisterEffect(int chan, Mix_EffectFunc_t f, Mix_EffectDone_t d, void *arg);
# 321 "/usr/include/SDL2/SDL_mixer.h"
extern __attribute__ ((visibility("default"))) int Mix_UnregisterEffect(int channel, Mix_EffectFunc_t f);
# 335 "/usr/include/SDL2/SDL_mixer.h"
extern __attribute__ ((visibility("default"))) int Mix_UnregisterAllEffects(int channel);
# 375 "/usr/include/SDL2/SDL_mixer.h"
extern __attribute__ ((visibility("default"))) int Mix_SetPanning(int channel, Uint8 left, Uint8 right);
# 415 "/usr/include/SDL2/SDL_mixer.h"
extern __attribute__ ((visibility("default"))) int Mix_SetPosition(int channel, Sint16 angle, Uint8 distance);
# 445 "/usr/include/SDL2/SDL_mixer.h"
extern __attribute__ ((visibility("default"))) int Mix_SetDistance(int channel, Uint8 distance);
# 492 "/usr/include/SDL2/SDL_mixer.h"
extern __attribute__ ((visibility("default"))) int Mix_SetReverseStereo(int channel, int flip);
# 501 "/usr/include/SDL2/SDL_mixer.h"
extern __attribute__ ((visibility("default"))) int Mix_ReserveChannels(int num);
# 511 "/usr/include/SDL2/SDL_mixer.h"
extern __attribute__ ((visibility("default"))) int Mix_GroupChannel(int which, int tag);

extern __attribute__ ((visibility("default"))) int Mix_GroupChannels(int from, int to, int tag);



extern __attribute__ ((visibility("default"))) int Mix_GroupAvailable(int tag);



extern __attribute__ ((visibility("default"))) int Mix_GroupCount(int tag);

extern __attribute__ ((visibility("default"))) int Mix_GroupOldest(int tag);

extern __attribute__ ((visibility("default"))) int Mix_GroupNewer(int tag);
# 535 "/usr/include/SDL2/SDL_mixer.h"
extern __attribute__ ((visibility("default"))) int Mix_PlayChannelTimed(int channel, Mix_Chunk *chunk, int loops, int ticks);
extern __attribute__ ((visibility("default"))) int Mix_PlayMusic(Mix_Music *music, int loops);


extern __attribute__ ((visibility("default"))) int Mix_FadeInMusic(Mix_Music *music, int loops, int ms);
extern __attribute__ ((visibility("default"))) int Mix_FadeInMusicPos(Mix_Music *music, int loops, int ms, double position);

extern __attribute__ ((visibility("default"))) int Mix_FadeInChannelTimed(int channel, Mix_Chunk *chunk, int loops, int ms, int ticks);






extern __attribute__ ((visibility("default"))) int Mix_Volume(int channel, int volume);
extern __attribute__ ((visibility("default"))) int Mix_VolumeChunk(Mix_Chunk *chunk, int volume);
extern __attribute__ ((visibility("default"))) int Mix_VolumeMusic(int volume);


extern __attribute__ ((visibility("default"))) int Mix_HaltChannel(int channel);
extern __attribute__ ((visibility("default"))) int Mix_HaltGroup(int tag);
extern __attribute__ ((visibility("default"))) int Mix_HaltMusic(void);





extern __attribute__ ((visibility("default"))) int Mix_ExpireChannel(int channel, int ticks);





extern __attribute__ ((visibility("default"))) int Mix_FadeOutChannel(int which, int ms);
extern __attribute__ ((visibility("default"))) int Mix_FadeOutGroup(int tag, int ms);
extern __attribute__ ((visibility("default"))) int Mix_FadeOutMusic(int ms);


extern __attribute__ ((visibility("default"))) Mix_Fading Mix_FadingMusic(void);
extern __attribute__ ((visibility("default"))) Mix_Fading Mix_FadingChannel(int which);


extern __attribute__ ((visibility("default"))) void Mix_Pause(int channel);
extern __attribute__ ((visibility("default"))) void Mix_Resume(int channel);
extern __attribute__ ((visibility("default"))) int Mix_Paused(int channel);


extern __attribute__ ((visibility("default"))) void Mix_PauseMusic(void);
extern __attribute__ ((visibility("default"))) void Mix_ResumeMusic(void);
extern __attribute__ ((visibility("default"))) void Mix_RewindMusic(void);
extern __attribute__ ((visibility("default"))) int Mix_PausedMusic(void);







extern __attribute__ ((visibility("default"))) int Mix_SetMusicPosition(double position);




extern __attribute__ ((visibility("default"))) int Mix_Playing(int channel);
extern __attribute__ ((visibility("default"))) int Mix_PlayingMusic(void);


extern __attribute__ ((visibility("default"))) int Mix_SetMusicCMD(const char *command);


extern __attribute__ ((visibility("default"))) int Mix_SetSynchroValue(int value);
extern __attribute__ ((visibility("default"))) int Mix_GetSynchroValue(void);


extern __attribute__ ((visibility("default"))) int Mix_SetSoundFonts(const char *paths);
extern __attribute__ ((visibility("default"))) const char* Mix_GetSoundFonts(void);
extern __attribute__ ((visibility("default"))) int Mix_EachSoundFont(int (*function)(const char*, void*), void *data);




extern __attribute__ ((visibility("default"))) Mix_Chunk * Mix_GetChunk(int channel);


extern __attribute__ ((visibility("default"))) void Mix_CloseAudio(void);
# 629 "/usr/include/SDL2/SDL_mixer.h"
# 1 "/usr/include/SDL2/close_code.h" 1
# 630 "/usr/include/SDL2/SDL_mixer.h" 2
# 16 "lib/core/saturn_engine_core.h" 2






# 1 "/usr/include/fcntl.h" 1 3 4
# 28 "/usr/include/fcntl.h" 3 4







# 1 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 3 4

# 35 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 3 4
struct flock
  {
    short int l_type;
    short int l_whence;

    __off_t l_start;
    __off_t l_len;




    __pid_t l_pid;
  };
# 61 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 1 3 4
# 363 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4

# 437 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4

# 61 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 2 3 4
# 36 "/usr/include/fcntl.h" 2 3 4
# 76 "/usr/include/fcntl.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 77 "/usr/include/fcntl.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/stat.h" 1 3 4
# 46 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
struct stat
  {
    __dev_t st_dev;




    __ino_t st_ino;







    __nlink_t st_nlink;
    __mode_t st_mode;

    __uid_t st_uid;
    __gid_t st_gid;

    int __pad0;

    __dev_t st_rdev;




    __off_t st_size;



    __blksize_t st_blksize;

    __blkcnt_t st_blocks;
# 91 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 106 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
    __syscall_slong_t __glibc_reserved[3];
# 115 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
  };
# 80 "/usr/include/fcntl.h" 2 3 4
# 148 "/usr/include/fcntl.h" 3 4
extern int fcntl (int __fd, int __cmd, ...);
# 158 "/usr/include/fcntl.h" 3 4
extern int open (const char *__file, int __oflag, ...) __attribute__ ((__nonnull__ (1)));
# 182 "/usr/include/fcntl.h" 3 4
extern int openat (int __fd, const char *__file, int __oflag, ...)
     __attribute__ ((__nonnull__ (2)));
# 204 "/usr/include/fcntl.h" 3 4
extern int creat (const char *__file, mode_t __mode) __attribute__ ((__nonnull__ (1)));
# 233 "/usr/include/fcntl.h" 3 4
extern int lockf (int __fd, int __cmd, off_t __len);
# 250 "/usr/include/fcntl.h" 3 4
extern int posix_fadvise (int __fd, off_t __offset, off_t __len,
     int __advise) __attribute__ ((__nothrow__ , __leaf__));
# 272 "/usr/include/fcntl.h" 3 4
extern int posix_fallocate (int __fd, off_t __offset, off_t __len);
# 294 "/usr/include/fcntl.h" 3 4

# 23 "lib/core/saturn_engine_core.h" 2

# 1 "/usr/lib/gcc/x86_64-linux-gnu/6/include/stdbool.h" 1 3 4
# 25 "lib/core/saturn_engine_core.h" 2

# 1 "/usr/include/time.h" 1 3 4
# 29 "/usr/include/time.h" 3 4








# 1 "/usr/lib/gcc/x86_64-linux-gnu/6/include/stddef.h" 1 3 4
# 38 "/usr/include/time.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 42 "/usr/include/time.h" 2 3 4
# 131 "/usr/include/time.h" 3 4


struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  const char *tm_zone;




};








struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };


struct sigevent;
# 186 "/usr/include/time.h" 3 4



extern clock_t clock (void) __attribute__ ((__nothrow__ , __leaf__));


extern time_t time (time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));


extern double difftime (time_t __time1, time_t __time0)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern time_t mktime (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));





extern size_t strftime (char *__restrict __s, size_t __maxsize,
   const char *__restrict __format,
   const struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));

# 223 "/usr/include/time.h" 3 4
extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
     const char *__restrict __format,
     const struct tm *__restrict __tp,
     __locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));
# 236 "/usr/include/time.h" 3 4



extern struct tm *gmtime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));



extern struct tm *localtime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));





extern struct tm *gmtime_r (const time_t *__restrict __timer,
       struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));



extern struct tm *localtime_r (const time_t *__restrict __timer,
          struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));





extern char *asctime (const struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern char *ctime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));







extern char *asctime_r (const struct tm *__restrict __tp,
   char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));


extern char *ctime_r (const time_t *__restrict __timer,
        char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));




extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) __attribute__ ((__nothrow__ , __leaf__));



extern int daylight;
extern long int timezone;





extern int stime (const time_t *__when) __attribute__ ((__nothrow__ , __leaf__));
# 319 "/usr/include/time.h" 3 4
extern time_t timegm (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern time_t timelocal (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern int dysize (int __year) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 334 "/usr/include/time.h" 3 4
extern int nanosleep (const struct timespec *__requested_time,
        struct timespec *__remaining);



extern int clock_getres (clockid_t __clock_id, struct timespec *__res) __attribute__ ((__nothrow__ , __leaf__));


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern int clock_settime (clockid_t __clock_id, const struct timespec *__tp)
     __attribute__ ((__nothrow__ , __leaf__));






extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       const struct timespec *__req,
       struct timespec *__rem);


extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) __attribute__ ((__nothrow__ , __leaf__));




extern int timer_create (clockid_t __clock_id,
    struct sigevent *__restrict __evp,
    timer_t *__restrict __timerid) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_delete (timer_t __timerid) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_settime (timer_t __timerid, int __flags,
     const struct itimerspec *__restrict __value,
     struct itimerspec *__restrict __ovalue) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     __attribute__ ((__nothrow__ , __leaf__));


extern int timer_getoverrun (timer_t __timerid) __attribute__ ((__nothrow__ , __leaf__));





extern int timespec_get (struct timespec *__ts, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 430 "/usr/include/time.h" 3 4

# 27 "lib/core/saturn_engine_core.h" 2
# 1 "lib/core/saturn_engine_core_config.h" 1
# 28 "lib/core/saturn_engine_core.h" 2
# 1 "/home/ryu/bin/mruby-2.0.1/include/mruby.h" 1
# 39 "/home/ryu/bin/mruby-2.0.1/include/mruby.h"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/6/include/stddef.h" 1 3 4
# 40 "/home/ryu/bin/mruby-2.0.1/include/mruby.h" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/6/include-fixed/limits.h" 1 3 4
# 34 "/usr/lib/gcc/x86_64-linux-gnu/6/include-fixed/limits.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/6/include-fixed/syslimits.h" 1 3 4






# 1 "/usr/lib/gcc/x86_64-linux-gnu/6/include-fixed/limits.h" 1 3 4
# 168 "/usr/lib/gcc/x86_64-linux-gnu/6/include-fixed/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 143 "/usr/include/limits.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 1 3 4
# 160 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 1 3 4
# 38 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
# 39 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 2 3 4
# 161 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 2 3 4
# 144 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/posix2_lim.h" 1 3 4
# 148 "/usr/include/limits.h" 2 3 4
# 169 "/usr/lib/gcc/x86_64-linux-gnu/6/include-fixed/limits.h" 2 3 4
# 8 "/usr/lib/gcc/x86_64-linux-gnu/6/include-fixed/syslimits.h" 2 3 4
# 35 "/usr/lib/gcc/x86_64-linux-gnu/6/include-fixed/limits.h" 2 3 4
# 41 "/home/ryu/bin/mruby-2.0.1/include/mruby.h" 2
# 67 "/home/ryu/bin/mruby-2.0.1/include/mruby.h"
# 1 "/home/ryu/bin/mruby-2.0.1/include/mrbconf.h" 1
# 10 "/home/ryu/bin/mruby-2.0.1/include/mrbconf.h"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/6/include-fixed/limits.h" 1 3 4
# 11 "/home/ryu/bin/mruby-2.0.1/include/mrbconf.h" 2
# 68 "/home/ryu/bin/mruby-2.0.1/include/mruby.h" 2
# 87 "/home/ryu/bin/mruby-2.0.1/include/mruby.h"
# 1 "/home/ryu/bin/mruby-2.0.1/include/mruby/common.h" 1
# 34 "/home/ryu/bin/mruby-2.0.1/include/mruby/common.h"

# 75 "/home/ryu/bin/mruby-2.0.1/include/mruby/common.h"

# 88 "/home/ryu/bin/mruby-2.0.1/include/mruby.h" 2
# 1 "/home/ryu/bin/mruby-2.0.1/include/mruby/value.h" 1
# 10 "/home/ryu/bin/mruby-2.0.1/include/mruby/value.h"
# 1 "/home/ryu/bin/mruby-2.0.1/include/mruby/common.h" 1
# 11 "/home/ryu/bin/mruby-2.0.1/include/mruby/value.h" 2







# 17 "/home/ryu/bin/mruby-2.0.1/include/mruby/value.h"
typedef uint32_t mrb_sym;
typedef uint8_t mrb_bool;
struct mrb_state;
# 40 "/home/ryu/bin/mruby-2.0.1/include/mruby/value.h"
  typedef int64_t mrb_int;
# 67 "/home/ryu/bin/mruby-2.0.1/include/mruby/value.h"
extern double mrb_float_read(const char*, char**);



  typedef double mrb_float;
# 96 "/home/ryu/bin/mruby-2.0.1/include/mruby/value.h"
enum mrb_vtype {
  MRB_TT_FALSE = 0,
  MRB_TT_FREE,
  MRB_TT_TRUE,
  MRB_TT_FIXNUM,
  MRB_TT_SYMBOL,
  MRB_TT_UNDEF,
  MRB_TT_FLOAT,
  MRB_TT_CPTR,
  MRB_TT_OBJECT,
  MRB_TT_CLASS,
  MRB_TT_MODULE,
  MRB_TT_ICLASS,
  MRB_TT_SCLASS,
  MRB_TT_PROC,
  MRB_TT_ARRAY,
  MRB_TT_HASH,
  MRB_TT_STRING,
  MRB_TT_RANGE,
  MRB_TT_EXCEPTION,
  MRB_TT_FILE,
  MRB_TT_ENV,
  MRB_TT_DATA,
  MRB_TT_FIBER,
  MRB_TT_ISTRUCT,
  MRB_TT_BREAK,
  MRB_TT_MAXDEFINE
};

# 1 "/home/ryu/bin/mruby-2.0.1/include/mruby/object.h" 1
# 20 "/home/ryu/bin/mruby-2.0.1/include/mruby/object.h"
struct RBasic {
  enum mrb_vtype tt:8; uint32_t color:3; uint32_t flags:21; struct RClass *c; struct RBasic *gcnext;
};







struct RObject {
  enum mrb_vtype tt:8; uint32_t color:3; uint32_t flags:21; struct RClass *c; struct RBasic *gcnext;
  struct iv_tbl *iv;
};





struct RFiber {
  enum mrb_vtype tt:8; uint32_t color:3; uint32_t flags:21; struct RClass *c; struct RBasic *gcnext;
  struct mrb_context *cxt;
};
# 126 "/home/ryu/bin/mruby-2.0.1/include/mruby/value.h" 2
# 148 "/home/ryu/bin/mruby-2.0.1/include/mruby/value.h"
# 1 "/home/ryu/bin/mruby-2.0.1/include/mruby/boxing_no.h" 1
# 13 "/home/ryu/bin/mruby-2.0.1/include/mruby/boxing_no.h"
typedef struct mrb_value {
  union {

    mrb_float f;

    void *p;
    mrb_int i;
    mrb_sym sym;
  } value;
  enum mrb_vtype tt;
} mrb_value;
# 149 "/home/ryu/bin/mruby-2.0.1/include/mruby/value.h" 2
# 177 "/home/ryu/bin/mruby-2.0.1/include/mruby/value.h"
extern mrb_bool mrb_regexp_p(struct mrb_state*, mrb_value);





static inline mrb_value mrb_float_value(struct mrb_state *mrb, mrb_float f)
{
  mrb_value v;
  (void) mrb;
  do { (v).tt = MRB_TT_FLOAT; (v).value.f = (f);} while (0);
  return v;
}


static inline mrb_value
mrb_cptr_value(struct mrb_state *mrb, void *p)
{
  mrb_value v;
  (void) mrb;
  do { (v).tt = MRB_TT_CPTR; (v).value.p = p;} while (0);
  return v;
}




static inline mrb_value mrb_fixnum_value(mrb_int i)
{
  mrb_value v;
  do { (v).tt = MRB_TT_FIXNUM; (v).value.i = (i);} while (0);
  return v;
}

static inline mrb_value
mrb_symbol_value(mrb_sym i)
{
  mrb_value v;
  do { (v).tt = MRB_TT_SYMBOL; (v).value.sym = (i);} while (0);
  return v;
}

static inline mrb_value
mrb_obj_value(void *p)
{
  mrb_value v;
  do { (v).tt = (((struct RObject*)((struct RBasic*)p))->tt); (v).value.p = ((struct RBasic*)p);} while (0);
  ((void)0);
  ((void)0);
  return v;
}
# 236 "/home/ryu/bin/mruby-2.0.1/include/mruby/value.h"
static inline mrb_value mrb_nil_value(void)
{
  mrb_value v;
  do { (v).tt = MRB_TT_FALSE; (v).value.i = 0;} while (0);
  return v;
}




static inline mrb_value mrb_false_value(void)
{
  mrb_value v;
  do { (v).tt = MRB_TT_FALSE; (v).value.i = 1;} while (0);
  return v;
}




static inline mrb_value mrb_true_value(void)
{
  mrb_value v;
  do { (v).tt = MRB_TT_TRUE; (v).value.i = 1;} while (0);
  return v;
}

static inline mrb_value
mrb_bool_value(mrb_bool boolean)
{
  mrb_value v;
  do { (v).tt = boolean ? MRB_TT_TRUE : MRB_TT_FALSE; (v).value.i = 1;} while (0);
  return v;
}

static inline mrb_value
mrb_undef_value(void)
{
  mrb_value v;
  do { (v).tt = MRB_TT_UNDEF; (v).value.i = 0;} while (0);
  return v;
}
# 311 "/home/ryu/bin/mruby-2.0.1/include/mruby/value.h"

# 89 "/home/ryu/bin/mruby-2.0.1/include/mruby.h" 2
# 1 "/home/ryu/bin/mruby-2.0.1/include/mruby/gc.h" 1
# 15 "/home/ryu/bin/mruby-2.0.1/include/mruby/gc.h"



struct mrb_state;



typedef int (mrb_each_object_callback)(struct mrb_state *mrb, struct RBasic *obj, void *data);
void mrb_objspace_each_objects(struct mrb_state *mrb, mrb_each_object_callback *callback, void *data);
extern void mrb_free_context(struct mrb_state *mrb, struct mrb_context *c);





typedef enum {
  MRB_GC_STATE_ROOT = 0,
  MRB_GC_STATE_MARK,
  MRB_GC_STATE_SWEEP
} mrb_gc_state;
# 43 "/home/ryu/bin/mruby-2.0.1/include/mruby/gc.h"
typedef struct mrb_heap_page {
  struct RBasic *freelist;
  struct mrb_heap_page *prev;
  struct mrb_heap_page *next;
  struct mrb_heap_page *free_next;
  struct mrb_heap_page *free_prev;
  mrb_bool old:1;
  void *objects[];
} mrb_heap_page;





typedef struct mrb_gc {
  mrb_heap_page *heaps;
  mrb_heap_page *sweeps;
  mrb_heap_page *free_heaps;
  size_t live;



  struct RBasic **arena;
  int arena_capa;

  int arena_idx;

  mrb_gc_state state;
  int current_white_part;
  struct RBasic *gray_list;
  struct RBasic *atomic_gray_list;
  size_t live_after_mark;
  size_t threshold;
  int interval_ratio;
  int step_ratio;
  mrb_bool iterating :1;
  mrb_bool disabled :1;
  mrb_bool full :1;
  mrb_bool generational :1;
  mrb_bool out_of_memory :1;
  size_t majorgc_old_threshold;
} mrb_gc;

extern mrb_bool
mrb_object_dead_p(struct mrb_state *mrb, struct RBasic *object);


# 90 "/home/ryu/bin/mruby-2.0.1/include/mruby.h" 2
# 1 "/home/ryu/bin/mruby-2.0.1/include/mruby/version.h" 1
# 15 "/home/ryu/bin/mruby-2.0.1/include/mruby/version.h"

# 108 "/home/ryu/bin/mruby-2.0.1/include/mruby/version.h"

# 91 "/home/ryu/bin/mruby-2.0.1/include/mruby.h" 2






typedef uint8_t mrb_code;




typedef uint32_t mrb_aspec;


struct mrb_irep;
struct mrb_state;
# 117 "/home/ryu/bin/mruby-2.0.1/include/mruby.h"
typedef void* (*mrb_allocf) (struct mrb_state *mrb, void*, size_t, void *ud);





typedef struct {
  mrb_sym mid;
  struct RProc *proc;
  mrb_value *stackent;
  uint16_t ridx;
  uint16_t epos;
  struct REnv *env;
  mrb_code *pc;
  mrb_code *err;
  int argc;
  int acc;
  struct RClass *target_class;
} mrb_callinfo;

enum mrb_fiber_state {
  MRB_FIBER_CREATED = 0,
  MRB_FIBER_RUNNING,
  MRB_FIBER_RESUMED,
  MRB_FIBER_SUSPENDED,
  MRB_FIBER_TRANSFERRED,
  MRB_FIBER_TERMINATED,
};

struct mrb_context {
  struct mrb_context *prev;

  mrb_value *stack;
  mrb_value *stbase, *stend;

  mrb_callinfo *ci;
  mrb_callinfo *cibase, *ciend;

  uint16_t *rescue;
  uint16_t rsize;
  struct RProc **ensure;
  uint16_t esize, eidx;

  enum mrb_fiber_state status;
  mrb_bool vmexec;
  struct RFiber *fib;
};
# 173 "/home/ryu/bin/mruby-2.0.1/include/mruby.h"
typedef mrb_value (*mrb_func_t)(struct mrb_state *mrb, mrb_value);




typedef struct {
  mrb_bool func_p;
  union {
    struct RProc *proc;
    mrb_func_t func;
  };
} mrb_method_t;
# 195 "/home/ryu/bin/mruby-2.0.1/include/mruby.h"
struct mrb_jmpbuf;

typedef void (*mrb_atexit_func)(struct mrb_state*);




typedef struct mrb_state {
  struct mrb_jmpbuf *jmp;

  uint32_t flags;
  mrb_allocf allocf;
  void *allocf_ud;

  struct mrb_context *c;
  struct mrb_context *root_c;
  struct iv_tbl *globals;

  struct RObject *exc;

  struct RObject *top_self;
  struct RClass *object_class;
  struct RClass *class_class;
  struct RClass *module_class;
  struct RClass *proc_class;
  struct RClass *string_class;
  struct RClass *array_class;
  struct RClass *hash_class;
  struct RClass *range_class;


  struct RClass *float_class;

  struct RClass *fixnum_class;
  struct RClass *true_class;
  struct RClass *false_class;
  struct RClass *nil_class;
  struct RClass *symbol_class;
  struct RClass *kernel_module;

  struct alloca_header *mems;
  mrb_gc gc;





  mrb_sym symidx;
  struct symbol_name *symtbl;
  mrb_sym symhash[256];
  size_t symcapa;

  char symbuf[8];
# 259 "/home/ryu/bin/mruby-2.0.1/include/mruby.h"
  struct RClass *eException_class;
  struct RClass *eStandardError_class;
  struct RObject *nomem_err;
  struct RObject *stack_err;




  void *ud;




  mrb_atexit_func *atexit_stack;

  uint16_t atexit_stack_len;
  uint16_t ecall_nest;
} mrb_state;
# 299 "/home/ryu/bin/mruby-2.0.1/include/mruby.h"
extern struct RClass *mrb_define_class(mrb_state *mrb, const char *name, struct RClass *super);
# 308 "/home/ryu/bin/mruby-2.0.1/include/mruby.h"
extern struct RClass *mrb_define_module(mrb_state *, const char*);
extern mrb_value mrb_singleton_class(mrb_state*, mrb_value);
# 322 "/home/ryu/bin/mruby-2.0.1/include/mruby.h"
extern void mrb_include_module(mrb_state*, struct RClass*, struct RClass*);
# 335 "/home/ryu/bin/mruby-2.0.1/include/mruby.h"
extern void mrb_prepend_module(mrb_state*, struct RClass*, struct RClass*);
# 362 "/home/ryu/bin/mruby-2.0.1/include/mruby.h"
extern void mrb_define_method(mrb_state *mrb, struct RClass *cla, const char *name, mrb_func_t func, mrb_aspec aspec);
# 389 "/home/ryu/bin/mruby-2.0.1/include/mruby.h"
extern void mrb_define_class_method(mrb_state *, struct RClass *, const char *, mrb_func_t, mrb_aspec);
extern void mrb_define_singleton_method(mrb_state*, struct RObject*, const char*, mrb_func_t, mrb_aspec);
# 417 "/home/ryu/bin/mruby-2.0.1/include/mruby.h"
extern void mrb_define_module_function(mrb_state*, struct RClass*, const char*, mrb_func_t, mrb_aspec);
# 445 "/home/ryu/bin/mruby-2.0.1/include/mruby.h"
extern void mrb_define_const(mrb_state*, struct RClass*, const char *name, mrb_value);
# 495 "/home/ryu/bin/mruby-2.0.1/include/mruby.h"
extern void mrb_undef_method(mrb_state*, struct RClass*, const char*);
extern void mrb_undef_method_id(mrb_state*, struct RClass*, mrb_sym);
# 535 "/home/ryu/bin/mruby-2.0.1/include/mruby.h"
extern void mrb_undef_class_method(mrb_state*, struct RClass*, const char*);
# 565 "/home/ryu/bin/mruby-2.0.1/include/mruby.h"
extern mrb_value mrb_obj_new(mrb_state *mrb, struct RClass *c, mrb_int argc, const mrb_value *argv);


static inline mrb_value mrb_class_new_instance(mrb_state *mrb, mrb_int argc, const mrb_value *argv, struct RClass *c)
{
  return mrb_obj_new(mrb,c,argc,argv);
}

extern mrb_value mrb_instance_new(mrb_state *mrb, mrb_value cv);
# 594 "/home/ryu/bin/mruby-2.0.1/include/mruby.h"
extern struct RClass * mrb_class_new(mrb_state *mrb, struct RClass *super);
# 610 "/home/ryu/bin/mruby-2.0.1/include/mruby.h"
extern struct RClass * mrb_module_new(mrb_state *mrb);
# 638 "/home/ryu/bin/mruby-2.0.1/include/mruby.h"
extern mrb_bool mrb_class_defined(mrb_state *mrb, const char *name);







extern struct RClass * mrb_class_get(mrb_state *mrb, const char *name);







extern struct RClass * mrb_exc_get(mrb_state *mrb, const char *name);
# 685 "/home/ryu/bin/mruby-2.0.1/include/mruby.h"
extern mrb_bool mrb_class_defined_under(mrb_state *mrb, struct RClass *outer, const char *name);
# 694 "/home/ryu/bin/mruby-2.0.1/include/mruby.h"
extern struct RClass * mrb_class_get_under(mrb_state *mrb, struct RClass *outer, const char *name);







extern struct RClass * mrb_module_get(mrb_state *mrb, const char *name);
# 711 "/home/ryu/bin/mruby-2.0.1/include/mruby.h"
extern struct RClass * mrb_module_get_under(mrb_state *mrb, struct RClass *outer, const char *name);

extern void mrb_notimplement(mrb_state*);

extern mrb_value mrb_notimplement_m(mrb_state*, mrb_value);
# 726 "/home/ryu/bin/mruby-2.0.1/include/mruby.h"
extern mrb_value mrb_obj_dup(mrb_state *mrb, mrb_value obj);
# 768 "/home/ryu/bin/mruby-2.0.1/include/mruby.h"
extern mrb_bool mrb_obj_respond_to(mrb_state *mrb, struct RClass* c, mrb_sym mid);
# 780 "/home/ryu/bin/mruby-2.0.1/include/mruby.h"
extern struct RClass * mrb_define_class_under(mrb_state *mrb, struct RClass *outer, const char *name, struct RClass *super);

extern struct RClass * mrb_define_module_under(mrb_state *mrb, struct RClass *outer, const char *name);
# 860 "/home/ryu/bin/mruby-2.0.1/include/mruby.h"
typedef const char *mrb_args_format;
# 871 "/home/ryu/bin/mruby-2.0.1/include/mruby.h"
extern mrb_int mrb_get_args(mrb_state *mrb, mrb_args_format format, ...);

static inline mrb_sym
mrb_get_mid(mrb_state *mrb)
{
  return mrb->c->ci->mid;
}






extern mrb_int mrb_get_argc(mrb_state *mrb);

extern mrb_value* mrb_get_argv(mrb_state *mrb);
# 923 "/home/ryu/bin/mruby-2.0.1/include/mruby.h"
extern mrb_value mrb_funcall(mrb_state*, mrb_value, const char*, mrb_int,...);
# 953 "/home/ryu/bin/mruby-2.0.1/include/mruby.h"
extern mrb_value mrb_funcall_argv(mrb_state*, mrb_value, mrb_sym, mrb_int, const mrb_value*);



extern mrb_value mrb_funcall_with_block(mrb_state*, mrb_value, mrb_sym, mrb_int, const mrb_value*, mrb_value);
# 970 "/home/ryu/bin/mruby-2.0.1/include/mruby.h"
extern mrb_sym mrb_intern_cstr(mrb_state*,const char*);
extern mrb_sym mrb_intern(mrb_state*,const char*,size_t);
extern mrb_sym mrb_intern_static(mrb_state*,const char*,size_t);

extern mrb_sym mrb_intern_str(mrb_state*,mrb_value);
extern mrb_value mrb_check_intern_cstr(mrb_state*,const char*);
extern mrb_value mrb_check_intern(mrb_state*,const char*,size_t);
extern mrb_value mrb_check_intern_str(mrb_state*,mrb_value);
extern const char *mrb_sym2name(mrb_state*,mrb_sym);
extern const char *mrb_sym2name_len(mrb_state*,mrb_sym,mrb_int*);
extern mrb_value mrb_sym2str(mrb_state*,mrb_sym);

extern void *mrb_malloc(mrb_state*, size_t);
extern void *mrb_calloc(mrb_state*, size_t, size_t);
extern void *mrb_realloc(mrb_state*, void*, size_t);
extern void *mrb_realloc_simple(mrb_state*, void*, size_t);
extern void *mrb_malloc_simple(mrb_state*, size_t);
extern struct RBasic *mrb_obj_alloc(mrb_state*, enum mrb_vtype, struct RClass*);
extern void mrb_free(mrb_state*, void*);

extern mrb_value mrb_str_new(mrb_state *mrb, const char *p, size_t len);




extern mrb_value mrb_str_new_cstr(mrb_state*, const char*);
extern mrb_value mrb_str_new_static(mrb_state *mrb, const char *p, size_t len);
# 1017 "/home/ryu/bin/mruby-2.0.1/include/mruby.h"
extern mrb_state* mrb_open(void);
# 1030 "/home/ryu/bin/mruby-2.0.1/include/mruby.h"
extern mrb_state* mrb_open_allocf(mrb_allocf f, void *ud);
# 1044 "/home/ryu/bin/mruby-2.0.1/include/mruby.h"
extern mrb_state* mrb_open_core(mrb_allocf f, void *ud);







extern void mrb_close(mrb_state *mrb);






extern void* mrb_default_allocf(mrb_state*, void*, size_t, void*);

extern mrb_value mrb_top_self(mrb_state *);
extern mrb_value mrb_run(mrb_state*, struct RProc*, mrb_value);
extern mrb_value mrb_top_run(mrb_state*, struct RProc*, mrb_value, unsigned int);
extern mrb_value mrb_vm_run(mrb_state*, struct RProc*, mrb_value, unsigned int);
extern mrb_value mrb_vm_exec(mrb_state*, struct RProc*, mrb_code*);





extern void mrb_p(mrb_state*, mrb_value);
extern mrb_int mrb_obj_id(mrb_value obj);
extern mrb_sym mrb_obj_to_sym(mrb_state *mrb, mrb_value name);

extern mrb_bool mrb_obj_eq(mrb_state*, mrb_value, mrb_value);
extern mrb_bool mrb_obj_equal(mrb_state*, mrb_value, mrb_value);
extern mrb_bool mrb_equal(mrb_state *mrb, mrb_value obj1, mrb_value obj2);
extern mrb_value mrb_convert_to_integer(mrb_state *mrb, mrb_value val, mrb_int base);
extern mrb_value mrb_Integer(mrb_state *mrb, mrb_value val);

extern mrb_value mrb_Float(mrb_state *mrb, mrb_value val);

extern mrb_value mrb_inspect(mrb_state *mrb, mrb_value obj);
extern mrb_bool mrb_eql(mrb_state *mrb, mrb_value obj1, mrb_value obj2);

static inline int mrb_gc_arena_save(mrb_state*);
static inline void mrb_gc_arena_restore(mrb_state*,int);

static inline int
mrb_gc_arena_save(mrb_state *mrb)
{
  return mrb->gc.arena_idx;
}

static inline void
mrb_gc_arena_restore(mrb_state *mrb, int idx)
{
  mrb->gc.arena_idx = idx;
}

extern void mrb_garbage_collect(mrb_state*);
extern void mrb_full_gc(mrb_state*);
extern void mrb_incremental_gc(mrb_state *);
extern void mrb_gc_mark(mrb_state*,struct RBasic*);



extern void mrb_field_write_barrier(mrb_state *, struct RBasic*, struct RBasic*);



extern void mrb_write_barrier(mrb_state *, struct RBasic*);

extern mrb_value mrb_check_convert_type(mrb_state *mrb, mrb_value val, enum mrb_vtype type, const char *tname, const char *method);
extern mrb_value mrb_any_to_s(mrb_state *mrb, mrb_value obj);
extern const char * mrb_obj_classname(mrb_state *mrb, mrb_value obj);
extern struct RClass* mrb_obj_class(mrb_state *mrb, mrb_value obj);
extern mrb_value mrb_class_path(mrb_state *mrb, struct RClass *c);
extern mrb_value mrb_convert_type(mrb_state *mrb, mrb_value val, enum mrb_vtype type, const char *tname, const char *method);
extern mrb_bool mrb_obj_is_kind_of(mrb_state *mrb, mrb_value obj, struct RClass *c);
extern mrb_value mrb_obj_inspect(mrb_state *mrb, mrb_value self);
extern mrb_value mrb_obj_clone(mrb_state *mrb, mrb_value self);
# 1140 "/home/ryu/bin/mruby-2.0.1/include/mruby.h"
extern mrb_value mrb_exc_new(mrb_state *mrb, struct RClass *c, const char *ptr, size_t len);
extern _Noreturn void mrb_exc_raise(mrb_state *mrb, mrb_value exc);

extern _Noreturn void mrb_raise(mrb_state *mrb, struct RClass *c, const char *msg);
extern _Noreturn void mrb_raisef(mrb_state *mrb, struct RClass *c, const char *fmt, ...);
extern _Noreturn void mrb_name_error(mrb_state *mrb, mrb_sym id, const char *fmt, ...);
extern void mrb_warn(mrb_state *mrb, const char *fmt, ...);
extern _Noreturn void mrb_bug(mrb_state *mrb, const char *fmt, ...);
extern void mrb_print_backtrace(mrb_state *mrb);
extern void mrb_print_error(mrb_state *mrb);

extern mrb_value mrb_vformat(mrb_state *mrb, const char *format, va_list ap);
# 1178 "/home/ryu/bin/mruby-2.0.1/include/mruby.h"
extern mrb_value mrb_yield(mrb_state *mrb, mrb_value b, mrb_value arg);
extern mrb_value mrb_yield_argv(mrb_state *mrb, mrb_value b, mrb_int argc, const mrb_value *argv);
extern mrb_value mrb_yield_with_class(mrb_state *mrb, mrb_value b, mrb_int argc, const mrb_value *argv, mrb_value self, struct RClass *c);




mrb_value mrb_yield_cont(mrb_state *mrb, mrb_value b, mrb_value self, mrb_int argc, const mrb_value *argv);


extern void mrb_gc_protect(mrb_state *mrb, mrb_value obj);

extern void mrb_gc_register(mrb_state *mrb, mrb_value obj);

extern void mrb_gc_unregister(mrb_state *mrb, mrb_value obj);

extern mrb_value mrb_to_int(mrb_state *mrb, mrb_value val);

extern mrb_value mrb_to_str(mrb_state *mrb, mrb_value val);
extern void mrb_check_type(mrb_state *mrb, mrb_value x, enum mrb_vtype t);

typedef enum call_type {
  CALL_PUBLIC,
  CALL_FCALL,
  CALL_VCALL,
  CALL_TYPE_MAX
} call_type;

extern void mrb_define_alias(mrb_state *mrb, struct RClass *c, const char *a, const char *b);
extern const char *mrb_class_name(mrb_state *mrb, struct RClass* klass);
extern void mrb_define_global_const(mrb_state *mrb, const char *name, mrb_value val);

extern mrb_value mrb_attr_get(mrb_state *mrb, mrb_value obj, mrb_sym id);

extern mrb_bool mrb_respond_to(mrb_state *mrb, mrb_value obj, mrb_sym mid);
extern mrb_bool mrb_obj_is_instance_of(mrb_state *mrb, mrb_value obj, struct RClass* c);
extern mrb_bool mrb_func_basic_p(mrb_state *mrb, mrb_value obj, mrb_sym mid, mrb_func_t func);







extern mrb_value mrb_fiber_resume(mrb_state *mrb, mrb_value fib, mrb_int argc, const mrb_value *argv);






extern mrb_value mrb_fiber_yield(mrb_state *mrb, mrb_int argc, const mrb_value *argv);






extern mrb_value mrb_fiber_alive_p(mrb_state *mrb, mrb_value fib);







extern void mrb_stack_extend(mrb_state*, mrb_int);


typedef struct mrb_pool mrb_pool;
extern struct mrb_pool* mrb_pool_open(mrb_state*);
extern void mrb_pool_close(struct mrb_pool*);
extern void* mrb_pool_alloc(struct mrb_pool*, size_t);
extern void* mrb_pool_realloc(struct mrb_pool*, void*, size_t oldlen, size_t newlen);
extern mrb_bool mrb_pool_can_realloc(struct mrb_pool*, void*, size_t);
extern void* mrb_alloca(mrb_state *mrb, size_t);

extern void mrb_state_atexit(mrb_state *mrb, mrb_atexit_func func);

extern void mrb_show_version(mrb_state *mrb);
extern void mrb_show_copyright(mrb_state *mrb);

extern mrb_value mrb_format(mrb_state *mrb, const char *format, ...);
# 1289 "/home/ryu/bin/mruby-2.0.1/include/mruby.h"

# 29 "lib/core/saturn_engine_core.h" 2
# 1 "/home/ryu/bin/mruby-2.0.1/include/mruby/compile.h" 1
# 15 "/home/ryu/bin/mruby-2.0.1/include/mruby/compile.h"


# 1 "/home/ryu/bin/mruby-2.0.1/include/mruby.h" 1
# 18 "/home/ryu/bin/mruby-2.0.1/include/mruby/compile.h" 2

struct mrb_jmpbuf;

struct mrb_parser_state;

typedef struct mrbc_context {
  mrb_sym *syms;
  int slen;
  char *filename;
  short lineno;
  int (*partial_hook)(struct mrb_parser_state*);
  void *partial_data;
  struct RClass *target_class;
  mrb_bool capture_errors:1;
  mrb_bool dump_result:1;
  mrb_bool no_exec:1;
  mrb_bool keep_lv:1;
  mrb_bool no_optimize:1;
  mrb_bool on_eval:1;

  size_t parser_nerr;
} mrbc_context;

extern mrbc_context* mrbc_context_new(mrb_state *mrb);
extern void mrbc_context_free(mrb_state *mrb, mrbc_context *cxt);
extern const char *mrbc_filename(mrb_state *mrb, mrbc_context *c, const char *s);
extern void mrbc_partial_hook(mrb_state *mrb, mrbc_context *c, int (*partial_hook)(struct mrb_parser_state*), void*data);


typedef struct mrb_ast_node {
  struct mrb_ast_node *car, *cdr;
  uint16_t lineno, filename_index;
} mrb_ast_node;


enum mrb_lex_state_enum {
  EXPR_BEG,
  EXPR_END,
  EXPR_ENDARG,
  EXPR_ENDFN,
  EXPR_ARG,
  EXPR_CMDARG,
  EXPR_MID,
  EXPR_FNAME,
  EXPR_DOT,
  EXPR_CLASS,
  EXPR_VALUE,
  EXPR_MAX_STATE
};


struct mrb_parser_message {
  int lineno;
  int column;
  char* message;
};
# 84 "/home/ryu/bin/mruby-2.0.1/include/mruby/compile.h"
enum mrb_string_type {
  str_not_parsing = (0),
  str_squote = (0x01),
  str_dquote = (0x01|0x02),
  str_regexp = (0x01|0x04|0x02),
  str_sword = (0x01|0x08|0x20),
  str_dword = (0x01|0x08|0x20|0x02),
  str_ssym = (0x01|0x10),
  str_ssymbols = (0x01|0x10|0x20),
  str_dsymbols = (0x01|0x10|0x20|0x02),
  str_heredoc = (0x01|0x40),
  str_xquote = (0x01|0x80|0x02),
};


struct mrb_parser_heredoc_info {
  mrb_bool allow_indent:1;
  mrb_bool line_head:1;
  enum mrb_string_type type;
  const char *term;
  int term_len;
  mrb_ast_node *doc;
};





struct mrb_parser_state {
  mrb_state *mrb;
  struct mrb_pool *pool;
  mrb_ast_node *cells;
  const char *s, *send;

  FILE *f;

  mrbc_context *cxt;
  mrb_sym filename_sym;
  int lineno;
  int column;

  enum mrb_lex_state_enum lstate;
  mrb_ast_node *lex_strterm;

  unsigned int cond_stack;
  unsigned int cmdarg_stack;
  int paren_nest;
  int lpar_beg;
  int in_def, in_single;
  mrb_bool cmd_start:1;
  mrb_ast_node *locals;

  mrb_ast_node *pb;
  char *tokbuf;
  char buf[256];
  int tidx;
  int tsiz;

  mrb_ast_node *all_heredocs;
  mrb_ast_node *heredocs_from_nextline;
  mrb_ast_node *parsing_heredoc;
  mrb_ast_node *lex_strterm_before_heredoc;

  void *ylval;

  size_t nerr;
  size_t nwarn;
  mrb_ast_node *tree;

  mrb_bool no_optimize:1;
  mrb_bool on_eval:1;
  mrb_bool capture_errors:1;
  struct mrb_parser_message error_buffer[10];
  struct mrb_parser_message warn_buffer[10];

  mrb_sym* filename_table;
  uint16_t filename_table_length;
  uint16_t current_filename_index;

  struct mrb_jmpbuf* jmp;
};

extern struct mrb_parser_state* mrb_parser_new(mrb_state*);
extern void mrb_parser_free(struct mrb_parser_state*);
extern void mrb_parser_parse(struct mrb_parser_state*,mrbc_context*);

extern void mrb_parser_set_filename(struct mrb_parser_state*, char const*);
extern mrb_sym mrb_parser_get_filename(struct mrb_parser_state*, uint16_t idx);



extern struct mrb_parser_state* mrb_parse_file(mrb_state*,FILE*,mrbc_context*);

extern struct mrb_parser_state* mrb_parse_string(mrb_state*,const char*,mrbc_context*);
extern struct mrb_parser_state* mrb_parse_nstring(mrb_state*,const char*,size_t,mrbc_context*);
extern struct RProc* mrb_generate_code(mrb_state*, struct mrb_parser_state*);
extern mrb_value mrb_load_exec(mrb_state *mrb, struct mrb_parser_state *p, mrbc_context *c);



extern mrb_value mrb_load_file(mrb_state*,FILE*);
extern mrb_value mrb_load_file_cxt(mrb_state*,FILE*, mrbc_context *cxt);

extern mrb_value mrb_load_string(mrb_state *mrb, const char *s);
extern mrb_value mrb_load_nstring(mrb_state *mrb, const char *s, size_t len);
extern mrb_value mrb_load_string_cxt(mrb_state *mrb, const char *s, mrbc_context *cxt);
extern mrb_value mrb_load_nstring_cxt(mrb_state *mrb, const char *s, size_t len, mrbc_context *cxt);



# 30 "lib/core/saturn_engine_core.h" 2


# 1 "lib/core/saturn_engine_core_structs.h" 1
typedef struct _saten_litem {
    void *current;
    void *next;
    void *prev;


} saten_litem;

typedef struct _saten_list {
    saten_litem *head;
    saten_litem *tail;
    size_t size;
    int num;
} saten_list;

typedef struct _saten_darr {
    void *data;
    size_t size;
    int num;
} saten_darr;

typedef struct _saten_pad {
    SDL_GameController *dev;
    SDL_Joystick *jdev;
    SDL_Haptic *hdev;
    
# 26 "lib/core/saturn_engine_core_structs.h" 3 4
   _Bool 
# 26 "lib/core/saturn_engine_core_structs.h"
        can_rumble;
    int32_t state[25];
    float lang, rang;
    int jbtncnt;
    int deadzone;
    
# 31 "lib/core/saturn_engine_core_structs.h" 3 4
   _Bool 
# 31 "lib/core/saturn_engine_core_structs.h"
        flag;
} saten_pad;

typedef struct _saten_framgr {
    Uint32 t;
    Uint64 t2, t3;
    float pfreq;
    int cnt;
    float avg;
    int fps;
    int n;
} saten_framgr;

typedef struct _saten_sprite {
    SDL_Surface *srf;
    SDL_Texture *texture;
    SDL_Rect *tile;
    SDL_Rect *target;
    SDL_Rect *source;
    float scale;
    
# 51 "lib/core/saturn_engine_core_structs.h" 3 4
   _Bool 
# 51 "lib/core/saturn_engine_core_structs.h"
        centered;
} saten_sprite;

typedef struct _saten_layer {
    SDL_Surface *srf;
    SDL_Rect *clip_area;
    
# 57 "lib/core/saturn_engine_core_structs.h" 3 4
   _Bool 
# 57 "lib/core/saturn_engine_core_structs.h"
        flag;
} saten_layer;

typedef struct _saten_glyph_set {
    SDL_Texture ***glyph;
    uint8_t *glyph_width;
    uint8_t glyph_height;
    
# 64 "lib/core/saturn_engine_core_structs.h" 3 4
   _Bool 
# 64 "lib/core/saturn_engine_core_structs.h"
        is_animated;
    int cn;
    int n;
    
# 67 "lib/core/saturn_engine_core_structs.h" 3 4
   _Bool 
# 67 "lib/core/saturn_engine_core_structs.h"
        flag;
    uint8_t *anum;
} saten_glyph_set;

typedef struct _saten_glyph {
    int a, b ,c;
    int l;
    SDL_Rect rect;
    
# 75 "lib/core/saturn_engine_core_structs.h" 3 4
   _Bool 
# 75 "lib/core/saturn_engine_core_structs.h"
        is_animated;
    uint8_t anum, acnt;
} saten_glyph;

typedef struct _saten_string {
    char *d;
    size_t l;
} saten_string;

typedef struct _saten_text {

    saten_glyph *glyph;
    int size, cnt;
    float scale;
    mrb_value mrbo;
    int id;
    
# 91 "lib/core/saturn_engine_core_structs.h" 3 4
   _Bool 
# 91 "lib/core/saturn_engine_core_structs.h"
        update_flag;
} saten_text;

typedef struct _saten_spixel {
    int x, y;
    uint8_t r, g, b, a;
} saten_spixel;

typedef struct _saten_resmngr {
    saten_sprite **img;
    int img_n;
    Mix_Chunk **sfx;
    int sfx_n;
    Mix_Music **bgm;
    int bgm_n;
    saten_text **text;
    int text_n;
} saten_resmngr;
# 33 "lib/core/saturn_engine_core.h" 2
# 1 "lib/core/saturn_engine_core_declarations.h" 1

char *saten_base_path;

# 3 "lib/core/saturn_engine_core_declarations.h" 3 4
_Bool 
# 3 "lib/core/saturn_engine_core_declarations.h"
    saten_break;
saten_pad *saten_pads;
uint8_t saten_pad_num;
SDL_Window *saten_window;
SDL_Renderer *saten_ren;
saten_framgr saten_framectrl;
uint8_t saten_core_flags;
char* saten_errpath;
const uint8_t *saten_keystate;
int32_t *saten_keystate2;
uint64_t saten_step;
saten_resmngr saten_asset;

# 15 "lib/core/saturn_engine_core_declarations.h" 3 4
_Bool 
# 15 "lib/core/saturn_engine_core_declarations.h"
    *saten_sfx_flag;

saten_list *saten_list_layer;
saten_list *saten_list_text;
int saten_list_new_id;
int saten_list_look_for;
void *saten_list_found;
saten_text *saten_latest_text;
int saten_text_gheight;


saten_layer *saten_target_layer;
saten_layer *saten_layer0;
saten_glyph_set *saten_glyph_sets;
uint8_t saten_glyph_set_n;
mrb_state *saten_mrb;
mrbc_context *saten_mrbc;

struct RClass* _saten_mrb_module;
# 50 "lib/core/saturn_engine_core_declarations.h"
typedef void (*saten_fptr_void)(void);
typedef void (*saten_fptr_bool)(
# 51 "lib/core/saturn_engine_core_declarations.h" 3 4
                               _Bool
# 51 "lib/core/saturn_engine_core_declarations.h"
                                   );
typedef void (*saten_fptr_list_action)(void*, int, int);


int saten_core_init(const char *title, int screen_width, int screen_height,
        uint8_t flags);
int saten_core_run(saten_fptr_void fptr);
void saten_core_quit(void);


int saten_audio_init(void);
int saten_audio_set_sfx_vol(Mix_Chunk *sfx, int vol);
void saten_audio_sfx_play(void);
void saten_audio_sfx_set(int i);
void saten_audio_sfx_unset(int i);


void saten_draw_line(int x1, int y1, int x2, int y2, uint8_t r, uint8_t g,
        uint8_t b, uint8_t a, SDL_BlendMode blendmode);
void saten_draw_rect(int x, int y, int w, int h, uint8_t r, uint8_t g,
        uint8_t b, uint8_t a, SDL_BlendMode blendmode);
void saten_draw_rect_filled(int x, int y, int w, int h, uint8_t r, uint8_t g,
        uint8_t b, uint8_t a, SDL_BlendMode blendmode);
void saten_draw_point(int x, int y, uint8_t r, uint8_t g, uint8_t b,
        uint8_t a, SDL_BlendMode blendmode);
void saten_draw_circle(int x, int y, int rad, uint8_t r, uint8_t g, uint8_t b,
        uint8_t a, SDL_BlendMode blendmode);
void saten_draw_circle_filled(int x, int y, int rad, uint8_t r, uint8_t g,
        uint8_t b, uint8_t a, SDL_BlendMode blendmode);
void saten_draw_set_param(uint8_t r, uint8_t g, uint8_t b, uint8_t a,
        SDL_BlendMode blendmode);
void saten_draw_bresenham_circle(int x, int y, int r, 
# 82 "lib/core/saturn_engine_core_declarations.h" 3 4
                                                     _Bool 
# 82 "lib/core/saturn_engine_core_declarations.h"
                                                          fill);
void saten_draw_simple_circle(int x, int y, int r, 
# 83 "lib/core/saturn_engine_core_declarations.h" 3 4
                                                  _Bool 
# 83 "lib/core/saturn_engine_core_declarations.h"
                                                       fill);


void saten_sprite_destroy(saten_sprite *sprite);
void saten_sprite_draw(saten_sprite *sprite, int tile_id, int x, int y,
        double ang, 
# 88 "lib/core/saturn_engine_core_declarations.h" 3 4
                   _Bool 
# 88 "lib/core/saturn_engine_core_declarations.h"
                        stretch);
void saten_sprite_scale(saten_sprite *sprite, float scale);
saten_sprite* saten_sprite_load(char *filename);
void saten_sprite_texturize(saten_sprite *sprite);
void saten_sprite_set_tiles(saten_sprite *sprite, int num_h, int num_v);



void saten_sprite_alphamod(saten_sprite *sprite, uint8_t alpha);
void saten_sprite_colormod(saten_sprite *sprite, uint8_t r, uint8_t g,
        uint8_t b);
void saten_sprite_blendmode(saten_sprite *sprite, SDL_BlendMode blendmode);
void saten_sprite_repeat(saten_sprite *sprite, int tile_id, int x0, int y0,
        int w, int h);
void saten_sprite_colorize(saten_sprite *sprite, uint8_t r, uint8_t g,
        uint8_t b);
void saten_sprite_patternize0(saten_sprite *sprite);


saten_layer* saten_layer_create(int width, int height);
void saten_layer_destroy(saten_layer *lay);
void saten_layer_set_clip_area(saten_layer *lay, int x, int y, int w, int h);
void saten_layer_reset_clip_area(saten_layer *lay);
void saten_layer_render_all(void);
void saten_layer_blit(void *item, int i, int num);
void saten_layer_clear(saten_layer *layer);
void saten_layer_clear2(void *item, int i, int num);
void saten_layer_clear_all(void);
void saten_layer_alphamod(saten_layer *layer, uint8_t alpha);
void saten_layer_colormod(saten_layer *layer, uint8_t r, uint8_t g,
        uint8_t b);
void saten_layer_blendmode(saten_layer *layer, SDL_BlendMode blendmode);


void saten_set_fps(int fps);
void saten_set_stick_deadzone(int16_t dz, int i);
float saten_get_avg_fps(void);
float saten_get_left_stick_angle(int i);
float saten_get_right_stick_angle(int i);
void saten_set_target_layer(saten_layer *lay);
SDL_Haptic* saten_get_haptic(int i);



void saten_framerate_dixq_update(void);
void saten_framerate_dixq_wait(void);
void saten_framerate_update(void);
void saten_framerate_wait(void);



# 138 "lib/core/saturn_engine_core_declarations.h" 3 4
_Bool 
# 138 "lib/core/saturn_engine_core_declarations.h"
    saten_flag_check(uint8_t mask, uint8_t flag);
void saten_flag_set(uint8_t mask, uint8_t *flag);
void saten_flag_unset(uint8_t mask, uint8_t *flag);


void saten_keyb_input_refresh(void);
void saten_pad_input_refresh(int i);
void saten_pad_input_refresh_controller(int i);
void saten_pad_input_refresh_joystick(int i);
void saten_keyb_input_update(
# 147 "lib/core/saturn_engine_core_declarations.h" 3 4
                            _Bool 
# 147 "lib/core/saturn_engine_core_declarations.h"
                                 b, uint8_t i);
void saten_pad_input_update(int i, 
# 148 "lib/core/saturn_engine_core_declarations.h" 3 4
                                  _Bool 
# 148 "lib/core/saturn_engine_core_declarations.h"
                                       b, int j);
void saten_pad_axis_update(int i, int16_t k, int j);
void saten_pad_stick_angle(int i);
void saten_pad_filter_deadzone(int i);
uint32_t saten_key(uint8_t i);
uint32_t saten_btn(uint8_t i, int j);
void saten_controller_add(int i);
void saten_controller_remove(int i);


void saten_haptic_init(int i);
void saten_rumble_init(int i);
void saten_rumble(int i, float str, uint32_t l);
void saten_rumble_stop(int i);



void saten_errhandler(int i);
void saten_printerr(int i, char *str);


void saten_list_init(saten_list **lptr, size_t s);
void saten_list_insert(saten_list *lptr, saten_litem *elemptr);
void saten_list_remove(saten_list *lptr, saten_litem *elemptr);
void saten_list_search(saten_list *lptr, saten_litem *curreptr,
        saten_litem **eptr, void *item);
void saten_list_traverse(saten_list *lptr, saten_fptr_list_action fptr);
void saten_list_loop(saten_list *lptr, saten_litem *eptr, int i,
        saten_fptr_list_action fptr);


void saten_darr_init(saten_darr **sptr, size_t s);
int saten_darr_grow(saten_darr **sptr, int n);
void saten_darr_shrink(saten_darr **sptr, int n);


char* saten_get_filepath(const char *fn);
int saten_square(int a);
void saten_strcpy(char *str1, const char *str2);
void saten_strcat(char *str1, const char *str2);
struct tm* saten_localtime( const time_t *timer);
void saten_fopen(FILE **fp, const char *filename, const char *mode);
void* saten_malloc(size_t size);
void* saten_realloc(void* ptr, size_t size);

# 192 "lib/core/saturn_engine_core_declarations.h" 3 4
_Bool 
# 192 "lib/core/saturn_engine_core_declarations.h"
    saten_test_rgb(uint8_t r, uint8_t g, uint8_t b, uint8_t t);
size_t saten_intlen(int a);


uint32_t saten_pixel_get(void *data, int tupe, int x, int y);
void saten_pixel_put(void *data, int type, int x, int y, uint32_t pixel);


SDL_Surface* saten_surface_create(int w, int h, int depth);
SDL_Surface* saten_surface_get(void *data, int type);


void saten_mrb_init(void);


void saten_mrb_text_init(void);
mrb_value saten_mrb_text_glyph_init(mrb_state *mrb, mrb_value self);
mrb_value saten_mrb_text_load_glyph_file(mrb_state *mrb, mrb_value self);
mrb_value saten_mrb_text_create(mrb_state *mrb, mrb_value self);
mrb_value saten_mrb_text_free(mrb_state *mrb, mrb_value self);
mrb_value saten_mrb_text_prepare_glyph(mrb_state *mrb, mrb_value self);
mrb_value saten_mrb_text_append_glyph(mrb_state *mrb, mrb_value self);
mrb_value saten_mrb_text_set_height(mrb_state *mrb, mrb_value self);
mrb_value saten_mrb_text_get(mrb_state *mrb, mrb_value self);
mrb_value saten_mrb_text_reset(mrb_state *mrb, mrb_value self);
void saten_text_draw(saten_text *text);
saten_text* saten_text_create(float scale, char *str, int x, int y);
void saten_text_set_gheight(int a);
void saten_text_destroy(saten_text *ptr);
int saten_text_get_id(void);
void saten_text_search_id(void *item, int i, int num);
saten_text* saten_text_find(int id);
void saten_text_get(void *item, int i, int num);
void saten_nstot(saten_text *text, char *str, int col, int x, int y);
void saten_text_glyph_create(int a, int b, int c, int x, int y, int l,
        saten_text *text);
# 34 "lib/core/saturn_engine_core.h" 2
# 1 "lib/core/saturn_engine_core_list.h" 1

void saten_list_init(saten_list **lptr, size_t s)
{
    if (*lptr != 
# 4 "lib/core/saturn_engine_core_list.h" 3 4
                ((void *)0)
# 4 "lib/core/saturn_engine_core_list.h"
                    )
        saten_errhandler(13);
    *lptr = (saten_list*)saten_malloc(sizeof(saten_list));
    (*lptr)->size = s;
}


void saten_list_insert(saten_list *lptr, saten_litem *elemptr)
{

    if (lptr->num == 0) {

        lptr->head = elemptr;
    } else if (lptr->num == 1) {

        elemptr->prev = lptr->head;
        lptr->tail = elemptr;
        lptr->head->next = elemptr;
    } else {

        elemptr->prev = lptr->tail;
        lptr->tail->next = elemptr;
        lptr->tail = elemptr;
    }
    lptr->num++;
}


void saten_list_search(saten_list *lptr, saten_litem *curreptr,
        saten_litem **eptr, void *item)
{
    if (curreptr == 
# 35 "lib/core/saturn_engine_core_list.h" 3 4
                   ((void *)0)
# 35 "lib/core/saturn_engine_core_list.h"
                       )
        curreptr = lptr->head;

    if (curreptr->current == item) {
        *eptr = curreptr;
    } else if (curreptr == lptr->tail) {

    } else {
        saten_list_search(lptr, curreptr->next, eptr, item);
    }
}


void saten_list_remove(saten_list *lptr, saten_litem *elemptr)
{
    if (lptr->head == elemptr) {

        if(lptr->num == 1) {

            free(elemptr);
            lptr->head = 
# 55 "lib/core/saturn_engine_core_list.h" 3 4
                        ((void *)0)
# 55 "lib/core/saturn_engine_core_list.h"
                            ;
        } else if (lptr->num == 2) {

            free(elemptr);
            lptr->head = lptr->tail;
            lptr->tail = 
# 60 "lib/core/saturn_engine_core_list.h" 3 4
                        ((void *)0)
# 60 "lib/core/saturn_engine_core_list.h"
                            ;
            lptr->head->prev = 
# 61 "lib/core/saturn_engine_core_list.h" 3 4
                              ((void *)0)
# 61 "lib/core/saturn_engine_core_list.h"
                                  ;
        } else {

            lptr->head = lptr->head->next;
            lptr->head->prev = 
# 65 "lib/core/saturn_engine_core_list.h" 3 4
                              ((void *)0)
# 65 "lib/core/saturn_engine_core_list.h"
                                  ;
            free(elemptr);
        }
    } else if (lptr->tail == elemptr) {

        lptr->tail = lptr->tail->prev;
        lptr->tail->next = 
# 71 "lib/core/saturn_engine_core_list.h" 3 4
                          ((void *)0)
# 71 "lib/core/saturn_engine_core_list.h"
                              ;
        free(elemptr);
    } else {


        saten_litem* prev = elemptr->prev;
        saten_litem* next = elemptr->next;
        prev->next = elemptr->next;
        next->prev = elemptr->prev;
        free(elemptr);
    }
    lptr->num--;
}


void saten_list_traverse(saten_list *lptr, saten_fptr_list_action fptr)
{
    if (lptr->head)
        saten_list_loop(lptr, lptr->head, 0, fptr);
}


void saten_list_loop(saten_list *lptr, saten_litem *eptr, int i,
        saten_fptr_list_action fptr)
{
    if (i < lptr->num) {
        fptr(eptr->current, i, lptr->num);
        saten_list_loop(lptr, eptr->next, i+1, fptr);
    }
}
# 35 "lib/core/saturn_engine_core.h" 2
# 1 "lib/core/saturn_engine_core_darray.h" 1
# 55 "lib/core/saturn_engine_core_darray.h"
void saten_darr_init(saten_darr **sptr, size_t s)
{
    if (*sptr != 
# 57 "lib/core/saturn_engine_core_darray.h" 3 4
                ((void *)0)
# 57 "lib/core/saturn_engine_core_darray.h"
                    )
        saten_errhandler(13);
    *sptr = (saten_darr*)saten_malloc(sizeof(saten_darr));
    (*sptr)->size = s;
}


int saten_darr_grow(saten_darr **sptr, int n)
{
    int i = (*sptr)->num;
    (*sptr)->num += n;
    (*sptr)->data = saten_realloc((*sptr)->data, (*sptr)->num * (*sptr)->size);
    return i;
}





void saten_darr_shrink(saten_darr **sptr, int n)
{
    (*sptr)->num -= n;
    (*sptr)->data = saten_realloc((*sptr)->data, (*sptr)->num * (*sptr)->size);
}
# 36 "lib/core/saturn_engine_core.h" 2
# 1 "lib/core/saturn_engine_core_framerate.h" 1


void saten_framerate_dixq_update(void)
{
    if (saten_framectrl.cnt == 0) {
        saten_framectrl.t = SDL_GetTicks();
    }
    if (saten_framectrl.cnt == saten_framectrl.n) {
        Uint32 t = SDL_GetTicks();
        saten_framectrl.avg = 1000.0f /
            ((t - saten_framectrl.t) / (float) saten_framectrl.fps);
        saten_framectrl.cnt = 0;
        saten_framectrl.t = t;
    }
    saten_framectrl.cnt++;
}



void saten_framerate_dixq_wait(void)
{
    Uint32 t2 = SDL_GetTicks() - saten_framectrl.t;
    int w = saten_framectrl.cnt * 1000 / saten_framectrl.fps - t2;
    if (w > 0)
        SDL_Delay(w);
}


void saten_framerate_update(void)
{
    saten_framectrl.t2 = SDL_GetPerformanceCounter();
    if (saten_framectrl.cnt == 0)
        saten_framectrl.t3 = SDL_GetPerformanceCounter();
    if (saten_framectrl.cnt == saten_framectrl.fps) {
        Uint64 delta = saten_framectrl.t2 - saten_framectrl.t3;
        float deltaf = (float)delta;
        deltaf = (deltaf / saten_framectrl.pfreq) * 1000.0f;

        saten_framectrl.avg = 1000.0f / (deltaf / (float)saten_framectrl.fps);
        saten_framectrl.cnt = 0;
        saten_framectrl.t3 = saten_framectrl.t2;
    }
    saten_framectrl.cnt++;
}


void saten_framerate_wait(void)
{
    Uint64 delta = SDL_GetPerformanceCounter() - saten_framectrl.t2;
    float deltaf = (float)delta;
    deltaf = (deltaf / saten_framectrl.pfreq) * 1000.0f;
    float goalf = 1000.0f / (float)saten_framectrl.fps;
# 62 "lib/core/saturn_engine_core_framerate.h"
    if (deltaf > goalf) {

    }
    while (deltaf < goalf) {
        delta = SDL_GetPerformanceCounter() - saten_framectrl.t2;
        deltaf = (float)delta;
        deltaf = (deltaf / saten_framectrl.pfreq) * 1000.0f;
    }

}
# 37 "lib/core/saturn_engine_core.h" 2
# 1 "lib/core/saturn_engine_core_main.h" 1
int saten_core_run(saten_fptr_void fptr)
{
    while (!saten_break) {

        saten_framerate_update();
        if (saten_flag_check((1 << 6), saten_core_flags)) {
            SDL_Event sdl_event;
            while (SDL_PollEvent(&sdl_event) != 0) {
                if (sdl_event.type == SDL_QUIT)
                    saten_break = 
# 10 "lib/core/saturn_engine_core_main.h" 3 4
                                 1
# 10 "lib/core/saturn_engine_core_main.h"
                                     ;
                if (sdl_event.type == SDL_JOYDEVICEREMOVED) {


                    printf("removed controller id: %d\n", sdl_event.jdevice.which);
                    saten_controller_remove(sdl_event.jdevice.which);
                }
                if (sdl_event.type == SDL_JOYDEVICEADDED) {
                    printf("added controller id: %d\n", sdl_event.jdevice.which);
                    saten_controller_add(sdl_event.jdevice.which);
                }
            }
            SDL_PumpEvents();
            saten_keystate = SDL_GetKeyboardState(
# 23 "lib/core/saturn_engine_core_main.h" 3 4
                                                 ((void *)0)
# 23 "lib/core/saturn_engine_core_main.h"
                                                     );
            saten_keyb_input_refresh();
            if (saten_pad_num > 0) {
                for (int i = 0; i < saten_pad_num; i++) {
                    if (saten_pads[i].flag)
                        saten_pad_input_refresh(i);
                }
            }
        }
        if (SDL_RenderClear(saten_ren) < 0)
            saten_errhandler(6);


        fptr();
        SDL_RenderPresent(saten_ren);

        saten_framerate_wait();
        saten_step++;
    }
    return 0;
}

int saten_core_init(const char *title, int screen_width, int screen_height,
        uint8_t flags)
{
    saten_step = 0;
    saten_flag_set(flags, &saten_core_flags);
    if (!(saten_base_path = SDL_GetBasePath())) {
        fprintf(
# 51 "lib/core/saturn_engine_core_main.h" 3 4
               stderr
# 51 "lib/core/saturn_engine_core_main.h"
                     , "Failed to acquire base path. (%s)\n", SDL_GetError());
        return -1;
    }
    if (saten_flag_check((1 << 7), saten_core_flags))
        saten_errpath = saten_get_filepath("error.log");

    if (SDL_Init(0x00000020u | 0x00000010u | 0x00000200u |
                0x00002000u | 0x00001000u)<0) {
        saten_errhandler(0);
        return -1;
    }

    if (saten_audio_init() < 0)
        return -1;
# 73 "lib/core/saturn_engine_core_main.h"
    if ((saten_window = SDL_CreateWindow(title, (0x1FFF0000u|(0)),
                    (0x1FFF0000u|(0)), screen_width, screen_height,
                    SDL_WINDOW_SHOWN)) == 
# 75 "lib/core/saturn_engine_core_main.h" 3 4
                                         ((void *)0)
# 75 "lib/core/saturn_engine_core_main.h"
                                             ) {
        saten_errhandler(3);
        return -1;
    }

    saten_ren = SDL_CreateRenderer(saten_window, -1, SDL_RENDERER_ACCELERATED);
    if (saten_ren == 
# 81 "lib/core/saturn_engine_core_main.h" 3 4
                    ((void *)0)
# 81 "lib/core/saturn_engine_core_main.h"
                        ) {
        saten_errhandler(4);
        return -1;
    }



    if (saten_flag_check((1 << 6), saten_core_flags)) {
        saten_keystate2 = (int32_t*)saten_malloc(60*sizeof(int32_t));
    }

    if (saten_flag_check((1 << 6), saten_core_flags)) {
        if (SDL_GameControllerAddMappingsFromRW(SDL_RWFromFile("gamecontrollerdb.txt", "rb"), 1)<0)
            saten_errhandler(12);

    }

    saten_list_init(&saten_list_layer, sizeof(saten_layer));
    saten_layer0 = saten_layer_create(screen_width, screen_height);
    saten_layer0->flag = 0;
    saten_layer0->clip_area = (SDL_Rect*)saten_malloc(sizeof(SDL_Rect));
    saten_set_target_layer(
# 102 "lib/core/saturn_engine_core_main.h" 3 4
                          ((void *)0)
# 102 "lib/core/saturn_engine_core_main.h"
                              );


    saten_framectrl.fps = 60;
    saten_framectrl.pfreq = (float)SDL_GetPerformanceFrequency();


    if (saten_flag_check((1 << 4), saten_core_flags)) {
        saten_mrb = mrb_open();
        if (!saten_mrb) {
            saten_errhandler(34);
            return -1;
        }
        saten_mrbc = mrbc_context_new(saten_mrb);
        saten_mrb_init();

        if (saten_flag_check((1 << 3), saten_core_flags)) {
            saten_mrb_text_init();
            saten_list_init(&saten_list_text, sizeof(saten_text));
            FILE *f = 
# 121 "lib/core/saturn_engine_core_main.h" 3 4
                     ((void *)0)
# 121 "lib/core/saturn_engine_core_main.h"
                         ;
            saten_fopen(&f, "script/saten_script_glyph_mapping.rb", "r");
            mrb_load_file_cxt(saten_mrb, f, saten_mrbc);
            fclose(f);
            saten_fopen(&f, "script/saten_script_class_text.rb", "r");
            mrb_load_file_cxt(saten_mrb, f, saten_mrbc);
            fclose(f);
            saten_fopen(&f, "script/saten_script_text_init.rb", "r");
            mrb_load_file_cxt(saten_mrb, f, saten_mrbc);
            fclose(f);
        }
    }





    return 0;
}

void saten_core_quit(void)
{
    if (saten_flag_check((1 << 4), saten_core_flags)) {
        mrbc_context_free(saten_mrb, saten_mrbc);
        mrb_close(saten_mrb);
    }
}
# 38 "lib/core/saturn_engine_core.h" 2
# 1 "lib/core/saturn_engine_core_getset.h" 1
void saten_set_fps(int fps)
{
    saten_framectrl.fps = fps;
}

void saten_set_stick_deadzone(int16_t dz, int i)
{
    saten_pads[i].deadzone = dz;
}

float saten_get_avg_fps(void)
{
    return saten_framectrl.avg;
}

float saten_get_right_stick_angle(int i)
{
    return saten_pads[i].rang;
}

float saten_get_left_stick_angle(int i)
{
    return saten_pads[i].lang;
}


void saten_set_target_layer(saten_layer *lay)
{
    saten_target_layer = lay;
}

SDL_Haptic* saten_get_haptic(int i)
{
    return saten_pads[i].hdev;
}
# 39 "lib/core/saturn_engine_core.h" 2
# 1 "lib/core/saturn_engine_core_flag.h" 1

# 1 "lib/core/saturn_engine_core_flag.h" 3 4
_Bool 
# 1 "lib/core/saturn_engine_core_flag.h"
    saten_flag_check(uint8_t mask, uint8_t flag)
{
    return ((flag & mask) != 0);
}

void saten_flag_set(uint8_t mask, uint8_t *flag)
{
    *flag |= mask;
}

void saten_flag_unset(uint8_t mask, uint8_t *flag)
{
    *flag &= ~mask;
}
# 40 "lib/core/saturn_engine_core.h" 2
# 1 "lib/core/saturn_engine_core_util.h" 1

char* saten_get_filepath(const char *fn)
{
    char *res =
        (char*)malloc(strlen(saten_base_path)+1+strlen(fn));
    if (res == 
# 6 "lib/core/saturn_engine_core_util.h" 3 4
              ((void *)0)
# 6 "lib/core/saturn_engine_core_util.h"
                  ) {
        return 
# 7 "lib/core/saturn_engine_core_util.h" 3 4
              ((void *)0)
# 7 "lib/core/saturn_engine_core_util.h"
                  ;
    }
    saten_strcpy(res, saten_base_path);
    saten_strcat(res, fn);
    return res;
}


void* saten_malloc(size_t size)
{
    void *ptr = 
# 17 "lib/core/saturn_engine_core_util.h" 3 4
               ((void *)0)
# 17 "lib/core/saturn_engine_core_util.h"
                   ;
    ptr = malloc(size);
    if (ptr == 
# 19 "lib/core/saturn_engine_core_util.h" 3 4
              ((void *)0)
# 19 "lib/core/saturn_engine_core_util.h"
                  ) {
        saten_errhandler(7);
    } else {
        memset(ptr, 0, size);
    }
    return ptr;
}


void* saten_realloc(void* ptr, size_t size)
{
    ptr = realloc(ptr, size);
    if (ptr == 
# 31 "lib/core/saturn_engine_core_util.h" 3 4
              ((void *)0)
# 31 "lib/core/saturn_engine_core_util.h"
                  )
        saten_errhandler(7);
    return ptr;
}



# 37 "lib/core/saturn_engine_core_util.h" 3 4
_Bool 
# 37 "lib/core/saturn_engine_core_util.h"
    saten_test_rgb(uint8_t r, uint8_t g, uint8_t b, uint8_t t)
{
    return (r == t && g == t && b == t);
}



size_t saten_intlen(int a)
{
    int8_t add = 1;
    if (a < 0)
        add += 1;
    if (a == 0)
        return 1;
    else
        return floor(log10(abs(a))) + add;
}


int saten_square(int a)
{
    return a * a;
}


void saten_strcpy(char *str1, const char *str2)
{



    strcpy(str1, str2);

}


void saten_strcat(char *str1, const char *str2)
{



    strcat(str1, str2);

}


struct tm* saten_localtime( const time_t *timer)
{






    return localtime(timer);

}


void saten_fopen(FILE **fp, const char *filename, const char *mode)
{




    *fp = fopen(filename, mode);

}
# 41 "lib/core/saturn_engine_core.h" 2
# 1 "lib/core/saturn_engine_core_error.h" 1
void saten_errhandler(int i)
{
    if (!saten_flag_check((1 << 7), saten_core_flags))
        return;

    switch (i) {
    case 0:
        saten_printerr(i, "Failed to initialize SDL");
        break;
    case 1:
        saten_printerr(i, "Failed to initialize audio module");
        break;
    case 2:
        saten_printerr(i, "Failed to initialize font module");
        break;
    case 3:
        saten_printerr(i, "Failed to initialize window");
        break;
    case 4:
        saten_printerr(i, "Failed to initialize renderer");
        break;
    case 5:
        saten_printerr(i, "Failed to open controller");
        break;
    case 6:
        saten_printerr(i, "Failed to clear renderer");
        break;
    case 7:
        saten_printerr(i, "Failed to allocate memory");
        break;
    case 8:
        saten_printerr(i, "Failed to open haptic device");
        break;
    case 9:
        saten_printerr(i, "Failed to check for rumble support");
        break;
    case 10:
        saten_printerr(i, "Failed to start rumble");
        break;
    case 11:
        saten_printerr(i, "Failed to stop rumble");
        break;
    case 12:
        saten_printerr(i, "Failed reading controller db file");
        break;
    case 13:
        saten_printerr(i, "Pointer to initialize is not null");
        break;
    case 14:
        saten_printerr(i, "Failed creating texture from surface");
        break;
    case 15:
        saten_printerr(i, "Failed to copy sprite surface");
        break;
    case 16:
        saten_printerr(i, "Failed copying texture to renderer");
        break;
    case 17:
        saten_printerr(i, "Failed creating new surface for layer");
        break;
    case 18:
        saten_printerr(i, "Failed creating texture from zero layer");
        break;
    case 19:
        saten_printerr(i, "Failed copying zero layer texture to renderer");
        break;
    case 20:
        saten_printerr(i, "Failed setting surface alpha mod");
        break;
    case 21:
        saten_printerr(i, "Failed setting texture alpha mod");
        break;
    case 22:
        saten_printerr(i, "Failed setting surface color mod");
        break;
    case 23:
        saten_printerr(i, "Failed setting texture color mod");
        break;
    case 24:
        saten_printerr(i, "Failed setting surface blend mode");
        break;
    case 25:
        saten_printerr(i, "Failed setting texture blend mode");
        break;
    case 26:
        saten_printerr(i, "Failed setting render draw color");
        break;
    case 27:
        saten_printerr(i, "Failed setting render draw blend mode");
        break;
    case 28:
        saten_printerr(i, "Failed to draw line to renderer");
        break;
    case 29:
        saten_printerr(i, "Failed to draw rect to renderer");
        break;
    case 30:
        saten_printerr(i, "Failed to draw point to renderer");
        break;
    case 31:
        saten_printerr(i, "Failed to blit surface");
        break;
    case 32:
        saten_printerr(i, "Can't get texture of sprite w/o surface");
        break;
    case 33:
        saten_printerr(i, "Failed to load image via IMG_load");
        break;
    case 34:
        saten_printerr(i, "Failed to setup mrb state");
        break;
    case 35:
        saten_printerr(i, "ID out of range");
        break;
    case 36:
        saten_printerr(i, "Glyph set already defined");
        break;
    case 37:
        saten_printerr(i, "Colors must not be larger than number of h items");
        break;
    case 38:
        saten_printerr(i, "A scene needs to be created before calling saten_run()");
        break;
    }
}

void saten_printerr(int i, char *str)
{

    fprintf(
# 130 "lib/core/saturn_engine_core_error.h" 3 4
           stderr
# 130 "lib/core/saturn_engine_core_error.h"
                 , "ERROR(%d) : %s. (%s)\n", i, str, SDL_GetError());

    time_t t = time(
# 132 "lib/core/saturn_engine_core_error.h" 3 4
                   ((void *)0)
# 132 "lib/core/saturn_engine_core_error.h"
                       );
    struct tm *tm;
    tm = saten_localtime(&t);

    SDL_RWops *errlog = SDL_RWFromFile(saten_errpath, "a");
    char buffer[1024] = { 0 };



    snprintf(buffer, 1024, "ERROR(%d) | %d-%d-%d %d:%d:%d | %s. (%s)\n", i,
            tm->tm_year + 1900, tm->tm_mon + 1, tm->tm_mday, tm->tm_hour,
            tm->tm_min, tm->tm_sec, str, SDL_GetError());

    (errlog)->write(errlog, buffer, sizeof(char), strlen(buffer));


    (errlog)->close(errlog);



}
# 42 "lib/core/saturn_engine_core.h" 2
# 1 "lib/core/saturn_engine_core_input.h" 1
# 1 "lib/core/saturn_engine_core_input_header.h" 1
# 2 "lib/core/saturn_engine_core_input.h" 2
# 1 "lib/core/saturn_engine_core_keyboard.h" 1
void saten_keyb_input_refresh(void)
{
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_0], 0);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_1], 1);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_2], 2);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_3], 3);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_4], 4);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_5], 5);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_6], 6);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_7], 7);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_8], 8);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_9], 9);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_BACKSPACE], 36);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_CAPSLOCK], 37);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_ESCAPE], 38);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_F1], 39);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_F2], 40);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_F3], 41);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_F4], 42);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_F5], 43);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_F6], 44);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_F7], 45);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_F8], 46);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_F9], 47);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_F10], 48);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_F11], 49);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_F12], 50);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_LCTRL]||
            saten_keystate[SDL_SCANCODE_RCTRL], 51);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_LALT]||
            saten_keystate[SDL_SCANCODE_RALT], 52);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_LSHIFT]||
            saten_keystate[SDL_SCANCODE_RSHIFT], 53);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_SPACE], 54);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_UP], 55);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_LEFT], 56);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_RIGHT], 57);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_DOWN], 58);
    saten_keyb_input_update(saten_keystate[SDL_SCANCODE_RETURN], 59);
    if (saten_flag_check((1 << 5), saten_core_flags)) {
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_a)],
                10);
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_b)],
                11);
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_c)],
                12);
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_d)],
                13);
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_e)],
                14);
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_f)],
                15);
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_g)],
                16);
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_h)],
                17);
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_i)],
                18);
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_j)],
                19);
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_k)],
                20);
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_l)],
                21);
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_m)],
                22);
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_n)],
                23);
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_o)],
                24);
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_p)],
                25);
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_q)],
                26);
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_r)],
                27);
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_s)],
                28);
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_t)],
                29);
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_u)],
                30);
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_v)],
                31);
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_w)],
                32);
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_x)],
                33);
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_y)],
                34);
        saten_keyb_input_update(saten_keystate[SDL_GetScancodeFromKey(SDLK_z)],
                35);
    } else {
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_A], 10);
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_B], 11);
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_C], 12);
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_D], 13);
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_E], 14);
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_F], 15);
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_G], 16);
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_H], 17);
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_I], 18);
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_J], 19);
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_K], 20);
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_L], 21);
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_M], 22);
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_N], 23);
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_O], 24);
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_P], 25);
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_Q], 26);
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_R], 27);
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_S], 28);
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_T], 29);
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_U], 30);
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_V], 31);
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_W], 32);
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_X], 33);
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_Y], 34);
        saten_keyb_input_update(saten_keystate[SDL_SCANCODE_Z], 35);
    }
}

uint32_t saten_key(uint8_t i)
{
    return saten_keystate2[i];
}

void saten_keyb_input_update(
# 128 "lib/core/saturn_engine_core_keyboard.h" 3 4
                            _Bool 
# 128 "lib/core/saturn_engine_core_keyboard.h"
                                 b, uint8_t i)
{
    if (b) {
        uint32_t tmp = saten_keystate2[i];
        saten_keystate2[i] = (saten_keystate2[i] < 4294967295) ? tmp+1 : 1;
    } else {
        saten_keystate2[i] = 0;
    }
}
# 3 "lib/core/saturn_engine_core_input.h" 2
# 1 "lib/core/saturn_engine_core_controller.h" 1
void saten_pad_input_refresh(int i)
{
    if (saten_pads[i].dev)
        saten_pad_input_refresh_controller(i);
    if (saten_pads[i].jdev)
        saten_pad_input_refresh_joystick(i);
}

uint32_t saten_btn(uint8_t i, int j)
{
    if (saten_pad_num >= j+1) {
        if (saten_pads[j].flag)
            return saten_pads[j].state[i];
        else
            return 0;
    }
    return 0;
}

void saten_pad_input_update(int i, 
# 20 "lib/core/saturn_engine_core_controller.h" 3 4
                                  _Bool 
# 20 "lib/core/saturn_engine_core_controller.h"
                                       b, int j)
{
    if (b) {
        uint32_t tmp = saten_pads[i].state[j];
        saten_pads[i].state[j] =
            (saten_pads[i].state[j] < 4294967295) ? tmp+1 : 1;
    } else {
        saten_pads[i].state[j] = 0;
    }
}

void saten_pad_axis_update(int i, int16_t k, int j)
{
    saten_pads[i].state[j] = k;
}

void saten_pad_filter_deadzone(int i)
{
    float l = sqrtf((float)saten_square(saten_pads[i].state[18]) +
        (float)saten_square(saten_pads[i].state[19]));
    if ( l < saten_pads[i].deadzone) {
        saten_pads[i].state[18] = 0;
        saten_pads[i].state[19] = 0;
    }
    l = sqrtf((float)saten_square(saten_pads[i].state[20]) +
        (float)saten_square(saten_pads[i].state[21]));
    if ( l < saten_pads[i].deadzone) {
        saten_pads[i].state[20] = 0;
        saten_pads[i].state[21] = 0;
    }
}

void saten_pad_stick_angle(int i)
{
    saten_pads[i].lang = 180+atan2f((float)saten_pads[i].state[19],
            (float)saten_pads[i].state[18]) * (180 / 
# 55 "lib/core/saturn_engine_core_controller.h" 3 4
                                                              3.14159265358979323846
# 55 "lib/core/saturn_engine_core_controller.h"
                                                                  );
    if (!saten_pads[i].state[18] &&
            !saten_pads[i].state[19])
        saten_pads[i].lang = 0.0f;

    saten_pads[i].rang = 180+atan2f((float)saten_pads[i].state[21],
            (float)saten_pads[i].state[20]) * (180 / 
# 61 "lib/core/saturn_engine_core_controller.h" 3 4
                                                              3.14159265358979323846
# 61 "lib/core/saturn_engine_core_controller.h"
                                                                  );
    if (!saten_pads[i].state[20] &&
            !saten_pads[i].state[21])
        saten_pads[i].rang = 0.0f;
}

void saten_pad_input_refresh_controller(int i)
{
    saten_pad_input_update(i, SDL_GameControllerGetButton(saten_pads[i].dev,
                SDL_CONTROLLER_BUTTON_INVALID), 0);
    saten_pad_input_update(i, SDL_GameControllerGetButton(saten_pads[i].dev,
                SDL_CONTROLLER_BUTTON_A), 1);
    saten_pad_input_update(i, SDL_GameControllerGetButton(saten_pads[i].dev,
                SDL_CONTROLLER_BUTTON_B), 2);
    saten_pad_input_update(i, SDL_GameControllerGetButton(saten_pads[i].dev,
                SDL_CONTROLLER_BUTTON_X), 3);
    saten_pad_input_update(i, SDL_GameControllerGetButton(saten_pads[i].dev,
                SDL_CONTROLLER_BUTTON_Y), 4);
    saten_pad_input_update(i, SDL_GameControllerGetButton(saten_pads[i].dev,
                SDL_CONTROLLER_BUTTON_BACK), 5);
    saten_pad_input_update(i, SDL_GameControllerGetButton(saten_pads[i].dev,
                SDL_CONTROLLER_BUTTON_GUIDE), 6);
    saten_pad_input_update(i, SDL_GameControllerGetButton(saten_pads[i].dev,
                SDL_CONTROLLER_BUTTON_START), 7);
    saten_pad_input_update(i, SDL_GameControllerGetButton(saten_pads[i].dev,
                SDL_CONTROLLER_BUTTON_LEFTSTICK), 8);
    saten_pad_input_update(i, SDL_GameControllerGetButton(saten_pads[i].dev,
                SDL_CONTROLLER_BUTTON_RIGHTSTICK), 9);
    saten_pad_input_update(i, SDL_GameControllerGetButton(saten_pads[i].dev,
                SDL_CONTROLLER_BUTTON_LEFTSHOULDER), 10);
    saten_pad_input_update(i, SDL_GameControllerGetButton(saten_pads[i].dev,
                SDL_CONTROLLER_BUTTON_RIGHTSHOULDER), 11);
    saten_pad_input_update(i, SDL_GameControllerGetButton(saten_pads[i].dev,
                SDL_CONTROLLER_BUTTON_DPAD_UP), 12);
    saten_pad_input_update(i, SDL_GameControllerGetButton(saten_pads[i].dev,
                SDL_CONTROLLER_BUTTON_DPAD_DOWN), 13);
    saten_pad_input_update(i, SDL_GameControllerGetButton(saten_pads[i].dev,
                SDL_CONTROLLER_BUTTON_DPAD_LEFT), 14);
    saten_pad_input_update(i, SDL_GameControllerGetButton(saten_pads[i].dev,
                SDL_CONTROLLER_BUTTON_DPAD_RIGHT), 15);
    saten_pad_input_update(i, SDL_GameControllerGetButton(saten_pads[i].dev,
                SDL_CONTROLLER_BUTTON_MAX), 16);

    saten_pad_axis_update(i, SDL_GameControllerGetAxis(saten_pads[i].dev,
                SDL_CONTROLLER_AXIS_INVALID), 17);
    saten_pad_axis_update(i, SDL_GameControllerGetAxis(saten_pads[i].dev,
                SDL_CONTROLLER_AXIS_LEFTX), 18);
    saten_pad_axis_update(i, SDL_GameControllerGetAxis(saten_pads[i].dev,
                SDL_CONTROLLER_AXIS_LEFTY), 19);
    saten_pad_axis_update(i, SDL_GameControllerGetAxis(saten_pads[i].dev,
                SDL_CONTROLLER_AXIS_RIGHTX), 20);
    saten_pad_axis_update(i, SDL_GameControllerGetAxis(saten_pads[i].dev,
                SDL_CONTROLLER_AXIS_RIGHTY), 21);
    saten_pad_axis_update(i, SDL_GameControllerGetAxis(saten_pads[i].dev,
                SDL_CONTROLLER_AXIS_TRIGGERLEFT), 22);
    saten_pad_axis_update(i, SDL_GameControllerGetAxis(saten_pads[i].dev,
                SDL_CONTROLLER_AXIS_TRIGGERRIGHT), 23);
    saten_pad_axis_update(i, SDL_GameControllerGetAxis(saten_pads[i].dev,
                SDL_CONTROLLER_AXIS_MAX), 24);
    if (saten_pads[i].deadzone > 0)
        saten_pad_filter_deadzone(i);
    saten_pad_stick_angle(i);
}

void saten_pad_input_refresh_joystick(int i)
{
    saten_pad_input_update(i,SDL_JoystickGetButton(saten_pads[i].jdev,0),0);
    saten_pad_input_update(i,SDL_JoystickGetButton(saten_pads[i].jdev,1),1);
    saten_pad_input_update(i,SDL_JoystickGetButton(saten_pads[i].jdev,2),2);
    saten_pad_input_update(i,SDL_JoystickGetButton(saten_pads[i].jdev,3),3);
    saten_pad_input_update(i,SDL_JoystickGetButton(saten_pads[i].jdev,4),4);
    saten_pad_input_update(i,SDL_JoystickGetButton(saten_pads[i].jdev,5),5);
    saten_pad_input_update(i,SDL_JoystickGetButton(saten_pads[i].jdev,6),6);
    saten_pad_input_update(i,SDL_JoystickGetButton(saten_pads[i].jdev,7),7);
    saten_pad_input_update(i,SDL_JoystickGetButton(saten_pads[i].jdev,8),8);
    saten_pad_input_update(i,SDL_JoystickGetButton(saten_pads[i].jdev,9),9);
    saten_pad_input_update(i,SDL_JoystickGetButton(saten_pads[i].jdev,10),10);
    saten_pad_input_update(i,SDL_JoystickGetButton(saten_pads[i].jdev,11),11);
    saten_pad_input_update(i,SDL_JoystickGetButton(saten_pads[i].jdev,12),12);
    saten_pad_input_update(i,SDL_JoystickGetButton(saten_pads[i].jdev,13),13);
    saten_pad_input_update(i,SDL_JoystickGetButton(saten_pads[i].jdev,14),14);
    saten_pad_input_update(i,SDL_JoystickGetButton(saten_pads[i].jdev,15),15);
    saten_pad_input_update(i,SDL_JoystickGetButton(saten_pads[i].jdev,16),16);

    saten_pad_axis_update(i,SDL_JoystickGetAxis(saten_pads[i].jdev,0),18);
    saten_pad_axis_update(i,SDL_JoystickGetAxis(saten_pads[i].jdev,1),19);
    saten_pad_axis_update(i,SDL_JoystickGetAxis(saten_pads[i].jdev,2),20);
    saten_pad_axis_update(i,SDL_JoystickGetAxis(saten_pads[i].jdev,3),21);
    saten_pad_axis_update(i,SDL_JoystickGetAxis(saten_pads[i].jdev,4),22);
    saten_pad_axis_update(i,SDL_JoystickGetAxis(saten_pads[i].jdev,5),23);
    if (saten_pads[i].deadzone > 0)
        saten_pad_filter_deadzone(i);
    saten_pad_stick_angle(i);
}

void saten_controller_add(int i)
{
    if (SDL_NumJoysticks() > saten_pad_num) {
        saten_pad_num = SDL_NumJoysticks();
        saten_pads = (saten_pad*) realloc(saten_pads, saten_pad_num*
                sizeof(saten_pad));
        if (saten_pads == 
# 162 "lib/core/saturn_engine_core_controller.h" 3 4
                         ((void *)0)
# 162 "lib/core/saturn_engine_core_controller.h"
                             ) {
            saten_errhandler(7);
        }
        memset(&saten_pads[i], 0, sizeof(saten_pad));
    }
    if (SDL_IsGameController(i)) {
        saten_pads[i].dev = SDL_GameControllerOpen(i);
        if (saten_pads[i].dev == 
# 169 "lib/core/saturn_engine_core_controller.h" 3 4
                                ((void *)0)
# 169 "lib/core/saturn_engine_core_controller.h"
                                    ) {
            saten_errhandler(5);
        } else {
            saten_pads[i].flag = 
# 172 "lib/core/saturn_engine_core_controller.h" 3 4
                                1
# 172 "lib/core/saturn_engine_core_controller.h"
                                    ;
            saten_haptic_init(i);
        }
    } else {

        saten_pads[i].jdev = SDL_JoystickOpen(i);
        if (saten_pads[i].jdev == 
# 178 "lib/core/saturn_engine_core_controller.h" 3 4
                                 ((void *)0)
# 178 "lib/core/saturn_engine_core_controller.h"
                                     ) {
            saten_errhandler(5);
        } else {

            saten_pads[i].flag = 
# 182 "lib/core/saturn_engine_core_controller.h" 3 4
                                1
# 182 "lib/core/saturn_engine_core_controller.h"
                                    ;
        }
    }
}

void saten_controller_remove(int i)
{
    if (SDL_IsGameController(i)) {
        SDL_GameControllerClose(saten_pads[i].dev);
    } else {
        SDL_JoystickClose(saten_pads[i].jdev);
    }
    memset(&saten_pads[i],0, sizeof(saten_pad));
}
# 3 "lib/core/saturn_engine_core_input.h" 2
# 43 "lib/core/saturn_engine_core.h" 2
# 1 "lib/core/saturn_engine_core_haptic.h" 1
void saten_rumble(int i, float str, uint32_t l)
{
    if (saten_pads[i].can_rumble) {
        if (SDL_HapticRumblePlay(saten_pads[i].hdev, str, l) < 0) {

            saten_errhandler(10);
        }
    }
}

void saten_rumble_stop(int i)
{
    if (SDL_HapticRumbleStop(saten_pads[i].hdev) < 0) {

        saten_errhandler(11);
    }
}

void saten_haptic_init(int i)
{

    saten_pads[i].hdev = SDL_HapticOpenFromJoystick(
            SDL_GameControllerGetJoystick(saten_pads[i].dev));
    if (saten_pads[i].hdev == 
# 24 "lib/core/saturn_engine_core_haptic.h" 3 4
                             ((void *)0)
# 24 "lib/core/saturn_engine_core_haptic.h"
                                 ) {
        saten_errhandler(8);
    } else {
        saten_rumble_init(i);
    }
}

void saten_rumble_init(int i)
{

    int b;
    if ((b = SDL_HapticRumbleSupported(saten_pads[i].hdev)) >= 0) {
        if (b) {
            if (SDL_HapticRumbleInit(saten_pads[i].hdev) < 0) {

                saten_errhandler(9);
            } else {

                saten_pads[i].can_rumble = b;
            }
        }
    } else {
        saten_errhandler(9);
    }
}
# 44 "lib/core/saturn_engine_core.h" 2
# 1 "lib/core/saturn_engine_core_draw.h" 1

void saten_draw_line(int x1, int y1, int x2, int y2, uint8_t r, uint8_t g,
        uint8_t b, uint8_t a, SDL_BlendMode blendmode)
{
    if (saten_target_layer == 
# 5 "lib/core/saturn_engine_core_draw.h" 3 4
                             ((void *)0)
# 5 "lib/core/saturn_engine_core_draw.h"
                                 ) {
        saten_draw_set_param(r, g, b, a, blendmode);
        if (SDL_RenderDrawLine(saten_ren, x1, y1, x2, y2) < 0)
            saten_errhandler(28);
    } else {

    }
}


void saten_draw_rect(int x, int y, int w, int h, uint8_t r, uint8_t g,
        uint8_t b, uint8_t a, SDL_BlendMode blendmode)
{
    if (saten_target_layer == 
# 18 "lib/core/saturn_engine_core_draw.h" 3 4
                             ((void *)0)
# 18 "lib/core/saturn_engine_core_draw.h"
                                 ) {
        saten_draw_set_param(r, g, b, a, blendmode);
        SDL_Rect rect = { x, y, w, h };
        if (SDL_RenderDrawRect(saten_ren, &rect) < 0)
            saten_errhandler(29);
    } else {

    }
}


void saten_draw_rect_filled(int x, int y, int w, int h, uint8_t r, uint8_t g,
        uint8_t b, uint8_t a, SDL_BlendMode blendmode)
{
    if (saten_target_layer == 
# 32 "lib/core/saturn_engine_core_draw.h" 3 4
                             ((void *)0)
# 32 "lib/core/saturn_engine_core_draw.h"
                                 ) {
        saten_draw_set_param(r, g, b, a, blendmode);
        SDL_Rect rect = { x, y, w, h };
        if (SDL_RenderFillRect(saten_ren, &rect) < 0)
            saten_errhandler(29);
    } else {

    }
}


void saten_draw_point(int x, int y, uint8_t r, uint8_t g, uint8_t b,
        uint8_t a, SDL_BlendMode blendmode)
{
    if (saten_target_layer == 
# 46 "lib/core/saturn_engine_core_draw.h" 3 4
                             ((void *)0)
# 46 "lib/core/saturn_engine_core_draw.h"
                                 ) {
        saten_draw_set_param(r, g, b, a, blendmode);
        if (SDL_RenderDrawPoint(saten_ren, x, y) < 0)
            saten_errhandler(30);
    } else {

    }
}


void saten_draw_circle(int x, int y, int rad, uint8_t r, uint8_t g, uint8_t b,
        uint8_t a, SDL_BlendMode blendmode)
{
    if (saten_target_layer == 
# 59 "lib/core/saturn_engine_core_draw.h" 3 4
                             ((void *)0)
# 59 "lib/core/saturn_engine_core_draw.h"
                                 ) {
        saten_draw_set_param(r, g, b, a, blendmode);
        saten_draw_bresenham_circle(x, y, rad, 
# 61 "lib/core/saturn_engine_core_draw.h" 3 4
                                              0
# 61 "lib/core/saturn_engine_core_draw.h"
                                                   );
    } else {

    }
}


void saten_draw_circle_filled(int x, int y, int rad, uint8_t r, uint8_t g,
        uint8_t b, uint8_t a, SDL_BlendMode blendmode)
{
    if (saten_target_layer == 
# 71 "lib/core/saturn_engine_core_draw.h" 3 4
                             ((void *)0)
# 71 "lib/core/saturn_engine_core_draw.h"
                                 ) {
        saten_draw_set_param(r, g, b, a, blendmode);
        saten_draw_simple_circle(x, y, rad, 
# 73 "lib/core/saturn_engine_core_draw.h" 3 4
                                           1
# 73 "lib/core/saturn_engine_core_draw.h"
                                               );
    } else {

    }
}


void saten_draw_set_param(uint8_t r, uint8_t g, uint8_t b, uint8_t a,
        SDL_BlendMode blendmode)
{
    if (SDL_SetRenderDrawColor(saten_ren, r, g, b, a) < 0)
        saten_errhandler(26);
    if (SDL_SetRenderDrawBlendMode(saten_ren, blendmode) < 0)
        saten_errhandler(27);
}


void saten_draw_simple_circle(int x, int y, int r, 
# 90 "lib/core/saturn_engine_core_draw.h" 3 4
                                                  _Bool 
# 90 "lib/core/saturn_engine_core_draw.h"
                                                       fill)
{

    int boundary = r * r;


    int rect_x0 = x - r + 1;
    int rect_y0 = y - r + 1;

    int rect_x1 = x + r - 1;
    int rect_y1 = y + r - 1;

    int dx = 0;
    int dy = 0;

    for (int i = rect_y0; i <= rect_y1; i++) {

        dy = i - y;
        for (int j = rect_x0; j <= rect_x1; j++) {
            dx = j - x;

            if (fill) {
                if ((dx * dx + dy * dy) <= boundary) {
                    if (SDL_RenderDrawPoint(saten_ren, j, i) < 0)
                        saten_errhandler(30);
                }
            } else {

                if ((dx * dx + dy * dy) == boundary) {
                    if (SDL_RenderDrawPoint(saten_ren, j, i) < 0)
                        saten_errhandler(30);
                }
            }
        }
    }
}


void saten_draw_bresenham_circle(int x, int y, int r, 
# 128 "lib/core/saturn_engine_core_draw.h" 3 4
                                                     _Bool 
# 128 "lib/core/saturn_engine_core_draw.h"
                                                          fill)
{
    int x1 = r - 1;
    int y1 = 0;
    int dx = 1;
    int dy = 1;
    int err = dx - (r << 1);


    while (x1 >= y1) {

        if (fill) {
            if (SDL_RenderDrawLine(saten_ren,
                        x - x1, y + y1, x + x1, y + y1) < 0)
                saten_errhandler(28);
            if (SDL_RenderDrawLine(saten_ren,
                        x - y1, y + x1, x + y1, y + x1) < 0)
                saten_errhandler(28);
            if (SDL_RenderDrawLine(saten_ren,
                        x - x1, y - y1, x + x1, y - y1) < 0)
                saten_errhandler(28);
            if (SDL_RenderDrawLine(saten_ren,
                        x - y1, y - x1, x + y1, y - x1) < 0)
                saten_errhandler(28);
        } else {
            if (SDL_RenderDrawPoint(saten_ren, x + x1, y + y1) < 0)
                saten_errhandler(30);
            if (SDL_RenderDrawPoint(saten_ren, x - x1, y + y1) < 0)
                saten_errhandler(30);
            if (SDL_RenderDrawPoint(saten_ren, x + y1, y + x1) < 0)
                saten_errhandler(30);
            if (SDL_RenderDrawPoint(saten_ren, x - y1, y + x1) < 0)
                saten_errhandler(30);

            if (SDL_RenderDrawPoint(saten_ren, x - x1, y - y1) < 0)
                saten_errhandler(30);
            if (SDL_RenderDrawPoint(saten_ren, x + x1, y - y1) < 0)
                saten_errhandler(30);
            if (SDL_RenderDrawPoint(saten_ren, x - y1, y - x1) < 0)
                saten_errhandler(30);
            if (SDL_RenderDrawPoint(saten_ren, x + y1, y - x1) < 0)
                saten_errhandler(30);
        }
        if (err <= 0) {
            y1++;
            err += dy;
            dy += 2;
        }
        if (err > 0) {
            x1--;
            dx += 2;
            err += dx - (r << 1);
        }
    }
}
# 45 "lib/core/saturn_engine_core.h" 2
# 1 "lib/core/saturn_engine_core_layer.h" 1

void saten_layer_set_clip_area(saten_layer *lay, int x, int y, int w, int h)
{
    if (lay->clip_area == 
# 4 "lib/core/saturn_engine_core_layer.h" 3 4
                         ((void *)0)
# 4 "lib/core/saturn_engine_core_layer.h"
                             )
        lay->clip_area = (SDL_Rect*)saten_malloc(sizeof(SDL_Rect));
    lay->clip_area->x = x;
    lay->clip_area->y = y;
    lay->clip_area->w = w;
    lay->clip_area->h = h;

    SDL_SetClipRect(lay->srf, lay->clip_area);
}


void saten_layer_reset_clip_area(saten_layer *lay)
{
    if (lay->clip_area != 
# 17 "lib/core/saturn_engine_core_layer.h" 3 4
                         ((void *)0)
# 17 "lib/core/saturn_engine_core_layer.h"
                             )
        free (lay->clip_area);
    lay->clip_area = 
# 19 "lib/core/saturn_engine_core_layer.h" 3 4
                    ((void *)0)
# 19 "lib/core/saturn_engine_core_layer.h"
                        ;
}


saten_layer* saten_layer_create(int width, int height) {
    saten_layer *lay = (saten_layer*)saten_malloc(sizeof(saten_layer));


    SDL_Surface *surface = 
# 27 "lib/core/saturn_engine_core_layer.h" 3 4
                          ((void *)0)
# 27 "lib/core/saturn_engine_core_layer.h"
                              ;
    surface = saten_surface_create(width, height, 32);

    lay->srf = surface;
    lay->flag = 
# 31 "lib/core/saturn_engine_core_layer.h" 3 4
               1
# 31 "lib/core/saturn_engine_core_layer.h"
                   ;


    saten_litem *elem = (saten_litem*)saten_malloc(sizeof(saten_litem));
    elem->current = (void*) lay;
    saten_list_insert(saten_list_layer, elem);
    return lay;
}


void saten_layer_destroy(saten_layer *lay)
{
    saten_litem* eptr = 
# 43 "lib/core/saturn_engine_core_layer.h" 3 4
                       ((void *)0)
# 43 "lib/core/saturn_engine_core_layer.h"
                           ;
    saten_list_search(saten_list_layer, 
# 44 "lib/core/saturn_engine_core_layer.h" 3 4
                                       ((void *)0)
# 44 "lib/core/saturn_engine_core_layer.h"
                                           , &eptr, (void*)lay);
    SDL_FreeSurface(lay->srf);
    free(lay->clip_area);
    saten_list_remove(saten_list_layer, eptr);
    free(lay);
}





void saten_layer_render_all(void)
{
    if (saten_list_layer->num <= 1)
        return;

    saten_fptr_list_action fptr = saten_layer_blit;
    saten_list_traverse(saten_list_layer, fptr);

}


void saten_layer_clear_all(void)
{
    if (saten_list_layer->num <= 1)
        return;

    saten_fptr_list_action fptr = saten_layer_clear2;
    saten_list_traverse(saten_list_layer, fptr);
}


void saten_layer_clear(saten_layer *layer)
{
    SDL_FillRect(layer->srf, 
# 78 "lib/core/saturn_engine_core_layer.h" 3 4
                            ((void *)0)
# 78 "lib/core/saturn_engine_core_layer.h"
                                , SDL_MapRGBA(layer->srf->format,
                0, 0, 0, 0));
}


void saten_layer_alphamod(saten_layer *layer, uint8_t alpha)
{
    int r;
    if (layer->srf) {
        r = SDL_SetSurfaceAlphaMod(layer->srf, alpha);
        if (r < 0)
            saten_errhandler(20);
    }
}

void saten_layer_colormod(saten_layer *layer, uint8_t r, uint8_t g,
        uint8_t b)
{
    int res;
    if (layer->srf) {
        res = SDL_SetSurfaceColorMod(layer->srf, r, g, b);
        if (res < 0)
            saten_errhandler(22);
    }
}

void saten_layer_blendmode(saten_layer *layer, SDL_BlendMode blendmode)
{
    int r;
    if (layer->srf) {
        r = SDL_SetSurfaceBlendMode(layer->srf, blendmode);
        if (r < 0)
            saten_errhandler(24);
    }
}


void saten_layer_clear2(void *item, int i, int num)
{
    saten_layer *layer = (saten_layer*) item;
    if (i > 0)
        saten_layer_clear(layer);
}


void saten_layer_blit(void *item, int i, int num)
{
    saten_layer *layer = (saten_layer*) item;
    if (layer->flag) {
        int r = SDL_UpperBlit(layer->srf, 
# 127 "lib/core/saturn_engine_core_layer.h" 3 4
                                           ((void *)0)
# 127 "lib/core/saturn_engine_core_layer.h"
                                               , saten_layer0->srf,
                        saten_layer0->clip_area);
        if (r < 0)
            saten_errhandler(31);
    }
    if (i == num-1) {
        SDL_Texture *zt = SDL_CreateTextureFromSurface(saten_ren,
                saten_layer0->srf);
        if (zt == 
# 135 "lib/core/saturn_engine_core_layer.h" 3 4
                 ((void *)0)
# 135 "lib/core/saturn_engine_core_layer.h"
                     ) {
            saten_errhandler(18);
            return;
        }
        if (SDL_RenderCopy(saten_ren, zt, 
# 139 "lib/core/saturn_engine_core_layer.h" 3 4
                                         ((void *)0)
# 139 "lib/core/saturn_engine_core_layer.h"
                                             , 
# 139 "lib/core/saturn_engine_core_layer.h" 3 4
                                               ((void *)0)
# 139 "lib/core/saturn_engine_core_layer.h"
                                                   ) == -1)
            saten_errhandler(19);
        SDL_DestroyTexture(zt);
        saten_layer_clear(saten_layer0);
    }
}
# 46 "lib/core/saturn_engine_core.h" 2
# 1 "lib/core/saturn_engine_core_sprite.h" 1

saten_sprite* saten_sprite_load(char *filename)
{
    saten_sprite* sprite = (saten_sprite*) saten_malloc(sizeof(saten_sprite));
    sprite->srf = IMG_Load(filename);
    if (sprite->srf == 
# 6 "lib/core/saturn_engine_core_sprite.h" 3 4
                      ((void *)0)
# 6 "lib/core/saturn_engine_core_sprite.h"
                          )
        saten_errhandler(33);
    sprite->target = (SDL_Rect*)saten_malloc(sizeof(SDL_Rect));
    sprite->target->x = 0;
    sprite->target->y = 0;
    sprite->target->w = sprite->srf->w;
    sprite->target->h = sprite->srf->h;
    sprite->scale = 1.0f;

    return sprite;
}


void saten_sprite_texturize(saten_sprite *sprite)
{
    if (sprite->srf == 
# 21 "lib/core/saturn_engine_core_sprite.h" 3 4
                      ((void *)0)
# 21 "lib/core/saturn_engine_core_sprite.h"
                          )
        saten_errhandler(32);
    sprite->texture = SDL_CreateTextureFromSurface(saten_ren, sprite->srf);
    if (sprite->texture == 
# 24 "lib/core/saturn_engine_core_sprite.h" 3 4
                          ((void *)0)
# 24 "lib/core/saturn_engine_core_sprite.h"
                              )
        saten_errhandler(14);
}


void saten_sprite_source_area(saten_sprite *sprite, int tile_id, int x, int y,
        int w, int h)
{
    if (sprite->source == 
# 32 "lib/core/saturn_engine_core_sprite.h" 3 4
                         ((void *)0)
# 32 "lib/core/saturn_engine_core_sprite.h"
                             ) {
        sprite->source = (SDL_Rect*)saten_malloc(sizeof(SDL_Rect));
    }
    if (sprite->tile == 
# 35 "lib/core/saturn_engine_core_sprite.h" 3 4
                       ((void *)0)
# 35 "lib/core/saturn_engine_core_sprite.h"
                           ) {
        sprite->source->x = x;
        sprite->source->y = y;
    } else {
        sprite->source->x = sprite->tile[tile_id].x + x;
        sprite->source->y = sprite->tile[tile_id].y + y;
    }
    sprite->source->w = w;
    sprite->source->h = h;
    sprite->target->w = w;
    sprite->target->h = h;
}


void saten_sprite_reset_source_area(saten_sprite *sprite)
{
    free(sprite->source);
    sprite->source = 
# 52 "lib/core/saturn_engine_core_sprite.h" 3 4
                    ((void *)0)
# 52 "lib/core/saturn_engine_core_sprite.h"
                        ;
    if (sprite->tile) {
        sprite->target->w = sprite->tile[0].w;
        sprite->target->h = sprite->tile[0].h;
    } else {
        sprite->target->w = sprite->srf->w;
        sprite->target->h = sprite->srf->h;
    }
}


void saten_sprite_draw(saten_sprite *sprite, int tile_id, int x, int y,
        double ang, 
# 64 "lib/core/saturn_engine_core_sprite.h" 3 4
                   _Bool 
# 64 "lib/core/saturn_engine_core_sprite.h"
                        stretch)
{
    int r;
    SDL_Point rotation_center;
    SDL_Point *rcenptr;
    SDL_Rect *targetptr = 
# 69 "lib/core/saturn_engine_core_sprite.h" 3 4
                         ((void *)0)
# 69 "lib/core/saturn_engine_core_sprite.h"
                             ;
    SDL_Rect *sourceptr = 
# 70 "lib/core/saturn_engine_core_sprite.h" 3 4
                         ((void *)0)
# 70 "lib/core/saturn_engine_core_sprite.h"
                             ;
    if (sprite->centered) {
        sprite->target->x = x - sprite->target->w/2;
        sprite->target->y = y - sprite->target->h/2;
        rotation_center.x = x;
        rotation_center.y = y;
        rcenptr = &rotation_center;
    } else {
        sprite->target->x = x;
        sprite->target->y = y;
        rcenptr = 
# 80 "lib/core/saturn_engine_core_sprite.h" 3 4
                 ((void *)0)
# 80 "lib/core/saturn_engine_core_sprite.h"
                     ;
    }
    if (!stretch)
        targetptr = sprite->target;
    if (sprite->tile) {
        if (sprite->source)
            sourceptr = sprite->source;
        else
            sourceptr = &sprite->tile[tile_id];
    } else {
        sourceptr = sprite->source;
    }
    if (saten_target_layer == 
# 92 "lib/core/saturn_engine_core_sprite.h" 3 4
                             ((void *)0)
# 92 "lib/core/saturn_engine_core_sprite.h"
                                 ) {
        if (ang < 0) {
            r = SDL_RenderCopy(saten_ren, sprite->texture,
                    sourceptr, targetptr);
        } else {

            r = SDL_RenderCopyEx(saten_ren, sprite->texture,
                    sourceptr, targetptr, ang, rcenptr, SDL_FLIP_NONE);
        }
    } else {

        r = SDL_UpperBlitScaled(sprite->srf, sourceptr, saten_target_layer->srf,
                    targetptr);
    }
    if (r < 0)
        saten_errhandler(16);
}



void saten_sprite_repeat(saten_sprite *sprite, int tile_id, int x0, int y0,
        int w, int h)
{
    for (int y = 0; y < h; y = y + sprite->target->h) {
        for (int x = 0; x < w; x = x + sprite->target->w) {
            saten_sprite_draw(sprite, tile_id, x + x0, y + y0, -1, 
# 117 "lib/core/saturn_engine_core_sprite.h" 3 4
                                                                  0
# 117 "lib/core/saturn_engine_core_sprite.h"
                                                                       );
        }
    }
}




void saten_sprite_set_tiles(saten_sprite *sprite, int num_h, int num_v)
{
    int tile_w, tile_h, size;
    tile_w = sprite->srf->w / num_h;
    tile_h = sprite->srf->h / num_v;
    size = num_h * num_v;
    SDL_Rect *rects = (SDL_Rect*)saten_malloc(sizeof(SDL_Rect)*size);
    for (int i = 0, k = 0; i < num_v; i++) {
        for (int j= 0; j < num_h; j++) {

            rects[k] = (SDL_Rect) { j*tile_w, i*tile_h, tile_w, tile_h };
            k++;
        }
    }
    sprite->tile = rects;
    sprite->target->w = tile_w;
    sprite->target->h = tile_h;
}



void saten_sprite_scale(saten_sprite *sprite, float scale)
{
    sprite->scale = scale;
    if (sprite->tile) {
        sprite->target->w = sprite->tile->w * scale;
        sprite->target->h = sprite->tile->h * scale;
    } else {
        sprite->target->w = sprite->srf->w * scale;
        sprite->target->h = sprite->srf->h * scale;
    }
}


void saten_sprite_destroy(saten_sprite *sprite)
{
    if (sprite->srf)
        SDL_FreeSurface(sprite->srf);
    if (sprite->texture)
        SDL_DestroyTexture(sprite->texture);
    if (sprite->tile)
        free(sprite->tile);
    free(sprite);
    sprite = 
# 168 "lib/core/saturn_engine_core_sprite.h" 3 4
            ((void *)0)
# 168 "lib/core/saturn_engine_core_sprite.h"
                ;
}


void saten_sprite_alphamod(saten_sprite *sprite, uint8_t alpha)
{
    int r;
    if (sprite->srf) {
        r = SDL_SetSurfaceAlphaMod(sprite->srf, alpha);
        if (r < 0)
            saten_errhandler(20);
    }
    if (sprite->texture) {
        r = SDL_SetTextureAlphaMod(sprite->texture, alpha);
        if (r < 0)
            saten_errhandler(21);
    }
}


void saten_sprite_colormod(saten_sprite *sprite, uint8_t r, uint8_t g,
        uint8_t b)
{
    int res;
    if (sprite->srf) {
        res = SDL_SetSurfaceColorMod(sprite->srf, r, g, b);
        if (res < 0)
            saten_errhandler(22);
    }
    if (sprite->texture) {
        res = SDL_SetTextureColorMod(sprite->texture, r, g, b);
        if (res < 0)
            saten_errhandler(23);
    }
}


void saten_sprite_blendmode(saten_sprite *sprite, SDL_BlendMode blendmode)
{
    int r;
    if (sprite->srf) {
        r = SDL_SetSurfaceBlendMode(sprite->srf, blendmode);
        if (r < 0)
            saten_errhandler(24);
    }
    if (sprite->texture) {
        r = SDL_SetTextureBlendMode(sprite->texture, blendmode);
        if (r < 0)
            saten_errhandler(25);
    }
}




void saten_sprite_colorize(saten_sprite *sprite, uint8_t r, uint8_t g,
        uint8_t b)
{
    for (int y = 0; y < sprite->srf->h; y++) {
        for (int x = 0; x < sprite->srf->w; x++) {
            uint8_t r0, g0, b0, a0;
            uint32_t pixel = saten_pixel_get(sprite, 0, x, y);
            SDL_GetRGBA(pixel, sprite->srf->format,&r0,&g0,&b0,&a0);
            pixel = SDL_MapRGBA(sprite->srf->format, r, g, b, a0);
            if (a0 != 0)
                saten_pixel_put(sprite, 0, x, y, pixel);
        }
    }
}



void saten_sprite_patternize0(saten_sprite *sprite)
{
    for (int y = 0; y < sprite->srf->h; y++) {
        for (int x = 0; x < sprite->srf->w; x++) {
            if (y % 2 == 0) {
                if (x % 2 == 0) {
                    uint8_t r0, g0, b0, a0;
                    uint32_t pixel = saten_pixel_get(sprite, 0,
                            x, y);
                    SDL_GetRGBA(pixel, sprite->srf->format,&r0,&g0,&b0,&a0);
                    pixel = SDL_MapRGBA(sprite->srf->format, r0, g0, b0, 0);
                    saten_pixel_put(sprite, 0, x, y, pixel);
                }
            } else {
                if (x % 2 != 0) {
                    uint8_t r0, g0, b0, a0;
                    uint32_t pixel = saten_pixel_get(sprite, 0,
                            x, y);
                    SDL_GetRGBA(pixel, sprite->srf->format,&r0,&g0,&b0,&a0);
                    pixel = SDL_MapRGBA(sprite->srf->format, r0, g0, b0, 0);
                    saten_pixel_put(sprite, 0, x, y, pixel);
                }
            }
        }
    }
}




saten_sprite* saten_sprite_copy(saten_sprite *sprite_in)
{
    saten_sprite* sprite = (saten_sprite*)saten_malloc(sizeof(saten_sprite));

    SDL_Surface *surface = saten_surface_create(sprite_in->srf->w,
            sprite_in->srf->h, 32);
    sprite->srf = surface;

    int r = SDL_UpperBlit(sprite_in->srf, 
# 278 "lib/core/saturn_engine_core_sprite.h" 3 4
                                           ((void *)0)
# 278 "lib/core/saturn_engine_core_sprite.h"
                                               , sprite->srf, 
# 278 "lib/core/saturn_engine_core_sprite.h" 3 4
                                                              ((void *)0)
# 278 "lib/core/saturn_engine_core_sprite.h"
                                                                  );
    if (r < 0)
        saten_errhandler(31);


    sprite->target = (SDL_Rect*)saten_malloc(sizeof(SDL_Rect));
    sprite->target->x = 0;
    sprite->target->y = 0;
    sprite->target->w = sprite->srf->w;
    sprite->target->h = sprite->srf->h;
    sprite->scale = 1.0f;
    return sprite;
}
# 47 "lib/core/saturn_engine_core.h" 2
# 1 "lib/core/saturn_engine_core_pixel.h" 1


uint32_t saten_pixel_get(void *data, int type, int x, int y)
{
    SDL_Surface *srf = saten_surface_get(data, type);
    int bpp = srf->format->BytesPerPixel;

    uint8_t *p = (uint8_t*) srf->pixels + y * srf->pitch + x * bpp;

    switch (bpp) {
    case 1:
        return *p;
        break;
    case 2:
        return *(uint16_t*)p;
        break;
    case 3:
        if (
# 18 "lib/core/saturn_engine_core_pixel.h" 3 4
           1234 
# 18 "lib/core/saturn_engine_core_pixel.h"
                         == 4321)
            return p[0] << 16 | p[1] << 8 | p[2];
        else
            return p[0] | p[1] << 8 | p[2] << 16;
        break;
    case 4:
        return *(uint32_t*)p;
        break;
    default:
        return 0;
    }
}


void saten_pixel_put(void *data, int type, int x, int y, uint32_t pixel)
{
    SDL_Surface *srf = saten_surface_get(data, type);
    int bpp = srf->format->BytesPerPixel;
    uint8_t *p = (uint8_t*) srf->pixels + y * srf->pitch + x * bpp;

    switch (bpp) {
    case 1:
        *p = pixel;
        break;
    case 2:
        *(uint16_t*)p = pixel;
        break;
    case 3:
        if (
# 46 "lib/core/saturn_engine_core_pixel.h" 3 4
           1234 
# 46 "lib/core/saturn_engine_core_pixel.h"
                         == 4321) {
            p[0] = (pixel >> 16) & 0xff;
            p[1] = (pixel >> 8) & 0xff;
            p[2] = pixel & 0xff;
        } else {
            p[0] = pixel & 0xff;
            p[1] = (pixel >> 8) & 0xff;
            p[2] = (pixel >> 16) & 0xff;
        }
        break;
    case 4:
        *(uint32_t*)p = pixel;
        break;
    }
}
# 48 "lib/core/saturn_engine_core.h" 2
# 1 "lib/core/saturn_engine_core_surface.h" 1
SDL_Surface* saten_surface_create(int w, int h, int depth)
{

    SDL_Surface *srf = 
# 4 "lib/core/saturn_engine_core_surface.h" 3 4
                      ((void *)0)
# 4 "lib/core/saturn_engine_core_surface.h"
                          ;
    int32_t rmask, gmask, bmask, amask;






    rmask = 0x000000ff;
    gmask = 0x0000ff00;
    bmask = 0x00ff0000;
    amask = 0xff000000;

    srf = SDL_CreateRGBSurface(0, w, h, depth, rmask, gmask, bmask, amask);
    if (srf == 
# 18 "lib/core/saturn_engine_core_surface.h" 3 4
              ((void *)0)
# 18 "lib/core/saturn_engine_core_surface.h"
                  )
        saten_errhandler(17);

    return srf;
}


SDL_Surface* saten_surface_get(void *data, int type)
{
    SDL_Surface *srf = 
# 27 "lib/core/saturn_engine_core_surface.h" 3 4
                      ((void *)0)
# 27 "lib/core/saturn_engine_core_surface.h"
                          ;
    saten_sprite *spr = 
# 28 "lib/core/saturn_engine_core_surface.h" 3 4
                       ((void *)0)
# 28 "lib/core/saturn_engine_core_surface.h"
                           ;
    saten_layer *lay = 
# 29 "lib/core/saturn_engine_core_surface.h" 3 4
                      ((void *)0)
# 29 "lib/core/saturn_engine_core_surface.h"
                          ;
    switch (type) {
    case 0:
        spr = (saten_sprite*) data;
        srf = spr->srf;
        break;
    case 1:
        lay = (saten_layer*) data;
        srf = lay->srf;
        break;
    case 2:
        srf = (SDL_Surface*) data;
        break;
    default:
        return 
# 43 "lib/core/saturn_engine_core_surface.h" 3 4
              ((void *)0)
# 43 "lib/core/saturn_engine_core_surface.h"
                  ;
    }
    return srf;
}
# 49 "lib/core/saturn_engine_core.h" 2
# 1 "lib/core/saturn_engine_core_mruby.h" 1
void saten_mrb_init(void)
{

    _saten_mrb_module = mrb_define_module(saten_mrb, "Saten");

}
# 50 "lib/core/saturn_engine_core.h" 2
# 1 "lib/core/saturn_engine_core_text.h" 1

void saten_mrb_text_init(void)
{
    mrb_define_method(saten_mrb, saten_mrb->object_class,
            "saten_mrb_glyph_init", saten_mrb_text_glyph_init,
            ((mrb_aspec)((1)&0x1f) << 18));
    mrb_define_method(saten_mrb, saten_mrb->object_class,
            "saten_mrb_load_glyph_file", saten_mrb_text_load_glyph_file,
            ((mrb_aspec)((7)&0x1f) << 18));

    struct RClass* _saten_mrb_class_text;
    _saten_mrb_class_text = mrb_define_class_under(saten_mrb,
            _saten_mrb_module, "Text", saten_mrb->object_class);

    mrb_define_class_method(saten_mrb, _saten_mrb_class_text,
            "create", saten_mrb_text_create, ((mrb_aspec)((1)&0x1f) << 18));
    mrb_define_class_method(saten_mrb, _saten_mrb_class_text,
            "free", saten_mrb_text_free, ((mrb_aspec)0));
    mrb_define_class_method(saten_mrb, _saten_mrb_class_text,
            "prepare_glyph", saten_mrb_text_prepare_glyph, ((mrb_aspec)0));
    mrb_define_class_method(saten_mrb, _saten_mrb_class_text,
            "set_glyph_height", saten_mrb_text_set_height, ((mrb_aspec)((1)&0x1f) << 18));
    mrb_define_class_method(saten_mrb, _saten_mrb_class_text,
            "append_glyph", saten_mrb_text_append_glyph, ((mrb_aspec)((3)&0x1f) << 18));
    mrb_define_class_method(saten_mrb, _saten_mrb_class_text,
            "get", saten_mrb_text_get, ((mrb_aspec)((1)&0x1f) << 18));
    mrb_define_class_method(saten_mrb, _saten_mrb_class_text,
            "reset", saten_mrb_text_reset, ((mrb_aspec)((2)&0x1f) << 18));

}

mrb_value saten_mrb_text_create(mrb_state *mrb, mrb_value self)
{
    mrb_float a0;
    mrb_value o;
    float a;
    mrb_get_args(saten_mrb, "fo", &a0, &o);
    a = (float)a0;

    saten_latest_text = (saten_text*)saten_malloc(sizeof(saten_text));
    mrb_value ret;
    if (saten_latest_text == 
# 42 "lib/core/saturn_engine_core_text.h" 3 4
                            ((void *)0)
# 42 "lib/core/saturn_engine_core_text.h"
                                ) {
        ret = mrb_fixnum_value((mrb_int)1);
    } else {
        saten_latest_text->scale = a;
        saten_latest_text->mrbo = o;
        saten_latest_text->id = saten_text_get_id();
        saten_latest_text->update_flag = 
# 48 "lib/core/saturn_engine_core_text.h" 3 4
                                        1
# 48 "lib/core/saturn_engine_core_text.h"
                                            ;


        saten_litem *elem = (saten_litem*)saten_malloc(sizeof(saten_litem));
        elem->current = (void*) saten_latest_text;
        saten_list_insert(saten_list_text, elem);

        mrb_funcall(saten_mrb, saten_latest_text->mrbo, "set_id", 1,
                mrb_fixnum_value(saten_latest_text->id));


        ret = mrb_fixnum_value((mrb_int)0);
    }
    return ret;
}

mrb_value saten_mrb_text_free(mrb_state *mrb, mrb_value self)
{


    return mrb_nil_value();
}

mrb_value saten_mrb_text_prepare_glyph(mrb_state *mrb, mrb_value self)
{
    saten_latest_text = 
# 73 "lib/core/saturn_engine_core_text.h" 3 4
                       ((void *)0)
# 73 "lib/core/saturn_engine_core_text.h"
                           ;
    return mrb_nil_value();
}

mrb_value saten_mrb_text_set_height(mrb_state *mrb, mrb_value self)
{
    mrb_int a0;
    int a;
    mrb_get_args(saten_mrb, "i", &a0);
    a = (int)a0;
    saten_text_gheight = a;
    return mrb_nil_value();
}

mrb_value saten_mrb_text_get(mrb_state *mrb, mrb_value self)
{
    mrb_int id0; int id;
    mrb_get_args(saten_mrb, "i", &id0);
    id = (int)id0;
    saten_text *text = saten_text_find(id);
    return text->mrbo;
}

mrb_value saten_mrb_text_reset(mrb_state *mrb, mrb_value self)
{
    mrb_int id0; int id; mrb_float f0; float f;
    mrb_get_args(saten_mrb, "if", &id0, &f0);
    id = (int)id0; f = (float)f0;
    saten_text *text = saten_text_find(id);
    free(text->glyph);
    text->glyph = 
# 103 "lib/core/saturn_engine_core_text.h" 3 4
                 ((void *)0)
# 103 "lib/core/saturn_engine_core_text.h"
                     ;
    text->size = 0;
    text->scale = f;
    return mrb_nil_value();
}

mrb_value saten_mrb_text_append_glyph(mrb_state *mrb, mrb_value self)
{
    mrb_int a0, b0, c0, x0, y0, l0, id0;

    int a, b, c, x, y, l, id;
    mrb_get_args(saten_mrb, "iiiiiii", &id0, &a0, &b0, &c0, &x0, &y0, &l0);
    a = (int)a0; b = (int)b0; c = (int)c0; x = (int)x0; y = (int)y0;
    l = (int)l0; id = (int)id0;

    saten_text *text = 
# 118 "lib/core/saturn_engine_core_text.h" 3 4
                      ((void *)0)
# 118 "lib/core/saturn_engine_core_text.h"
                          ;
    if (saten_latest_text == 
# 119 "lib/core/saturn_engine_core_text.h" 3 4
                            ((void *)0)
# 119 "lib/core/saturn_engine_core_text.h"
                                )
        saten_latest_text = saten_text_find(id);
    text = saten_latest_text;

    saten_text_glyph_create(a, b, c, x, y, l, text);

    return mrb_nil_value();
}


void saten_text_glyph_create(int a, int b, int c, int x, int y, int l,
        saten_text *text)
{
    int i = text->size;
    text->size++;
    text->glyph = (saten_glyph*)saten_realloc(text->glyph,
            text->size * sizeof(saten_glyph));
    text->glyph[i].a = a;
    text->glyph[i].b = b;
    text->glyph[i].c = c;
    text->glyph[i].l = l;


    if (i > 0) {
        for (int j = i-1; j >= 0; j--) {
            if (text->glyph[j].l == l) {
                x += text->glyph[j].rect.w;
                x += 2;
            }
        }
    }
    if (l > 0) {

        y += l * (saten_text_gheight * text->scale);
        y += l * 2;
    }

    text->glyph[i].rect.x = x;
    text->glyph[i].rect.y = y;
    text->glyph[i].rect.w =
        saten_glyph_sets[a].glyph_width[c] * text->scale;
    text->glyph[i].rect.h =
        saten_glyph_sets[a].glyph_height * text->scale;
    if (saten_glyph_sets[a].is_animated) {
        text->glyph[i].is_animated = 
# 163 "lib/core/saturn_engine_core_text.h" 3 4
                                    1
# 163 "lib/core/saturn_engine_core_text.h"
                                        ;
        text->glyph[i].anum = saten_glyph_sets[a].anum[b];
    } else {
        text->glyph[i].is_animated = 
# 166 "lib/core/saturn_engine_core_text.h" 3 4
                                    0
# 166 "lib/core/saturn_engine_core_text.h"
                                         ;
    }
}

void saten_text_draw(saten_text *text)
{
    if (text->glyph == 
# 172 "lib/core/saturn_engine_core_text.h" 3 4
                      ((void *)0)
# 172 "lib/core/saturn_engine_core_text.h"
                          )
        mrb_funcall(saten_mrb, text->mrbo, "set_glyph", 0);

    for (int i = 0; i < text->size; i++) {
        if (text->glyph[i].is_animated) {
            SDL_RenderCopyEx(saten_ren,
                    saten_glyph_sets[text->glyph[i].a].
                    glyph[text->glyph[i].b][text->glyph[i].acnt],
                    
# 180 "lib/core/saturn_engine_core_text.h" 3 4
                   ((void *)0)
# 180 "lib/core/saturn_engine_core_text.h"
                       , &text->glyph[i].rect, 0, 
# 180 "lib/core/saturn_engine_core_text.h" 3 4
                                                  ((void *)0)
# 180 "lib/core/saturn_engine_core_text.h"
                                                      , SDL_FLIP_NONE);

            if (saten_step % 8 == 0) {
                if (text->glyph[i].acnt != text->glyph[i].anum-1) {
                    text->glyph[i].acnt++;
                } else {
                    text->glyph[i].acnt = 0;
                }
            }
        } else {
            SDL_RenderCopyEx(saten_ren,
                    saten_glyph_sets[text->glyph[i].a].
                    glyph[text->glyph[i].b][text->glyph[i].c],
                    
# 193 "lib/core/saturn_engine_core_text.h" 3 4
                   ((void *)0)
# 193 "lib/core/saturn_engine_core_text.h"
                       , &text->glyph[i].rect, 0, 
# 193 "lib/core/saturn_engine_core_text.h" 3 4
                                                  ((void *)0)
# 193 "lib/core/saturn_engine_core_text.h"
                                                      , SDL_FLIP_NONE);
        }
    }
}

saten_text* saten_text_create(float scale, char *str, int x, int y)
{
    size_t l = strlen(str) + 1;
    size_t lx = saten_intlen(x);
    size_t ly = saten_intlen(y);
    if (scale <= 0)
        scale = 0.1f;
    if (scale >= 100.0)
        scale = 99.9f;



    char cstr[l+lx+ly+25];

    sprintf(cstr, "Saten::Text.new(\"%s\", %0.1f, %d, %d)", str, scale, x, y);

    mrb_load_string(saten_mrb, cstr);
    return saten_latest_text;
}

void saten_nstot(saten_text *text, char *str, int col, int x, int y)
{


    int i = 0;
    if (text->glyph != 
# 223 "lib/core/saturn_engine_core_text.h" 3 4
                      ((void *)0)
# 223 "lib/core/saturn_engine_core_text.h"
                          ) {
        free(text->glyph);
        text->glyph = 
# 225 "lib/core/saturn_engine_core_text.h" 3 4
                     ((void *)0)
# 225 "lib/core/saturn_engine_core_text.h"
                         ;
    }
    text->size = 0;

    while (str[i] != '\0') {
        if (str[i] >= 48 && str[i] <= 57) {

            saten_text_glyph_create(0, col, str[i]-48, x, y, 0, text);
        } else {
            switch (str[i]) {
            case 46:
                saten_text_glyph_create(0, col, 24, x, y, 0, text);
                break;
            case 45:
                saten_text_glyph_create(0, col, 23, x, y, 0, text);
                break;
            default:

                break;
            }
        }
        i++;
    }
}

void saten_text_set_gheight(int a)
{
    saten_text_gheight = a;
}

void saten_text_destroy(saten_text *ptr)
{
    free(ptr->glyph);
    free(ptr);
}


int saten_text_get_id(void)
{
    int i = 0;
    saten_list_new_id = 0;
    while (
# 266 "lib/core/saturn_engine_core_text.h" 3 4
          1
# 266 "lib/core/saturn_engine_core_text.h"
              ) {
        saten_list_traverse(saten_list_text, saten_text_search_id);
        i++;
        if (saten_list_new_id >= 0)
            break;
        else
            saten_list_new_id = i;
    }
    return saten_list_new_id;
}


void saten_text_search_id(void *item, int i, int num)
{
    saten_text *data = (saten_text*) item;
    if (data->id == saten_list_new_id)
        saten_list_new_id = -1;
}


saten_text* saten_text_find(int id)
{
    saten_list_look_for = id;
    saten_list_found = 
# 289 "lib/core/saturn_engine_core_text.h" 3 4
                      ((void *)0)
# 289 "lib/core/saturn_engine_core_text.h"
                          ;
    saten_list_traverse(saten_list_text, saten_text_get);
    saten_text* found = (saten_text*) saten_list_found;
    return found;
}


void saten_text_get(void *item, int i, int num)
{
    saten_text *data = (saten_text*) item;
    if (data->id == saten_list_look_for)
        saten_list_found = data;

}

mrb_value saten_mrb_text_glyph_init(mrb_state *mrb, mrb_value self)
{
    mrb_int n;
    mrb_get_args(saten_mrb, "i", &n);
    saten_glyph_set_n = (uint8_t)n;
    saten_glyph_sets = (saten_glyph_set*)saten_malloc(
            saten_glyph_set_n * sizeof(saten_glyph_set));
    return mrb_nil_value();
}

mrb_value saten_mrb_text_load_glyph_file(mrb_state *mrb, mrb_value self)
{
    char *string;
    mrb_int mrb_id, mrb_n, mrb_cn, mrb_w, mrb_h;
    mrb_bool mrb_animated;
    int id, n, cn, w, h;
    
# 320 "lib/core/saturn_engine_core_text.h" 3 4
   _Bool 
# 320 "lib/core/saturn_engine_core_text.h"
        animated;
    saten_sprite *sprite;
    mrb_get_args(saten_mrb, "iziiiib", &mrb_id, &string, &mrb_n, &mrb_cn,
            &mrb_w, &mrb_h, &mrb_animated);
    id = (int)mrb_id;
    n = (int)mrb_n;
    cn = (int)mrb_cn;
    w = (int)mrb_w;
    h = (int)mrb_h;
    animated = (
# 329 "lib/core/saturn_engine_core_text.h" 3 4
               _Bool
# 329 "lib/core/saturn_engine_core_text.h"
                   )mrb_animated;
    if (id >= saten_glyph_set_n) {
        saten_errhandler(35);
        return mrb_nil_value();
    }
    if (saten_glyph_sets[id].flag) {
        saten_errhandler(36);
        return mrb_nil_value();
    }
    saten_glyph_sets[id].flag = 
# 338 "lib/core/saturn_engine_core_text.h" 3 4
                               1
# 338 "lib/core/saturn_engine_core_text.h"
                                   ;
    saten_glyph_sets[id].is_animated = animated;
    if (cn == 0) {
        if (animated) {
            saten_glyph_sets[id].glyph =
                (SDL_Texture***)saten_malloc(n * sizeof(SDL_Texture**));
            saten_glyph_sets[id].anum =
                (uint8_t*)saten_malloc(n * sizeof(uint8_t));
        } else {
            saten_glyph_sets[id].glyph =
                (SDL_Texture***)saten_malloc(sizeof(SDL_Texture**));
        }
    } else {
        saten_glyph_sets[id].glyph =
            (SDL_Texture***)saten_malloc(cn * sizeof(SDL_Texture**));
    }
    saten_glyph_sets[id].glyph_width =
        (uint8_t*)saten_malloc(n * sizeof(uint8_t));
    saten_glyph_sets[id].cn = cn;
    saten_glyph_sets[id].n = n;
    saten_glyph_sets[id].glyph_height = h;
    if (cn == 0) {
        if (animated) {
            for (int i = 0; i < n; i++) {
                saten_glyph_sets[id].glyph[i] =
                    (SDL_Texture**)saten_malloc(sizeof(SDL_Texture*));

            }
        } else {
            saten_glyph_sets[id].glyph[0] =
                (SDL_Texture**)saten_malloc(n * sizeof(SDL_Texture*));
        }
    }

    for (int i = 0; i < cn; i++) {
        saten_glyph_sets[id].glyph[i] =
            (SDL_Texture**)saten_malloc(n * sizeof(SDL_Texture*));
    }

    sprite = saten_sprite_load(string);

    int hn, vn, srow, pn, glyph_cnt;
    glyph_cnt = 0;
    hn = sprite->srf->w / w;
    vn = sprite->srf->h / h;
    pn = w * h;
    if (cn > hn) {
        saten_errhandler(37);
        return mrb_nil_value();
    }

    if (cn == 0)
        srow = 0;
    else
        srow = 1;

    for (int i = srow; i < vn; i++) {
        if (animated && i == n)
            goto SATEN_GLYPH_HANDLER_DONE;
        for (int j = 0; j < hn; j++) {

            int gstart, gend, pid, gwidth, tcnt;
            
# 400 "lib/core/saturn_engine_core_text.h" 3 4
           _Bool 
# 400 "lib/core/saturn_engine_core_text.h"
                gstart_set = 
# 400 "lib/core/saturn_engine_core_text.h" 3 4
                             0
# 400 "lib/core/saturn_engine_core_text.h"
                                  ;
            pid = 0; gstart = 0; gend = 0, gwidth = 0;
            tcnt = 0;
            saten_spixel pixbuff[pn];
            for (int k = j * w, k2 = 0; k < (j * w) + w; k++, k2++) {
                for (int l = i * h, l2 = 0; l < (i * h) + h; l++, l2++) {

                    uint8_t r, g, b, a;
                    uint32_t pixel =
                        saten_pixel_get(sprite, 0, k, l);
                    SDL_GetRGBA(pixel, sprite->srf->format, &r, &g, &b, &a);
                    if (saten_test_rgb(r, g, b, 255) ||
                            saten_test_rgb(r, g, b, 0)) {
                        if (!gstart_set) {
                            gstart = k2;
                            gstart_set = 
# 415 "lib/core/saturn_engine_core_text.h" 3 4
                                        1
# 415 "lib/core/saturn_engine_core_text.h"
                                            ;
                        }
                        gend = k2;
                    }
                    pixbuff[pid] = (saten_spixel){ k2, l2, r, g, b, a };
                    pid++;
                }
            }
            gwidth = (gend - gstart) + 1;

            if (cn > 0) {
                for (int k = 0; k < cn; k++) {
                    SDL_Surface *srf = 
# 427 "lib/core/saturn_engine_core_text.h" 3 4
                                      ((void *)0)
# 427 "lib/core/saturn_engine_core_text.h"
                                          ;
                    srf = saten_surface_create(gwidth, h, 32);
                    for (int l = 0; l < pn; l++) {
                        if (pixbuff[l].x >= gstart && pixbuff[l].x <= gend) {
                            if (saten_test_rgb(pixbuff[l].r, pixbuff[l].g,
                                        pixbuff[l].b, 0)) {

                                uint8_t r, g, b, a;
                                uint32_t pixel =
                                    saten_pixel_get(sprite, 0,
                                            pixbuff[l].x + (k * w),
                                            pixbuff[l].y);
                                SDL_GetRGBA(pixel, sprite->srf->format,
                                        &r, &g, &b, &a);
                                uint32_t pnew = SDL_MapRGBA(srf->format,
                                        r, g, b, a);



                                saten_pixel_put(srf, 2,
                                        pixbuff[l].x - gstart, pixbuff[l].y,
                                        pnew);
                            } else {

                                uint32_t pnew = SDL_MapRGBA(srf->format,
                                        0, 0, 0, 0);
                                saten_pixel_put(srf, 2,
                                        pixbuff[l].x - gstart, pixbuff[l].y,
                                        pnew);
                            }
                        }
                    }
                    saten_glyph_sets[id].glyph[k][glyph_cnt] =
                        SDL_CreateTextureFromSurface(saten_ren, srf);
                    SDL_FreeSurface(srf);
                }

                saten_glyph_sets[id].glyph_width[glyph_cnt] = gwidth;
                gstart_set = 
# 465 "lib/core/saturn_engine_core_text.h" 3 4
                            0
# 465 "lib/core/saturn_engine_core_text.h"
                                 ;
            } else {
                SDL_Surface *srf = 
# 467 "lib/core/saturn_engine_core_text.h" 3 4
                                  ((void *)0)
# 467 "lib/core/saturn_engine_core_text.h"
                                      ;
                srf = saten_surface_create(w, h, 32);
                uint8_t tr, tg, tb, ta;
                uint32_t nopixel = saten_pixel_get(sprite, 0, 0, 0);
                SDL_GetRGBA(nopixel, sprite->srf->format, &tr, &tg, &tb, &ta);
                if (animated && glyph_cnt == 0) {
                    SDL_FreeSurface(srf);
                    goto SATEN_GLYPH_SKIP;
                }
                for (int l = 0; l < pn; l++) {
                    if (pixbuff[l].r == tr && pixbuff[l].g == tg &&
                            pixbuff[l].b == tb) {

                        uint32_t pnew = SDL_MapRGBA(srf->format, 0, 0, 0, 0);
                        saten_pixel_put(srf, 2, pixbuff[l].x,
                                pixbuff[l].y, pnew);
                        tcnt++;
                    } else {
                        uint32_t pnew = SDL_MapRGBA(srf->format, pixbuff[l].r,
                                pixbuff[l].g, pixbuff[l].b, pixbuff[l].a);
                        saten_pixel_put(srf, 2, pixbuff[l].x,
                                pixbuff[l].y, pnew);
                    }
                }
                if (tcnt == pn) {
                    SDL_FreeSurface(srf);
                    goto SATEN_GLYPH_SKIP;
                }
                if (animated) {
                    int gi;
                    gi = glyph_cnt - (i * hn);
                    if (i == 0)
                        gi--;
                    if (gi >= 0) {
                        saten_glyph_sets[id].glyph[i] =
                            (SDL_Texture**)saten_realloc(
                                    (void*)saten_glyph_sets[id].glyph[i],
                                    (gi+1) * sizeof(SDL_Texture*));
                    }
                    saten_glyph_sets[id].glyph[i][gi] =
                        SDL_CreateTextureFromSurface(saten_ren, srf);
                    SDL_FreeSurface(srf);
                    saten_glyph_sets[id].glyph_width[i] = w;
                    saten_glyph_sets[id].anum[i] = gi+1;
                } else {
                    saten_glyph_sets[id].glyph[0][glyph_cnt] =
                        SDL_CreateTextureFromSurface(saten_ren, srf);
                    SDL_FreeSurface(srf);
                    saten_glyph_sets[id].glyph_width[glyph_cnt] = w;
                }
            }

SATEN_GLYPH_SKIP:
            glyph_cnt++;
            if (!animated && glyph_cnt == n)
                goto SATEN_GLYPH_HANDLER_DONE;
        }
    }
SATEN_GLYPH_HANDLER_DONE:





    return mrb_nil_value();
}
# 51 "lib/core/saturn_engine_core.h" 2
# 1 "lib/core/saturn_engine_core_audio.h" 1

int saten_audio_init(void)
{


    if (Mix_OpenAudio(22050, 0x8010, 2, 2048) < 0) {
        saten_errhandler(1);
        return -1;
    }
    saten_sfx_flag = 
# 10 "lib/core/saturn_engine_core_audio.h" 3 4
                    ((void *)0)
# 10 "lib/core/saturn_engine_core_audio.h"
                        ;
    return 0;
}


int saten_audio_set_sfx_vol(Mix_Chunk *sfx, int vol)
{

    return Mix_VolumeChunk(sfx, vol);
}


void saten_audio_sfx_set(int i)
{
    if (i >= 0 && i < saten_asset.sfx_n)
        saten_sfx_flag[i] = 
# 25 "lib/core/saturn_engine_core_audio.h" 3 4
                           1
# 25 "lib/core/saturn_engine_core_audio.h"
                               ;
}


void saten_audio_sfx_play(void)
{

    for (int i = 0; i < saten_asset.sfx_n; i++)
        if (saten_sfx_flag[i])
            Mix_PlayChannelTimed(-1,saten_asset.sfx[i],0,-1);
}


void saten_audio_sfx_unset(int i)
{

    if (i == -1)
        memset(saten_sfx_flag, 0, sizeof(
# 42 "lib/core/saturn_engine_core_audio.h" 3 4
                                        _Bool
# 42 "lib/core/saturn_engine_core_audio.h"
                                            )*saten_asset.sfx_n);
    if (i >= 0 && i < saten_asset.sfx_n)
        saten_sfx_flag[i] = 
# 44 "lib/core/saturn_engine_core_audio.h" 3 4
                           0
# 44 "lib/core/saturn_engine_core_audio.h"
                                ;
}


void saten_audio_sfx_reset(void)
{
    saten_sfx_flag =
        saten_realloc(saten_sfx_flag, sizeof(
# 51 "lib/core/saturn_engine_core_audio.h" 3 4
                                            _Bool
# 51 "lib/core/saturn_engine_core_audio.h"
                                                ) * saten_asset.sfx_n);
}
# 52 "lib/core/saturn_engine_core.h" 2
# 4 "lib/saturn_engine.h" 2
# 1 "lib/saturn_engine_structs.h" 1
typedef struct _saten_scene {
    saten_fptr_void init;
    saten_fptr_bool update;
    saten_fptr_void draw;
    saten_fptr_void quit;

    
# 7 "lib/saturn_engine_structs.h" 3 4
   _Bool 
# 7 "lib/saturn_engine_structs.h"
        init_flag;
    
# 8 "lib/saturn_engine_structs.h" 3 4
   _Bool 
# 8 "lib/saturn_engine_structs.h"
        quit_flag;
    uint8_t id;
} saten_scene;
# 5 "lib/saturn_engine.h" 2

uint8_t saten_flags;



saten_scene *saten_darr_scene = 
# 10 "lib/saturn_engine.h" 3 4
                               ((void *)0)
# 10 "lib/saturn_engine.h"
                                   ;


int saten_init(char *title, int w, int h, uint8_t flags);
int saten_run(void);
void saten_game(void);


int saten_scene_create(saten_fptr_void init, saten_fptr_bool update,
        saten_fptr_void draw, saten_fptr_void quit);
void saten_scene_quit(int i);






# 1 "lib/saturn_engine_scene.h" 1

int saten_scene_create(saten_fptr_void init, saten_fptr_bool update,
        saten_fptr_void draw, saten_fptr_void quit)
{


    saten_scene scene;
    int i = (*((size_t*) saten_darr_scene - 3));
    scene.init = init;
    scene.update = update;
    scene.draw = draw;
    scene.quit = quit;
    scene.init_flag = 
# 13 "lib/saturn_engine_scene.h" 3 4
                     0
# 13 "lib/saturn_engine_scene.h"
                          ;
    scene.quit_flag = 
# 14 "lib/saturn_engine_scene.h" 3 4
                     0
# 14 "lib/saturn_engine_scene.h"
                          ;
    scene.id = i;
    printf("before: %lu\n", (*((size_t*) saten_darr_scene - 3)));
    do { size_t *raw = ((size_t*) (saten_darr_scene) - 3); raw[1] = raw[1] + 1; if (raw[2] == 0) { raw[2] = 1; raw = saten_realloc(raw, 3 * sizeof(size_t) + raw[2] * sizeof((scene))); (saten_darr_scene) = (void*) &raw[3]; } if (raw[1] > raw[2]) { raw[2] = 2 * raw[2]; raw = saten_realloc(raw, 3 * sizeof(size_t) + raw[2] * sizeof((scene))); (saten_darr_scene) = (void*) &raw[3]; } saten_darr_scene[raw[1] - 1] = (scene); } while (0);
    printf("after: %lu\n", (*((size_t*) saten_darr_scene - 3)));
    return i;

}






void saten_scene_quit(int i)
{



    for (int j = (*((size_t*) saten_darr_scene - 3)); i < j; i++)
        saten_darr_scene[i].quit_flag = 
# 34 "lib/saturn_engine_scene.h" 3 4
                                       1
# 34 "lib/saturn_engine_scene.h"
                                           ;
}
# 28 "lib/saturn_engine.h" 2


int saten_init(char *title, int w, int h, uint8_t flags)
{
    saten_flag_set(flags, &saten_flags);
    if (saten_core_init(title, w, h, (1 << 7)|(1 << 6)|(1 << 4)|
                (1 << 3)) < 0) {
        fprintf(
# 35 "lib/saturn_engine.h" 3 4
               stderr
# 35 "lib/saturn_engine.h"
                     , "Failed to initialize Saturn Engine\n");
        return -1;
    }




    printf("test a\n");
    do { size_t *raw = saten_malloc(3 * sizeof(size_t)); raw[0] = sizeof(saten_scene); raw[1] = 0; raw[2] = 0; saten_darr_scene = (void*) &raw[3]; } while (0);
    printf("test b\n");
    printf("after init: %lu\n", (*((size_t*) saten_darr_scene - 3)));

    return 0;
}


int saten_run(void)
{

    if ((*((size_t*) saten_darr_scene - 3)) < 1) {
        saten_errhandler(38);
        return -1;
    }
    printf("test c\n");


    saten_core_run(saten_game);
    return 0;
}


void saten_game(void)
{



    printf("test d\n");
    for (int i = (*((size_t*) saten_darr_scene - 3))-1; i >= 0; i--) {
        printf("size: %lu\n", (*((size_t*) saten_darr_scene - 3)));
        printf("i: %d\n", i);
        if (saten_darr_scene[i].quit_flag)
            if (saten_darr_scene[i].quit != 
# 76 "lib/saturn_engine.h" 3 4
                                           ((void *)0)
# 76 "lib/saturn_engine.h"
                                               )
                saten_darr_scene[i].quit();
    }
    printf("test e\n");



    for (int i = 0; i < (*((size_t*) saten_darr_scene - 3)); i++) {
        if (!saten_darr_scene[i].init_flag) {
            if (saten_darr_scene[i].init != 
# 85 "lib/saturn_engine.h" 3 4
                                           ((void *)0)
# 85 "lib/saturn_engine.h"
                                               )
                saten_darr_scene[i].init();
        } else {
            if (saten_darr_scene[i].update != 
# 88 "lib/saturn_engine.h" 3 4
                                             ((void *)0)
# 88 "lib/saturn_engine.h"
                                                 )
                saten_darr_scene[i].update((i == (*((size_t*) saten_darr_scene - 3))-1));
            if (saten_darr_scene[i].draw != 
# 90 "lib/saturn_engine.h" 3 4
                                           ((void *)0)
# 90 "lib/saturn_engine.h"
                                               )
                saten_darr_scene[i].draw();
        }
    }
    printf("test f\n");
    if (saten_keystate[SDL_SCANCODE_ESCAPE])
        saten_break = 
# 96 "lib/saturn_engine.h" 3 4
                     1
# 96 "lib/saturn_engine.h"
                         ;
}
# 6 "main.c" 2
# 14 "main.c"
typedef struct _scenemngr {
    uint8_t root;
    uint8_t title;
    uint8_t settings;
} scenemngr;
scenemngr scene = { 0, 0, 0 };

int main (int argc, char *argv[])
{
    if (saten_init("saturn_engine_demo", 320, 240, (1 << 7)) < 0)
        fprintf(
# 24 "main.c" 3 4
               stderr
# 24 "main.c"
                     , "Init error...\n");
    scene.root = saten_scene_create(
# 25 "main.c" 3 4
                                   ((void *)0)
# 25 "main.c"
                                       , 
# 25 "main.c" 3 4
                                         ((void *)0)
# 25 "main.c"
                                             , 
# 25 "main.c" 3 4
                                               ((void *)0)
# 25 "main.c"
                                                   , 
# 25 "main.c" 3 4
                                                     ((void *)0)
# 25 "main.c"
                                                         );
    saten_run();

    return 0;
}
Compiled in debug mode.
Wrote preprocessor output to stdout
