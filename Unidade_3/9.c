#include <stdio.h>

// Desenvolva um programa modular que: Leia dois números; Use uma função para calcular a soma; Use um procedimento para exibir o resultado.

int soma(int a, int b)
{
    return a + b;
}

void exibe_resultado(int res)
{
    printf("O resultado da soma eh: %d\n", res);
}

int main()
{
    int n1, n2, total;

    printf("Insira dois numeros:\n");
    scanf("%d %d", &n1, &n2);

    total = soma(n1, n2);
    exibe_resultado(total);

    return 0;
}