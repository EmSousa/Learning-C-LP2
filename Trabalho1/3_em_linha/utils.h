#ifndef UTILS_H
#define UTILS_H

//Variaveis globais
#define MAX_JOGADORES 2
#define MAX_TAMANHO 9

void clean_buffer();
void definirToken(char token[]);
void fazerMatrix(char matrix[][MAX_TAMANHO]);
void imprimirMatrix(char matrix[][MAX_TAMANHO]);
int vezJogar(char matrix[][MAX_TAMANHO], char token[]);


#endif /* UTILS_H */