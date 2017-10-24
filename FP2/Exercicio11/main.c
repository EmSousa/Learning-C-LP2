#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float x, y;
    
    puts("Definir o valor de Y atraves do valor de X");
    printf("Introduza o valor de X: ");
    scanf("%f", &x);
    
    if(x < 1){
        y = x;
    }else if(x == 1){
        y = 0;
    }else if(x > 1){
        y = (x * 2);
    }
    
    printf("O valor de Y = %.0f", y);
    
    
    return (EXIT_SUCCESS);
}

