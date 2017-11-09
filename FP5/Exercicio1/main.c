#include <stdio.h>
#include <stdlib.h>

#define MAXIMO 21 

/*
 * Ficha 5 - Exercicio 1
 */

int main(int argc, char** argv) {
    int vetor[MAXIMO], i;
    
    puts("Numeros de um array com 20 espacos");
    
    for (i = 0; i < MAXIMO; ++i){
        vetor[i] = i;
        printf(" %d", vetor[i]);
    }
    
    return (EXIT_SUCCESS);
}

