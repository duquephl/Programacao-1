/*Trabalho de Programação I - Codificador de Mensagem
UFES - SI 2022/2
Professor: Paulo Nunes
Alunos:Pedro Duque, Cássio Alcure, Estéfani Eller
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define COLOR_RESET "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define MAG "\e[0;35m"
#define YEL "\e[0;33m"

int main(void){
    int tamanho=61, codificada[tamanho], op, opChave, tamCodificada,tamMensagem,tamChave;
    char mensagem[tamanho], chave[]= "EARTE2020/1";
    do{
        printf("%sSelecione uma opção do menu:%s\n", GRN, COLOR_RESET);
        printf("%s1%s- Codificar Mensagem.\n%s2%s- Descodificar Mensagem.\n%s3%s- Sair.\n", YEL, COLOR_RESET, YEL, COLOR_RESET, YEL, COLOR_RESET);
        printf("Digite uma opção: ");
        scanf("%d",&op);
        if(op==1){
            printf("Digite a mensagem desejada: ");
            scanf("%s", mensagem);
            tamMensagem = strlen(mensagem);
            tamChave = strlen(chave);
            for(int i=0; i<tamMensagem; i++){
                codificada[i] = mensagem[i] ^ chave[i%tamChave];
            }
            codificada[tamMensagem] = '\0';
            printf("O tamanho da mensagem é: %s%d%s.\n", GRN, tamMensagem, COLOR_RESET);
            printf("A mensagem codificada é: %s", MAG);
            for(int i=0; i<tamMensagem; i++){
                printf("%d ", codificada[i]);
            }
            printf("%s\n", COLOR_RESET);
        }else if(op==2){
            printf("Digite o tamanho da mensagem: ");
            scanf("%d", &tamCodificada);
            printf("Digite a mensagem desejada: ");
            for(int i=0; i<tamCodificada; i++){
                scanf("%d", &codificada[i]);
            }
            tamChave = strlen(chave);
            for(int i=0; i<tamCodificada; i++){
                mensagem[i] = codificada[i] ^ chave[i%tamChave];
            }
            mensagem[tamCodificada] = '\0';
            printf("Mensagem Descodificada: ");
            printf("%s%s%s", MAG, mensagem, COLOR_RESET);
            printf("\n");
        }else if(op==3){
            printf("Saindo do programa...\n");
            break;
        }else{
            printf("%sOpção inválida. Digite novamente uma opção validade.\n%s", RED, COLOR_RESET);
        }
    }while(op!=3);
    return 0;
}
