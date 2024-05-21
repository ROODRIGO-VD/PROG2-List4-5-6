#include <stdio.h>
#define MAX 20
int main(){

    int v1[MAX], v2[MAX],resultado[MAX];
    char operador[MAX];

    /*1o vetor*/
    for(int i =0; i<MAX;i++){
        printf("Valores na posicao %d do V1: ", i+1);
        scanf("%d",&v1[i]);
    }

    /*2o vetor*/
    for(int i =0; i<MAX;i++){
        printf("Valores na posicao %d do V2: ", i+1);
        scanf("%d",&v2[i]);
    }

    /*Selecionar o operador*/
    printf("Selecione o operador(+, -, *, /) que desejar para cada posicao: \n");
    for(int i =0; i < MAX; i++){
        scanf(" %c", &operador[i]);
    }

    for(int i =0;i < MAX;i++){
        switch(operador[i]){
            case '+':
                resultado[i] = v1[i] + v2[i];
                break;
            case '-':
                resultado[i] = v1[i] - v2[i];
                break;
            case '*':
                resultado[i] = v1[i] * v2[i];
                break;
            case '/':
                if(v2[i] == 0){
                    printf("Nao e possível calcular divisao por 0!!");
                    resultado[i] = 0;
                }else{
                    resultado[i] = v1[i] / v2[i];
                }
                break;
            default:
                resultado[i] = v1[i] + v2[i];
        }
    }

    printf("Resultado: \n");
    for(int i = 0; i < MAX; i++){
        printf("%d | ", resultado[i]);
    }
}
