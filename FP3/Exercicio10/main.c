#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int i, j, resultado;
    
    puts("Tabuadas do 1 ao 10");
    
    for (i = 1; i <= 10; ++i){
        for (j = 0; j <= 10; ++j){
            resultado = i * j;
            printf("\n %d x %d = %d", i, j, resultado);
        }
        puts("");
    }

    return (EXIT_SUCCESS);
}

