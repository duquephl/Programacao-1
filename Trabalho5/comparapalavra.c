/*
Nome: Pedro Henrique de Lima Duque
RA:2022201324
*/

#include<stdio.h>
#include<ctype.h>

int main (void){
    char palavra1[6], palavra2[6];
    int quant=0;

    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);
    printf("Digite a segunda palavra: ");
    scanf("%s", palavra2);

    for(int i = 0; i < 5; i++){
        palavra1[i]= toupper(palavra1[i]);
        palavra2[i]= toupper(palavra2[i]);
        if(palavra1[i] == palavra2[i]){
            printf("A letra \"%c\" é igual, no indice %d.\n", palavra1[i], i+1);
            quant++;
        }
    }

    printf("A quantidade de letras iguais é: %d.\n", quant);

    return 0;
}