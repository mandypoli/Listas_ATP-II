#include <stdio.h>

// Crie um conjunto de funções para: calcular soma, calcular média, calcular maior valor
// E utilize todas em um programa principal.

double calc_soma(double a, double b)
{
    return a + b;
}

double calc_media(double a, double b)
{
    return (a + b) / 2.0;
}

double calc_maior(double a, double b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}

int main()
{
    double v1, v2;

    printf("Valor 1: ");
    scanf("%lf", &v1);
    printf("Valor 2: ");
    scanf("%lf", &v2);

    printf("\n--- Resultados ---\n");
    printf("Soma: %.2lf\n", calc_soma(v1, v2));
    printf("Media: %.2lf\n", calc_media(v1, v2));
    printf("Maior valor: %.2lf\n", calc_maior(v1, v2));

    return 0;
}