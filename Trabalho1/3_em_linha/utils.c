#include <stdio.h>
#include <string.h>
#include <math.h>
#include "utils.h"

void clean_buffer() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

void definirToken(char token[]) { //Funcao para pedir o token ao jogadores
    int i;

    for (i = 0; i < MAX_JOGADORES; ++i) {
        printf("Introduza o token do jogador %d : ", i + 1);
        scanf("%c", &token[i]);
        if (token[1] == token[0]) { //Caso os tokens sejam iguais o ciclo vai repetir ate
            puts("Os tokens tem de ser diferentes!"); //o jogador 2 inserir um token diferente
            clean_buffer();
            --i;
            continue;
        }
        clean_buffer();
    }
}

void fazerMatrix(char matrix[][MAX_TAMANHO]) { //Funcao para fazer a matriz=
    int i, j;
    char numero = '1', letras = 'A';

    matrix[0][0] = '#'; // Definir a posicao 0,0 como sendo um #

    for (i = 0; i < MAX_TAMANHO; ++i) {
        for (j = 0; j < MAX_TAMANHO; ++j) {
            if (i == 0 && j >= 1) { //Preencher a linha 0 com letras de A a I
                matrix[0][j] = letras;
                ++letras;
            }
            if (i >= 1 && j == 0) { //Preencher a coluna 0 com numeros de 1 a 9
                matrix[i][0] = numero;
                ++numero;
            } else if (i != 0) { //Preencher as restantes posicoes da matriz com "-"
                matrix[i][j] = '-';
            }
        }
    }
    imprimirMatrix(matrix);
}

void imprimirMatrix(char matrix[][MAX_TAMANHO]) { //Funcao para imiprimir a matriz com a jogada
    int i, j;

    for (i = 0; i < MAX_TAMANHO; ++i) {
        for (j = 0; j < MAX_TAMANHO; ++j) {
            printf("%c|", matrix[i][j]);
        }
        puts("");
    }
}

void vezJogar(char matrix[][MAX_TAMANHO], char token[]) { //Pedido das posiçoes da jogada para cada jogador
    int i, linhas, coluna, verificado;
    char colunas;

    for (i = 0; i < MAX_JOGADORES; ++i) {
        printf("Se pretende desistir, introduza a pozição 0Z!\n");
        printf("Jogador %d insira as posiçoes da sua jogada \n", i + 1);
        printf("Linha: ");
        scanf("%d", &linhas);
        clean_buffer();
        printf("Coluna: ");
        scanf("%c", &colunas);
        clean_buffer();

        coluna = colunas - 64; //Passar a letra para numero
        
        verificado = verificaJogada(matrix, linhas, colunas, coluna, i, token); 
        
        if (verificado < 3){ //Acoes a tomar depois de verificar a jogada
            if (verificado == 0){
                break; //Este e o caso de o jogado introduzir Z0, desistindo o programa para
            } else if (verificado == 1){
                --i; //No caso de inserir a mesma casa de jogo volta a chamar o mesmo jogador
            } else if (verificado == 2){
                --i; //No caso de inserir posicoes fora da matriz, volta ao mesmo jogador
            }
        }
        
        if (i == 0) { //Caso seja o turno do jogador 1, preenche a posicao da matriz com o seu token
            matrix[linhas][coluna] = token[0];
            imprimirMatrix(matrix);
        }
        if (i == 1) { //Caso seja o turno do jogador 2, preenche a posicao da matriz com o seu token
            matrix[linhas][coluna] = token[1];
            imprimirMatrix(matrix);
        }

        if (i == 1) { //Para voltar ao jogador 1, fazendo com que o ciclo for "reinicie"
            i = -1;
        }

    }
}

int verificaJogada(char matrix[][MAX_TAMANHO], int linhas, int colunas, int coluna, int i, char token[]){ //Funcao que verifica a jogada

    if (linhas == 0 && colunas == 'Z') { //Caso um jogador insira a posição "0Z" esse jogador desiste, dando a vitoria ao oponente.
        printf("O jogador %d desistiu!\n", i + 1);
        if (i == 0) { //Caso seja o jogador 1 a desistir, o jogador 2 ganha
            printf("\nPARABÉNS JOGADOR %d GANHOU O JOGO!\n", i + 2);
        } else { //Caso seja o jogador 2 a desistir, o jogador 1 ganha
            printf("\nPARABÉNS JOGADOR %d GANHOU O JOGO!\n", i);
        }
        return 0;
    }
    if (matrix[linhas][coluna] == token[0] || matrix[linhas][coluna] == token[1]){ 
        printf("Posição ocupada! Por favor volte a inserir!\n"); //Para saber se a posição de jogo escolhida pelo jogador esta ocupada
        return 1;
    }
    if (linhas < 1 || linhas > 9){
        printf("Posição inexistente, por favor volte a inserir!\n"); //Caso a posicao inserida seja fora da matriz
        return 2;
    }
    if (coluna < 1 || coluna > 9){
        printf("Posição inexistente, por favor volte a inserir!\n"); //Caso a posicao inserida seja fora da matriz
        return 2;
    }
}