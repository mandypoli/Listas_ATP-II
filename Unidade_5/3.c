#include <stdio.h>

// Desenvolva uma função recursiva para calcular a potência (base^expoente).

int potencia(int base, int exp)
{
    if (exp == 0)
    {
        return 1;
    }
    return base * potencia(base, exp - 1);
}

int main()
{
    int b, e;
    printf("Base e Expoente: ");
    scanf("%d %d", &b, &e);

    printf("Resultado: %d\n", potencia(b, e));
    return 0;
}