#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_VET 10

/*
 * Ficha 5 - Exercicio 4
 */

int main(int argc, char** argv) {
    int i, valor;
    float vetor[TAMANHO_VET], soma = 0.0, media = 0.0;
    
    for (i = 0; i < TAMANHO_VET; ++i){
        printf("Introduza o valor: ");
        scanf("%f", &vetor[valor]);
        
        if (vetor[valor] == -1 || i == TAMANHO_VET){
            puts("Leitura de valores concluida!");
            break;
        }
        if (vetor[valor] >= 0){
            soma += vetor[valor];
        } else {
            continue;
        }   
    }
    
    media = soma / i;
    
    printf("A media = %.2f", media);
            
    
    return (EXIT_SUCCESS);
}

