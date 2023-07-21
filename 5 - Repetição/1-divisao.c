#include <stdio.h>

int main(){
    int n2;
    float n1;

    printf("Digite dois valores:\n");
    scanf("%f", &n1);

    n2 = 0;
    while (n2 == 0){
        scanf("%d", &n2);
    }

    printf("%.1f\n", n1 / n2);

    return 0;
}

/*8.1.Para que a divisão entre 2 números possa ser realizada, o divisor não pode ser nulo. Escreva um
algoritmo para ler 2 valores e imprimir o resultado da divisão do primeiro pelo segundo.
OBS: O algoritmo deve validar a leitura do segundo valor (que não deve ser nulo). Enquanto for
fornecido um valor nulo a leitura deve ser repetida. Utilize a estrutura ENQUANTO na construção da
repetição de validação.*/