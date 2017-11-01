#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float numero, soma, quantidade = 0, media;
    
    while (numero != 1){
        printf("Introduza um valor: ");
        scanf("%f", &numero);
        
        if ( numero == -1){
            media = (soma / quantidade);
            printf("A media dos valores = %.2f ",media);
            return 0;
        }else {
            soma += numero;
            quantidade++;
        }
    }
}

