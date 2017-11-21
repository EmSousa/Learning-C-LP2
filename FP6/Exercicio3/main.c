#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

#define MAXIMO 45

/*
 * Ficha 6 -  Exercicio 3
 */

int main(int argc, char** argv) {
    char string1[MAXIMO], string2[MAXIMO];
    int ordem;
    
    printf("Introduza uma palavra: ");
    lerString(string1, MAXIMO);
    
    printf("Introduza uma palavra: ");
    lerString(string2, MAXIMO);
    
    ordem = strcmp(string1, string2);
    
    if (ordem < 0){
        puts("Ordem alfabética das palavras:");
        printf("%s\n", string1);
        printf("%s", string2);    
    } else {
        puts("Ordem alfabética das palavras:");
        printf("%s\n", string2);
        printf("%s", string1);
    }
    return (EXIT_SUCCESS);
}

