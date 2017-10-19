#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int horacheg, minscheg, horapart, minspart, segundoshorapart, segundosminspart,segundospart;
    int segundoshoracheg, segundosminscheg, segundoscheg, segundosviagem;
    float horaviagem, minutosviagem;
    
    puts("Computador de bordo");
    printf("Insira a hora de partida: ");
    scanf("%d", &horapart);
    printf("Insira os minutos de partida: ");
    scanf("%d", &minspart);
    
    segundoshorapart = horapart * 3600;
    segundosminspart = minspart * 60;
    segundospart = segundoshorapart + segundosminspart;
    
    printf("Insira a hora de chegada: ");
    scanf("%d", &horacheg);
    
    segundoshoracheg = horacheg * 3600;
    segundosminscheg = minscheg * 60;
    segundoscheg = segundoshoracheg + segundosminscheg;
    
    puts("");
    
    segundosviagem = segundoscheg - segundospart;
    
    horaviagem = segundosviagem / 3600;
    minutosviagem = (segundosviagem - (3600 * horaviagem)) / 60;
    
    printf("Viagem durou %.0f horas e %.0f minutos \n", horaviagem, minutosviagem);
    
    return (EXIT_SUCCESS);
}

