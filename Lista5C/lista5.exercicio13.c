#include <stdio.h>
#include <string.h>


int main(){

    char string1[] = "Exercicios ";
    char string2[] = "Prog2";
    char string3[18];
    char animais[] = "Cachorro, Gato, Rato, Cobra, Sapo";
    char delimitador[] = ", ";
    char *token = strtok(animais, delimitador);

    /*Concatana os 5 primeiros caract da string2 com a string1.*/
    strncat(string1, string2, 5);
    printf("Resultado: %s\n", string1);

    /*Busca a 1a ocorrencia do caractere "x"*/
    char *p = strchr(string1, 'x');
    if(p != NULL){
        printf("Caractere 'x' encontrado!\n");
    }else{
        printf("Caractera 'x' nao encontrado!\n");
    }
    /*Divide os animais em tokens baseando-se no caracter delimitador.*/
    while(token!= NULL){
        printf("Animais: %s\n", token);
        token = strtok(NULL, delimitador);
    }






}
