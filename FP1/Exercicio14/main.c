#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float voto1, voto2, voto3, voto4, voto5;
    float totalvotos, percent1, percent2, percent3, percent4, percent5;
    
    puts("Autarquicas 2017");
    printf("Insira o número de votos obtidos pelo 1º candidato: ");
    scanf("%f", &voto1);
    
    printf("Insira o número de votos obtidos pelo 2º candidato: ");
    scanf("%f", &voto2);
    
    printf("Insira o número de votos obtidos pelo 3º candidato: ");
    scanf("%f", &voto3);
    
    printf("Insira o número de votos obtidos pelo 4º candidato: ");
    scanf("%f", &voto4);
    
    printf("Insira o número de votos obtidos pelo 5º candidato: ");
    scanf("%f", &voto5);
    
    totalvotos = voto1 + voto2 + voto3 + voto4 + voto5;
    percent1 = (voto1 / totalvotos) * 100;
    percent2 = (voto2 / totalvotos) * 100;
    percent3 = (voto3 / totalvotos) * 100;
    percent4 = (voto4 / totalvotos) * 100;
    percent5 = (voto5 / totalvotos) * 100;
    
    puts("");
    printf("O total de votos foram %.0f\n", totalvotos);
    printf("O 1º candidato obteve %0.1f%% dos votos \n", percent1);
    printf("O 2º candidato obteve %0.1f%% dos votos \n", percent2);
    printf("O 3º candidato obteve %0.1f%% dos votos \n", percent3);
    printf("O 4º candidato obteve %0.1f%% dos votos \n", percent4);
    printf("O 5º candidato obteve %0.1f%% dos votos \n", percent5);
    
    return (0);
}

