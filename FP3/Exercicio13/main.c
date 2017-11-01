#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int nota;
    
    puts("Avaliação da nota para aprovar ou reprovar");
    while (nota >= 0 && nota <= 20){
        printf("Introduza a nota a avaliar: ");
        scanf("%d", &nota);
        
        if (nota >= 0 && nota < 10){
            puts("O aluno foi reprovado!");
            break;
        } else if (nota >= 10 && nota <= 20){
            puts("O aluno foi aprovado!");
            break;
        } else {
            puts("ERRO! Introduza um valor entre 0 e 20!");
            break;
        }    
    }
}

