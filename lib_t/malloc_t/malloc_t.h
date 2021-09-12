#include "../../template.h"
#include <sys/types.h>

#ifdef T

T* TEMPLATE(malloc, T)(size_t size);
void TEMPLATE(free, T)(T* ptr);

#endif // T