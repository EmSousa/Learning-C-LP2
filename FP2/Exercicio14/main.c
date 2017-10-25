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
    
    printf("Introduza o numero da operacao pretendida: \n1-Debito \n2-Credito \nOperacao: ");
    scanf("%d", &op);
    
    switch (op){
        //Débito
        case 1:
            saldo_final = saldo_conta - montante;
            if(saldo_final < 0){
                puts("ERRO! Operacao invalida por saldo insuficiente");
            }else{
                printf("Debito realizado com sucesso! \nSaldo atual = %.2f€", saldo_final);
            }
            break;
        
        //Crédito    
        case 2:
            saldo_final = saldo_conta + montante;
            printf("Credito realizado com sucesso! \nSaldo atual = %.2f€", saldo_final);
            break;
    }

    return (EXIT_SUCCESS);
}

