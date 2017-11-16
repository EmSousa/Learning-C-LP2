#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_VET 10

/*
 * Ficha 5 - Exercicio 6 
 */

void limparBufferEntrada(){
    char ch;
    
    while((ch = getchar()) != '\n' && ch !=EOF);
}

void NumerosImpares(int vetor[]){
    int i;
    
    puts("Numeros impares sao: ");
    
    for (i = 0; i < TAMANHO_VET; ++i){
        if (vetor[i] % 2 > 0){
            printf("- %d ", vetor[i]);
        }
    } 
}

void NumerosPares(int vetor[]){
    int i;
    
    puts("Numeros pares sao: ");
    
    for (i = 0; i < TAMANHO_VET; ++i){
        if (vetor[i] % 2 == 0){
            printf("- %d ", vetor[i]);
        }
    } 
}

int main(int argc, char** argv) {
    int vetor[TAMANHO_VET], i;
    char operacao;
    
    for (i = 0; i < TAMANHO_VET; ++i){
        printf("Introduza um numero: ");
        scanf("%d", &vetor[i]);
    }
    
    while (1){
        printf("Introduza a letra referente a sua opcao: \nVer todos os impares - I \nVer todos os pares - P\n");
        limparBufferEntrada();
        scanf("%c", &operacao);
            
        if (operacao == 'I' || operacao == 'i'){
            NumerosImpares(vetor);
            break;
        }

        if (operacao == 'P' || operacao == 'p'){
            NumerosPares(vetor);
            break;
        }
    }

    return (EXIT_SUCCESS);
}

