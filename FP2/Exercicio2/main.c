#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int numero1, numero2;
    
    puts("Escrever do maior para o menor");
    printf("Escreve o primeiro numero: ");
    scanf("%d", &numero1);
     
    printf("Escreve o segundo numero: ");
    scanf("%d", &numero2);
    
    //Comparação dos dados
    if (numero1 == numero2){
        puts("Os numeros introduzidos sao iguais");
        return(0);
    }
    if (numero1 > numero2){
        printf("O maior é o %d e o menor %d", numero1, numero2);
    } else {
        printf("O maior é o %d e o menor %d", numero2, numero1);
    }

    return (EXIT_SUCCESS);
}

