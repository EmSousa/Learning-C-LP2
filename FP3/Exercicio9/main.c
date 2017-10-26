#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int numero, i, resultado;
    
    puts("Tabuada do numero escolhido");
    printf("Introduza o numero a fazer a tabuada: ");
    scanf("%d", &numero);
    
    for (i = 0; i <= 10; ++i){
        resultado = numero * i;
        printf("\n%d x %d = %d", numero, i, resultado);
    }

    return (EXIT_SUCCESS);
}

