#include <stdio.h>

int main(){
    int i, negativos;
    int valores[10];

    negativos = 0;

    printf("Digite 10 valores com espaço entre eles:\n");
    for (i = 0; i < 10; i++){
        scanf("%d", &valores[i]);
    }

    for (i = 0; i < 10; i++){
        if (valores[i] < 0){
            negativos += 1;
        }
    }

    printf("Quantidade de negativos: %d", negativos);
    

    return 0;

}

// 11.1 Ler 10 valores e escrever quantos destes valores são negativos.
