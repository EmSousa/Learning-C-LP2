#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

#define MAXIMO 45

/*
 * Ficha 6 - Exercicio 6
 */
int main(int argc, char** argv) {
    char string[MAXIMO], carater;
    int ocorrencias;
    
    printf("Introduza uma frase: ");
    lerChar(string, MAXIMO);
    
    printf("Qual o carater a procurar na frase? ");
    scanf("%c", &carater);
    clean_buffer();
    
    ocorrencias = countChar(string, carater);
    
    printf("O carater '%c' foi introduzido %d vezes. ", carater, ocorrencias);

    return (EXIT_SUCCESS);
}

