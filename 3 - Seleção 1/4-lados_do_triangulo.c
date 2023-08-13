#include <stdio.h>

int main(){
    int a, b, c;

    printf("Digite os 3 valores do triângulo: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a < (b+c)) && (b < (a+c)) && (c < (b+a))){
        printf("São lados de um triângulo");
    }else{
        printf("Não são lados");
    }

    return 0;
}

// 4. Faça um algoritmo que leia 3 números e diga se podem ser lados de um triângulo. Observe: A, B e C são lados de um triângulo se:
// A < (B+C) e B < (C+A) e C < (A+B).