#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_VET 10

/*
 * Ficha 5 - Exercicio 5
 */

void ImprimirVetor(float vetor[]){
    int i;
    
    for (i = 0; i < TAMANHO_VET; ++i){
        printf("Posicao[%d] = %.1f \n", i, vetor[i]);
    }
}

void DobroElemento(float vetor[]){
    int i;
    
    for (i = 0; i < TAMANHO_VET; ++i){
        printf("Posicao[%d] = %.1f \n", i, vetor[i] * 2);
    }  
}

void SomaElementos(float vetor[]){
    int i;
    float soma = 0;
    
    for (i = 0; i < TAMANHO_VET; ++i){
        soma += vetor[i];
    }  
    printf("A soma de todos os elementos = %.2f \n", soma);
}

void MediaElemento(float vetor[]){
    int i;
    float soma = 0, media = 0;
    
    for (i = 0; i < TAMANHO_VET; ++i){
        soma += vetor[i];
    }
    media = soma / TAMANHO_VET;
    
    printf("A de todos os elementos = %.2f \n", media);
}

void MaiorElemento(float vetor[]){
    int i;
    float maior = 0;
    
    for (i = 0; i < TAMANHO_VET; ++i){
        if (vetor[i] > maior){
            maior = vetor[i];
        }
    }
    printf("O valor maior = %.2f \n", maior);
}

void MenorElemento(float vetor[]){
    int i;
    float menor;
    
    for (i = 0; i < TAMANHO_VET; ++i){
        if (vetor[i] < menor){
            menor = vetor[i];
        }
    }
    printf("O valor menor = %.2f \n", menor);
}


int main(int argc, char** argv) {
    int i;
    float vetor[TAMANHO_VET];
        
    for (i = 0; i < TAMANHO_VET; ++i){
        printf("Introduza um numero: ");
        scanf("%f", &vetor[i]);
    }
    
    ImprimirVetor(vetor);
    DobroElemento(vetor);
    SomaElementos(vetor);
    MediaElemento(vetor);
    MaiorElemento(vetor);
    MenorElemento(vetor);

    return (EXIT_SUCCESS);
}

