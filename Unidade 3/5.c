#include <stdio.h>

// Escreva uma função que receba três notas e retorne a média.

double calcular_media(double numero[])
{
    double resultado = 0.0;
    double soma = 0.0;

    for (int i = 0; i < 3; i++)
    {
        soma += numero[i];
        resultado = soma / 3;
    }
    return resultado;
}

int main()
{
    double num[3];

    // Ler notas
    for (int i = 0; i < 3; i++)
    {
        scanf("%lf", &num[i]);
    }

    printf("Media = %.2lf\n", calcular_media(num));

    return 0;
}