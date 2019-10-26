#ifndef SATURN_ENGINE_CORE_DARRAY
#define SATURN_ENGINE_CORE_DARRAY

/* https://solarianprogrammer.com/2017/
 * 01/08/c99-c11-dynamic-array-mimics-cpp-vector-api-improvements/ */

// Use INIT id defined in global scope
#define SATEN_DARR_INIT(T, arr) \
    do {\
        size_t *raw = saten_malloc(3 * sizeof(size_t));\
        raw[0] = sizeof(T);\
        raw[1] = 0;\
        raw[2] = 0;\
        arr = (void*) &raw[3];\
    } while (0)

// Use create if variable is not in global scope
#define SATEN_DARR_CREATE(T, arr) \
    T *arr = NULL;\
    SATEN_DARR_INIT(T, arr);

#define SATEN_DARR_DESTROY(arr) \
    do {\
        size_t *raw = ((size_t*) (arr) - 3);\
        free(raw);\
        arr = NULL;\
    } while (0)

#define SATEN_DARR_SIZE(ARR) (*((size_t*) ARR - 2))
#define SATEN_DARR_CAPACITY(ARR) (*((size_t*) ARR - 1))

#define SATEN_DARR_PUSH(arr, value)\
    do {\
        size_t *raw = ((size_t*) (arr) - 3);\
        raw[1] = raw[1] + 1;\
        if (raw[2] == 0) {\
            raw[2] = 1;\
            raw = saten_realloc(raw,\
                    3 * sizeof(size_t) + raw[2] * sizeof((value)));\
            (arr) = (void*) &raw[3];\
        }\
        if (raw[1] > raw[2]) {\
            raw[2] = 2 * raw[2];\
            raw = saten_realloc(raw,\
                    3 * sizeof(size_t) + raw[2] * sizeof((value)));\
            (arr) = (void*) &raw[3];\
        }\
        arr[raw[1] - 1] = (value);\
    } while (0)

#define SATEN_DARR_RESIZE(arr, n) \
    do {\
        size_t *raw = ((size_t*) (arr) - 3);\
        if (raw[1] > (n))\
            raw[1] = (n);\
        raw[2] = (n);\
        raw = realloc(raw, 3 * sizeof(size_t) + raw[2] * raw[0]);\
    } while (0)

#endif /* SATURN_ENGINE_CORE_DARRAY */
