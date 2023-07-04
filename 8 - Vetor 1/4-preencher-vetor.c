#include <stdio.h>

int main(){
    int i;
    int vet[10];

    for (i = 0; i < 10; i++){
        printf("Digite um valor: ");
        scanf("%d", &vet[i]);
    }

    for (i = 0; i < 10; i++){
        if (vet[i] < 0){
            vet[i] = 0;
        }
    }

    for (i = 0; i < 10; i++){
        printf("%d ", vet[i]);
    }
        
    return 0;
}

/*14.4 Ler um vetor C de 10 elementos inteiros. Após o término da leitura, trocar todos os valores negativos
do vetor C por 0. Após todas as trocas terem sido efetuadas, escrever o vetor C.
*/