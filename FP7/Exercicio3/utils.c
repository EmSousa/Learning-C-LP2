#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

void printMatrix(int matrix [][MAX_COLUNAS]) {
    int i, j;

    puts("");
    printf("Codigo     Nota1    Nota2    Media \n");
    for (i = 0; i < MAX_LINHAS; ++i) {
        for (j = 0; j < MAX_COLUNAS; ++j) {
            printf("  %d     ", matrix[i][j]);
        }
        puts("");
    }
}
