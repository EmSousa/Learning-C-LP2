#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int numero;
    
    puts("Numeros impares de 0 ate limite escolhido");
    printf("Introduza o numero limite: ");
    scanf("%d", &numero);
    
    if (numero > 0){
        for(numero; numero > 0; numero -=1){
            if (numero % 2 != 0){
                printf(" %d", numero);
            }
        }       
    }else{
        puts("INTRODUZA VALOR ACIMA DE 0!!!"); 
    }

    return (EXIT_SUCCESS);
}

