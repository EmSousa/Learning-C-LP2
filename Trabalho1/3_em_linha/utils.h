#ifndef UTILS_H
#define UTILS_H

//Variaveis globais
#define MAX_JOGADORES 2
#define MAX_TAMANHO 10

void clean_buffer();
void definirToken(char token[]);
void fazerMatrix(char matrix[][MAX_TAMANHO]);
void imprimirMatrix(char matrix[][MAX_TAMANHO]);
void vezJogar(char matrix[][MAX_TAMANHO], char token[]);
int verificaJogada(char matrix[][MAX_TAMANHO], int linhas, int colunas, int coluna, int i, char token[]);

#endif /* UTILS_H */