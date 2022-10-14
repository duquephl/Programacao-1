/*
Nome:
    Pedro Henrique de Lima Duque RA:2022201324
*/

#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int valor, quantNotas200 = 0, quantNotas100 = 0, quantNotas50 = 0, quantNotas20 = 0, quantNotas10 = 0, quantNotas5 = 0, quantNotas2 = 0;
    printf("Digite o valor que você quer sacar: ");
    scanf("%d", &valor);

    if (valor < 2)
    {
        printf("Impossível sacar um valor negativo.\n");
        return 0;
    }
    else
    {

        quantNotas200 = valor / 200;
        valor = valor % 200;
        if (quantNotas200 > 0 && (valor == 1 || valor==3))
        {
            quantNotas200--;
            valor += 200;
        }
        quantNotas100 = valor / 100;
        valor = valor % 100;
        if (quantNotas100 > 0 && (valor == 1 || valor==3))
        {
            quantNotas100--;
            valor += 100;
        }
        quantNotas50 = valor / 50;
        valor = valor % 50;
        if (quantNotas50 > 0 && (valor == 1 || valor==3))
        {
            quantNotas50--;
            valor += 50;
        }
        quantNotas20 = valor / 20;
        valor = valor % 20;
        if (quantNotas20 > 0 && (valor == 1 || valor==3))
        {
            quantNotas20--;
            valor += 20;
        }
        quantNotas10 = valor / 10;
        valor = valor % 10;
        if (quantNotas10 > 0 && (valor == 1 || valor==3))
        {
            quantNotas10--;
            valor += 10;
        }
        quantNotas5 = valor / 5;
        valor = valor % 5;
        if (quantNotas5 > 0 && (valor == 1 || valor==3))
        {
            quantNotas5--;
            valor += 5;
        }
        quantNotas2 = valor / 2;
        valor = valor % 2;

        if (valor != 0)
        {
            printf("Não é possível sacar este valor.\n");
            return -1;
        }
            printf("\n\nVocê receberá:\n%d notas de 200 reais.\n%d notas de 100 reais.\n%d notas de 50 reais.\n%d notas de 20 reais.\n", quantNotas200, quantNotas100, quantNotas50, quantNotas20);
            printf("%d notas de 10 reais.\n%d notas de 5 reais.\n%d notas de 2 reais.\n", quantNotas10, quantNotas5, quantNotas2);
    }

    return 0;
}