#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int numero, number;
    
    puts("Os 5 antecessores e 5 sucessores de um numero");
    printf("Introduza um numero: ");
    scanf("%d", &numero);
    
    number = numero + 5;
    
    for (numero -= 5; numero <= number; numero +=1){
        printf(" %d", numero);
    }

    return (EXIT_SUCCESS);
}

