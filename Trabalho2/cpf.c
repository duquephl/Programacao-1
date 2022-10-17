#include <stdio.h>

int main(void)
{
    long int CPF, resto;
    int k, r, l, digito, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11;
    printf("Digite o seu CPF: ");
    scanf("%ld", &CPF);
    d11 = CPF % 10;
    resto = CPF / 10;
    d10 = resto % 10;
    resto = resto / 10;
    d9 = resto % 10;
    resto = resto / 10;
    d8 = resto % 10;
    resto = resto / 10;
    d7 = resto % 10;
    resto = resto / 10;
    d6 = resto % 10;
    resto = resto / 10;
    d5 = resto % 10;
    resto = resto / 10;
    d4 = resto % 10;
    resto = resto / 10;
    d3 = resto % 10;
    resto = resto / 10;
    d2 = resto % 10;
    resto = resto / 10;
    d1 = resto;
    return 0;
}