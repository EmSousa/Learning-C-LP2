#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float nota1, nota2, nota3, n1, n2 , n3, media;
    
    puts("Média ponderada de 3 notas");
    printf("Insera a primeira nota: ");
    scanf("%f", &nota1);
    printf("Insera a segunda nota: ");
    scanf("%f", &nota2);
    printf("Insera a terceira nota: ");
    scanf("%f", &nota3);
    n1 = nota1 * 0.25;
    n2 = nota2 * 0.35;
    n3 = nota3 * 0.40;
    media = n1 + n2 + n3;
    printf("A média ponderada é %0.2f", media);
    return (0);
}

