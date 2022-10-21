#include<stdio.h>

int main(void){
    int num1,num2,num3;
    printf("Digite um número: ");
    scanf("%d",&num1);
    printf("Digite um número: ");
    scanf("%d",&num2);
    printf("Digite um número: ");
    scanf("%d",&num3);

    if(num1>num2 &&num1>num3){
        printf("O maior número é %d.\n",num1);
    }
    else if(num2>num1 &&num2>num3){
        printf("O maior número é %d.\n",num2);
    }
    else if(num3>num1 &&num3>num2){
        printf("O maior número é %d.\n",num3);
    }
    else{
        printf("Os números são iguais.\n");
    }
    return 0;
}