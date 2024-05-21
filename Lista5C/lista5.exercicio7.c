#include <stdio.h>
#include <ctype.h>
#include <string.h>

int preposi(char *palavra){
    char *prepo[] = {"do","de","da","dos","das"};
    for(int i = 0; i < sizeof(prepo) / sizeof(prepo[0]); i++){
        if(strcmp(palavra, prepo[i]) == 0){
            return 1;
        }
    }
    return 0;
}

void abreviatura(char *nome){
    char palavra[20], abrevia[80];
    int posi = 0;

    char nomeCopia[80];
    strcpy(nomeCopia, nome);

    char *token = strtok(nomeCopia, " ");
    while (token != NULL){
        if(!preposi(token)){
            abrevia[posi++] = toupper(token[0]);
            abrevia[posi++] = '.';
        }
        token = strtok(NULL, " ");
    }
    if(posi > 0){
        abrevia[posi - 1] = '\0';
    }
    printf("Abreviatura: %s\n", abrevia);
}


int main(){

    char nome[50];


    printf("Nome completo: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    abreviatura(nome);
}
