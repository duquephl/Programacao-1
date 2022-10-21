/*
Nome: Pedro Henrique de Lima Duque
RA:2022201324
*/

#include <stdio.h>

int main(void)
{

    int num1, num2;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num1);
    printf("Digite um numero inteiro:");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        for (int i = num2; i <= num1; i++)
        {
            printf("%d, ", i);
        }
    }
    else if (num2 > num1)
    {
        for (int i = num1; i <= num2; i++)
        {
            printf("%d, ", i);
        }
    }
    else
    {
        printf("Os numeros sao iguais.");
    }
    printf("\n");
    
    return 0;
}