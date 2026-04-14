#include <stdio.h>

// Desenvolva um procedimento que receba um ponteiro e dobre o valor apontado.

void dobrar_valor(int *p)
{
    *p = (*p) * 2;
}

int main()
{
    int x = 15;

    dobrar_valor(&x);
    printf("O dobro eh %d\n", x);

    return 0;
}