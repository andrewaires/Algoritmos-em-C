#include <stdio.h>

int main(){
    int valor1, valor2, valor3;
    
    printf("Digite 3 valores:\n");
    scanf("%d", &valor1);
    scanf("%d", &valor2);
    scanf("%d", &valor3);

    if ((valor1  > valor2) && (valor1 > valor3)){
        printf("%d", valor1);
    } else if ((valor2 > valor1) && (valor2 > valor3)){
        printf("%d", valor2);
    } else{
        printf("%d", valor3);
    }

    return 0;
}

/*
4.6.Escreva um algoritmo para ler 3 valores e escrever o maior deles. Considere que os usuário não
informará valores iguais.
*/