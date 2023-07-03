#include <stdio.h>

int main(){
    float nota;
    printf("Digite uma nota: ");
    scanf("%f", &nota);

    if (nota <= 5){
        printf("Conceito D\n");
    } else if (nota <= 7){
        printf("Conceito C\n");
    } else if (nota <= 9){
        printf("Conceito B\n");
    } else{
        printf("Conceito A\n");
    }

    return 0;
}

// Escrever um algoritmo que leia uma nota e mostre o conceito equivalente. Suponha a seguinte tabela de conversão.
/*
Nota - Conceito
de 0.0 até 5.0 - D
Acima de 5.0 até 7.0 - C
Acima de 7.0 até 9.0 - B
Acima de 9.0 até 10.0 - A
*/