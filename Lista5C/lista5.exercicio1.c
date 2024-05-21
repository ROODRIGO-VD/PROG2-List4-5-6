#include <stdio.h>
#include <string.h>
/* Fa�a um programa com uma fun��o que calcule o n�mero de vogais existentes em uma string. A
fun��o recebe a string e atualiza a resposta (n�mero de vogais) em uma vari�vel que foi passada por
refer�ncia. */


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

    printf("N�mero de vogais na string: %d\n", vogais);

    return 0;
}
