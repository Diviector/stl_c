#ifdef T

#include "malloc_t.h"
#include <stdlib.h>

T* TEMPLATE(malloc, T)(size_t size) {
    return (T*)malloc(size * sizeof(T));
}

void TEMPLATE(free, T)(T* ptr) {
    free(ptr);
}

#endif // T
