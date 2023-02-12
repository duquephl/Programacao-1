#include <stdio.h>
#include <stdlib.h>

void sacar(float *saldo, float saque){

}

int main(){
  float saldo, saque = 1.0;
  printf("Digite o saldo inicial (numero real): ");
  scanf("%f", &saldo);

  while(saque > 0.0){
    printf("Digite o valor a ser sacado: ");
    scanf("%f", &saque);
    sacar(&saldo, saque);
  }

  return 0;
}