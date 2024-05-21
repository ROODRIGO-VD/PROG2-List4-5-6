#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*Construa uma função que receba como argumento de entrada uma cadeia de 20 caracteres e um
caractere e retorne o número de vezes que este caractere aparece na cadeia.*/

int cont_vezes(char cadeia[], char caract){
    int cont = 0;
    for(int i = 0;i < 20;i++){
        if(cadeia[i] == caract){
            cont++;
        }
    }
    return cont;
}

int main(){
    char caract;
    char cadeia[21];

    printf("Preencha a cadeia de 20 caracteres: ");
    fgets(cadeia, sizeof(cadeia), stdin);


    printf("Digite um caractere: ");
    scanf(" %c", &caract);

    int resultado = cont_vezes(cadeia, caract);

    printf(" '%c' Apareceu %d vezes na cadeia! ", caract, resultado);

}

