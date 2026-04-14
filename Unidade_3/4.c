#include <stdio.h>

// Crie um procedimento que receba dois números por referência e troque seus valores.

void trocar_valores(int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}

int main()
{
    int n1 = 5, n2 = 8;

    printf("Antes: n1 = %d, n2 = %d\n", n1, n2);
    trocar_valores(&n1, &n2);
    printf("Depois: n1 = %d, n2 = %d\n", n1, n2);

    return 0;
}