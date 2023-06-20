#include <stdio.h>

int main(){
    int notas, i, confirmacao, aprovado;
    float media;

    confirmacao = 1;
    aprovado = 0;
    while (confirmacao == 1){
        media = 0;
        for (i = 1; i <= 2; i++){
            printf("Digite as 2 notas:\n");
            scanf("%d", &notas);
            media += notas;
        }
        
        media /= 2.0;
        if (media >= 6){
            aprovado += 1;
        }

        printf("Média: %.1f\n", media);

        printf("Calcular a média de outro aluno (1.sim 2.não)?\n");
        scanf("%d", &confirmacao);
    }

    printf("Quantidade de aprovados: %d\n", aprovado);

    return 0;

}

/*9.1.Escreva um algoritmo para ler 2 notas de um aluno, calcular e imprimir a média final. Logo após
escrever a mensagem "Calcular a média de outro aluno 1.Sim 2.Não?" e solicitar uma resposta. Se a
resposta for 1, o algoritmo deve ser executado novamente, caso contrário deve ser encerrado imprimindo
a quantidade de alunos aprovados.*/