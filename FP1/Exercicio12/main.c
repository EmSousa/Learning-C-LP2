#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int segundos, HORAS, segundoshora, MINUTOS, SEGUNDOS;
    segundoshora = 3600;
    
    puts("Conversão de segundos em horas, minutos e segundos");
    printf("Indique o número de segundos a converter: ");
    scanf("%d", &segundos);
    
    HORAS = segundos / segundoshora;
    MINUTOS = (segundos - (segundoshora * HORAS)) / 60;
    SEGUNDOS = segundos - (segundoshora * HORAS) - (MINUTOS * 60);
    
    printf("%d segundos equivale a %dH : %dM : %dS",segundos, HORAS, MINUTOS, SEGUNDOS);
    return (0);
}

