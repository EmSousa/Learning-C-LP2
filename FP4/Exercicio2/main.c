#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
void limparBufferEntrada(){ 
    char ch; 
    while ((ch = getchar()) != '\n' && ch != EOF);
}

long soma(float numero1, float numero2){
    return numero1 + numero2;
}

long subtracao(float numero1, float numero2){
    return numero1 - numero2;
}

long mutiplicacao(float numero1, float numero2){
    return numero1 * numero2;
}

long divisao(float numero1, float numero2){
     return numero1 / numero2;
}

int main(int argc, char** argv) {
    float numero1, numero2, resultado;
    char operacao;
    
    puts("Calculo de 2 numeros");
    printf("Introduza o primeiro numero: ");
    scanf("%f", &numero1);
    printf("Introduza o segundo numero: ");
    scanf("%f", &numero2);
    
    limparBufferEntrada();
    
    printf("Escolha a operacao a fazer: \nSoma : + \nSubtracao : - \nMultiplicacao : * \nDivisao : / \nEscolha a opcao: ");
    scanf("%s", &operacao);
    
    switch (operacao) {
        case '+': resultado = soma(numero1, numero2);
                    break;
        case '-': resultado = subtracao(numero1, numero2);
                    break;
        case '*': resultado = mutiplicacao(numero1, numero2);
                    break;
        case '/': resultado = divisao(numero1, numero2);
                    break;
        default: puts("Opcao invalida! Tente novamente!");
    } 
    
    printf("O resultado da operacao e %.2f", resultado);
    
    return (EXIT_SUCCESS);
}

