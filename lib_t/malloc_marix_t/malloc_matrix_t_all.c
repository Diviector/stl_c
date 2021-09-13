#include "malloc_matrix_t_all.h"
#include "../../template.h"
#include "../../template_types.h"

#ifdef T
#undef T
#endif // T

#define T int
#include "malloc_matrix_t.c"

#ifdef T
#undef T
#endif // T
