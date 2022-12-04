/*Trabalho de Programação I - Matriz Identidade
UFES - SI 2022/2
Professor: Paulo Nunes
Alunos:Pedro Henrique de Lima Duque
*/

#include <stdio.h>
#include <stdlib.h>


int main (){
    int n;
    int **matrizidentidade;

    printf("Digite o tamanho da matriz: ");
    scanf("%d", &n);

    matrizidentidade = (int**) malloc(n * sizeof(int*));

    for(int i = 0; i < n; i++){
        matrizidentidade[i] = (int*) malloc(n * sizeof(int));
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                matrizidentidade[i][j] = 1;
            }else{
                matrizidentidade[i][j] = 0;
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", matrizidentidade[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}