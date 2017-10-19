#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int numero, antecessor, sucessor;
    
    puts("Impressão do antecessor e do sucessor");
    printf("Introduza um numero: ");
    scanf("%d", &numero);
    
    antecessor = numero - 1;
    sucessor = numero + 1;
    
    printf("O antecessor do numero %d é %d e o sucessor é %d", numero, antecessor, sucessor);
    return (EXIT_SUCCESS);
}

