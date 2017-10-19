#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float m, a, imc;
    
    puts("Calculo do IMC");
    printf("Introduza a sua massa corporal: ");
    scanf ("%f", &m);
    printf("Introduza a sua altura em cm: ");
    scanf ("%f", &a);
    imc = m/pow(a, 2);
    printf("O seu IMC é %.2f", imc);
    return (0);
}

