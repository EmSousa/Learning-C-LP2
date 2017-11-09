/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: emili
 *
 * Created on 8 de Novembro de 2017, 22:02
 */

#include <stdio.h>
#include <stdlib.h>

#define MAXIMO 200
#define MINIMO 1
/*
 * USAR O EXERCICIO 1
 */

int lerInteiro(){
    int numero;
    
    while (1){
        printf("Introduza o numero dentro do intervalo: ");
        scanf("%d", &numero);
        if (numero <= MAXIMO && numero >= MINIMO){
            break;
        } else {
            puts("Numero invalido");
        }
    }
    return numero;
}

int main(int argc, char** argv) {
    int numero;
    
    puts("Saber se um numero esta dentro do intervao (1 - 200)");
    
    numero = lerInteiro();
    
    printf("\nO %d esta dentro do intervalo!", numero);
    
    return (EXIT_SUCCESS);
}



