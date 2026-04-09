#include <stdio.h>

//Desenvolva uma função que receba um número e retorne verdadeiro se for par e falso
//caso contrário.

int main(){
    int num;
    scanf("%i", &num);
    if (num % 2 == 0){
        printf("Verdadeiro\n");
    } else {
        printf("Falso\n");
    }
}