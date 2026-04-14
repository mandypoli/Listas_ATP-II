#include <stdio.h>

// Escreva uma função que receba três notas e retorne a média.

double calcular_media(double numero[])
{
    double soma = 0.0;

    for (int i = 0; i < 3; i++)
    {
        soma += numero[i];
    }
    // Calculo feito apenas uma vez ao final
    return soma / 3.0;
}

int main()
{
    double num[3];

    printf("Insira as 3 notas:\n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%lf", &num[i]);
    }

    printf("Media = %.2lf\n", calcular_media(num));

    return 0;
}