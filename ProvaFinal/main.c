#include <stdio.h>
#include <stdlib.h>

float **lerMatrizArquivo(char *nomeArquivo, int *m, int *n){
//Q1: Le o arquivo cujo nome eh passado no primeiro parametro (nomeArquivo), retorna a matriz que esta armazenada no arquivo lido e atualiza os parametros m e n com as dimensoes da matriz lida.
    FILE *arq = fopen(nomeArquivo, "r");
    fscanf(arq, "%d %d", m, n); 
    float **matriz = (float**) malloc(*m * sizeof(float*));
    for(int i = 0; i < *m; i++){
        matriz[i] = (float*) malloc(*n * sizeof(float));
        for(int j = 0; j < *n; j++){
            fscanf(arq, "%f", &matriz[i][j]);
        }
    }
    fclose(arq);
    return matriz;
}

float **produtoMatrizes(float **A, int mA, int nA, float **B, int mB, int nB){
//Q2: Calcula o produto de matrizes A * B. Retorna o resultado do produto.
    float **R = (float**) malloc(mA * sizeof(float*));
    for(int i = 0; i < mA; i++){
        R[i] = (float*) malloc(nB * sizeof(float));
        for(int j = 0; j < nB; j++){
            R[i][j] = 0;
            for(int k = 0; k < nA; k++){
                R[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return R;
}

void imprimeMatriz(float **A, int m, int n){
//Q3: Imprime na tela a matriz passada como parametro.
    printf("\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf(" %f ", A[i][j]);
        }
        printf("\n");
    }
}

int main(){
    float **A, **B, **R;
    int mA, nA, mB, nB;
	
    A = lerMatrizArquivo( "matrizA.dat", &mA, &nA);
    B = lerMatrizArquivo( "matrizB.dat", &mB, &nB);
	
    if(nA == mB){
        R = produtoMatrizes(A, mA, nA, B, mB, nB);
        
        printf(" A = ");
        imprimeMatriz(A, mA, nA);
        printf("\n B = ");
        imprimeMatriz(B, mB, nB);
        printf("\n A * B = ");
        imprimeMatriz(R, mA, nB);
        
        return 0;
    } else {
        printf("As dimensoes das matrizes nao permitem o calculo do produto entre elas na ordem pedida\n");
        return 1;
    }
}