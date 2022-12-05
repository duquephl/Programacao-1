#include <stdio.h>

int main()
{
    int v[9];
    printf("Digite 9 numeros: ");
    for (int i = 0; i < 9; i++){
        scanf("%d", &v[i]);
    }
    for (int i = 0; i < 9; i++){
        printf("%d ", v[i]);
    }
    return 0;
}