#include <stdio.h>

int main(){
    int operador, valor1, valor2, resultado;

    printf("Escreva dois valores: ");
    scanf("%d", &valor1);
    scanf("%d", &valor2);

    printf("Digite 1 para Adição, 2 para Subtração, 3 para Divisão ou 4 para Multiplicação: \n");
    scanf("%d", &operador);

    resultado = 0;
    if (operador == 1){
        resultado = valor1 + valor2;
        printf("%d", resultado);
    } else if (operador == 2){
        resultado = valor1 - valor2;
        printf("%d", resultado);
    } else if (operador == 3){
        float resultado = (float) valor1 / valor2;
        printf("%.1f", resultado);
    } else if (operador == 4){
        resultado = valor1 * valor2;
        printf("%d", resultado);
    } else{
        printf("Operação inválida");
    }

    
    return 0;
}

/*
4.5.Escreva um algoritmo para ler 2 valores e uma das seguintes operações a serem executadas
(codificada da seguinte forma: 1.Adição, 2.Subtração, 3.Divisão, 4.Multiplicação). Calcular e escrever o
resultado dessa operação sobre os dois valores lidos.
*/