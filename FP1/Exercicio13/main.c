#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
 * 
 */
int main(int argc, char** argv) {
    float min1, min2, min3, min4, min5, seg1, seg2, seg3, seg4, seg5;
    int segundoshora, segundos_totais = 0, hora, segundo, minuto;
    
    segundoshora = 3600;
    
    puts("Duração do album de 5 músicas");
    puts("Insira a duração da primeira música");
    printf("Minutos: ");
    scanf("%f", &min1);
    printf("Segundos: ");
    scanf("%f", &seg1);
    
    segundos_totais = min1 * 60;
    segundos_totais += seg1;
    
    puts("Insira a duração da segunda música");
    printf("Minutos: ");
    scanf("%f", &min2);
    printf("Segundos: ");
    scanf("%f", &seg2);
    
    segundos_totais += min2 * 60;
    segundos_totais += seg2;
    
    puts("Insira a duração da terceira música");
    printf("Minutos: ");
    scanf("%f", &min3);
    printf("Segundos: ");
    scanf("%f", &seg3);
    
    segundos_totais += min3 * 60;
    segundos_totais += seg3;
    
    puts("Insira a duração da quarta música");
    printf("Minutos: ");
    scanf("%f", &min4);
    printf("Segundos: ");
    scanf("%f", &seg4);
    
    segundos_totais += min4 * 60;
    segundos_totais += seg4;
    
    puts("Insira a duração da quinta música");
    printf("Minutos: ");
    scanf("%f", &min5);
    printf("Segundos: ");
    scanf("%f", &seg5);
    
    segundos_totais += min5 * 60;
    segundos_totais += seg5;
    
    //Calculo da hora:min:seg
        
    hora = segundos_totais / segundoshora;
    minuto = (segundos_totais - (segundoshora * hora)) / 60;
    segundo = segundos_totais - (segundoshora * hora) - (minuto * 60);
    
    printf("O albúm tem a duração de %dH : %dM : %dS", hora, minuto, segundo);
    return (0);
}
