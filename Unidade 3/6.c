#include <stdio.h>

// Crie um procedimento que receba a média de um aluno e informe se ele foi aprovado
//(média ≥ 6).

void Verificacao(double Media)
{
    if (Media >= 6)
    {
        printf("Aprovado\n");
    }
}

int main()
{
    double media;
    scanf("%lf", &media);
    Verificacao(media);
}