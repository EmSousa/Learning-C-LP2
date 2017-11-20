#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

#define MAXIMO 45

/*
 * Ficha 6 - exercicio 2
 */

int main(int argc, char** argv) {
    char string[MAXIMO];
    
    printf("Introduza uma palavra ou frase até %d caracteres: ", MAXIMO);
    
    lerString(string, MAXIMO);
    
    printf("Introduziu o seguinte texto -> %s", string);

    return (EXIT_SUCCESS);
}

