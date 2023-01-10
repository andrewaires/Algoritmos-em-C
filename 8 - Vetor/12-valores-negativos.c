#include <stdio.h>

int main(){
    int vetor[10];
    int vetorR[10];
    int i, count;

    printf("Digite os valores separadas por espaço\n");
    for (i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
    }

    count = 0;
    for (i = 0; i < 10; i++){
        if (vetor[i] < 0){
            vetorR[count] = vetor[i];
            count += 1;
        }
    }

    for (i = 0; i < count; i++){
        printf("%d ", vetorR[i]);
    } 

    return 0;
}

/*14.12 Ler um vetor X de 10 elementos. A seguir copie todos os valores negativos de vetor X para o vetor
R (sem deixar elementos vazios entre os valores copiados). Escrever o vetor R.*/