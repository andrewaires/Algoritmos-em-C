#include <stdio.h>

int main(){
    int i, soma;
    int valores[10];
    float media;


    printf("Digite 10 valores com espaço entre eles:\n");
    for (i = 0; i < 10; i++){
        scanf("%d", &valores[i]);
    }

    soma = 0;
    for (i = 0; i < 10; i++){
        soma += valores[i];
    }

    media = soma / 10.0;

    printf("Média: %.2f\n", media);

    return 0;
}

// 11.3 Ler 10 valores, calcular e escrever a média aritmética destes valores.
