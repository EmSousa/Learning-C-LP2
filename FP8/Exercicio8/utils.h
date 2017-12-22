#ifndef UTILS_H
#define UTILS_H

#define ALUNOS 2

typedef struct {
    int dia, mes, ano;
} Data;

typedef struct {
    int numero;
    char nome[45];
    Data data__nasc;
} Aluno;

void clean_buffer();
void Inserir(Aluno aluno[], int contador);
void Listar(Aluno aluno[], int contador);
void Alterar(Aluno aluno[], int contador);
void Remover(Aluno aluno[], int contador);
void Consultar(Aluno aluno[], int contador);

#endif /* UTILS_H */