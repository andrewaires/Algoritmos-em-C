#include <stdio.h>

int main(){
    int x;

    for (x = 100; x <= 200; x++){
        if (x % 2 != 0){
            printf("%d\n", x);
        }
    }
    
    return 0;
}

// 2. Faça um algoritmo que gera e escreve os números ímpares entre 100 e 200.
// Utilize a função resto para verificar se o número é impar.