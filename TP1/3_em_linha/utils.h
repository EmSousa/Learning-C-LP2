#ifndef UTILS_H
#define UTILS_H

//Variaveis globais
#define MAX_JOGADORES 2
#define MAX_TAMANHO 16

void clean_buffer();
void definirToken(char token[], char nome[], char nome2[]);
void fazerMatrix(char matrix[][MAX_TAMANHO]);
void imprimirMatrix(char matrix[][MAX_TAMANHO]);
void vezJogar(char matrix[][MAX_TAMANHO], char token[], char nome[], char nome2[]);
int verificaJogada(char matrix[][MAX_TAMANHO], int linhas, int colunas, int coluna, int i, char token[]);
int verificaVitoria(char matrix[][MAX_TAMANHO], int i, char token[]);

#endif /* UTILS_H */