#include <stdio.h>
#include <stdlib.h>

/*Exercicio 1 da ficha 1
 * Feito por Emílio Sousa
 */
int main(int argc, char** argv) {
    float a, b, result;
    puts("Soma de 2 Numeros");
    printf("Numero 1: ");
    scanf("%f", &a);
    printf("Numero 2: ");
    scanf("%f", &b);
    result = a + b;
    printf("O resultdo é: %.2f\n", result);
    return (0);
}

