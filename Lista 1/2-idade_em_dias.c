#include <stdio.h>
int main(){
    int idade, anos, meses, dias;

    printf("Digite a sua idade em anos, meses, e dias: ");
    scanf("%d %d %d", &anos, &meses, &dias);

    idade = (anos * 365) + (meses * 30) + dias;

    printf("A idade em dias é %d\n", idade);

    return 0;
}

// 2) Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e mês com 30 dias.