#include <stdio.h>

// Crie uma função que receba um número por valor e retorne seu triplo.

int triplo(int n)
{
    return n * 3;
}

int main()
{
    int val;
    printf("Numero: ");
    scanf("%d", &val);

    printf("O triplo eh %d\n", triplo(val));
    return 0;
}