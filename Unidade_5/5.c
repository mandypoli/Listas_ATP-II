#include <stdio.h>

// Crie um programa que utilize ponteiros para alterar o valor de uma variável.

int main()
{
    int valor = 42;
    int *ptr = &valor;

    printf("Valor original: %d\n", valor);

    *ptr = 100; // Alterando via ponteiro

    printf("Valor modificado: %d\n", valor);

    return 0;
}