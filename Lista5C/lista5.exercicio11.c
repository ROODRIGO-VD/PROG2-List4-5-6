#include <stdio.h>
#include <string.h>
/*Fazer um programa que receba uma string de no m�ximo 20 caracteres do usu�rio e mostre o
conte�do desta string de forma invertida.*/

int main(){

    char string[21];
    int i, tamanho;

    printf("String de 20 caract: ");
    fgets(string, sizeof(string), stdin);

    tamanho = strlen(string);

    if(string[tamanho -1] == '\n'){
        string[tamanho - 1] = '\0';
        tamanho--;
    }

    printf("Invertida: ");
    for(i = tamanho -1; i >= 0; i--){
        printf("%c", string[i]);
    }   \|
}
