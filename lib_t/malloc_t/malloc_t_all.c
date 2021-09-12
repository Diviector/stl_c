#include "malloc_t_all.h"

#ifdef T
#undef T
#endif // T

#define T int
#include "malloc_t.c"

#ifdef T
#undef T
#endif // T

#define T PTR(int)
#include "malloc_t.c"

#ifdef T
#undef T
#endif // T

#define T PTR(PTR(int))
#include "malloc_t.c"
