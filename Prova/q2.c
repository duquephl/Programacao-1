/*Prova de Programação I - Questão 2
UFES - SI 2022/2
Professor: Paulo Nunes
Aluno:Pedro Duque
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    FILE *arquivo = fopen("2022201324.dat", "r");
    int quantNum = 1, numero, **matriz, tam = 10, preencher = 0;

    fclose(arquivo);
    matriz = (int **)malloc(tam * sizeof(int *));
    for (int i = 0; i < tam; i++)
    {
        matriz[i] = (int *)malloc((tam - i) * sizeof(int));
    }
    arquivo = fopen("2022201324.dat", "r");
    while (fscanf(arquivo, "%d", &numero) != EOF)
    {
        /// printf("%d : %d\n",quantNum,numero);
        ///  1, 7, 13, 19, 25, 31, 37, 43, 49, 55
        /// numeros : 125 , 116, 119, 119, 123, 99, 126, 85, 18, 86
        if (quantNum == 1 || quantNum == 7 || quantNum == 13 || quantNum == 19 || quantNum == 25 || quantNum == 31 || quantNum == 37 || quantNum == 43 || quantNum == 49 || quantNum == 55)
        {
            matriz[0][preencher] = numero;
            preencher++;
        }
        quantNum++;
    }

    for (int i = 1; i < tam; i++)
    {
        for (int j = 0; j < tam - i; j++)
        {
            matriz[i][j] = matriz[i - 1][j] + matriz[i - 1][j + 1];
        }
    }

    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam - i; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    fclose(arquivo);
    return 0;
}