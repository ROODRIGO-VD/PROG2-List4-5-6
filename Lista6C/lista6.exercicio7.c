#include <stdio.h>
#include <stdlib.h>

void repeticao(int *vet, int tam) {
    int *repetidos = (int*)malloc(tam * sizeof(int));
    int r = 0;
    for (int i = 0; i < tam; i++) {
        int c = 0;
        for (int j = 0; j < tam; j++) {
            if (vet[j] == vet[i]) {
                c++;
            }
        }
        if (c > 1) {
            int jaFoiAdicionado = 0;
            for (int k = 0; k < r; k++) {
                if (repetidos[k] == vet[i]) {
                    jaFoiAdicionado = 1;
                    break;
                }
            }
            if (!jaFoiAdicionado) {
                repetidos[r] = vet[i];
                r++;
            }
        }
    }

    for (int i = 0; i < r; i++) {
        if (i != (r - 1)) {
            printf("%d, ", repetidos[i]);
        } else {
            printf("%d.", repetidos[i]);
        }
    }
    free(repetidos);
}

int main() {

int n, *v;

printf("Digite o tamanho do vetor: ");
scanf("%d", &n);

v = (int*)malloc((n) * sizeof(int));

if (v == NULL) {
    printf("Nao foi possivel alocar a memoria!");
    return 1;
}

printf("Digite %d valores para o vetor:\n", n);

for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
}

repeticao(v,n);

free(v);
return 0;
}

