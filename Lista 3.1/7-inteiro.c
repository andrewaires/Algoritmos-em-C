#include <stdio.h>

int main(){
    int numero;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero == 0){
        printf("O número é 0\n");
    } else if (numero > 0 && numero % 2 == 0){
        printf("Positivo e Par\n");
    } else if (numero > 0 && numero % 2 != 0){
        printf("Positivo e Impar\n");
    } else if (numero < 0 && numero % 2 == 0){
        printf("Negativo e Par\n");
    } else {
        printf("Negativo e Impar\n");
    }

    return 0;
}

// 7. Faça um algoritmo que leia um número inteiro e mostre uma mensagem indicando se este número é par ou ímpar, e se é positivo, negativo ou zero. 