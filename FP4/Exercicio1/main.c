#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

int lerInteiro(){
    int numero;
    
    scanf("%d", &numero);
    return numero;
}

int asteriscos(int numero) {
    int i;
    
    for (i = 1; i <= numero; ++i) {
        printf("*");
    }
    
}

int main(int argc, char** argv) {
    int numero;
    
    puts("Imprime o numero de asteriscos pedidos pelo utilizador");
    printf("Introduza o numero de asteriscos a imprimir no ecrã: ");
    numero = lerInteiro();
    
    asteriscos(numero);
    
    return (EXIT_SUCCESS);
}

