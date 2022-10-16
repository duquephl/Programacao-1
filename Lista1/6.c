#include<stdio.h>

int main(void){
    int num;
    printf("Digite um número: ");
    scanf("%d",&num);
    if(num%2==0){
        printf("Este número é par.\n");
    }else{
        printf("Este número é ímpar.\n");
    }
    return 0;
}