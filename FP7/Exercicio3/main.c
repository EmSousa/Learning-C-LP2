#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

/*
 * Ficha 7 - Exercicio 3
 */

int main(int argc, char** argv) {
    int matrix[MAX_LINHAS][MAX_COLUNAS], i, j, media;

    for (i = 0; i < MAX_LINHAS; ++i) {
        for (j = 0; j < MAX_COLUNAS; ++j) {
            if (j == 0) {
                printf("Introduza o codigo do aluno %d: ", i + 1);
                scanf("%d", &matrix[i][j]);
            } else if (j == 1) {
                printf("Introduza a nota 1 do aluno: ");
                scanf("%d", &matrix[i][j]);
            } else if (j == 2) {
                printf("Introduza a nota 2 do aluno: ");
                scanf("%d", &matrix[i][j]);
            } else if (j == 3) {
                media = (matrix[i][j - 2] + matrix[i][j - 1]) / MAX_NOTAS;
                matrix[i][j] = media;
                puts("");
            }
        }
    }

    printMatrix(matrix);

    return (EXIT_SUCCESS);
}

