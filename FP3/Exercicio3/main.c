#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int numero1, numero2;
    
    puts("Intervalo entre dois numeros");
    printf("Introduza o primeiro numero: ");
    scanf("%d", &numero1);
    
    printf("Introduza o segundo numero: ");
    scanf("%d", &numero2);
    
    for (numero1 += 1; numero1 < numero2; numero1 += 1){
        printf("\n%d", numero1);
    }
    
    return (EXIT_SUCCESS);
}

