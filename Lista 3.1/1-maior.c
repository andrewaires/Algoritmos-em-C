#include <stdio.h>

int main() {
    float n1, n2;
    printf("Digite o primeiro número: ");
    scanf("%f", &n1);
    printf("Digite o segundo número: ");
    scanf("%f", &n2);

    if (n1 > n2) {
        printf("N1 é maior\n");
    } else if (n1 < n2) {
        printf("N2 é maior\n");
    } else {
        printf("São iguais\n");
    }

    return 0;
}

// 1.Construir um algoritmo que dados dois números escreva o maior.