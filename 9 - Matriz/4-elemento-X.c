#include <stdio.h>

int main(){
    int matrizD[5][5];
    int i, j, x, encontrado;

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            scanf("%d", &matrizD[i][j]); 
        }
    }

    printf("Digite um valor:\n");
    scanf("%d", &x);
    
    encontrado = 0;
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            if (matrizD[i][j] == x){
                printf("Sim, o numero %d existe na matriz", x);
                encontrado = 1;
                break;
            }
        }
        if (encontrado == 1){
            break;
        }
    }
    if (encontrado == 0){
        printf("Esse elemento não existe");
    }
   
    return 0;
}

/*16.4.Ler uma matriz D 5 x 5 (considere que não serão informados valores duplicados). A seguir ler um
número X e escreva uma mensagem indicando se o valor de X existe ou NÃO na matriz.*/