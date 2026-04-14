#include <stdio.h>

// Crie um algoritmo que utilize uma função para calcular o quadrado de um número e exiba o resultado.

int calcular_quadrado(int n)
{
    return n * n;
}

int main()
{
    int numero;
    printf("Insira um numero para ver seu quadrado: ");
    scanf("%d", &numero);

    int result = calcular_quadrado(numero);
    printf("Quadrado de %d = %d\n", numero, result);

    return 0;
}