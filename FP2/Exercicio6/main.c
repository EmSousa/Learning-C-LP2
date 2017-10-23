#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int hora, minutos, hora_convertida;
    
    puts("Conversão de horas do horario de 24h para 12h");
    printf("Insira as horas: ");
    scanf("%d", &hora);
    
    printf("Insira os minutos: ");
    scanf("%d", &minutos);
    
    if (hora > 23 || minutos > 59){
        puts("Erro!");
        return (0);       
    }
    if (hora >= 12){
        hora_convertida = hora - 12;
        printf("No formato de 12h = %d : %d PM", hora_convertida, minutos);
        return(0);
    }else{
        printf("No formato de 12h = %d : %d AM", hora, minutos);
        return(0);
    }

    return (EXIT_SUCCESS);
}

