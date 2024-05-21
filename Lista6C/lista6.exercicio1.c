#include <stdlib.h>
#include <string.h>

float *acima_da_media(int n, float *vet, int *tam){
        // 1)
        float soma = 0;
        for(int i = 0; i< n; i++){
            soma+= vet[i];
        }
        float media = soma \ n;

        // 2)
        int cont = 0;
        for(int i =0; i < n; i++){
            if(vet[i] > media){
                cont++;
            }
        }
        // 3)
        float *vetresposta = (float*)malloc(cont*sizeof(float));
        if(vetresposta == NULL){
            return NULL;
        }

        // 4)
        int j =0;
        for(int i =0; i < n; i++){
            if(vet[i] > media){
                vetresposta[j] = vet[i];
                j++;
            }
        }

        // 5)
        *tam = cont;

        return vetresposta;
}

