#include <stdio.h>

int main(){
    int vetor[10];
    int i, anterior, count;

    printf("Digite os valores separadas por espaço\n");
    for (i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
    }

    count = 5;
    for (i = 0; i < 5; i++){
        anterior = vetor[i];
        vetor[i] = vetor[count];
        vetor[count] = anterior;
        count += 1;
    }

    for (i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    }

    return 0;
}

/*14.16 Ler um vetor M de 10 elementos. Troque a seguir o 1° elemento com o 6°, o 2° com o 7°,etc. até
o 5° com 10°. e escreva o vetor M assim modificado. */