#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float numero1, numero2, resultado1, resultado2, resultado3, resultado4;
    char operacao;
    
    puts("Calculo com escolha do operacao a fazer");
    printf("Insira o primeiro numero: ");
    scanf("%f", &numero1);
    
    printf("Insira o segundo numero: ");
    scanf("%f", &numero2);
    
    printf("Insira a operacao a executar\n + para soma \n - para subtracao \n * para multiplicacao \n / para divisao \n Operacao desejada: ");
    scanf("%s", &operacao);
    
    switch (operacao){
            case '+':
                resultado1 = numero1 + numero2;
                printf("O resultado da soma = %.2f", resultado1);
                break;
            
            case '-':
                resultado2 = numero1 - numero2;
                printf("O resultado da subtracao = %.2f", resultado2);
                break;
            
            case '*':
                resultado3 = numero1 * numero2;
                printf("O resultado da multiplicacao = %.2f", resultado3);
                break;
            
            case '/':
                resultado4 = numero1 / numero2;
                printf("O resultado da divisao = %.2f", resultado4);
                break;           
            
            default :
                printf("Insira uma operacao valida!");
    }
    
    return (EXIT_SUCCESS);
}

