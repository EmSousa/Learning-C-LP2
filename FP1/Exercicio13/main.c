#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
 * 
 */
int main(int argc, char** argv) {
    float min1, min2, min3, min4, min5, seg1, seg2, seg3, seg4, seg5;
    float a, segtot1, b, segtot2, c, segtot3, d, segtot4, e, segtot5;
    int segundoshora, segtots, hora, segundo, minuto;
    
    segundoshora = 3600;
    
    puts("Duração do album de 5 músicas");
    puts("Insira a duração da primeira música");
    printf("Minutos: ");
    scanf("%f", &min1);
    printf("Segundos: ");
    scanf("%f", &seg1);
    
    a = min1 * 60;
    segtot1 = a + seg1;
    
    puts("Insira a duração da segunda música");
    printf("Minutos: ");
    scanf("%f", &min2);
    printf("Segundos: ");
    scanf("%f", &seg2);
    
    b = min2 * 60;
    segtot2 = b + seg2;
    
    puts("Insira a duração da terceira música");
    printf("Minutos: ");
    scanf("%f", &min3);
    printf("Segundos: ");
    scanf("%f", &seg3);
    
    c = min3 * 60;
    segtot3 = c + seg3;
    
    puts("Insira a duração da quarta música");
    printf("Minutos: ");
    scanf("%f", &min4);
    printf("Segundos: ");
    scanf("%f", &seg4);
    
    d = min4 * 60;
    segtot4 = d + seg4;
    
    puts("Insira a duração da quinta música");
    printf("Minutos: ");
    scanf("%f", &min5);
    printf("Segundos: ");
    scanf("%f", &seg5);
    
    e = min5 * 60;
    segtot5 = e + seg5;
    
    //Calculo da hora:min:seg
    segtots = segtot1 + segtot2 + segtot3 + segtot4 + segtot5;
    
    hora = segtots / segundoshora;
    minuto = (segtots - (segundoshora * hora)) / 60;
    segundo = segtots - (segundoshora * hora) - (minuto * 60);
    
    printf("O albúm tem a duração de %dH : %dM : %dS", hora, minuto, segundo);
    return (0);
}

