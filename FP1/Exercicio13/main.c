#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
 * 
 */
int main(int argc, char** argv) {
    int segundos_totais = 0, segundos_insert, minutos_insert, hora, minuto;
   
    puts("Duração do album de 5 músicas");
    puts("Insira a duração da primeira música");
    printf("Minutos: ");
    scanf("%d", &minutos_insert);
    printf("Segundos: ");
    scanf("%d", &segundos_insert);
    
    segundos_totais += (minutos_insert * 60) + segundos_insert;
    
    puts("Insira a duração da segunda música");
    printf("Minutos: ");
    scanf("%d", &minutos_insert);
    printf("Segundos: ");
    scanf("%d", &segundos_insert);
    
    segundos_totais += (minutos_insert * 60) + segundos_insert;
    
    puts("Insira a duração da terceira música");
    printf("Minutos: ");
    scanf("%d", &minutos_insert);
    printf("Segundos: ");
    scanf("%d", &segundos_insert);
    
    segundos_totais += (minutos_insert * 60) + segundos_insert;
    
    puts("Insira a duração da quarta música");
    printf("Minutos: ");
    scanf("%d", &minutos_insert);
    printf("Segundos: ");
    scanf("%d", &segundos_insert);
    
    segundos_totais += (minutos_insert * 60) + segundos_insert;
    
    puts("Insira a duração da quinta música");
    printf("Minutos: ");
    scanf("%d", &minutos_insert);
    printf("Segundos: ");
    scanf("%d", &segundos_insert);
    
    segundos_totais += (minutos_insert * 60) + segundos_insert;
    
    //Calculo da hora:min:seg     
    hora = segundos_totais / 3600;
    segundos_totais = segundos_totais % 3600;
    minuto = segundos_totais / 60;
    segundos_totais = segundos_totais % 60;
    
    printf("O albúm tem a duração de %dH : %dM : %dS", hora, minuto, segundos_totais);
    return (0);
}
