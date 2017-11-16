#include <stdio.h>
#include <stdlib.h>

#define VALOR_MAX 1000

/*
 * Ficha 5 - Exercicio 8
 */

int CrivoEratostenes(int eratostenes[], int numero){
    int i;
    
    if (numero > VALOR_MAX){
        puts("ERRO!!!");
        return 0;
    } else {
        for (i = 4; i <= VALOR_MAX; i += 2){
            eratostenes[i] = 0;
        }
        for (i = 6; i <= VALOR_MAX; i += 3){
            eratostenes[i] = 0;
        }
        for (i = 10; i <= VALOR_MAX; i += 5){
            eratostenes[i] = 0;
        }
        for (i = 14; i <= VALOR_MAX; i += 7){
            eratostenes[i] = 0;
        }
    }
    
    printf("Resultado do crivo de eratostenes ate %d: ", numero);
    for (i = 2; i <= numero; ++i){
        if (eratostenes[i] != 0){
            printf("%d ", eratostenes[i]);
        }
    }
}


int main(int argc, char** argv) {
    int i, j, numero, eratostenes[VALOR_MAX];

    printf("Introduza ate que numero quer aplicar o crivo de Eratostenes: ");
    scanf("%d", &numero);
    
    for (i = 0; i <= VALOR_MAX; ++i){
        eratostenes[i] = i;
    }
    
    CrivoEratostenes(eratostenes, numero);
    
    return (EXIT_SUCCESS);
}

