#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int numero1, numero2, maior;
    
    puts("Maior número");
    printf("Insira o primeiro numero: ");
    scanf("%d", &numero1);
    
    printf("Insira o segundo numero: ");
    scanf("%d", &numero2);
    
    if (numero1 > numero2){
        maior = numero1;
    } else { 
        maior = numero2;
    }
    
    printf("O número maior é o %d", maior);
    
    return (EXIT_SUCCESS);
}

