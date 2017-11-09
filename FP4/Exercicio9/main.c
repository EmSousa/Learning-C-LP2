#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

int NumerosImprimir(int numero_limite){
    int i;
    
    for (i = 0; i <= numero_limite; ++i){
        printf("%d \n", i);
    }
}

int main(int argc, char** argv) {
    int numero_limite;
    
    puts("Imprimir numero de 0 ate ao input do utilizador");
    printf("Introduza o numero limite: ");
    scanf("%d", &numero_limite);
    
    NumerosImprimir(numero_limite);

    return (EXIT_SUCCESS);
}

