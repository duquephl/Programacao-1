#include <stdio.h>

int main(void){
    float num;
    printf("Digite um numero entre 0.0 e 1.0: ");
    scanf("%f", &num);
    while(num<0.0||num>1.0){
        printf("Numero invalido! Digite novamente: ");
        scanf("%f", &num);
    }
return 0;
}