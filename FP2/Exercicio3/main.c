#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float nota1, nota2, nota3;
    float media1, media2, media3, media_ponderada;
    
    puts("Media ponderada com avaliação");
    printf("Introduza a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Introduza a segunda nota: ");
    scanf("%f", &nota2);
    
    printf("Introduza a terceira nota: ");
    scanf("%f", &nota3);
    
    media1 = nota1 * 0.25;
    media2 = nota2 * 0.35;
    media3 = nota3 * 0.40;
    media_ponderada = media1 + media2 + media3;
    
    if (media_ponderada >= 9.5){
        printf("O aluno foi aprovado com %.0f valores", media_ponderada);
        return(0);
    } else {
        printf("O aluno foi reprovado com %.0f valores", media_ponderada);
    }
    
    return (EXIT_SUCCESS);
}

