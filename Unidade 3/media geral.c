#include <stdio.h>

//Escreva uma função que receba três notas e retorne a média.

int main(){
    int qtd_notas;
    double soma = 0.0, media = 0.0;

    printf("Escreva a qtd de notas: ");
    scanf("%d", &qtd_notas);

    double notas[qtd_notas];

    printf("!!Calcular media!!\n");

    for (int i = 0; i < qtd_notas; i++){        
        printf("Nota %d: ", i+1);
        scanf("%lf", &notas[i]);
        soma += notas[i];
        media = soma/qtd_notas; 
    }
    printf("Media = %.2lf\n", media);
    return 0;
}