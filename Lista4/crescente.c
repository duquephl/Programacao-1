#include <stdio.h>
#include <stdlib.h>

#define N 5

void crescDesc(int a, int b){

}

int main(){
  int i, vet[N];

  printf("Digite %d numeros inteiros\n", N);

  for(i = 0; i < N; i++) 
    scanf("%d", &vet[i]);

  for(i = 0; i < N-1; i++)
    crescDesc(vet[i], vet[i+1]);

  return 0;
}