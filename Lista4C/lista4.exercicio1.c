#include <stdio.h>
#define MAX 10
/*Escreva um programa em C para ler um vetor X de 10 elementos inteiros. Logo ap�s copie os
elementos do vetor X para um vetor Y fazendo com que o 1o. elemento de X seja copiado para o
10o. de Y, o 2o. de X para o 9o. de Y e assim sucessivamente. Ap�s o t�rmino da c�pia, imprimir o
vetor Y.*/
void vetor(int original[]){
    int i;
    for(i = 0; i < MAX; i++){
        printf("Digite os valores do vetor %d: ", i+1);
        scanf("%d", &original[i]);
    }
}
void copia(int copiado[], int original[]){
    for(int i = 0; i < MAX; i++){
        copiado[i] = original[MAX - 1 - i];
    }
}

int main(void){
    int original[MAX],
    copiado[MAX];

    vetor(original);
    copia(copiado, original);

    printf("Original = ");
    for(int i = 0; i < MAX; i++){
        printf("%d | ", original[i]);
    }
    printf("\n");

    printf("Copia = ");
    for(int i = 0; i < MAX; i++){
        printf("%d | ", copiado[i]);
    }
    printf("\n");
}
