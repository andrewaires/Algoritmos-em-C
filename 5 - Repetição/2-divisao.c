#include <stdio.h>

int main(){
    int n2;
    float n1;

    printf("Digite dois valores:\n");
    scanf("%f", &n1);

    n2 = 0;
    while (n2 == 0){
        scanf("%d", &n2);

        if (n2 == 0) {
            printf("Valor inválido\n");
        }
    }

    printf("%.1f\n", n1 / n2);

    return 0;
}

/*8.2.Altere a solução do exercício 8.1 para que seja impressa a mensagem Valor inválido caso o segundo
valor informado seja ZERO.*/