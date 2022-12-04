#include<stdio.h>

int main(void){
    int menu;
    do{
        printf("1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n5 - Sair\n");
        scanf("%d", &menu);
        if(menu==1){
            int num1,num2;
            printf("Digite o primeiro numero: ");
            scanf("%d", &num1);
            printf("Digite o segundo numero: ");
            scanf("%d", &num2);
            printf("Soma: %d", num1+num2);
        }else if(menu==2){
            int num1,num2;
            printf("Digite o primeiro numero: ");
            scanf("%d", &num1);
            printf("Digite o segundo numero: ");
            scanf("%d", &num2);
            printf("Subtracao: %d", num1-num2);
        }else if(menu==3){
            int num1,num2;
            printf("Digite o primeiro numero: ");
            scanf("%d", &num1);
            printf("Digite o segundo numero: ");
            scanf("%d", &num2);
            printf("Multiplicacao: %d", num1*num2);
        }else if(menu==4){
            int num1,num2;
            printf("Digite o primeiro numero: ");
            scanf("%d", &num1);
            printf("Digite o segundo numero: ");
            scanf("%d", &num2);
            printf("Divisao: %d", num1/num2);
        }else if(menu==5){
            printf("Saindo...");
            break;
        }else{
            printf("Opcao invalida!");
        }
    }while (menu!=5);
    return 0;
}