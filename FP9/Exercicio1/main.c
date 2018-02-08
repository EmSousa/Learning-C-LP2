#include <stdio.h>
#include <stdlib.h>

#include "utils.h"

/*
 * Ficha 9 - Exercicio 1 
 */
int main(int argc, char** argv) {
    int num1, num2;
    long resultado;
    
    printf("Introduza o primeiro numero: ");
    scanf("%d", &num1);
    printf("Introduza o segundo numero: ");
    scanf("%d", &num2);
    
    somar(num1, num2, &resultado);
    
    printf("%d + %d = %ld", num1, num2, resultado);
    
    return (EXIT_SUCCESS);
}

