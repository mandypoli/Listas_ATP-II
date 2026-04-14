#include <stdio.h>

// Crie uma função recursiva que calcule a soma de 1 até n.

int soma_ate_n(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + soma_ate_n(n - 1);
}

int main()
{
    int limite = 5;
    printf("Soma de 1 ate %d = %d\n", limite, soma_ate_n(limite));
    return 0;
}