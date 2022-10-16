#include <stdio.h>

int main(void){
    int num1,num2;
    printf("Digite um numero: ");
    scanf("%d",&num1);
    printf("Digite um numero: ");
    scanf("%d",&num2);
    printf("O produto de num1: %d e num2: %d é %d.\n",num1,num2,num1*num2);
    return 0;
}