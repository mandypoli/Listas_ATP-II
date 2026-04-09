#include <stdio.h>

//Desenvolva um procedimento que receba um nome e exiba: “Olá, [nome]

void mensagem(char nome[]){
    printf("Ola %s\n", nome);
}

int main(){
    char nome[15];
    printf("Insira um nome: ");
    scanf("%s", &nome);
    mensagem(nome);
    return 0;
}