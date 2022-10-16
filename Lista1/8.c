#include <stdio.h>

int main (void){
    int num1,num2;
    printf("Digite um número: ");
    scanf("%d",&num1);
    printf("Digite um número: ");
    scanf("%d",&num2);
    if(num1>num2){
        printf("%d é maior que %d.\n",num1,num2);
    }else if(num2>num1){
        printf("%d é maior que %d.\n",num2,num1);
    }else{
        printf("%d e %d são iguais.\n",num1,num2);
    }
    return 0;
}