#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    long int numero;
    
    puts("Saber se um numero é divisivel por 5 e por 3");
    printf("Introduza o numero: ");
    scanf("%ld", &numero);
    
    if( numero % 5 == 0 && numero % 3 == 0){
        printf("%ld e divisivel por 5 e por 3", numero);
    }else{
        printf("%ld nao e divisivel por 5 e por 3", numero);
    }

    return (EXIT_SUCCESS);
}

