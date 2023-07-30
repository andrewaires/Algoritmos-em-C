#include <stdio.h>

int main(){
    int n, x;

    printf("Digite um número entre 1 e 10:\n");
    scanf("%d", &n);
    
    while ((n < 1) || (n > 10)){
        printf("Digite um número entre 1 e 10:\n");
        scanf("%d", &n);
    }

    for (x = 0; x <= n; x++){
        printf("%d x 10 = %d\n", x, x * n);
    }
    
    return 0;
}

/*4. Ler um valor inteiro (aceitar somente valores entre 1 e 10) e escrever a tabuada
de 10 a 1 do valor lido*/