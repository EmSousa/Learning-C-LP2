#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    long int numero;
    
    puts("Par ou Impar");
    printf("Introduza um numero: ");
    scanf("%ld", &numero);
    
    if(numero % 2 == 0){
        printf("%ld e PAR", numero);
    }else{
        printf("%ld e IMPAR", numero);
    }

    return (EXIT_SUCCESS);
}

