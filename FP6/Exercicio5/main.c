#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "utils.h"

#define MAXIMO 45

/*
 * Ficha 6 - Exercicio 5
 */

int main(int argc, char** argv) {
    char string[MAXIMO];
    int nr_carateres;
    
    printf("Escreva algo para contar o numero de carateres: ");
    lerString(string, MAXIMO);
    
    nr_carateres = strlen(string);
    
    printf("O numero de carateres na string = %d", nr_carateres);

    return (EXIT_SUCCESS);
}

