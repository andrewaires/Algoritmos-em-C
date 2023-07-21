#include <stdio.h>

int main(){
    int x, n, multiplo_4, valor;
    float resultado, impar;
    
    printf("Digite um número: ");
    scanf("%d", &valor);

    resultado = 1;
    multiplo_4 = 8;
    n = 3;
    impar = 3;
    for (x = 1; x <= valor; x++){
        if (n == 4){
            n = 3;
        } else{
            n = 4;
        }
        resultado += (multiplo_4 - n) / impar;
        multiplo_4 += 4;
        impar += 2;
    }
    printf("%f", resultado);
    
    return 0;
}

/*
13. Faça um algoritmo que gere os N primeiros termos da série a seguir. Considere
que será lido um valor inteiro e positivo.
S = 1 + (8-4)/3 + (12-3)/5 + (16-4)/7 + (20-3)/9 ...
*/