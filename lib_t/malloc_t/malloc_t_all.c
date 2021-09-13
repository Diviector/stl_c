#include "../../template_types.h"

#ifdef T
#undef T
#endif // T

#define T int
#include "malloc_t.c"

#ifdef T
#undef T
#endif // T

#define T int_p
#include "malloc_t.c"

#ifdef T
#undef T
#endif // T

#define T int_2p
#include "malloc_t.c"
