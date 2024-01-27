#include <stdio.h>

int main(){
    int vetor[10];
    int i, v;

    printf("Digite os valores do vetor separados por espaço\n");
    for (i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
    }

    printf("Qual valor vc quer saber o índice? ");
    scanf("%d", &v);
    
    for (i = 0; i < 10; i++){
        if (vetor[i] == v){
            printf("%d ", i);
        }
    }

    return 0;
}

/*14.9 Ler um vetor B de 10 elementos e um valor X. Escreva as posições (índices) do vetor B em que
aparece um valor igual a X.*/