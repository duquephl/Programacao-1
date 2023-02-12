#include <stdio.h>
#include <stdlib.h>

float areaRetangulo(float b, float h){
  
}

int main(){
  float a, b, r;
  printf("Digite o tamanho da base do retangulo: ");
  scanf("%f", &a);

  printf("Digite a altura do retangulo: ");
  scanf("%f", &b);

  r = areaRetangulo(a, b);

  printf("A area do retangulo eh %f\n", r);
  return 0;
}