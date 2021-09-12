#ifdef T

#include "malloc_matrix_t.h"
#include "../malloc_t/malloc_t_all.h"

T** TEMPLATE(malloc_matrix, T)(int m, int n) {
    T** matrix = TEMPLATE(malloc, PTR(T))(m);
    for (int row = 0; row < m; ++row) {
        matrix[row] = TEMPLATE(malloc, T)(n);
    }
    return matrix;
}

void TEMPLATE(free_matrix, T)(T** matrix, int m) {
    for (int row = 0; row < m; ++row) {
        TEMPLATE(free, T)(matrix[row]);
    }
    TEMPLATE(free, T_ptr_ptr)(matrix);
}

#endif // T
