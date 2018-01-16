#ifndef UTILS_H
#define UTILS_H

//Variaveis globais
#define MAX_JOGADORES 2
#define MAX_TAMANHO 10
#define MAX_NOME 10

//Dados dos Jogadores
typedef struct jogador {
    char nome[MAX_NOME];
    int jogos;
    int pontos;
} Jogador;

void clean_buffer();
int lerString(char *string, int max);
void definirToken(char token[], Jogador dados_jogador[], int jogar_pc);
void fazerMatrix(char matrix[][MAX_TAMANHO]);
void imprimirMatrix(char matrix[][MAX_TAMANHO]);
void jogarPc(char matrix[][MAX_TAMANHO], char token[], int *linhas, char *colunas);
void vezJogar(char matrix[][MAX_TAMANHO], char token[], Jogador dados_jogador[], int jogar_pc);
int verificaJogada(char matrix[][MAX_TAMANHO], int linhas, int colunas, int coluna, int i, char token[], Jogador dados_jogador[]);
int verificaVitoria(char matrix[][MAX_TAMANHO], int i, char token[], Jogador dados_jogador[]);
void contadorJogadores(int contador);
int lerContador();
void guardarFicheiro(Jogador dados_jogador[], int nr_jogador);
void tabelaClassificativa(int contador, Jogador info[]);
#endif /* UTILS_H */