#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_VET 10

/*
 * Ficha 5 - Exercicio 7
 */

void VetorA(int a[]){
    int i;
    
    for (i = 0; i < TAMANHO_VET; ++i){
        printf("Introduza um numero: ");
        scanf("%d", &a[i]);
    }
}

void VetorB(int b[]){
    int i;
    
    for (i = 0; i < TAMANHO_VET; ++i){
        printf("Introduza um numero: ");
        scanf("%d", &b[i]);
    }
}

void VetorC(int c[], int a[], int b[]){
    int i, j;
    
    for (i = 0; i < TAMANHO_VET; ++i){
        c[i] = a[i];
    }    
    for (j = TAMANHO_VET; j < 20; ++j) {
        c[j] = b[j - TAMANHO_VET];
    }
}

void VetorD(int d[], int a[], int b[]){
    int i, j, procura = 0, procura_vetor = 0;
    
    for (i = 0; i < TAMANHO_VET; ++i){
        for (j = 0; j < TAMANHO_VET; ++j){
            if (a[i] == b[j]){
                break;
            } else {
                procura += 1;
            }
        }
        if (procura == 10){
            d[procura_vetor] = a[i];
            procura_vetor += 1;
        }
        procura = 0;
    }
    for(i = 0; i < procura_vetor; ++i){
        printf("Valor de vetor[%d]: %d\n", i, d[i]);
    }
}

void VetorE(int e[], int a[], int b[]){
    int i, j, k, procura = 0, contador = 0;
    
    for (i = 0; i < TAMANHO_VET; ++i){
        for (j = 0; j < TAMANHO_VET; ++j){
            if (a[i] == b[j]){
                for (k = i + 1; k < TAMANHO_VET; ++k){
                    if (a[i] == a[k]){
                        procura += 1;
                    }
                }
                
                for (k = i + 1; k < TAMANHO_VET; ++k){
                    if (b[i] == b[k]){
                        procura += 1;
                    }
                }
    
                if (procura == 0){
                    e[contador] = a[i];
                    contador += 1;
                }
            }
        }
    }
    for(i = 0; i < contador; ++i){
        printf("Valor de vetor[%d]: %d\n", i, e[i]);
    }
}

int main(int argc, char** argv) {
    int a[TAMANHO_VET], b[TAMANHO_VET], c[20], d[TAMANHO_VET], e[TAMANHO_VET], i;
    
    puts("Vetor A: ");
    VetorA(a);
    for(i = 0; i < TAMANHO_VET; ++i){
        printf("Valor de vetor[%d]: %d\n", i, a[i]);
    }
    
    puts("\nVetor B: ");
    VetorB(b);
    for(i = 0; i < TAMANHO_VET; ++i){
        printf("Valor de vetor[%d]: %d\n", i, b[i]);
    }
    
    puts("\nVetor C: ");
    VetorC(c, a, b);
    for(i = 0; i < 20; ++i){
        printf("Valor de vetor[%d]: %d\n", i, c[i]);
    }
    
    puts("\nVetor D: ");
    VetorD(d, a, b);
       
    puts("\nVetor E: ");
    VetorE(e, a, b);

    return (EXIT_SUCCESS);
}