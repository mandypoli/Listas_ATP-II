#include <stdio.h>

// Crie um algoritmo com uma variável global e uma local com o mesmo nome. Mostre os valores.

int valor = 100; // global

void testar_escopo()
{
    int valor = 50; // local
    printf("Dentro da funcao (local): %d\n", valor);
}

int main()
{
    printf("Fora da funcao (global): %d\n", valor);
    testar_escopo();

    return 0;
}