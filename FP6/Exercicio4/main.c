#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

#define MAXIMO 100

/*
 * Ficha 6 - Exercicio 4
 */

int main(int argc, char** argv) {
    char string1[MAXIMO], string2[MAXIMO];
    
    printf("Escreva uma frase: ");
    lerString(string1, MAXIMO);
    
    strcpy(string2, string1);
    
    printf("A sua frase foi: %s", string2);

    return (EXIT_SUCCESS);
}

