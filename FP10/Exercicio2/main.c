#include <stdio.h>
#include <stdlib.h>

#include "utils.h"

/*
 *  Ficha 9 - Exercicio 2
 */
int main(int argc, char** argv) {
    int *a = (int*) malloc(sizeof (int));
    int *b = (int*) malloc(sizeof (int));
    long *resultado = (long*) malloc(sizeof (long));
    
    *a = 12;
    *b = 3;
    
    somar(*a, *b, resultado);
    
    
    printf("%d + %d = %ld", *a, *b, *resultado);
    
    free(a);
    free(a);

    return (EXIT_SUCCESS);
}

