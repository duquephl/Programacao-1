#include<stdio.h>

int main(void){
    float num;
    do{
        printf("Digite um numero que esteja entre 0.0 e 1.0: ");
        scanf("%f", &num);
    }while (num < 0.0 || num > 1.0);
    return 0;
}