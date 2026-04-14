#include <stdio.h>

// Escreva um algoritmo que mostre a diferença entre valor e referência utilizando dois procedimentos distintos.

void adc_valor(int x)
{
    x = x + 10;
}

void adc_referencia(int *x)
{
    *x = *x + 10;
}

int main()
{
    int v1 = 5, v2 = 5;

    adc_valor(v1);
    adc_referencia(&v2);

    printf("Passou por valor: %d\n", v1);
    printf("Passou por ref: %d\n", v2);

    return 0;
}