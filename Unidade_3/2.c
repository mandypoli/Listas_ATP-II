#include <stdio.h>

// Desenvolva uma função que receba um número inteiro e retorne seu dobro.

int dobro(int numero)
{
    return 2 * numero;
}

int main()
{
    int num;

    printf("| Dobro de um numero |\n");
    printf("Insira um numero: ");
    scanf("%d", &num);
    printf("Dobro de %d = %d\n", num, dobro(num));

    return 0;
}