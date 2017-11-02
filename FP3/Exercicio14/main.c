#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float voto, candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0, branco = 0, nulo = 0 ,total_votos = 0;
    float percentagem1, percentagem2, percentagem3, percentagem4, percentagem_branco, percentagem_nulo;
    
    puts("Autarquicas 2017 - Máquina de votos");
    
    while (voto != -1){
        printf("Insira o numero do seu voto: \n PSD - 1 \n CDS - 2 \n PS - 3 \n PAN - 4 \n Em Branco - 0 \n Voto nulo - 9 \n Sair - (-1) \n Voto: ");
        scanf("%f", &voto);
        
        if (voto == 1){
            candidato1++;            
        } else if (voto == 2){
            candidato2++;
        } else if (voto == 3){
            candidato3++;
        } else if (voto == 4){
            candidato4++;
        } else if (voto == 0){
            branco++;
        } else if (voto == 9){
            nulo++;
        }else {
            puts("VOTO INVÁLIDO!");
        }
        
        total_votos = candidato1 + candidato2 + candidato3 + candidato4 + branco + nulo;
        
        percentagem1 = (candidato1 / total_votos) * 100;
        percentagem2 = (candidato2 / total_votos) * 100;
        percentagem3 = (candidato3 / total_votos) * 100;
        percentagem4 = (candidato4 / total_votos) * 100;
        percentagem_branco = (branco / total_votos) * 100;
        percentagem_nulo = (nulo / total_votos) * 100;
                
        if (voto == -1){
            break;
        }        
    }
    
    printf("Total de votos: %.0f \n", total_votos);
    
    printf("Numero de votos conseguidos pelo PSD: %.0f \n", candidato1);
    printf("Numero de votos conseguidos pelo CDS: %.0f \n", candidato2);
    printf("Numero de votos conseguidos pelo PS : %.0f \n", candidato3);
    printf("Numero de votos conseguidos pelo PAN: %.0f \n", candidato4);
    printf("Numero de votos em branco: %.0f \n", branco);
    printf("Numero de votos nulos: %.0f \n", nulo);
    
    puts("");
    
    printf("Percentagem de votos conseguida pelo PSD: %.1f%% \n", percentagem1);
    printf("Percentagem de votos conseguida pelo CDS: %.1f%% \n", percentagem2);
    printf("Percentagem de votos conseguida pelo PS : %.1f%% \n", percentagem3);
    printf("Percentagem de votos conseguida pelo PAN: %.1f%% \n", percentagem4);
    printf("Percentagem de votos em branco: %.1f%% \n", percentagem_branco);
    printf("Percentagem de votos nulos: %.1f%% \n", percentagem_nulo);

    return (EXIT_SUCCESS);
}

