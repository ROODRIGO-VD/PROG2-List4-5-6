#include <stdio.h>

void lerValores(int n, int vet[]){
     for(int i =0; i < n; i++ ){
        printf("Digite o %do valor: ", i+1);
        scanf("%d", &vet[i]);
     }
}

void listarValores(int vet[], int tamanho){
    int i;
    for(i = 0; i < tamanho; i++){
        printf("Posicao %d : %d\n",i, vet[i]);
    }
}

int pesquisarValores(int vet[], int tamanho, int valor){
    for (int i = 0 ; i < tamanho; i++){
        if(vet[i] == valor){
            return i;
        }
    }
    return -1;

}

void trocaDeValores(int vet[], int tamanho){
    int aux[tamanho];
    aux[0] = vet[0];
    for( int i = 1; i < tamanho; i++){
        aux[i] = vet[i] + aux[i - 1];
    }
    for(int i = 0; i < tamanho; i++){
        vet[i] = aux[i];
    }
}

int main(){
    int valores[7];
    int tamanho = sizeof(valores) / sizeof(valores[0]);
    int valorProc, posic;
    lerValores(tamanho, valores);
    listarValores(valores, tamanho);

    printf("Valor para pesquisar no vetor: ");
    scanf("%d", &valorProc);
    posic = pesquisarValores(valores, tamanho, valorProc);

    if(posic != -1){
        printf("O valor %d esta na posicao %d \n", valorProc, posic);
    }else{
        printf("O valor %d nao foi encontrado", valorProc);
    }

    trocaDeValores(valores, tamanho);
    printf("Vetor trocado:\n");
    listarValores(valores, tamanho);
}

