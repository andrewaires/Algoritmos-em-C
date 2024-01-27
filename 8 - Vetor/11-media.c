#include <stdio.h>

int main(){
    float vetor[10];
    int i, maior;
    float media;

    printf("Digite as notas separadas por espaço\n");
    for (i = 0; i < 10; i++){
        scanf("%f", &vetor[i]);
    }

    media = 0;
    for (i = 0; i < 10; i++){
        media += vetor[i];
    }
    media /= 10;

    maior = 0;
    for (i = 0; i < 10; i++){
        if (vetor[i] > media){
            maior += 1;
        }
    }

    printf("A média é: %.2f\n", media);
    printf("Alunos acima da média: %d", maior);

    return 0;
}

/*14.11 Ler um vetor que contenha as notas de uma turma de 10 alunos. Calcular a média da turma e contar
quantos alunos obtiveram nota acima da média. Escrever a média e o resultado da contagem.*/