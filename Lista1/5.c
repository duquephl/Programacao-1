#include<stdio.h>

int main(void){
    int anos,dias,quantAnosBi=0;
    printf("Digite quantos anos: ");
    scanf("%d",&anos);
    quantAnosBi=anos/4;
    dias=(anos*365)+quantAnosBi;
    printf("O total de dias que %d anos tem é: %d dias.\n",anos,dias);
    return 0;
}