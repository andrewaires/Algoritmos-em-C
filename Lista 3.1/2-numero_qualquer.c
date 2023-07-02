#include <stdio.h>

int main(){
    float numero;
    
    printf("Digite um número: ");
    scanf("%f", &numero);

    if (numero == 0){
        printf("O número é 0\n");
    } else if (numero > 0 && fmod(numero, 2) == 0){
        printf("Positivo e Par\n");
    } else if (numero > 0 && fmod(numero, 2) != 0){
        printf("Positivo e Impar\n");
    } else if (numero < 0 && fmod(numero, 2) == 0){
        printf("Negativo e Par\n");
    } else {
        printf("Negativo e Impar\n");
    }

    return 0;
}

// 2. Faça um algoritmo que leia um número e mostre se ele é positivo, negativo ou zero.