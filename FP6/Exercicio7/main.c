#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

#define MAXIMO 45

/*
 * Ficha 6 - Exercicio 6
 */

int main(int argc, char** argv) {
    char string[MAXIMO];
    int nr_carateres, nr_carateres_sem_espaco, espacos;
    
    printf("Introduza o seu nome: ");
    lerString(string, MAXIMO);
    
    nr_carateres = strlen(string);
    
    espacos = countChar(string, nr_carateres);
    
    nr_carateres_sem_espaco = nr_carateres - espacos;
    
    printf("O numero de carateres e %d", nr_carateres_sem_espaco);

    return (EXIT_SUCCESS);
}

