#include <stdio.h>

int main (void){
    char nome[20];

    printf("Digite seu primeiro nome: ");
    scanf("%s",&nome);
    printf("Seu nome é %s.\n",nome);
    
    return 0;
}