#include <stdio.h>

//Crie um procedimento que receba a média de um aluno e informe se ele foi aprovado 
//(média ≥ 6).

int main(){
    double media;
    scanf("%lf", &media);
    if (media >= 6){
        printf("Aprovado\n");
    }
}