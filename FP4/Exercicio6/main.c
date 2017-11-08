#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
void limparBufferEntrada(){
    char ch;
    while((ch = getchar()) != '\n' && ch !=EOF);
}

int ImprimirDesenho(char carater, int linhas, int colunas){
    int i, j;
    
    for (i = 1; i <= colunas; ++i){
        for (j = 1; j <= linhas; ++j){
            if (i > 1 && i < colunas && j > 1 && j < linhas){
                printf(" ");
            } else {
                printf("%c", carater);
            }  
        }    
    printf("\n");  
    }
}


int main(int argc, char** argv) {
    char carater;
    int linhas, colunas;
    
    puts("Imprimir um objeto com carateres");
    printf("Introduza o carater com o qual deseja fazer a impressao: ");
    scanf("%c", &carater);
    limparBufferEntrada();
    
    printf("Introduza o numero de linhas: ");
    scanf("%d", &linhas);
    
    printf("Introduza o numero de colunas: ");
    scanf("%d", &colunas);
    
    ImprimirDesenho(carater, linhas, colunas);
    

    return (EXIT_SUCCESS);
}

