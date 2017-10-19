#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float a, b, area, perimetro, pi;
    pi = 3.1415;
    puts("Area e perimetro de uma circunferência");
    printf("Indique o raio: ");
    scanf("%f", &a);
    area = pi * pow(a, 2);
    perimetro = (2 * pi) * a;
    puts("");
    printf("A area e: %.2f\n", area);
    printf("O perimetro e: %.2f\n", perimetro);
    return (0);
}

