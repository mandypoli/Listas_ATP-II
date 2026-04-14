#include <stdio.h>

// Desenvolva um programa que receba uma string e altere seu primeiro caractere.

int main()
{
    char palavra[20];

    printf("Digite uma palavra: ");
    scanf("%s", palavra); // array ja eh ponteiro

    // Alterando via ponteiro (primeiro char)
    *palavra = 'X';

    printf("Palavra alterada: %s\n", palavra);

    return 0;
}