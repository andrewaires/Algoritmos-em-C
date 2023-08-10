#include <stdio.h>

int main(){
    int n_lados, medida;

    printf("Escreva o número de lados: \n");
    scanf("%d", &n_lados);

    if (n_lados < 3){
        printf("NÃO É UM POLÍGONO");
    } else if (n_lados > 5){
        printf("POLÍGONO NÃO IDENTIFICADO");
    } else if (n_lados == 3){
        printf("Digite a medida do lado: \n");
        scanf("%d", &medida);
        printf("Triângulo\n");
        printf("Perímetro: %d", medida * 3);
    } else if (n_lados == 4){
        printf("Digite a medida do lado: \n");
        scanf("%d", &medida);
        printf("Quadrado\n");
        printf("Área: %d", medida * medida);
    } else{
        printf("Pentágono\n");
    }

    return 0;
}

/*
4.4.Acrescente as seguintes mensagens a solução do exercício anterior conforme o caso.
Caso o número de lados seja inferior a 3 escrever NÃO É UM POLÍGONO.
Caso o número de lados seja superior a 5 escrever POLÍGONO NÃO IDENTIFICADO.
OBS: Considere que o usuário poderá informar qualquer valor para o número de lados.
*/