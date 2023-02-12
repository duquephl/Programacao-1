/*Prova de Programação I - Questão 3
UFES - SI 2022/2
Professor: Paulo Nunes
Aluno:Pedro Duque
*/

#include <stdio.h>
#include <math.h>

typedef struct _vt3
{
    float x;
    float y;
    float z;
} tVetorR3;

float calculaModuloR3(tVetorR3 v)
{
    // Escreva aqui o código necessário para função calcular o módulo do
    // vetor v.
    return sqrt(pow(v.x, 2) + pow(v.y, 2) + pow(v.z, 2));
}

int main()
{
    tVetorR3 vetor;
    float modulo;
    // Leitura dos valores do vetor
    printf("Digite as três coordenadas do vetor: ");
    scanf("%f %f %f", &vetor.x, &vetor.y, &vetor.z);
    // Calcular módulo
    modulo = calculaModuloR3(vetor);
    // Imprimir o módulo
    printf("O módulo do vetor (%f, %f, %f) é %f", vetor.x, vetor.y, vetor.z, modulo);
    printf("\n");

    return 0;
}