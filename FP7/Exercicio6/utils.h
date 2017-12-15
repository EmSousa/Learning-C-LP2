#ifndef UTILS_H
#define UTILS_H

#define MAX_LINHAS 10
#define MAX_COLUNAS 10

void preencherMatrix(int matrix[][MAX_COLUNAS], int matrix_b[][MAX_COLUNAS], int linhas, int colunas, int linhas2, int colunas2);
void printMatrix(int matrix[][MAX_COLUNAS], int linhas, int colunas);
void multiplicarMatrix(int matrix[][MAX_COLUNAS], int matrix_b[][MAX_COLUNAS], int linhas, int colunas, int linhas2, int colunas2);


#endif /* UTILS_H */