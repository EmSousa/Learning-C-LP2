#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

void printMatrix(int matrix_a[][MAX_COLUNAS]) {
    int i, j;

    puts("");
    for (i = 0; i < MAX_LINHAS; ++i) {
        for (j = 0; j < MAX_COLUNAS; ++j) {
            printf(" %d", matrix_a[i][j]);
        }
        puts("");
    }
}

void matrixInvertida(int matrix_a[][MAX_COLUNAS]) {
    int i, j;

    for (i = 0; i < MAX_LINHAS; ++i) {
        for (j = MAX_COLUNAS-1; j >= 0; --j) {
            printf(" %d", matrix_a[j][i]);
        }
        puts("");
    }
}