#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

float LerNotas (float maximo_nota){
    int i;
    float nota, notas = 0;
    
    for (i = 1; i <= maximo_nota; ++i){
        printf("Insira a nota %d : ", i);
        scanf("%f", &nota);
        notas = notas + nota;
    }
    
    return notas / maximo_nota;    
}

int main(int argc, char** argv) {
    float maximo_nota, media;
    
    puts("Media de x notas de um aluno");
    printf("Insira o numero de notas que vai introduzir: ");
    scanf("%f", &maximo_nota);
    
    media = LerNotas(maximo_nota);
    
    printf("O resultado da media é %.2lf", media);
    

    return (EXIT_SUCCESS);
}