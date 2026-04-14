#include <stdio.h>

// Escreva uma função recursiva que conte quantos números existem de n até 0.

void contagem_regressiva(int n)
{
    printf("%d ", n);
    if (n > 0)
    {
        contagem_regressiva(n - 1);
    }
}

int main()
{
    int inicio = 10;
    printf("Contando: ");
    contagem_regressiva(inicio);
    printf("\n");
    return 0;
}