#include <stdio.h>

//Crie uma função que receba dois números e retorne a soma entre eles.

int main(){
    int num1, num2;

    printf("| Soma entre dois numeros |\n");
    printf("Insira o 1o numero: ");
    scanf("%d", &num1);
    printf("Insira o 2o numero: ");
    scanf("%d", &num2);
    return printf("%d + %d = %d\n", num1, num2, num1+num2);
}