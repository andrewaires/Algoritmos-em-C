#include <stdio.h>

int main(){
    int vetor[10];
    int i, maior, indice;

    printf("Digite os valores separadas por espaço\n");
    for (i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
        while (vetor[i] <= 0){
            scanf("%d", &vetor[i]);
        }
    }

    maior = vetor[0];
    indice = 0;
    for (i = 1; i < 10; i++){
        if (vetor[i] > maior){
            maior = vetor[i];
            indice = i;
        }
    }

    printf("Maior elemento: %d\n", maior);
    printf("Índice: %d\n", indice);

    return 0;

}

/*14.14 Ler um vetor Q de 10 posições (aceitar somente números positivos-se o valor informado for
negativo ou zero a leitura deverá ser repetida). Escreva a seguir o valor do maior elemento de Q e a
respectiva posição(índice) que ele ocupa no vetor.*/