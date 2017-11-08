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
        printf("Introduza um numero de asteriscos a imprimir no ecra: ");
        scanf("%d", &numero);
        if (numero <= MAXIMO && numero >= MINIMO){
            break;
        } else {
            puts("Numero invalido");
        }
    }
    return numero;
}

int asteriscos(int numero) {
    int i;
    
    for (i = 1; i <= numero; ++i) {
        printf("*");
    }
    
}

int main(int argc, char** argv) {
    int numero;
    
    puts("Imprime o numero de asteriscos pedidos pelo utilizador");
    
    numero = lerInteiro();
    
    asteriscos(numero);
    
    return (EXIT_SUCCESS);
}



