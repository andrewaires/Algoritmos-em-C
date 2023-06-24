#include <stdio.h>

int main(){
    float n1, n2, media;

    printf("Digite a primeira nota:\n");
    scanf("%f", &n1);

    while ((n1 < 0) || (n1 > 10)){
        printf("Nota inválida\n");
        scanf("%f", &n1);
    }

    printf("Digite a segunda nota:\n");
    scanf("%f", &n2);

    while ((n2 < 0) || (n2 > 10)){
        printf("Nota inválida\n");
        scanf("%f", &n2);
    }

    media = (n1 + n2) / 2;

    printf("%.1f", media);

    return 0;
}

/*8.5.Escreva um algoritmo para ler as notas da 1a. e 2a. avaliações de um aluno, calcular e imprimir a
média semestral. Faça com que o algoritmo só aceite notas válidas( uma nota válida deve pertencer ao
intervalo [0,10]. Cada nota deve ser validada separadamente. Deve ser impressa a mensagem "Nota
inválida" caso a nota informada não pertença ao intervalo [0,10].*/