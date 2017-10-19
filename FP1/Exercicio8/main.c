#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float c, f;
    
    puts("Conversao de Fahrenheit em celsius");
    printf("Indique a temperatura em ºF a converter: ");
    scanf("%f", &f);
    c = (f - 32) * 5/9;
    printf("Convertido dá %.2f ºC", c);
    return (0);
}

