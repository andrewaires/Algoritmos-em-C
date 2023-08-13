#include <stdio.h>

int main(){
    float nota1, nota2, media;

    printf("Digite a nota 1:\n");
    scanf("%f", &nota1);

    printf("Digite a nota 2:\n");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if (media <= 3){
        printf("%.2f\n", media);
        printf("Reprovado\n");
    } else if (media < 7){
        printf("%.2f\n", media);
        printf("em Exame\n");
    } else{
        printf("%.2f\n", media);
        printf("Aprovado\n");
    }

    return 0;
}

/*4.1.Escreva um algoritmo para ler as notas da 1a e 2a avaliações de um aluno, calcular a média e escrever
se este aluno foi APROVADO, REPROVADO ou se está em EXAME. Escrever também a média
calculada. OBS: Para ter direito ao exame o aluno deve obter média mínima 3.0.*/