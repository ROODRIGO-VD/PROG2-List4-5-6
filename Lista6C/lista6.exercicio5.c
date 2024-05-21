#include <stdlib.h>
#include <string.h>

char* cifra_cesar(char* msg){
    int n = strlen(msg);
    char *cod = (char*)malloc((n+1) * sizeof(char));

    for(int i =0; i < n; i++){
        char c = msg[i];
        if((c >= 'a' && c <= 'w') || (c >= 'A' && c <= 'Z')){
            cod[i] = c+3;
        }else if((c >= 'x' && c <= 'z') || (c >= 'X' && c<= 'Z')){
            cod[i] = c - 23;
        }else{
            cod[i] = c;
        }
    }
    cod[n] = '\0';

    return cod;
}
