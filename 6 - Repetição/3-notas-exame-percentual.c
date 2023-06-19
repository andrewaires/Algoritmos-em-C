#include <stdio.h>

int main(){
    int notas, i, confirmacao, aprovado, reprovado, exame, total;
    float media;

    confirmacao = 1;
    aprovado = 0;
    reprovado = 0;
    exame = 0;
    total = 0;
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

        total += 1;
    }

    printf("Quantidade de aprovados: %d\n", aprovado);
    printf("Quantidade de reprovados: %d\n", reprovado);
    printf("Quantidade em exames: %d\n", exame);

    printf("Percentual de aprovados: %.2f\n", ((float)aprovado / total) * 100);
    printf("Percentual de reprovados: %.2f\n", ((float)reprovado) / total * 100);
    printf("Percentual em exames: %.2f\n", ((float)exame) / total * 100);

    return 0;

}

/*9.3.Reescreva o algoritmo do exercício 9.2, para que seja impresso no final, o percentual de alunos
aprovados, reprovados ou em exame em relação a quantidade total de alunos cujas notas foram
informadas.*/