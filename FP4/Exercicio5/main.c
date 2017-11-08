/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: emili
 *
 * Created on 8 de Novembro de 2017, 21:01
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

long int CalculoFatorial (long int numero){
    long int i, numero_fatorial = 1;
    
    for (i = 1; i <= numero; ++i){
        numero_fatorial = numero_fatorial * i;
    }
    
    printf("Numero fatorial de %ld = %ld", numero, numero_fatorial);
    
}

int main(int argc, char** argv) {
    long int numero;
    
    puts("Calculo do numero fatorial de um numero");
    printf("Introduza o numero: ");
    scanf("%ld", &numero);
    
    CalculoFatorial(numero);
    
    return (EXIT_SUCCESS);
}

