#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

/*
 * Trabalho pratico 1
 */

int main(int argc, char** argv) {
    char token[MAX_JOGADORES], matrix[MAX_TAMANHO][MAX_TAMANHO], nome[10], nome2[10];
    int i;

    for (i = 0; i < MAX_JOGADORES-1; ++i) {
        printf("Jogador %d introduza o seu nome: ", i+1);
        scanf("%s", &nome);
        printf("Jogador %d introduza o seu nome: ", i+2);
        scanf("%s", &nome2);
    }
    
    definirToken(token, nome, nome2);
    fazerMatrix(matrix);
    vezJogar(matrix, token, nome, nome2);

    return (EXIT_SUCCESS);
}

