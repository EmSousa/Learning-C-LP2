#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {    
    int numero, i, contdiv = 0;
    
    puts("Saber se um determinado numero e primo ou nao");
    printf("Introduza o numero: ");
    scanf("%d", &numero);
    
    if (numero < 0){
        puts("ERRO! Introduza um numero inteiro e positivo");
        return (0);
    }
    
    for (i = 1; i <= numero; ++i){
        if (numero % i == 0){
            contdiv++;
        }
    }
    
    if (contdiv == 2){
        puts("O numero introduzido e primo!!!");
    } else {
        puts("O numero introduzido nao e primo!!!");
    }
    
    return (EXIT_SUCCESS);
}

