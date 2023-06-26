#include <stdio.h>

int main(){
    int i;
    int vet[10];

    for (i = 0; i < 10; i++){
        vet[i] = 30;
    }

    for (i = 0; i < 10; i++){
        printf("%d ", vet[i]);
    }
        
    return 0;
}

/*14.1 Preencher um vetor X de 10 elementos(índices de 0 a 9) com o valor inteiro 30.Escrever o vetor X,
após seu total preenchimento.*/