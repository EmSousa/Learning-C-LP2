#include <stdio.h>
#include <string.h>
#include <math.h>
#include "utils.h"


void verExtremos(int matrix[][MAX_COLUNAS]){
    int i, j, maior, menor;
    
    maior = matrix[0][0];
    for (i = 0; i < MAX_LINHAS; ++i){
        for (j = 0; j < MAX_COLUNAS; ++j){
            if (maior < matrix[i][j]){
                maior = matrix[i][j];
            }
        }
    }
    printf("O valor maior = %d \n", maior);
    
    menor = matrix[0][0];
    for (i = 0; i < MAX_LINHAS; ++i){
        for (j = 0; j < MAX_COLUNAS; ++j){
            if (menor > matrix[i][j]){
                menor = matrix[i][j];
            }    
        }
    }
    printf("O valor menor = %d", menor);
}

void printMatrix(int matrix [][MAX_COLUNAS]){
    int i, j;
    
    puts("");
    for (i = 0; i < MAX_LINHAS; ++i){
        for (j = 0; j < MAX_COLUNAS; ++j){
            printf(" %d", matrix[i][j]);
        }
        puts("");
    }
}