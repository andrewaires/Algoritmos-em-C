#include <stdio.h>
int main(){
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num >= 0){
        printf("%d é positivo\n", num);
    } else {
        printf("%d é negativo\n", num);
    }

    return 0;
}

// 8) Ler um valor e escrever se é positivo ou negativo (considere o valor zero como positivo)