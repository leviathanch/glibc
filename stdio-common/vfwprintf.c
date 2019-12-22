#include <wctype.h>
#define COMPILE_WPRINTF	1

#ifdef __ZOS__
#undef COMPILE_WPRINTF
#endif

#include "vfprintf.c"
