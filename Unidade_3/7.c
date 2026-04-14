#include <stdio.h>

// Desenvolva uma função que receba um número e retorne verdadeiro se for par e falso caso contrário.

int eh_par(int num)
{
    if (num % 2 == 0)
    {
        return 1; // Verdadeiro em C
    }
    return 0; // Falso
}

int main()
{
    int valor;
    printf("Digite um numero: ");
    scanf("%d", &valor);

    if (eh_par(valor) == 1)
    {
        printf("O numero %d eh par\n", valor);
    }
    else
    {
        printf("O numero %d eh impar\n", valor);
    }

    return 0;
}