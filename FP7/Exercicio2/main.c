#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

/*
 * Ficha 7 - Exercicio 2
 */

int main(int argc, char** argv) {
    int matrix[MAX_LINHAS][MAX_COLUNAS], i, j, numero;
    
    puts("Introduza os valores na matriz:");
    for (i = 0; i < MAX_LINHAS; ++i){
        for (j = 0; j < MAX_COLUNAS; ++j){
            printf("Valor de %d|%d: ", i, j);
            scanf("%d", &numero);
            matrix[i][j] = numero;
        }
    }
    
    checkNumeros(matrix);
    
    printMatrix(matrix);
    

    return (EXIT_SUCCESS);
}

