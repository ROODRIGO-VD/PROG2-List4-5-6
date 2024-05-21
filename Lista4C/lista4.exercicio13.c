#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 51

void calculo(char *string){
    int soma[300] = {0};
    int i;

    for(i = 0; i< strlen(string); i++){
        soma[(int)string[i]]++;
    }

    printf("Status:\n");
    for(i = 0; i < 256; i++){
        if(soma[i] > 0 && (char)i != '\0'){
            printf("'%c' = %d \n", (char)i, soma[i]);
        }
    }
}
int main(){

    char s[MAX];

    printf("Digite sua string (MAXIMO DE 50 CARACT): \n");
    fgets(s, sizeof(s), stdin);

    if(s[strlen(s) - 1] == '\n'){
        s[strlen(s)- 1] = '\0';
}

    if(strlen(s) > 50){
        printf("A string ultrapassou 50 caracteres");
        return 1;
    }

    calculo(s);
}
