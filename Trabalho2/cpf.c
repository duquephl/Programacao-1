#include <stdio.h>

int main(void)
{
    long int CPF, resto;
    int k, r, l,m, digito, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11,d10v,d11v;
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
    l=10*d1+9*d2+8*d3+7*d4+6*d5+5*d6+4*d7+3*d8+2*d9;
    m=10*d2+9*d3+8*d4+7*d5+6*d6+5*d7+4*d8+3*d9+2*d10;
    
    printf("%d%d%d.%d%d%d.%d%d%d-%d%d\n",d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,d11);
    return 0;
}