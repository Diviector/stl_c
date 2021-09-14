#ifndef MALLOC_MATRIX_T_ALL_H
#define MALLOC_MATRIX_T_ALL_H

#include "../../template.h"
#include "../../template_types.h"
#include "../malloc_t/malloc_t_all.h"

#ifdef T
#undef T
#endif // T

#define T int
#include "malloc_matrix_t.h"

#endif // MALLOC_MATRIX_T_ALL_H
