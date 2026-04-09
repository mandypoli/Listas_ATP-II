#include <stdio.h>

//Escreva uma função que receba três notas e retorne a média.

int main(){
    float num1, num2, num3, media;
    scanf("%f %f %f", &num1, &num2, &num3);
    media = (num1+num2+num3)/3;
    printf("%.2f", media);

    return 0;
}