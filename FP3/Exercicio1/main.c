#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int numero = 0;
    
    puts("Numeros de 1 a 100");
    for (numero += 1; numero <= 100; numero += 1){
        printf("\n%d", numero);
    }
    
    return (EXIT_SUCCESS);
}

