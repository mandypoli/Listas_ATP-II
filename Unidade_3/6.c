#include <stdio.h>

// Crie um procedimento que receba a média de um aluno e informe se ele foi aprovado (media >= 6).

void Verificacao(double Media)
{
    if (Media >= 6.0)
    {
        printf("Aprovado\n");
    }
    else
    {
        printf("Reprovado\n");
    }
}

int main()
{
    double media;
    printf("Digite a media: ");
    scanf("%lf", &media);
    Verificacao(media);

    return 0;
}