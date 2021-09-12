#ifndef MALLOC_T_ALL_H
#define MALLOC_T_ALL_H

#include "../../template.h"
#include "../../template_types.h"

#ifdef T
#undef T
#endif // T

#define T int
#include "malloc_t.h"

#ifdef T
#undef T
#endif // T

#define T PTR(int)
#include "malloc_t.h"

#ifdef T
#undef T
#endif // T

#define T PTR(PTR(int))
#include "malloc_t.h"

#endif //MALLOC_T_ALL_H
