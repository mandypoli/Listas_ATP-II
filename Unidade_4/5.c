#include <stdio.h>

// Desenvolva um algoritmo que demonstre o escopo de uma variável dentro de um bloco se.

int main()
{
    int a = 1;

    if (a == 1)
    {
        int b = 20; // Variável morre quando o if acaba
        printf("Dentro do if: a=%d, b=%d\n", a, b);
    }

    // printf("%d", b); // Isso daria erro de compilacao se descomentado
    printf("Fora do if conheco apenas a=%d\n", a);

    return 0;
}