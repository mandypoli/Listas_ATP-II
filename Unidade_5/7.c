#include <stdio.h>

// Crie um algoritmo que declare um vetor e altere seus valores usando ponteiros.

int main()
{
    int vetor[3] = {10, 20, 30};
    int *ptr = vetor; // aponta pro primeiro elemento

    // Alterando usando aritmetica de ponteiros
    *(ptr + 0) = 15;
    *(ptr + 1) = 25;
    *(ptr + 2) = 35;

    printf("Vetor atualizado: %d, %d, %d\n", vetor[0], vetor[1], vetor[2]);

    return 0;
}