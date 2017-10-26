#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int numero = 2;
    
    puts("Numero pares de 1 a 300");
    for (numero; numero <= 300; numero += 2){
        printf("\n%d", numero);        
    }
    
    return (EXIT_SUCCESS);
}

