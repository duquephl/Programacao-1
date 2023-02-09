/*Trabalho de Programação I 
UFES - SI 2022/2
Professor: Paulo Nunes
Alunos:Pedro Duque, Cássio Alcure, Estéfani Eller
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE *arquivo = fopen("seqinteiros.dat", "r");
  FILE *arquivo2 = fopen("piramidif.dat", "w");
  int numero, quantNum=0;
  int **matriz;

  if (arquivo == NULL) {
    printf("Erro ao abrir o arquivo");
    return 1;
  }

  while (fscanf(arquivo, "%d", &numero) != EOF) {
    quantNum++;
  }
  printf("\n");
  fclose(arquivo);

  /// alocação da matriz
  matriz = (int**) malloc(quantNum * sizeof(int*));
  for (int i = 0; i < quantNum; i++) {
    matriz[i] = (int*) malloc((quantNum-i) * sizeof(int));
  }
  arquivo = fopen("seqinteiros.dat", "r");
  /// alocação dos numeros na matriz
  quantNum = 0;
  while (fscanf(arquivo, "%d", &numero) != EOF){
    matriz[0][quantNum] = numero;
    quantNum++;
  }

  for(int i = 1; i < quantNum; i++){
    for(int j = 0; j < quantNum-i; j++){
      matriz[i][j] = matriz[i-1][j] - matriz[i-1][j+1];
    }
  }
  ///estrever no arquivo
  for (int i = 1; i < quantNum; i++) {
    for (int j = 0; j < quantNum-i; j++) {
      fprintf(arquivo2, "%d ", matriz[i][j]);
    }
    fprintf(arquivo2, "\n");
  }
  ///imprimir matriz
  for (int i = 0; i < quantNum; i++) {
    for (int j = 0; j < quantNum-i; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }

  fclose(arquivo);
  fclose(arquivo2);

  return 0;
}