#include <stdio.h>

int main(){
    int x;
    float resultado, k;

    resultado = 0;
    k = 1;
    for (x = 1; x <= 50; x++){
        resultado += k/x; 
        k += 2;
    }
    printf("%f", resultado);
    
    return 0;
}

/*
12. Faça um algoritmo que calcule a seguinte série
S = 1/1 + 3/2 + 5/3 + 7/4 ... 99/50.
*/