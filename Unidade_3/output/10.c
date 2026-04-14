#include <stdio.h>

// Analise e explique (em comentário) o comportamento de um código onde múltiplas
// funções alteram a mesma variável por referência.

void subtrai(int *v)
{
    *v -= 2;
}

void multiplica(int *v)
{
    *v *= 3;
}

int main()
{
    int numero = 10;

    subtrai(&numero);
    multiplica(&numero);

    printf("Resultado: %d\n", numero);

    /* EXPLICACAO:
       Como passamos o endereco de memoria (&numero) para as funcoes, elas nao
       criam copias. Ambas acessam e modificam a exata mesma gaveta na memoria.
       Logo, o 'numero' sofre as alteracoes em cascata (10 - 2 = 8; 8 * 3 = 24).
    */

    return 0;
}