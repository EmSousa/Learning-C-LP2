#include <stdio.h>
#include <string.h>
#include <math.h>
#include "utils.h"

#define MAXIMO 45


void clean_buffer(){
char ch;
while ((ch = getchar()) != '\n' && ch != EOF);
}

int lerString(char *string, int max) {
    if (fgets(string, max, stdin) != NULL) {
        int tamanho = strlen(string) - 1;
        if (string[tamanho] == '\n') {
            string[tamanho] = '\0';
        } else { 
            clean_buffer();
        }
        return 1;
    }
    return 0;
}

int countChar(char *string, int max){
    int i, nr_espacos = 0;
    
    for (i = 0; i <= max; ++i){
        if (string[i] == ' '){
            nr_espacos += 1;
        }
    }
    return nr_espacos;
}