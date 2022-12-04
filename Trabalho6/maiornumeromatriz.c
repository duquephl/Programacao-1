/*
Nome: Pedro Henrique de Lima Duque
RA:2022201324
*/

#include <stdio.h>

int main (void){
    int matriz[3][3], matriz2[3][3], matriz3[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite o valor da matriz[%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite o valor da matriz2[%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz2[i][j]);
        }
    }   

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if (matriz[i][j] == matriz2[i][j]){
                matriz3[i][j] = matriz[i][j];
            }else if (matriz[i][j] > matriz2[i][j]){
                matriz3[i][j] = matriz[i][j];
            }else{
                matriz3[i][j] = matriz2[i][j];
            }
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", matriz3[i][j]);
        }
        printf("\n");
    }
    return 0;
}