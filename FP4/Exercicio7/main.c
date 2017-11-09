#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

int lerInteiro(int minimo, int maximo){
    int numero;
    
    while (1){
        printf("Introduza o numero dentro do intervalo: ");
        scanf("%d", &numero);
        if (numero <= maximo && numero >= minimo){
            return numero;
        } else {
            puts("Numero invalido");
        }
    }
    return numero;
}

int main(int argc, char** argv) {
    int numero;
    
    puts("Saber se um numero esta dentro do intervao (1 - 20)");
    
    numero = lerInteiro(0, 20);
    
    printf("\nO %d esta dentro do intervalo!", numero);
    
    return (EXIT_SUCCESS);
}