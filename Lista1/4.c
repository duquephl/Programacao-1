#include<stdio.h>

int main(void){
    float peso,altura;
    printf("Digite sua altura: ");
    scanf("%f",&altura);
    printf("Digite seu peso: ");
    scanf("%f",&peso);
    printf("Seu IMC é %f.\n",peso/(altura*altura));
    return 0;
}