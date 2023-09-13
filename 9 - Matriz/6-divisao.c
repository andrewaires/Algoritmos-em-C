#include <stdio.h>

int main(){
    int matrizA[12][13];
    int i, j, maior;


    for (i = 0; i < 12; i++){
        for (j = 0; j < 13; j++){
            scanf("%d", &matrizA[i][j]);
        }
    }
    
    for (i = 0; i < 12; i++){
        maior = matrizA[i][0];
        for (j = 1; j < 13; j++){
            if (maior < matrizA[i][j]){
                maior = matrizA[i][j];
            }
        }

        for (j = 0; j < 13; j++){
            matrizA[i][j] = matrizA[i][j] / maior;
        }

    }

    for (i = 0; i < 12; i++){
        for (j = 0; j < 13; j++){
            printf("%d ", matrizA[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

/*16.6.Ler uma matriz A 12 x 13 e divida todos os 13 elementos de cada uma das 12 linhas de A pelo valor
do maior elemento daquela linha. Escrever a matriz A modificada.*/