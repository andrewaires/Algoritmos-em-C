#include <stdio.h>

int main(){
    int matrizG[5][5];
    int i, j;
    int sl[5] = {0};
    int sc[5] = {0};

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            scanf("%d", &matrizG[i][j]);
        }
    }

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            sl[i] += matrizG[i][j];
            sc[j] += matrizG[i][j];
        }
    }

    for (i = 0; i < 5; i++){
        printf("%d ", sl[i]);
    }

    printf("\n");

    for (i = 0; i < 5; i++){
        printf("%d ", sc[i]);
    }

    return 0;
}

/*16.5.Ler uma matriz G 5 x 5 e criar 2 vetores SL e SC de 5 elementos que contenham respectivamente as
somas das linhas e das colunas de G. Escrever os vetores criados.*/