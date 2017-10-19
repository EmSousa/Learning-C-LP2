#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float massa, altura, imc;
    
    puts("Calculo do IMC");
    printf("Introduza a sua massa corporal: ");
    scanf ("%f", &massa);
    
    printf("Introduza a sua altura em metros: ");
    scanf ("%f", &altura);
    
    imc = massa/pow(altura, 2);
    
    printf("O seu IMC é %.2f", imc);
    return (0);
}