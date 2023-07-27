#include <stdio.h>

int main(){
    int x, n;
    float resultado;

    resultado = 0;
    for (x = 1; x <= 100; x++){
        resultado += 1.0/x; 
    }
    printf("%.2f", resultado);
    
    return 0;
}
/*9. Faça um algoritmo que calcule a seguinte série S = 1/1 + 1/2 + 1/3 ... 1/100*/