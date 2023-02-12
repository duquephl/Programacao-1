/*Prova de Programação I - Questão 1
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
    int quantNum, numero, tamChave;
    char *Mensagem;
    char chave[] = "2022201324";

    while (fscanf(arquivo, "%d", &numero) != EOF)
    {
        quantNum++;
    }
    fclose(arquivo);
    Mensagem = (char *)malloc(quantNum * sizeof(char));
    arquivo = fopen("2022201324.dat", "r");
    quantNum = 0;
    tamChave = strlen(chave);
    while (fscanf(arquivo, "%d", &numero) != EOF)
    {
        Mensagem[quantNum] = numero ^ chave[quantNum % tamChave];
        quantNum++;
    }
    printf("%s\n", Mensagem);
    fclose(arquivo);
    return 0;
}