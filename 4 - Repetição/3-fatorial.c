#include <stdio.h>

int main(){
    int fatorial, x;
    long long int resultado;

    printf("Digite um número:\n");
    scanf("%d", &fatorial);

    resultado = 1;

    for (x = 1; x <= fatorial; x++){
        resultado *= x;
    }
    printf("%lld", resultado);
    
    return 0;
}

// 3. Faça um algoritmo para calcular o fatorial de um número.