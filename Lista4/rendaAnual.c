#include <stdio.h>
#include <stdlib.h>

#define N 5

void imprimeRendaAnual(float salario){
  printf("Salario Anual e %f\n", 12 * salario);
}

void aumentaSalario(float *salario, float aumento){

}

int main(){
  int i, k;
  float aumento, sal[N];

  printf("Digite %d numeros reais (salario mensal)\n", N);

  for(i = 0; i < N; i++) 
    scanf("%f", &sal[i]);

  printf("Digite um numero inteiro de 0 a %d\n", N - 1);

  scanf("%d", &k);

  printf("Digite um numero real que represente quanto deve ser dado de aumento\n");
  scanf("%f", &aumento);

  aumentaSalario(&sal[k], aumento);

  for(i = 0; i < N; i++)
    imprimeRendaAnual(sal[i]);

  return 0;
}