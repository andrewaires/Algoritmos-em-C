#include <stdio.h>

int main(){
    int codigo;
    float media, nota1, nota2, nota3;

    printf("Digite o código do aluno: ");
    scanf("%d", &codigo);

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    
    if (nota1 > nota2 && nota1 > nota3){
        media = (nota1 * 4 + nota2 * 3 + nota3 * 3) / 10;
    } else if (nota2 > nota1 && nota2 > nota3){
        media = (nota2 * 5 + nota3 * 3 + nota1 * 3) / 10;
    } else {
        media = (nota3 * 4 + nota1 * 3 + nota2 * 3) / 10;
    }

    printf("O código do aluno é %d e sua nota é %.2f.\n", codigo, media);
    if (media >= 5){
        printf("APROVADO");
    } else{
        printf("REPROVADO");
    }

    return 0;
}

// 6.Escreva um algoritmo que leia o código de um aluno e suas três notas. Calcule a média ponderada do aluno, considerando que o peso para a maior nota seja 4 e para as duas restantes, 3. 
// Mostre o código do aluno, suas três notas, a média calculada e a mensagem "APROVADO" se a média for maior ou igual a 5 e "REPROVADO" caso contrário.