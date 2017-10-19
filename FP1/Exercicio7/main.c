#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float anoluz, km, conv;
    anoluz = 9460800000000.00;
    
    puts("Kms para anos luz");
    printf("Introduza o numero de quilometros: ");
    scanf("%f", &km);
    conv = km / anoluz;
    printf("%0.2f ano luz", conv);
    return (0);
}

