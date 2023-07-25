#include <stdio.h>

int main(){
    int x, n;
    float resultado;

    printf("Digite um número: ");
    scanf("%d", &n);
    
    resultado = 0;
    for (x = 1; x <= n; x++){
        resultado += 1.0/x; 
    }
    printf("%f", resultado);
    
    return 0;
}

/*10. Faça um algoritmo que leia um valor N e calcule a seguinte série. Considere que
será lido um valor inteiro e positivo. S = 1/1 + 1/2 + 1/3 ... 1/n*/