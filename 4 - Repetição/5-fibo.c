#include <stdio.h>

int main(){
    int n, x, fibo, anterior, proximo;

    printf("Digite um número:\n");
    scanf("%d", &n);

    if (n == 0){
        printf("%d", n);
    } else{
        
        anterior = 0;
        proximo = 1;
        fibo = 1;
        for (x = 2; x <= n; x++){
            fibo = anterior + proximo;
            anterior = proximo;
            proximo = fibo;
        }
        printf("%d", fibo);
    }
    
    return 0;
}

/*5. A série de Fibonacci é uma sequência de números em que os dois primeiros são
0 e 1 e a partir daí cada número é a soma dos anteriores. Faça um algoritmo que escreve os x primeiros termos da série e a soma destes
termos.*/
