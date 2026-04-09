#include <stdio.h>
//Desenvolva uma função que receba um número inteiro e retorne seu dobro.

int main(){
    int num;

    printf("| Dobro de um numero |\n");
    printf("Insira um numero: ");
    scanf("%d", &num);
    printf("Dobro de %d = %d\n", num, num*2);

    return 0;
}