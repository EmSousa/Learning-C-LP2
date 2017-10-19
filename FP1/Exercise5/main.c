#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float a, b, area;
    
    puts("Area de um triangulo");
    printf("Insira o tamanho da base: ");
    scanf("%f", &a);
    printf("Insira o altura: ");
    scanf("%f", &b);
    area = ((b*a)/2);
    printf("A area é: %.2f\n", area);
    return (0);
}

