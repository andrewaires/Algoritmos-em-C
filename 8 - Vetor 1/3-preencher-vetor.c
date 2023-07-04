#include <stdio.h>

int main(){
    int i;
    int vet[10];

    for (i = 0; i < 10; i++){
        if (i % 2 == 0){
            vet[i] = 20;
        } else {
            vet[i] = 10;
        }
        
    }

    for (i = 0; i < 10; i++){
        printf("%d ", vet[i]);
    }
        
    return 0;
}

/*14.3 Preencher um vetor B de 10 elementos com 10 se o índice do elemento for ímpar, e 20 se for par.
Escrever o vetor B após o seu total preenchimento.*/