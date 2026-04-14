#include <stdio.h>

// Implemente uma função recursiva que calcule o fatorial de um número.

int fatorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * fatorial(n - 1);
}

int main()
{
    int num;
    printf("Fatorial de: ");
    scanf("%d", &num);

    printf("%d! = %d\n", num, fatorial(num));
    return 0;
}