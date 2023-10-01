#include <stdio.h>

int main(){
    int matriz[5][5];
    int soma, i, j;

    for (i = 0; i <= 4; i++){
        for (j = 0; j <= 4; j++){
            scanf("%d", &matriz[i][j]); 
        }
    }

    soma = 0;
    for (i = 0; i <= 4; i++){
        soma += matriz[2][i];
    }
    printf("Soma da linha 3: %d\n", soma);

    soma = 0;
    for (i = 0; i <= 4; i++){
        soma += matriz[i][1];
    }
    printf("Soma da coluna 2: %d\n", soma);

    soma = 0;
    for (i = 0; i <= 4; i++){
        soma += matriz[i][i];
    }
    printf("Soma da diagonal principal: %d\n", soma);

    soma = 0;
    for (i = 0; i <= 4; i++){
        soma += matriz[i][4 - i];
    }
    printf("Soma da diagonal secundária: %d\n", soma);

    soma = 0;
    for (i = 0; i <= 4; i++){
        for (j = 0; j <= 4; j++){
            soma += matriz[i][j];
        }   
    }
    printf("Soma de todos os elementos: %d\n", soma);

    return 0;
}

/*16.1 Ler uma matriz M 5 x 5, calcular e escrever as seguintes somas:
a) da linha 3 de M
b) da coluna 2 de M
c) da diagonal principal
d) da diagonal secundária
e) de todos os elementos da matriz*/