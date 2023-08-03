#include <stdio.h>

int main(){
    int x;

    printf("Digite um número:\n");
    scanf("%d", &x);

    while (x != 0){
        if (x > 0){
            printf("POSITIVO\n");
        } else{
            printf("NEGATIVO\n");
        }
        scanf("%d", &x);
    }
    
    return 0;
}

/*
1. Escreva um algoritmo para repetir a leitura de um número enquanto o valor
fornecido for diferente de 0. Para cada número fornecido, imprimir se ele é
NEGATIVO ou POSITIVO. Quando o número 0 for fornecido a repetição deve
ser encerrada sem imprimir mensagem alguma.
*/