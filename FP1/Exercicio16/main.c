#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv){
    float deposito, taxa, juros;
    
    //Introdução dos dados
    puts("Deposito e juros trimestrais");
    printf("Insira o valor do depósito: ");
    scanf("%f", &deposito);
    
    printf("Insira o valor da taxa:");
    scanf("%f", &taxa);
    
    //Calculo da taxa em percentagem
    taxa = taxa/100;
    
    //Calculo dos juros
    juros = deposito * taxa;
    deposito += juros;
    
    //Apresentação dos resultados
    //1º Trimestre
    printf("Os juros do primeiro trimestre foram %.2f€\n",juros);
    printf("O saldo é %.2f€\n", deposito);
    
    juros = deposito * taxa;
    deposito += juros;
    //2º Trimestre
    printf("Os juros do primeiro trimestre foram %.2f€\n",juros);
    printf("O saldo é %.2f€\n", deposito);
    
    juros = deposito * taxa;
    deposito += juros;
    //3º Trimestre
    printf("Os juros do primeiro trimestre foram %.2f€\n",juros);
    printf("O saldo é %.2f€\n", deposito);
    
    return (EXIT_SUCCESS);
}

