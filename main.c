#include "template.h"
#include <stdio.h>

#include "lib_t/malloc_marix_t/malloc_matrix_t_all.h"

int main() {
    int m = 3, n = 7;
    int** matrix = TEMPLATE(malloc_matrix, int)(m, n);
    for (int row = 0; row < m; ++row) {
        for (int col = 0; col < n; ++col) {
            matrix[row][col] = row + col;
        }
    }
    for (int row = 0; row < m; ++row) {
        printf("row_%d:", row);
        for (int col = 0; col < n; ++col) {
            printf(" %d", matrix[row][col]);
        }
        printf("\n");
    }
    return 0;
}
