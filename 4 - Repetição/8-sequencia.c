#include <stdio.h>

int main(){
    int x;
    long long int resultado;

    resultado = 1;
    
    for (x = 1; x <= 30; x++){

        printf("%lld\n", resultado);
        resultado *= 3;
    }
    
    return 0;
}

/*8. Faça um algoritmo que escreva os 30 primeiros termos da série 1,3,9,27...*/
