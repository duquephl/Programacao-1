#include<stdio.h>

int main(void){
    char vogal;
    do{
        printf("Digite uma vogal em letra maiuscula: ");
        scanf("%c", &vogal);
    }while (vogal != 'A' && vogal != 'E' && vogal != 'I' && vogal != 'O' && vogal != 'U');
}