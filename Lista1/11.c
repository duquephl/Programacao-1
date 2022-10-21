#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main (void){
    float num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,media,soma,desvio;
    printf("Digite um número: ");
    scanf("%f",&num1);
    printf("Digite um número: ");
    scanf("%f",&num2);
    printf("Digite um número: ");
    scanf("%f",&num3);
    printf("Digite um número: ");
    scanf("%f",&num4);
    printf("Digite um número: ");
    scanf("%f",&num5);
    printf("Digite um número: ");
    scanf("%f",&num6);
    printf("Digite um número: ");
    scanf("%f",&num7);
    printf("Digite um número: ");
    scanf("%f",&num8);
    printf("Digite um número: ");
    scanf("%f",&num9);
    printf("Digite um número: ");
    scanf("%f",&num10);
    media=(num1+num2+num3+num4+num5+num6+num7+num8+num9+num10)/10;
    printf("A média é %f.\n",media);
    num1=num1-media;
    num2=num2-media;
    num3=num3-media;
    num4=num4-media;
    num5=num5-media;
    num6=num6-media;
    num7=num7-media;
    num8=num8-media;
    num9=num9-media;
    num10=num10-media;
    num1=num1*num1;
    num2=num2*num2;
    num3=num3*num3;
    num4=num4*num4;
    num5=num5*num5;
    num6=num6*num6;
    num7=num7*num7;
    num8=num8*num8;
    num9=num9*num9;
    num10=num10*num10;
    soma=(num1+num2+num3+num4+num5+num6+num7+num8+num9+num10)/10;
    desvio=sqrt(soma);
    printf("O desvio padrão é %f.\n",desvio);

    return 0;
}