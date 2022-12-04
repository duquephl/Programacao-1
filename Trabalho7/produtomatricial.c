/*Trabalho de Programação I - Produto Escalar
UFES - SI 2022/2
Professor: Paulo Nunes
Alunos:Pedro Duque, Cássio Alcure, Estéfani Eller
*/

#include<stdio.h>

int main(void){
    float matriz1[3][3], matriz2[3][3], produto[3][3]={0};

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite o valor da matriz1[%d][%d]: ", i+1, j+1);
            scanf("%f", &matriz1[i][j]);
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite o valor da matriz2[%d][%d]: ", i+1, j+1);
            scanf("%f", &matriz2[i][j]);
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 3; k++){
                produto[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%.2f ", produto[i][j]);
        }
        printf("\n");
    }

    return 0;
}