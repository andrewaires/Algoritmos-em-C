#include <stdio.h>

int main(){
    int notas, i, confirmacao, aprovado, reprovado, exame;
    float media;

    confirmacao = 1;
    aprovado = 0;
    reprovado = 0;
    exame = 0;
    while (confirmacao == 1){
        media = 0;
        for (i = 1; i <= 2; i++){
            printf("Digite a %d° nota:\n", i);
            scanf("%d", &notas);
            media += notas;
        }
        
        media /= 2.0;
        if (media >= 6){
            aprovado += 1;
        } else if (media >= 3){
            exame += 1;
        } else{
            reprovado += 1;
        }

        printf("Média: %.1f\n", media);

        printf("Calcular a média de outro aluno (1.sim 2.não)?\n");
        scanf("%d", &confirmacao);
    }

    printf("Quantidade de aprovados: %d\n", aprovado);
    printf("Quantidade de reprovados: %d\n", reprovado);
    printf("Quantidade em exames: %d\n", exame);

    return 0;

}

/*
9.2.Reescreva o algoritmo do exercício 9.1, para que seja impressa no final, a quantidade de alunos
aprovados, reprovados ou que ficaram em exame.
*/