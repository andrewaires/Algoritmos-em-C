#include <stdio.h>

int main(){
    int matrizA[4][6];
    int matrizB[4][6];
    int matrizD[4][6];
    int matrizS[4][6];
    int i, j;

    for (i = 0; i <= 3; i++){
        for (j = 0; j <= 5; j++){
            scanf("%d", &matrizA[i][j]); 
        }
    }

    for (i = 0; i <= 3; i++){
        for (j = 0; j <= 5; j++){
            scanf("%d", &matrizB[i][j]); 
        }
    }

    for (i = 0; i <= 3; i++){
        for (j = 0; j <= 5; j++){
            matrizS[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    for (i = 0; i <= 3; i++){
        for (j = 0; j <= 5; j++){
            matrizD[i][j] = matrizA[i][j] - matrizB[i][j]; 
        }
    }
    
    printf("MATRIZ S:\n");
    for (i = 0; i <= 3; i++){
        for (j = 0; j <= 5; j++){
            printf("%d ", matrizS[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("MATRIZ D:\n");
    for (i = 0; i <= 3; i++){
        for (j = 0; j <= 5; j++){
            printf("%d ", matrizD[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*16.2 Ler 2 matrizes, A 4 x 6 e B 4 x 6 e criar :
a) uma matriz S que seja a soma de A e B.
b) uma matriz D que seja a diferença de A e B. (A – B).
Escrever as matrizes S e D após todo cálculo estar concluído*/