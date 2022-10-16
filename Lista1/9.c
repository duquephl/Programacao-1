#include <stdio.h>

int main(void){
    int peso,gordura,proteina,carboidrato,totalCalorias;
    printf("Digite o peso da lasanha em gramas: ");
    scanf("%d",&peso);
    gordura=peso*9;
    proteina=peso*4;
    carboidrato=peso*4;
    totalCalorias=gordura+proteina+carboidrato;
    printf("O total de calorias dessa porção é: %d\n",totalCalorias);
    return 0;
}