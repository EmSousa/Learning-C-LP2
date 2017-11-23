#include <stdio.h>
#include <string.h>
#include <math.h>
#include "utils.h"

#define MAXIMO 45


void clean_buffer(){
char ch;
while ((ch = getchar()) != '\n' && ch != EOF);
}

int lerString(char *string, int max) {
    if (fgets(string, max, stdin) != NULL) {
        int tamanho = strlen(string) - 1;
        if (string[tamanho] == '\n') {
            string[tamanho] = '\0';
        } else { 
            clean_buffer();
        }
        return 1;
    }
    return 0;
}

int lastIndex(char letra, char *string, int max){
    int i, posicao_espaco;
    
    for (i = 0; i <= max; ++i){
        if (string[i] == letra){
            posicao_espaco = i;
        }
    }
    return posicao_espaco;
}

void printNome(char *string, int p1, int p2){
    int i;
    
    printf("O seu nome no formato apelido nome: ");
    for (i = p1; i <= p2; ++i){
        printf("%c", string[i]);
    }
    printf(" ");
    for (i = 0; i <= p1; ++i){
        printf("%c", string[i]);
    }
}