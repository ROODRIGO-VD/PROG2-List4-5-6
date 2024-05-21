#include <stdlib.h>
#include <string.h>

int *aprovados(int n, int *mat, float *notas, int *tam){
    int cont = 0;
    for(int i = 0; i < n; i++){
        if(notas[i] >= 5.0){
            cont++;
        }
    }
    int *aprov = (int *)malloc(cont *sizeof(int));
    if(aprov == NULL){
        return NULL;
    }
    int j = 0;
    for(int i = 0; i < n; i++){
        if(notas[i] >= 5.0){
            aprov[j] = mat[i];
            j++;
        }
    }

    *tam = cont;

    return aprov;

}
