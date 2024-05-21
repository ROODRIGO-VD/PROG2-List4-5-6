#include <stdio.h>
#include <string.h>
/* Faça um programa com uma função que calcule o número de vogais existentes em uma string. A
função recebe a string e atualiza a resposta (número de vogais) em uma variável que foi passada por
referência. */


void calc_vog(int *vogais, char *string){
    int i, j;
    *vogais = 0;

    for (i = 0; i < strlen(string); i++) {
        switch(string[i]){
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                (*vogais)++;
                break;
            default:
                break;
        }
    }
}

int main() {
    char string[100];
    int vogais;

    printf("Digite uma string: ");
    scanf("%s", string);

    calc_vog(&vogais, string);

    printf("Número de vogais na string: %d\n", vogais);

    return 0;
}
