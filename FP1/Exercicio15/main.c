#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int horacheg, minscheg, horapart, minspart, segundos_viagem;
    int segundos_partida = 0, segundos_chegada = 0;
    float distancia_viagem, combustivel_gasto, velocidade_media;
    float horaviagem, minutosviagem, consumo_medio;
    
    puts("Computador de bordo");
    //Pedido dos valores para o calculo do tempo da viagem
    printf("Insira a hora de partida: ");
    scanf("%d", &horapart);
    printf("Insira os minutos de partida: ");
    scanf("%d", &minspart);
    
    segundos_partida = horapart * 3600;
    segundos_partida += minspart * 60;
    
    printf("Insira a hora de chegada: ");
    scanf("%d", &horacheg);
    printf("Insisra os minutos de chegada: ");
    scanf("%d", &minscheg);
    
    segundos_chegada = horacheg * 3600;
    segundos_chegada += minscheg * 60;
    
    //Pedido da distancia percorrida
    printf("Insira a distância percorrida em Km: ");
    scanf("%f", &distancia_viagem);
    
    //Pedido da quantidade de combustível
    printf("Insira a quantidade de combutível gasta em Litros: ");
    scanf("%f", &combustivel_gasto);
    
    //Calculo do tempo de viagem
    segundos_viagem = segundos_chegada - segundos_partida;
    horaviagem = segundos_viagem / 3600;
    minutosviagem = (segundos_viagem - (3600 * horaviagem)) / 60;
    
    //Calculo do consumo medio
    consumo_medio = combustivel_gasto / distancia_viagem;
    
    //Calculo da velocidade média
    velocidade_media = ((distancia_viagem * 1000) / segundos_viagem) * 3.6;
    
    
    puts("");
    //Apresentação final dos dados
    printf("A viagem durou %.0f horas e %.0f minutos \n", horaviagem, minutosviagem);
    printf("O consumo médio foi de %.2f L/KM \n", consumo_medio);
    printf("A velocidade média foi %.1f km/h \n", velocidade_media);
    
    return (EXIT_SUCCESS);
}

