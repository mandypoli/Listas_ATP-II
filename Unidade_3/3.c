#include <stdio.h>

// Reescreva o exercício anterior utilizando passagem por referência.

void altera_mesmo(int *num)
{
    *num = 999;
}

int main()
{
    int x = 10;

    printf("Antes da funcao: %d\n", x);
    altera_mesmo(&x);
    printf("Depois da funcao: %d (agora mudou)\n", x);

    return 0;
}