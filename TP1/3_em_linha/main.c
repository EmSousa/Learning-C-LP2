#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

/*
 * Trabalho pratico 2
 */

int main(int argc, char** argv) {
    char token[MAX_JOGADORES], matrix[MAX_TAMANHO][MAX_TAMANHO];
    int i, escolha, jogar_pc = 0, contador = 0;
    Jogador dados_jogador[MAX_JOGADORES], *info = NULL;

    contador = lerContador();

    printf("Jogo do 3 em linha\n"); //Menu de opcoes para o jogo

    do {
        printf("Escolha a opcao pretendida:\n");
        printf("1 -> Jogador 1 vs Jogador 2\n");
        printf("2 -> Jogador vs Cortana(AI)\n");
        printf("3 -> Tabela Classificativa\n");
        printf("4 -> Sair do jogo\n");
        printf("Opcao: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1: //Jogar Jogador contra Jogador
                printf("Jogo 1 v 1\n");
                definirToken(token, dados_jogador, jogar_pc);
                fazerMatrix(matrix);
                vezJogar(matrix, token, dados_jogador, jogar_pc);
                contador += 2;
                contadorJogadores(contador);
                dados_jogador[0].jogos = 1;
                dados_jogador[1].jogos = 1;
                guardarFicheiro(dados_jogador, MAX_JOGADORES);
                break;
            case 2: //Jogar Jogador contra Computado
                printf("Jogo 1 v PC\n");
                jogar_pc = 1;
                definirToken(token, dados_jogador, jogar_pc);
                fazerMatrix(matrix);
                vezJogar(matrix, token, dados_jogador, jogar_pc);
                jogar_pc = 0;
                contador += 1;
                contadorJogadores(contador);
                dados_jogador[0].jogos = 1;
                guardarFicheiro(dados_jogador, 1);
                break;
            case 3: //Apresentar Ficheiro binário com resultados
                printf("Resultados\n");
                info = (Jogador *) malloc(contador * sizeof (Jogador));
                FILE *ficheiro = fopen("jogadores.dat", "rb");
                for (i = 0; i < contador; ++i) {
                    fread(&info[i], sizeof (Jogador), 1, ficheiro);
                }
                fclose(ficheiro);
                free(ficheiro);
                tabelaClassificativa(contador, info);
                free(info);
                info = NULL;
                break;
            case 4: //Opcao para sair do jogo
                printf("A sair do jogo...\n");
                break;
            default:
                printf("Insira uma escolha valida!\n");
                break;
        }
    } while (escolha != 4);

    return (EXIT_SUCCESS);
}