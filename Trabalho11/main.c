#include <stdio.h>

int main(void) {
  FILE *arquivo = fopen("seqinteiros.dat", "r+");
  int numero, quantNum=0;
  int **matriz;

  if (arquivo == NULL) {
    printf("Erro ao abrir o arquivo");
    return 1;
  }

  while (fscanf(arquivo, "%d", &numero) != EOF) {
    printf("%d, ", numero);
    quantNum++;
  }
  printf("\n");
  matriz = (int**) malloc(quantNum * sizeof(int*));
  for (int i = 0; i < quantNum-i; i++) {
    matriz[i] = (int*) malloc(quantNum * sizeof(int));
  }

  for (int i = 0; i < quantNum-i; i++) {
    for (int j = 0; j < quantNum-i; j++) {
      matriz[i][j] = 0;
    }
  }
  ///imprimir matriz
  for (int i = 0; i < quantNum-i; i++) {
    for (int j = 0; j < quantNum-i; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }


  return 0;
}