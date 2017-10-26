#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int limite, i;
    
    puts("Numeros pares de 0 ate ao limite escolhido");
    printf("Indique o limite: ");
    scanf("%d", &limite);
    
    if (limite > 0){
        for (i = 0; i <= limite; ++i){
            if (i % 2 == 0){
                printf(" %d", i);
            }
        }
    }else{
        puts("Erro! Introduza valor superior a zero");
    }
    

    return (EXIT_SUCCESS);
}

