#include <stdio.h>
#include <string.h>
#include <math.h>
#include "utils.h"

void clean_buffer() {
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

void definirToken(char token[], Jogador dados_jogador[], int jogar_pc) { //Funcao para pedir o token ao jogadores
    int i;

    clean_buffer();

    for (i = 0; i < MAX_JOGADORES; ++i) {
        if (jogar_pc == 1 & i == 1) { //Para ser possivel dar nome e token com computador
            printf("Insira o nome e token do Computador\n");
        }
        printf("Insira o nome: ");
        lerString(dados_jogador[i].nome, MAX_NOME);
        printf("%s insira o token: ", dados_jogador[i].nome);
        scanf("%c", &token[i]);
        clean_buffer();

        if (token[1] == token[0]) { //Caso os tokens sejam iguais o ciclo vai repetir ate
            puts("Os tokens tem de ser diferentes!"); //o jogador 2 inserir um token diferente
            clean_buffer();
            --i;
            continue;
        }
        dados_jogador[i].jogos = 0; //Jogadores começam com 0 jogos
        dados_jogador[i].pontos = 0; //Jogadores começam com 0 pontos
    }
}

void fazerMatrix(char matrix[][MAX_TAMANHO]) { //Funcao para fazer a matriz=
    int i, j;

    for (i = 0; i < MAX_TAMANHO; ++i) {
        for (j = 0; j < MAX_TAMANHO; ++j) {
            matrix[i][j] = '-';
        }
    }
    imprimirMatrix(matrix);
}

void imprimirMatrix(char matrix[][MAX_TAMANHO]) { //Funcao para imiprimir a matriz 
    int i, j;

    printf("#|A|B|C|D|E|F|G|H|I|J|\n");

    for (i = 0; i < MAX_TAMANHO; ++i) {
        for (j = 0; j < MAX_TAMANHO; ++j) {
            if (j == 0) {
                printf("%d|", i + 1);
            }
            printf("%c|", matrix[i][j]);
        }
        puts("");
    }
}

void jogarPc(char matrix[][MAX_TAMANHO], char token[], int *linhas, char *colunas) { //Funcao que torna possivel o computador jogar
    int j, k;

    for (j = 0; j < MAX_TAMANHO; ++j) {
        for (k = 0; k < MAX_TAMANHO; ++k) {
            if (matrix[j][k] == token[0] && matrix[j][(k + 1)] == token[0] && matrix[j][(k + 2)] == '-') { //Verifica se tem 2 em linha na linha e joga na terceira posicao
                *linhas = j + 1;
                *colunas = k + 2 + 65;
                return;
            } else if (matrix[j][k] == token[0] && matrix[(j + 1)][k] == token[0] && matrix[(j + 2)][k] == '-') { //Verifica se tem 2 em linha na coluna e joga na terceira posicao
                *linhas = j + 2 + 1;
                *colunas = k + 65;
                return;
            } else if (matrix[j][k] == token[0] && matrix[(j + 1)][(k + 1)] == token[0] && matrix[(j + 2)][(k + 2)] == '-') { //Verifica se tem 2 em linha na diagonal "\" e joga na terceira posicao
                *linhas = j + 2 + 1;
                *colunas = k + 2 + 65;
                return;
            } else if (matrix[j][k] == token[0] && matrix[(j + 1)][(k - 1)] == token[0] && matrix[(j + 2)][(k - 2)] == '-') { //Verifica se tem 2 em linha na diagonal "/" e joga na terceira posicao
                *linhas = j + 2 + 1;
                *colunas = k - 2 + 65;
                return;
            }
        }

    }

    for (j = 0; j < MAX_TAMANHO; ++j) { //Caso nao verifique 2 em linha joga na casa 1A
        for (k = 0; k < MAX_TAMANHO; ++k) {
            if (matrix[j][k] == '-') {
                *linhas = j + 1;
                *colunas = k + 65;
                return;
            }
        }
    }

}

void sugestaoJogada(char matrix[][MAX_TAMANHO], char token[], int *linhas, char *colunas) { //Funcao que sugere uma jogada possivel que permite ao utilizador ganhar
    int j, k;

    for (j = 0; j < MAX_TAMANHO; ++j) {
        for (k = 0; k < MAX_TAMANHO; ++k) {
            if (matrix[j][k] == token[0] && matrix[j][(k + 1)] == token[0] && matrix[j][(k + 2)] == '-') { //Verifica se tem 2 em linha na linha e sugere a terceira posicao
                printf("Deveria jogar na posicao |%d|%c|\n", (j+1), (k+67));
                return;
            } else if (matrix[j][k] == token[0] && matrix[(j + 1)][k] == token[0] && matrix[(j + 2)][k] == '-') { //Verifica se tem 2 em linha na coluna e sugere a terceira posicao
                printf("Deveria jogar na posicao |%d|%c|\n", (j+3), (k+65));
                return;
            } else if (matrix[j][k] == token[0] && matrix[(j + 1)][(k + 1)] == token[0] && matrix[(j + 2)][(k + 2)] == '-') { //Verifica se tem 2 em linha na diagonal "\" e sugere a terceira posicao
                printf("Deveria jogar na posicao |%d|%c|\n", (j+3), (k+67));
                return;
            } else if (matrix[j][k] == token[0] && matrix[(j + 1)][(k - 1)] == token[0] && matrix[(j + 2)][(k - 2)] == '-') { //Verifica se tem 2 em linha na diagonal "/" e sugere a terceira posicao
                printf("Deveria jogar na posicao |%d|%c|\n",(j+3), (k+63));
                return;
            }
        }
    }
}

void vezJogar(char matrix[][MAX_TAMANHO], char token[], Jogador dados_jogador[], int jogar_pc) { //Pedido das posiçoes da jogada para cada jogador
    int i, linhas, linha, coluna, verificado, vitoria, contador_jogada = 0;
    char colunas;

    for (i = 0; i < MAX_JOGADORES; ++i) { //Pede a jogada ao jogador
        printf("Se pretende desistir, introduza a pozição 0Z!\n");
       if (i == 0) {
           if (contador_jogada >= 0) { 
                sugestaoJogada(matrix, token, &linhas, &colunas);
            }
            printf("%s insira as posiçoes da sua jogada \n", dados_jogador[i].nome);
            printf("Linha: ");
            scanf("%d", &linhas);
            clean_buffer();
            printf("Coluna: ");
            scanf("%c", &colunas);
            clean_buffer();
        } else if (i == 1) {
            if (jogar_pc == 1) {
                jogarPc(matrix, token, &linhas, &colunas);
            } else {
                printf("%s insira as posiçoes da sua jogada \n", dados_jogador[i].nome);
                printf("Linha: ");
                scanf("%d", &linhas);
                clean_buffer();
                printf("Coluna: ");
                scanf("%c", &colunas);
                clean_buffer();
            }
        }

        coluna = colunas - 65; //Passar a letra para numero
        linha = linhas - 1; //Passar o numero para o numero da matriz

        verificado = verificaJogada(matrix, linha, colunas, coluna, i, token, dados_jogador);

        if (verificado < 4) { //Acoes a tomar depois de verificar a jogada
            if (verificado == 0) {
                break; //Este e o caso de o jogado introduzir Z0, desistindo o programa para
            } else if (verificado == 1) {
                --i; //No caso de inserir a mesma casa de jogo volta a chamar o mesmo jogador
            } else if (verificado == 2) {
                --i; //No caso de inserir posicoes fora da matriz, volta ao mesmo jogador
            } else if (verificado == 3) {
                matrix[linha][coluna] = token[i]; //Preenche a posicao da matriz com o token do jogador
                ++contador_jogada; //Conta quantas jogadas há
            }
        }

        imprimirMatrix(matrix);

        vitoria = verificaVitoria(matrix, i, token, dados_jogador); //Vai verificar se com o token colocado faz o jogador ganhar o jogo

        if (vitoria == 1) { //Caso haja vitoria o programa encerra e apresenta o numero de joadas total
            printf("\nHOUVE UM TOTAL DE %d JOGADAS|", contador_jogada);
            break;
        }

        if (i == 1) { //Para voltar ao jogador 1, fazendo com que o ciclo for "reinicie"
            i = -1;
        }
    }
}

int verificaJogada(char matrix[][MAX_TAMANHO], int linhas, int colunas, int coluna, int i, char token[], Jogador dados_jogador[]) { //Funcao que verifica a jogada

    if (linhas == -1 && colunas == 'Z') { //Caso um jogador insira a posição "0Z" esse jogador desiste, dando a vitoria ao oponente.
        printf("O jogador JOGADOR %s desistiu!\n", dados_jogador[i].nome);
        if (i == 0) { //Caso seja o jogador 1 a desistir, o jogador 2 ganha
            printf("\nPARABÉNS %s GANHOU O JOGO!\n", dados_jogador[i + 1].nome);
            dados_jogador[i + 1].pontos = 3; //Jogador que ganhou recebe 3 pontos
        } else { //Caso seja o jogador 2 a desistir, o jogador 1 ganha
            printf("\nPARABÉNS %s GANHOU O JOGO!\n", dados_jogador[i - 1].nome);
            dados_jogador[i - 1].pontos = 3; //Jogador que ganhou recebe 3 pontos
        }
        return 0;
    } else if (matrix[linhas][coluna] == token[0] || matrix[linhas][coluna] == token[1]) {
        printf("Posição ocupada! Por favor volte a inserir!\n"); //Para saber se a posição de jogo escolhida pelo jogador esta ocupada
        return 1;
    } else if (linhas < 0 || linhas > MAX_TAMANHO) {
        printf("Posição inexistente, por favor volte a inserir!\n"); //Caso a posicao inserida seja fora das linhas da matriz
        return 2;
    } else if (coluna < 0 || coluna > MAX_TAMANHO) {
        printf("Posição inexistente, por favor volte a inserir!\n"); //Caso a posicao inserida seja fora das colunas da matriz
        return 2;
    } else {
        return 3;
    }
}

int verificaVitoria(char matrix[][MAX_TAMANHO], int i, char token[], Jogador dados_jogador[]) {
    int j, k;

    for (j = 0; j < MAX_TAMANHO; ++j) {
        for (k = 0; k < MAX_TAMANHO; ++k) {
            if (matrix[j][k] == token[i] && matrix[j][(k + 1)] == token[i] && matrix[j][(k + 2)] == token[i]) { //Verifica se tem 3 em linha na linha
                printf("O %s GANHOU O JOGO!", dados_jogador[i].nome);
                dados_jogador[i].pontos = 3; //Jogador que ganhou recebe 3 pontos
                return 1;
            } else if (matrix[j][k] == token[i] && matrix[(j + 1)][k] == token[i] && matrix[(j + 2)][k] == token[i]) { //Verifica se tem 3 em linha na coluna
                printf("O %s GANHOU O JOGO!", dados_jogador[i].nome);
                dados_jogador[i].pontos = 3; //Jogador que ganhou recebe 3 pontos
                return 1;
            } else if (matrix[j][k] == token[i] && matrix[(j + 1)][(k + 1)] == token[i] && matrix[(j + 2)][(k + 2)] == token[i]) { //Verifica se tem 3 em linha na diagonal "\"
                printf("O %s GANHOU O JOGO!", dados_jogador[i].nome);
                dados_jogador[i].pontos = 3; //Jogador que ganhou recebe 3 pontos
                return 1;
            } else if (matrix[j][k] == token[i] && matrix[(j + 1)][(k - 1)] == token[i] && matrix[(j + 2)][(k - 2)] == token[i]) { //Verifica se tem 3 em linha na diagonal "/"
                printf("O %s GANHOU O JOGO!", dados_jogador[i].nome);
                dados_jogador[i].pontos = 3; //Jogador que ganhou recebe 3 pontos
                return 1;
            }
        }
    }
}

void contadorJogadores(int contador) { //Funcao que guarda o numero de jogadores no ficheiro

    FILE *contadorFicheiro = fopen("num_jogadores.dat", "wb");
    fwrite(&contador, sizeof (int), 1, contadorFicheiro);
    fclose(contadorFicheiro);
}

int lerContador() { //Funcao que le os dados do ficheiro
    int contador = 0;

    FILE *contadorFicheiro = fopen("num_jogadores.dat", "rb");
    if (contadorFicheiro != NULL) {
        fread(&contador, sizeof (int), 1, contadorFicheiro);
    }
    fclose(contadorFicheiro);
    return contador;
}

void tabelaClassificativa(int contador, Jogador info[]) { //Funcao para imprimir a tabela com o nomes, jogos e pontos
    int i;

    puts("");
    printf("Nome      |");
    printf("Jogos     |");
    printf("Pontos    |");
    puts("");
    for (i = 0; i < contador; ++i) {
        printf("%-10s|", info[i].nome);
        printf("%-10d|", info[i].jogos);
        printf("%-10d|", info[i].pontos);
        puts("");
    }
    puts("");
}

void guardarFicheiro(Jogador dados_jogador[], int nr_jogador) { //Funcao para guardar a informação dos jogadores
    int i;

    FILE *ficheiro1 = fopen("jogadores.dat", "ab");
    for (i = 0; i < nr_jogador; ++i) {
        fwrite(&dados_jogador[i], sizeof (Jogador), 1, ficheiro1);
    }
    fclose(ficheiro1);
}