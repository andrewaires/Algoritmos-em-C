#include <stdio.h>
#include <stdlib.h>


int main(){
    int i, tamanho;
    float media, soma;

    printf("Digite quantos alunos:\n");
    scanf("%d", &tamanho);

    float *valores = (float *)malloc(tamanho * sizeof(float));

    printf("Digite as 10 notas separadas por espaço:\n");
    for (i = 0; i < tamanho; i++){
        scanf("%f", &valores[i]);
    }

    soma = 0.0;
    for (i = 0; i < tamanho; i++){
        soma += valores[i];
    }

    media = soma / tamanho;

    printf("Média: %.2f\n", media);

    return 0;
}

/*11.4 Ler o número de alunos existentes em uma turma, ler as notas destes alunos, e calcular a média
aritmética destas notas.*/