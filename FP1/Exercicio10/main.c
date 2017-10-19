#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float a1, a2, a3, a4 ,a5, media;
    
    puts("Calculo da média de 5 valores: ");
    printf("Inserir o primeiro valor: ");
    scanf("%f", &a1);
    printf("Inserir o segundo valor: ");
    scanf("%f", &a2);
    printf("Inserir o terceiro valor: ");
    scanf("%f", &a3);
    printf("Inserir o quarto valor: ");
    scanf("%f", &a4);
    printf("Inserir o quinto valor: ");
    scanf("%f", &a5);
    media = (a1 + a2 + a3 + a4 + a5)/5;
    printf("A média é %.2f", media);
    return (0);
}

