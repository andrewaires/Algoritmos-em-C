#include <stdio.h>

int main(){
    int i;
    int vet[10];

    for (i = 0; i < 10; i++){
        vet[i] = (i + 1) * 10;
    }

    for (i = 0; i < 10; i++){
        printf("%d ", vet[i]);
    }
        
    return 0;
}

/*14.2 Preencher um vetor A de 10 elementos(índices de 0 a 9) com os números inteiros
10,20,30,40,50,...,100. Escrever o vetor A após o seu total preenchimento.*/