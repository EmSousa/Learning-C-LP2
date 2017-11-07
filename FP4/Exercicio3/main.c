#include <stdio.h>
#include <stdlib.h>

#define TAXA_CONVERSAO_DOLAR 1.16042
#define TAXA_CONVERSAO_EURO 0.86166
/*
 * 
 */
double montante, conversao_final;
char moeda;


void limparBufferEntrada(){ 
    char ch; 
    while ((ch = getchar()) != '\n' && ch != EOF);
}

double lerDouble() {
    printf("Insira o montate a converter: ");
    scanf("%lf", &montante);
    return montante; 
}

char lerChar() {
    limparBufferEntrada();
    printf("Insira qual a sua moeda \nE para Euro ou D para Dolar: ");
    scanf("%c", &moeda);
    return moeda;
}

double conversao() {
    if (moeda == 'E' || moeda == 'e') {
        conversao_final = montante * TAXA_CONVERSAO_DOLAR;
    } else if (moeda == 'D' || moeda == 'd') {
        conversao_final = montante * TAXA_CONVERSAO_EURO;
    }
}

int main(int argc, char** argv) {
    
    montante = lerDouble();
    moeda = lerChar();
    conversao_final = conversao();
    
    printf("O resultado da conversao e %.2lf", conversao_final);
    
    return (EXIT_SUCCESS);
}

