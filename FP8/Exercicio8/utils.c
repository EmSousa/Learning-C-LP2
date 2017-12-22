#include <stdio.h>
#include "utils.h"

void clean_buffer() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

void Inserir(Aluno aluno[], int contador) {

    if (contador < ALUNOS) {
        printf("\nIntroduza o numero do aluno: ");
        scanf("%d", &aluno[contador].numero);
        printf("Nome: ");
        scanf("%s", aluno[contador].nome);
        clean_buffer();
        printf("Data de nascimento: \n");
        printf("Dia: ");
        scanf("%d", &aluno[contador].data__nasc.dia);
        printf("Mes: ");
        scanf("%d", &aluno[contador].data__nasc.mes);
        printf("Ano: ");
        scanf("%d", &aluno[contador].data__nasc.ano);
    } else {
        puts("Nao pode introduzir mais alunos!");
    }
}

void Listar(Aluno aluno[], int contador) {
    int i;

    puts("Lista de alunos: ");

    for (i = 0; i < contador; ++i) {
        printf("\nAluno %d", i + 1);
        printf("\nNumero: %d", aluno[i].numero);
        printf("\nNome: %s", aluno[i].nome);
        printf("\nData de nascimento: %d/%d/%d \n\n", aluno[i].data__nasc.dia, aluno[i].data__nasc.mes, aluno[i].data__nasc.ano);
    }
}

void Alterar(Aluno aluno[], int contador) {
    int i, numero;

    printf("Introduza o numero do aluno que quer alterar informação: ");
    scanf("%d", &numero);

    for (i = 0; i < contador; ++i) {
        if (aluno[i].numero == numero) {
            Inserir(aluno, i);
            break;
        }
    }

}

void Remover(Aluno aluno[], int contador) {
    int i, numero;

    if (contador <= ALUNOS) {
        printf("Introduza o numero do aluno a remover: ");
        scanf("%d", &numero);
        for (i = 0; i < contador; ++i) {
            if (aluno[i].numero == numero) {
                aluno[i] = aluno[i + 1];
                break;
            }
        }
    }
}

void Consultar(Aluno aluno[], int contador) {
    int i, numero;

    printf("\nQual o numero do aluno que pretende consultar informacao: ");
    scanf("%d", &numero);

    for (i = 0; i < contador; ++i) {
        if (aluno[i].numero == numero) {
            printf("\nAluno %d", i + 1);
            printf("\nNumero: %d", aluno[i].numero);
            printf("\nNome: %s", aluno[i].nome);
            printf("\nData de nascimento: %d/%d/%d \n\n", aluno[i].data__nasc.dia, aluno[i].data__nasc.mes, aluno[i].data__nasc.ano);
            break;
        } else {
            puts("Numero inexistente!");
        }
    }

}