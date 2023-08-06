#include <stdio.h>

int main(){
    int valor1, valor2, valor3;
    
    printf("Digite 3 valores:\n");
    scanf("%d", &valor1);
    scanf("%d", &valor2);
    scanf("%d", &valor3);

    if ((valor1  > valor2) && (valor1 > valor3)){
        if (valor2 > valor3){
            printf("%d, %d, %d", valor3, valor2, valor1);
        } else{
            printf("%d, %d, %d", valor2, valor3, valor1);
        }
    } else if ((valor2 > valor1) && (valor2 > valor3)){
        if (valor3 > valor1){
            printf("%d, %d, %d", valor1, valor3, valor2);
        } else{
            printf("%d, %d, %d", valor3, valor1, valor2);
        }
    } else{
        if (valor2 > valor1){
            printf("%d, %d, %d", valor1, valor2, valor3);
        } else{
            printf("%d, %d, %d", valor2, valor1, valor3);
        }
    }

    return 0;
}

/*4.8.Escreva um algoritmo para ler 3 valores e escrevê-los em ordem crescente. Considere que os usuário
não informará valores iguais.*/