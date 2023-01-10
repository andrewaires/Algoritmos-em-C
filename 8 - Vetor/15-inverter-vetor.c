#include <stdio.h>

int main(){
    int vetor[10];
    int i, anterior, count;

    printf("Digite os valores separadas por espaço\n");
    for (i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
    }

    count = 9;
    for (i = 0; i < 5; i++){
        anterior = vetor[i];
        vetor[i] = vetor[count];
        vetor[count] = anterior;
        count -= 1;
    }

    for (i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    }

    return 0;

}

/*14.15 Ler um vetor U de 10 elementos. Troque a seguir o 1o. elemento com o último, o 2o. com o
penúltimo, etc. até o 5o. com o 6o. e escreva o vetor U assim modificado.
*/