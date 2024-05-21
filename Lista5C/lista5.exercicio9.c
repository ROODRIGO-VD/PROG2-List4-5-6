#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){

    char nome[60], endereco[100], telefone[20];
    char conca[180];

    printf("Digite o Nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Digite seu Endereco: ");
    fgets(endereco, sizeof(endereco), stdin);
    endereco[strcspn(endereco, "\n")] = '\0';

    printf("Digite seu Telefone: ");
    fgets(telefone, sizeof(telefone), stdin);
    telefone[strcspn(telefone, "\n")] = '\0';

    sprintf(conca,"Nome: %s |Endereco: %s |Telefone: %s", nome, endereco, telefone);

    printf("Informacoes -> %s\n", conca);
}
