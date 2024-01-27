#include <stdio.h>

int main(){
    int matrizA[4][6];
    int soma, i, j;

    for (i = 0; i <= 3; i++){
        for (j = 0; j <= 3; j++){
            scanf("%d", &matrizA[i][j]); 
        }
    }

    soma = 0;
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            soma += matrizA[i][j];
        }
    }

    printf("Soma 1: %d\n", soma);
    printf("\n"); 
    
    soma = 0;
    for (i = 2; i < 4; i++){
        for (j = 2; j < 4; j++){
            soma += matrizA[i][j];
        }
    }

    printf("Soma 2: %d\n", soma);
    printf("\n"); 
    
    soma = 0;
    for (i = 0; i < 4; i++){
        for (j = 0; j <= i; j++){
            soma += matrizA[i][j];
        }
    }

    printf("Soma 3: %d\n", soma);
    printf("\n"); 
    
    soma = 0;
    for (i = 0; i < 3; i++){
        for (j = i+1; j < 4; j++){
            soma += matrizA[i][j];
        }
    }

    printf("Soma 4: %d\n", soma);
    printf("\n");
    
    return 0;
}

/*16.3.Ler uma matriz A de 4 x 4, calcular e escrever as somas dos elementos marcados com o X. Utilizar
estruturas de repetição.*/