#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

#define MAXIMO 45

/*
 * Ficha 6 - Exercicio 8
 */

int main(int argc, char** argv) {
    char string[MAXIMO];
    int nome, apelido, i;
    
    printf("Insira o seu primeiro e ultimo nome: ");
    lerString(string, MAXIMO);
    
    nome = lastIndex(' ', string, MAXIMO);
    apelido = strlen(string);
    
    printNome(string, nome, apelido);

    return (EXIT_SUCCESS);
}

