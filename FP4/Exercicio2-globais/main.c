#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

char operacao;
float numero1, numero2, resultado;
    
void limparBufferEntrada(){ 
    char ch; 
    while ((ch = getchar()) != '\n' && ch != EOF);
}

long soma(){
    return numero1 + numero2;
}

long subtracao(){
    return numero1 - numero2;
}

long mutiplicacao(){
    return numero1 * numero2;
}

long divisao(){
     return numero1 / numero2;
}

int main(int argc, char** argv) {
    
    puts("Calculo de 2 numeros");
    printf("Introduza o primeiro numero: ");
    scanf("%f", &numero1);
    printf("Introduza o segundo numero: ");
    scanf("%f", &numero2);
    
    limparBufferEntrada();
    
    printf("Escolha a operacao a fazer: \nSoma : + \nSubtracao : - \nMultiplicacao : * \nDivisao : / \nEscolha a opcao: ");
    scanf("%s", &operacao);
    
    switch (operacao) {
        case '+': resultado = soma();
                    break;
        case '-': resultado = subtracao();
                    break;
        case '*': resultado = mutiplicacao();
                    break;
        case '/': resultado = divisao();
                    break;
        default: puts("Opcao invalida! Tente novamente!");
    } 
    
    printf("O resultado da operacao e %.2f", resultado);
    
    return (EXIT_SUCCESS);
}