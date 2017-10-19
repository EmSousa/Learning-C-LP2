#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {
    float area, perimetro, ray, PI;
        PI = 3.14;

    printf("Introduza o valor do raio:");
    scanf("%f\n",ray);

    perimetro = (2 * PI) * ray;

    area = PI * pow(ray, 2);

    printf ("(2 * PI) * %f = %f\n",ray,perimetro);

    printf("PI * (%f * %f) = %f\n",ray,ray,area);

    printf("O valor do perimetro e: %f\n",perimetro);

    printf("O valor da area e: %f\n", area);

    return (0);

}

