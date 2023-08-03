#include <stdio.h>

int main(){
    int vetor[10];
    int i, v, quantidade;

    printf("Digite os valores do vetor separados por espaço\n");
    for (i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
    }

    printf("Qual valor vc deseja encontrar? ");
    scanf("%d", &v);

    quantidade = 0;
    for (i = 0; i < 10; i++){
        if (vetor[i] == v){
            quantidade += 1;
        }
    }

    printf("Vezes que o número repetiu: %d", quantidade);


    return 0;
}

/*14.8 Ler um vetor A de 10 elementos e um valor V. Conte e escreva quantas vezes o valor V ocorre no
vetor A.*/