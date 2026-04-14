#include <stdio.h>

// Receba um vetor; Utilize ponteiros para modificar seus valores; Exiba antes e depois.

void zerar_vetor(int *v, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        *(v + i) = 0;
    }
}

int main()
{
    int numeros[4] = {7, 14, 21, 28};

    printf("Antes: ");
    for (int i = 0; i < 4; i++)
        printf("%d ", numeros[i]);
    printf("\n");

    zerar_vetor(numeros, 4);

    printf("Depois: ");
    for (int i = 0; i < 4; i++)
        printf("%d ", numeros[i]);
    printf("\n");

    return 0;
}