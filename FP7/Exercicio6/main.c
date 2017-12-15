#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

/*
 *  Ficha 7 - Exercicio 6
 */

int main(int argc, char** argv) {
    int  matrix_a[MAX_LINHAS][MAX_COLUNAS], matrix_b[MAX_LINHAS][MAX_COLUNAS], i, j, k, linhas, colunas, linhas2, colunas2;

    for (j = 0; j < 1; ++j) {
        printf("\nIntroduza o tamanho desejado para matriz %d: \n", j + 1);
        printf("Numero de linhas: ");
        scanf("%d", &linhas);
        printf("Numero de colunas: ");
        scanf("%d", &colunas);
        printf("\nIntroduza o tamanho desejado para matriz %d: \n", j + 2);
        printf("Numero de linhas: ");
        scanf("%d", &linhas2);
        printf("Numero de colunas: ");
        scanf("%d", &colunas2);
        
        if (linhas > MAX_LINHAS || colunas > MAX_COLUNAS) {
            puts("Tamanhao maximo da matriz e 10x10!");
            j = -1;
        } else if (colunas != linhas2){
            puts("As matrizes nao podem ser multiplicadas! Volte a introduzir os valores!");
            j = -1;
        }
    }

    preencherMatrix(matrix_a, matrix_b, linhas, colunas, linhas2, colunas2);

    printf("\nResultado da multiplicacao das matrizes:\n");
    multiplicarMatrix(matrix_a, matrix_b, linhas, colunas, linhas2, colunas2);
    
    return (EXIT_SUCCESS);
}
