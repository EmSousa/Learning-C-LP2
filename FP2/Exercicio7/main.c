#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int numero1, numero2, numero3;
    
    puts("Ordem crescente de 3 numeros");
    printf("Introduza o primeiro numero: ");
    scanf("%d", &numero1);
    
    printf("Introduza o segundo numero: ");
    scanf("%d", &numero2);
    
    printf("Introduza o terceiro numero: ");
    scanf("%d", &numero3);
    
    if(numero1 > numero2 && numero2 > numero3){
        printf("Por ordem crescente fica: %d - %d - %d ", numero3, numero2, numero1);
        
    }else if(numero2 > numero3 && numero3 > numero1){
        printf("Por ordem crescente fica: %d - %d - %d ", numero1, numero3, numero2);
        
    }else{
        printf("Por ordem crescente fica: %d - %d - %d ", numero1, numero2, numero3);
    }
    
    return (EXIT_SUCCESS);
}

