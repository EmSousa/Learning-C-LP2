#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_VET 10
/*
 * Ficha 5 - Exercicio 3
 */

void limparBufferEntrada(){ 
    char ch; 
    
    while ((ch = getchar()) != '\n' && ch != EOF);
}

void ProcurarCarateres(char vetor[TAMANHO_VET]){
    int posicao, contador_carateres = 0;
    char letra;
    
    printf("\nIntroduza a letra que deseja procurar: ");
    scanf("%c", &letra);
    limparBufferEntrada();
    
    printf("A letra encontra-se nas posicoes: ");
    for (posicao = 0; posicao < TAMANHO_VET; ++posicao){
        if (letra == vetor[posicao]){
            printf(" %d", posicao);
            contador_carateres++;
        }
    }
    
    printf("\nNo array existem %d vezes a letra %c", contador_carateres, letra);
}

int main(int argc, char** argv) {
    int  i;
    char vetor[TAMANHO_VET], carater;
    
    for (i = 0; i < TAMANHO_VET; ++i){
        printf("Introduza o carater a colocar no array: ");
        scanf("%c", &carater);
        limparBufferEntrada();
        vetor[i] = carater;
    }
    
    for (i = 0; i < TAMANHO_VET; ++i){
        printf(" %c", vetor[i]);
    }
    
    ProcurarCarateres(vetor);
    
    return (EXIT_SUCCESS);
}
