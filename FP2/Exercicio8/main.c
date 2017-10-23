#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int hora_entrada, mins_entrada, hora_saida, mins_saida, HoraMin_entrada, HoraMin_saida, horas_trabalho;
    int Horas_trabalhadas, Mins_trabalhados;
    
    puts("Tempo em Horas:Mins de um trabalhador");
    printf("Introduza a hora de entrada: \nHoras: ");
    scanf("%d",&hora_entrada);
    printf("Minutos: ");
    scanf("%d", &mins_entrada);
    
    printf("Introduza a hora de saida: \nHoras: ");
    scanf("%d",&hora_saida);
    printf("Minutos: ");
    scanf("%d", &mins_saida);
    
    if(hora_entrada > 23 || hora_saida > 23 || mins_entrada > 59 || mins_saida > 59){
        puts("Erro!!!");
        return(0);
    }
    
    HoraMin_entrada = (hora_entrada * 3600) + mins_entrada;
    HoraMin_saida = (hora_saida * 3600) + mins_saida;
    horas_trabalho = HoraMin_saida - HoraMin_entrada;
    
    if (horas_trabalho < 0){
        horas_trabalho = (24 * 3600) + horas_trabalho;
    }
    
    Horas_trabalhadas = horas_trabalho / 3600;
    Mins_trabalhados = horas_trabalho % (3600 / 60);
    
    printf("O funcionario trabalhou %d horas e %d minutos.", Horas_trabalhadas, Mins_trabalhados);
    
    return (EXIT_SUCCESS);
}

