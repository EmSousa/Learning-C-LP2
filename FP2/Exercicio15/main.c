#include <stdio.h>
#include <stdlib.h>

#define MINUTOS 60
#define KMS_CALCULO 100
#define KM_VIAGEM 130
#define COMBUSTIVEL_ATUAL 4
#define CONSUMO1 5
#define CONSUMO2 6
#define CONSUMO3 7

/*
 * 
 */
int main(int argc, char** argv) {
    float conversao_hora , velocidade_media, distancia_combustivel, tempo_viagem;
                        
    puts("Decisao do posto de combustivel a parar na viagem Guimaraes - Melgaco (130km)");
    printf("Introduza os minutos em que pretende fazer a viagem: ");
    scanf("%f", &tempo_viagem);
    
    conversao_hora = tempo_viagem / MINUTOS;
    
    velocidade_media = KM_VIAGEM / conversao_hora;
        
    if(velocidade_media <= 60){
        distancia_combustivel = (COMBUSTIVEL_ATUAL * KMS_CALCULO) / CONSUMO1;
        puts("A velocidade inferior ou igual a 60KM/H podera apenas parar no terceiro posto de combustivel aos 79KMS");
        printf("O cosumo do carro rondara os %dL/100KM", CONSUMO1);
     
    }else if(velocidade_media > 60 && velocidade_media <= 120){
        distancia_combustivel = (COMBUSTIVEL_ATUAL * KMS_CALCULO) / CONSUMO2;
        puts("A velocidades entre os 60KM/H e os 120KM/H podera apenas parar no segundo posto de combustivel aos 70KMS");
        printf("O cosumo do carro rondara os %dL/100KM", CONSUMO2);
        
    }else if(velocidade_media > 120){
        distancia_combustivel = (COMBUSTIVEL_ATUAL * KMS_CALCULO) / CONSUMO3;
        puts("A velocidades superiores a 120KM/H tera de parar no primeiro posto de combustivel aos 60KMS");
        printf("O cosumo do carro rondara os %dL/100KM", CONSUMO3);
        
    }

    return (EXIT_SUCCESS);
}

