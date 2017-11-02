#include <stdio.h>
#include <stdlib.h>

#define ERRO "ERRO!!!"
#define SALARIO_MINIMO 557
/*
 * 
 */
void limparbuffer(){
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

int main(int argc, char** argv) {
    int idade, idade_maior = 0, idade_menor = 150, estado_civil, numero_salarios = 0, numero_casos = 0, numero_casos2 = 0;
    double salario, media_salarios = 0, salario_total;
    char sexo;
    
    puts("Pesquisa numa dada região");
            
    while (1){
        printf("Introduza a idade do individuo [16 e 150]: ");
        scanf("%d", &idade);
        
        if (idade >= 16 || idade <= 150){
            if (idade < 0){
            puts("Idade introduzida e negativa. Programa a encerrar!");
            break;
            }           
            if (idade > idade_maior){
                idade_maior = idade;
            } 
            if (idade < idade_menor){
                idade_menor = idade;
            }
        } else {
            puts("ERRO!!!");
            return 0;
        }
        
        limparbuffer();
        printf("Introduza o sexo (M ou F): ");
        scanf("%c", &sexo);
                
        limparbuffer();
        printf("Indique qual o estado civil: \n 1 - Solteiro \n 2 - Casado \n 3 - Divorciado \n 4 - Viuvo \n");
        printf("Opção: ");
        scanf("%d", &estado_civil);
        
        limparbuffer();
        printf("Introduza o salario: ");
        scanf("%lf", &salario);
        
        if (salario >= SALARIO_MINIMO){
            salario_total += salario;
            numero_salarios++;
        } else {
            printf(ERRO);
        }
        
        if (sexo == 'F' || sexo == 'f' && salario <= 1500){
            numero_casos++;
        }
        
        if (sexo == 'M' || sexo == 'm' && idade > 17 && idade <= 35 && estado_civil == 2){
            numero_casos2++;
        }
        
        limparbuffer();
        
        media_salarios = (salario_total / numero_salarios);    
    } //fim do while
    
    printf("A idade maior e %d e a menor e %d \n", idade_maior, idade_menor);
    printf("A media dos salario e %.2lf€ \n", media_salarios);
    printf("Numero de mulheres com salario abaixo de 1500€ e %d \n", numero_casos);
    printf("Numero de homens entre os 18 e 35 anos casados e %d \n", numero_casos2);
    
    
    return (EXIT_SUCCESS);
}

