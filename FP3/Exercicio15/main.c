#include <stdio.h>
#include <stdlib.h>

#define ERRO "ERRO!!!"
/*
 * 
 */
void limparbuffer(){
    char sexo;
    while ((sexo = getchar()) != '\n' && sexo != EOF);
}

int main(int argc, char** argv) {
    int op, idade, idade_maior, idade_menor, estado_civil, numero_salarios = 0, numero_casos = 0, numero_casos2 = 0;
    double salario, media_salarios;
    char sexo;
    
    puts("Pesquisa numa dada região");
            
    while (1){
        printf("Introduza a idade do individuo: ");
        scanf("%d", &idade);
        
        limparbuffer();
        printf("Introduza o sexo (M ou F): ");
        scanf("%c", &sexo);
        
        printf("Indique qual o estado civil: \n 1 - Solteiro \n 2 - Casado \n 3 - Divorciado \n 4 - Viuvo \n");
        printf("Opção: ");
        scanf("%d", &estado_civil);
        
        printf("Introduza o salario: ");
        scanf("%lf", &salario);
        
        if (idade >= 16 || idade <= 150){
            if (idade > idade_maior){
                idade_maior = idade;
            } else {
                idade_menor = idade;
            } 
        } else {
            printf(ERRO);
        }
        
        if (salario >= 557){
            salario += salario;
            numero_salarios++;
        } else {
            printf(ERRO);
        }
        
        if (sexo == 'F' && salario <= 1500){
            numero_casos++;
        }
        
        if (sexo == 'M' || sexo == 'm' && idade >= 18 && idade <= 35 && estado_civil == 2){
            numero_casos2++;
        }
                      
    media_salarios = (salario / numero_salarios);    
    } //fim do while
    
    printf(" A idade maior e %d e a menor e %d \n", idade_maior, idade_menor);
    printf("A media dos salario e %.2lf€ \n", media_salarios);
    printf("Numero de mulheres com salario abaixo de 1500€ e %d \n", numero_casos);
    printf("Numero de homens entre os 18 e 35 anos casados e %d \n", numero_casos2);
    
    
    return (EXIT_SUCCESS);
}

