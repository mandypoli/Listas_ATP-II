#include <stdio.h>

// Compare (em código) uma função iterativa e uma recursiva para o mesmo problema.

// Iterativa
int soma_iterativa(int n)
{
    int total = 0;
    for (int i = 1; i <= n; i++)
    {
        total += i;
    }
    return total;
}

// Recursiva
int soma_recursiva(int n)
{
    if (n == 1)
        return 1;
    return n + soma_recursiva(n - 1);
}

int main()
{
    int num = 4;
    printf("Result iterativo: %d\n", soma_iterativa(num));
    printf("Result recursivo: %d\n", soma_recursiva(num));
    return 0;
}