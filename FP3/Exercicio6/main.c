#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int numero = 0, limite, salto;
    
    puts("0 ate limite com salto de incremento escolhido");
    printf("Introduza o valor limite: ");
    scanf("%d", &limite);
    
    printf("Introduza o valor do salto: ");
    scanf("%d", &salto);
    
    for (numero; numero <= limite; numero += salto){
        printf(" %d", numero);
    }

    return (EXIT_SUCCESS);
}

