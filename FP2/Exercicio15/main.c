#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float conversao_hora, velocidade_media, distancia_combustivel, tempo_viagem;
                        
    puts("Decisao do posto de combustivel a parar na viagem Guimaraes - Melgaco (130km)");
    printf("Introduza os minutos em que pretende fazer a viagem: ");
    scanf("%f", &tempo_viagem);
    
    conversao_hora = tempo_viagem / 60;
    
    velocidade_media = 130 / conversao_hora;
        
    if(velocidade_media <= 60){
        distancia_combustivel = (4 * 100) / 5;
        if(distancia_combustivel < 60){
            puts("Não chegará a nenhuma bomba de combustivel com 4 litros!!");
        }else{
            printf("A velocidade inferior ou igual a 60KM/H podera apenas parar no terceiro posto de combustivel aos 79KMS");
        }
    }else if(velocidade_media > 60 && velocidade_media <= 120){
        distancia_combustivel = (4 * 100) / 6;
        if(distancia_combustivel < 60){
            puts("Não chegará a nenhuma bomba de combustivel com 4 litros!!");
        }else{
            printf("A velocidades entre os 60KM/H e os 120KM/H podera apenas parar no segundo posto de combustivel aos 70KMS");
        }
    }else if(velocidade_media > 120){
        distancia_combustivel = (4 * 100) / 7;
        if(distancia_combustivel < 60){
            puts("Não chegará a nenhuma bomba de combustivel com 4 litros!!");
        }else{
            printf("A velocidades superiores a 120KM/H tera de parar no primeiro posto de combustivel aos 60KMS");
        }
    }

    return (EXIT_SUCCESS);
}

