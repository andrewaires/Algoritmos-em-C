#include <stdio.h>
int main(){
    float nota1, nota2, nota3, media;

    printf("Digite a sua primeira, segunda e terceira nota: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    media = (nota1 * 2 + nota2 * 3 + nota3 * 5) / 10;

    printf("A média final é de: %.2f\n", media);

    return 0;
}

/*
5)Faça um algoritmo que leia três notas de um aluno, calcule e escreva a média final
deste aluno. Considerar que a média é ponderada e que o peso das notas é 2, 3 e 5.
Fórmula para o cálculo da média final é:
Média final = (n1 ∗ 2 + n2 ∗ 3 + n3 ∗ 5) / 10
*/