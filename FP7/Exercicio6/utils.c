#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

void printMatrix(int matrix[][MAX_COLUNAS], int linhas, int colunas) {
    int i, j;

    puts("");
    for (i = 0; i < linhas; ++i) {
        for (j = 0; j < colunas; ++j) {
            printf(" %d", matrix[i][j]);
        }
        puts("");
    }
}

void preencherMatrix(int matrix[][MAX_COLUNAS], int matrix_b[][MAX_COLUNAS], int linhas, int colunas, int linhas2, int colunas2) {
    int i, j, k;

    for (i = 0; i < 2; ++i){
            if (i == 0) {
                puts("Introduza os valores na matriz:");
                for (j = 0; j < linhas; ++j) {
                    for (k = 0; k < colunas; ++k) {
                        printf("Valor de %d|%d: ", j, k);
                                scanf("%d", &matrix[j][k]);
                    }
                }
                printMatrix(matrix, linhas, colunas);
            } else if (i == 1) {
                for (j = 0; j < linhas2; ++j) {
                    for (k = 0; k < colunas2; ++k) {

                        printf("Valor de %d|%d: ", j, k);
                                scanf("%d", &matrix_b[j][k]);
                    }
                }
                printMatrix(matrix_b, linhas2, colunas2);
            }
        }
}

void multiplicarMatrix(int matrix[][MAX_COLUNAS], int matrix_b[][MAX_COLUNAS], int linhas, int colunas, int linhas2, int colunas2) {
    int i, j, k, mult=0, matrix_mult[MAX_LINHAS][MAX_COLUNAS];

    for (i = 0; i < linhas; ++i) {
        for (j = 0; j < colunas2; ++j) {
            for (k = 0; k < linhas2; ++k) {
                mult = mult + (matrix[i][k] * matrix_b[k][j]);
            }
            
            matrix_mult[i][j] = mult;
            mult = 0;
        }
    }
    printMatrix(matrix_mult, linhas2, colunas);
}