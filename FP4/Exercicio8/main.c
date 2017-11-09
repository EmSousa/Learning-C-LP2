#include <stdio.h>
#include <stdlib.h>

#define MAXIMO 20
#define MINIMO 1
#define ALUNOS 10
/*
 * 
 */

int lerInteiro(){
    int nota;
    
    while (1){
        printf("Introduza a nota do aluno (0 - 20): ");
        scanf("%d", &nota);
        if (nota <= MAXIMO && nota >= MINIMO){
            break;
        } else {
            puts("A nota introduzida e invalida!");
        }
    }
    return nota;
}

int main(int argc, char** argv) {
    int nota, i, contador_notas;
    
    puts("Leitura de notas de alunos");
    
    for (i = 1; i <= ALUNOS; ++i){
        nota = lerInteiro();
        contador_notas += nota;
    }

    return (EXIT_SUCCESS);
}


