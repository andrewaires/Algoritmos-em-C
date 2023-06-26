#include <stdio.h>

int main(){
    int i, n_alunos, nota1, nota2, reprovado, aprovado, exame;
    float media_aprovado, percentual_reprovado;
    
    printf("Digite o número de alunos:\n");
    scanf("%d", &n_alunos);

    reprovado = 0;
    exame = 0;
    aprovado = 0;
    printf("Digite as notas separadas por espaço:\n");
    for (i = 0; i < n_alunos; i++){
        scanf("%d %d", &nota1, &nota2);
        if ((nota1 + nota2) / 2 < 4){
            reprovado += 1;
        } else if ((nota1 + nota2) / 2 < 7){
            exame += 1;
        } else{
            aprovado += 1;
            media_aprovado += (nota1 + nota2) / 2;
        }
    }

    media_aprovado /= (float) aprovado;
    percentual_reprovado += 100.0 * reprovado / n_alunos;

    printf("Aprovados: %d\n", aprovado);
    printf("Reprovados: %d\n", reprovado);
    printf("Exame: %d\n", exame);
    printf("Média Aprovados: %.2f\n", media_aprovado);
    printf("Percentual Reprovados: %.2f\n", percentual_reprovado);
    

    return 0;
}

/*11.7 Ler o número de alunos de uma turma. Ler as notas das 2 avaliações de cada aluno. Calcular e
escrever:
- O número de alunos aprovados.
- O número de alunos reprovados.
- O número de alunos em exame.
- A média aritmética das notas finais dos alunos aprovados.
- O percentual de alunos reprovados em relação ao total de alunos da turma.*/