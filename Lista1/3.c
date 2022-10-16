#include <stdio.h>

int main (void){
    float F,C;
    printf("Digite a temperatura em graus fahrenheit: ");
    scanf("%f",&F);
    printf("A temperatura em fahrenheit é %fº e em graus celsius é %fº.\n",F,((F-32.0)/9.0)*5.0);
    return 0;
}