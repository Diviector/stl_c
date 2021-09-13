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

#define T int_p
#include "malloc_t.h"

#ifdef T
#undef T
#endif // T

#define T int_2p
#include "malloc_t.h"

#ifdef T
#undef T
#endif // T

#endif //MALLOC_T_ALL_H
