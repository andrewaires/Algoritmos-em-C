#include <stdio.h>

int main(){
    int i, x;
    int vetZ[10], vetW[10];

    printf("Digite os valores separados por espaço:\n");
    for (i = 0; i < 10; i++){
        scanf("%d", &vetZ[i]);
    }

    x = 0;
    for (i = 9; i >= 0; i--){
        vetW[x] = vetZ[i];
        x += 1;
    }

    for (i = 0; i < 10; i++){
        printf("%d ", vetW[i]);
    }

    return 0;
}

/*14.7 Ler um vetor Z de 10 elementos. Crie um vetor W, com todos os elementos de Z (na ordem
inversa).Escrever o vetor W.*/