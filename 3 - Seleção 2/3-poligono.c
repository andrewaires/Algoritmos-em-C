#include <stdio.h>

int main(){
    int n_lados, medida;

    printf("Escreva o número de lados:\n");
    scanf("%d", &n_lados);

    if (n_lados == 3){
        printf("Digite a medida do lado:\n");
        scanf("%d", &medida);
        printf("Triângulo\n");
        printf("Perímetro: %d\n", medida * 3);
    } else if (n_lados == 4){
        printf("Digite a medida do lado:\n");
        scanf("%d", &medida);
        printf("Quadrado\n");
        printf("Área: %d\n", medida * medida);
    } else{
        printf("Pentágono\n");
    }

    return 0;
}

/*4.3.Escreva um algoritmo para ler o número de lados de um polígono regular, e a medida do lado(a
medida do lado só deve ser lida para polígono com 3 ou 4 lados). Calcular e imprimir o seguinte:
Se o número de lados for igual a 3 escrever TRIÂNGULO e o valor do seu perímetro.
Se o número de lados for igual a 4 escrever QUADRADO e o valor da sua área.
Se o número de lados for igual a 5 escrever PENTÁGONO.
OBS: Considere que o usuário só informará os valores 3,4 ou 5*/