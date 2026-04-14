#include <stdio.h>

// Desenvolva um procedimento que incremente uma variável usando referência.

void incrementa(int *valor)
{
    (*valor)++;
}

int main()
{
    int contador = 0;

    incrementa(&contador);
    incrementa(&contador);

    printf("Valor final do contador: %d\n", contador);
    return 0;
}