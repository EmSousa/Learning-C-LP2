#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_VET 21
#define MAXIMO 25
#define MINIMO 5

/*
 * Ficha 5 - Exercicio 2
 */
int main(int argc, char** argv) {
    int vetor[TAMANHO_VET], i;
    
    puts("Array com valores de 5 a 25");
    
    for (i = MINIMO; i <= MAXIMO; ++i){
        vetor[i] = i;
        printf(" %d", vetor[i]);
    }
    

    return (EXIT_SUCCESS);
}

