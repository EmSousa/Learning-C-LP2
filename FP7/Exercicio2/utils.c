#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

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

void checkNumeros(int matrix[][MAX_COLUNAS]){
    int i, j, numero, conta = 0;
    
    printf("Introduza o numero que pretende procurar: ");
    scanf("%d", &numero);
    
    puts("");
    for (i = 0; i < MAX_LINHAS; ++i){
        for (j = 0; j < MAX_COLUNAS; ++j){
            if (numero == matrix[i][j]){
                ++conta;
            }
        }
    }
    printf("O numero %d repete-se %d vezes \n", numero, conta);
}

