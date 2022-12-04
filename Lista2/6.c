#include <stdio.h>

int main (void){
    char vogal;
    printf("Digite uma vogal em maiusculo: ");
    scanf("%c", &vogal);
    while(vogal!='A' && vogal!='E' && vogal!='I' && vogal!='O' && vogal!='U'){
        printf("Vogal invalida! Digite novamente uma vogal em maiusculo: ");
        scanf("%c", &vogal);
    }
    return 0;
}