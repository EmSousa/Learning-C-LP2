#include <stdio.h>
#include <stdlib.h>

#include "utils.h"

/*
 *  Ficha 8 - Exercicio 1
 */

int main(int argc, char** argv) {
    int operacao, contador = 0;

    Aluno aluno[ALUNOS];

    do {
        printf("\n1 - Inserir dados\n2 - Alterar dados\n3 - Remover dados\n4 - Consultar os dados de um aluno\n5 - Listar todos os alunos\n0 - Sair\nEscolha a sua opcao: ");
        scanf("%d", &operacao);

        switch (operacao) {
            case 1:
                Inserir(aluno, contador);
                ++contador;
                break;
            case 2:
                Alterar(aluno, contador);
                break;
            case 3:
                Remover(aluno, contador);
                --contador;
                break;
            case 4:
                Consultar(aluno, contador);
                break;
            case 5:
                Listar(aluno, contador);
                break;
        }
    } while (operacao != 0);

    return (EXIT_SUCCESS);
}

