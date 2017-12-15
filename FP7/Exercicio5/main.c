#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

/*
 *  Ficha 7 - Exercicio 5
 */

int main(int argc, char** argv) {
    int  matrix_a[MAX_LINHAS][MAX_COLUNAS], i, j;
    
    puts("Introduza os valores na matriz:");
    for (i = 0; i < MAX_LINHAS; ++i){
        for (j = 0; j < MAX_COLUNAS; ++j){
            printf("Valor de %d|%d: ", i, j);
            scanf("%d", &matrix_a[i][j]);
        }
    }
    
    printMatrix(matrix_a);
    
    printf("\nMatriz rodada em 90º:\n");
    matrixInvertida(matrix_a);
    
    return (EXIT_SUCCESS);
}

