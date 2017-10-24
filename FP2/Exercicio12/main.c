#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int x, y;
    
    puts("Saber o quadrante das coordenadas");
    printf("Introduza o valor das coordenadas: \nX -> ");
    scanf("%d", &x);
    printf("Y -> ");
    scanf("%d", &y);
    
    if(x == 0 && y == 0){
        printf("As coordenadas estao na origem!");
    }else if(x > 0 && y == 0){
        printf("As coordenadas estao sobre o eixo do Y!");
    }else if(x == 0 && y > 0){
        printf("As coordenadas estao sobre o eixo do X!");
    }else if(x > 0 && y > 0){
        printf("As coordenadas estao no 1º quadrante!");
    }else if(x < 0 && y > 0){
        printf("As coordenadas estao no 2º quadrante!");
    }else if(x < 0 && y < 0){
        printf("As coordenadas estao no 3º quadrante!");
    }else if(x > 0 && y < 0){
        printf("As coordenadas estao no 4º quadrante!");
    }

    return (EXIT_SUCCESS);
}

