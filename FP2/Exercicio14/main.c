#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    double saldo_conta, montante, saldo_final;
    int op;
    
    puts("Um especie de multibanco");
    printf("Introduza o saldo da sua conta: ");
    scanf("%lf", &saldo_conta);
    
    printf("Introduza qual o montante a movimentar: ");
    scanf("%lf", &montante);
    
    saldo_final = saldo_conta + montante;
    
    if(saldo_final < 0){
        puts("ERRO! Operacao invalida por saldo insuficiente!");
        
    }else if(saldo_final < saldo_conta){
        printf("Debito realizado com sucesso! \nSaldo atual: %.2lf€", saldo_final);
        
    }else{
        printf("Credito realizado com sucesso! \nSaldo atual: %.2lf€", saldo_final);
    } 

    return (EXIT_SUCCESS);
}

