#ifndef T
#define T int
#endif

#ifdef T
#include "../../template.h"

T** TEMPLATE(malloc_matrix, T)(int m, int n);
void TEMPLATE(free_matrix, T)(T** matrix, int m);

#endif // T
