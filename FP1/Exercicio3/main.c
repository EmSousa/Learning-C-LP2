#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float a, b, area, perimetro;
    puts("Insira os dados");
    printf("Base do retângulo: ");
    scanf("%f", &a);
    printf("Altura do retângulo: ");
    scanf("%f", &b);
    area = a * b;
    perimetro = a + b + a + b;
    puts("");
    printf("A àrea do retângulo é: %.2f\n", area);
    printf("O perímetro do retângulo é: %.2f\n", perimetro);
    return (0);
}

