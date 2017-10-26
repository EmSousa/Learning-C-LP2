#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int numero = 1, soma;
    
    puts("Imprimir de 1 a 100 e calcular");
    for (numero; numero <= 100; numero += 1){
        soma += numero;
        printf("\n%d", numero);
    }
    
    printf("\nResultado da soma = %d", soma);

    return (EXIT_SUCCESS);
}

