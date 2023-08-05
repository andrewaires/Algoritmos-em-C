#include <stdio.h>

int main(){
    int vetorR[5];
    int vetorS[10];
    int vetorX[15];
    int i, count;

    printf("Digite os 5 valores do Vetor R separadas por espaço\n");
    for (i = 0; i < 5; i++){
        scanf("%d", &vetorR[i]);
    }

    printf("Digite os 10 valores do Vetor R separadas por espaço\n");
    for (i = 0; i < 10; i++){
        scanf("%d", &vetorS[i]);
    }

    for (i = 0; i < 5; i++){
        vetorX[i] = vetorR[i];
    }
    
    count = 5;
    for (i = 0; i < 10; i++){
        vetorX[count] = vetorS[i];
        count += 1;
    }
    
     for (i = 0; i < 15; i++){
        printf("%d ", vetorX[i]);
    }

    return 0;

}

/*14.13 Ler 2 vetores: R de 5 elementos e S de 10 elementos. Gere um vetor X de 15 elementos cuja as 5
primeiras posições contenha os elementos de R e as 10 últimas posições os elementos de S. Escrever o
vetor X.*/