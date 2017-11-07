#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int asteriscos(int numero_ast) {
    int i;
    
    for (i = 1; i <= numero_ast; ++i) {
        printf("*");
    }
    
}


int main(int argc, char** argv) {
    int numero_asteriscos;
    
    puts("Imprime o numero de asteriscos pedidos pelo utilizador");
    printf("Introduza o numero de asteriscos a imprimir no ecrã: ");
    scanf("%d", &numero_asteriscos);
    
    asteriscos(numero_asteriscos);
    
    return (EXIT_SUCCESS);
}

