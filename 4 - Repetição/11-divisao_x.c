#include <stdio.h>
#include <math.h>


int main(){
    int x, valor;
    float resultado;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    resultado = 0;
    for (x = 1; x <= 20; x++){
        resultado += 1.0/pow(valor, x); 
    }
    printf("%f", resultado);
    
    return 0;
}

/*
11. Faça um algoritmo que lê um valor x e calcula e mostra os 20 primeiros termos
da série: S = (1/x^1) + (1/x^2) + (1/x^3) ...
*/