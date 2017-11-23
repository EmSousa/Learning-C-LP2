#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

#define MAXIMO 45

/*
 * Ficha 6 - Exercicio 9
 */

int main(int argc, char** argv) {
    char string1[MAXIMO], string2[MAXIMO], string3[1] = ",";
    
    printf("Introduza uma frase: ");
    lerString(string1, MAXIMO);
    
    printf("Introduza uma frase: ");
    lerString(string2, MAXIMO);
    
    strcat(string1, string3);
    
    printf("A frase concatenada: %s", string1);

    return (EXIT_SUCCESS);
}

