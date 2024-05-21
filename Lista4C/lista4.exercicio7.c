#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void camelCase(char s[]){
    char resultado[20];
    if(strlen(s) > 19){
        return;
    }
    int i;
    int resultadoIn = 0;
    int maiusculo = 1;
    for(i=0;s[i] != '\0';i++){
        if(!isspace(s[i])){;
            if(maiusculo){
                resultado[resultadoIn] = toupper(s[i]);
                maiusculo = 0;
            }else{
                resultado[resultadoIn] = s[i];
            }
            resultadoIn++;
        }else{
            maiusculo = 1;
        }
    }
    resultado[resultadoIn] = '\0';
    strcpy(s, resultado);
}

int main(){
    char s[] = "media da turma";
    camelCase(s);
    printf("%s", s);
}
