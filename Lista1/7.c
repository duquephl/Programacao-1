#include<stdio.h>

int main(void){
    int num;
    printf("Digite um número: ");
    scanf("%d",&num);
    if(num%7==0){
        printf("Este número é divisível por 7.\n");
    }else{
        printf("Este número é não divisível por 7.\n");
    }
    return 0;
}