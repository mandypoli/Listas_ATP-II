#include <stdio.h>

// Desenvolva um procedimento que receba um número por valor e tente alterá-lo. Exiba antes e depois.

void tenta_alterar(int num)
{
    num = 999;
}

int main()
{
    int x = 10;

    printf("Antes da funcao: %d\n", x);
    tenta_alterar(x);
    printf("Depois da funcao: %d (nao mudou)\n", x);

    return 0;
}