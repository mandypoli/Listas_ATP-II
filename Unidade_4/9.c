#include <stdio.h>

// Crie um programa que utilize uma variável global para contar quantas vezes uma função foi chamada.

int total_chamadas = 0;

void executa_tarefa()
{
    printf("Executando...\n");
    total_chamadas++;
}

int main()
{
    executa_tarefa();
    executa_tarefa();
    executa_tarefa();

    printf("A funcao foi chamada %d vezes.\n", total_chamadas);
    return 0;
}