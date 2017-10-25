#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float temperatura_atual, diferenca_temperatura, tempo, tempo_segundos;
    int temperatura_pretendida;
    
    puts("Tempo em segundos que demora o AC a atuar");
    printf("Introduza a temperatura atual: ");
    scanf("%f", &temperatura_atual);
    
    printf("Introduza a temperatura pretendida: ");
    scanf("%d", &temperatura_pretendida);
    
    diferenca_temperatura = temperatura_atual - temperatura_pretendida;
    
    if(diferenca_temperatura < 0){
        diferenca_temperatura = -(diferenca_temperatura);
        tempo = diferenca_temperatura * 3;
        tempo_segundos = tempo * 60;
        printf("Serao necessario %.0f segundos para aquecer ate a temperatura desejada", tempo_segundos);
                
    }else if(diferenca_temperatura > 0){
        tempo = diferenca_temperatura * 2;
        tempo_segundos = tempo * 60;
        printf("Serao necessario %.0f segundos para arrefecer ate a temperatura desejada", tempo_segundos);
    
    }else if(diferenca_temperatura == 0){
        puts("Introduziu a mesma temperatura!!!");
    }

    return (EXIT_SUCCESS);
}

