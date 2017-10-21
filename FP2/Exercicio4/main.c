#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int numero1, numero2, numero3, menor;
    
    puts("Menor numero de 3");
    printf("Insira o primeiro numero: ");
    scanf("%d", &numero1);
    
    printf("Insira o segundo numero: ");
    scanf("%d", &numero2);
    
    printf("Insira o terceiro numero: ");
    scanf("%d", &numero3);
    
    if (numero1 > numero2){
        menor = numero2;
    }else{
        menor = numero1;
    }
    if (numero3 < menor){
        printf("O menor numero é o %d", numero3);
        return(0);
    }
    
    puts("");
    printf("O menor numero é o %d", menor);    
    
    return (EXIT_SUCCESS);
}

