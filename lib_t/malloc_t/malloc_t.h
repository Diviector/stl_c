#ifdef T
#include "../../template.h"
#include <sys/types.h>

T* TEMPLATE(malloc, T)(size_t size);
void TEMPLATE(free, T)(T* ptr);

#endif // T