#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

/*
 * Trabalho pratico 1
 */

int main(int argc, char** argv) {
    char token[MAX_JOGADORES], matrix[MAX_TAMANHO][MAX_TAMANHO];

    definirToken(token);
    fazerMatrix(matrix);
    vezJogar(matrix, token);

    return (EXIT_SUCCESS);
}

