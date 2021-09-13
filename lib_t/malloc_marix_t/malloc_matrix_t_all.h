#ifndef MALLOC_MATRIX_T_ALL_H
#define MALLOC_MATRIX_T_ALL_H

#include "../../template.h"
#include "../../template_types.h"

#ifdef T
#undef T
#endif // T

#define T int
#include "malloc_matrix_t.h"

#ifdef T
#undef T
#endif

#endif // MALLOC_MATRIX_T_ALL_H
