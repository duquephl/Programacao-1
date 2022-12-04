#include<stdio.h>

int main(void){
    int num,soma=0;
    do{
        printf("Digite um numero entre 1 e 10: ");
        scanf("%d", &num);
        soma += num;
        if (soma>=21){
            printf("Soma :%d", soma);
            break;
        }
    }while(num<1 || num>10);
    return 0;
}