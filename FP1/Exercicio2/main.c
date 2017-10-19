#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int numero1, numero2, resultadosubtracao, resultado;
    
    puts("Subtração e multiplicação do resultado pelo 1º número");
    printf("Introduza o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Introduza o segundo numero: ");
    scanf("%d", &numero2);
    
    resultadosubtracao = numero1 - numero2;
    resultado = resultadosubtracao * numero1;
    
    printf("O resultado é %d", resultado);
    
    return (EXIT_SUCCESS);
}

