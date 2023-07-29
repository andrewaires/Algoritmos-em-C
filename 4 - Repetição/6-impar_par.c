#include <stdio.h>

int main(){
    int n, x, par, impar, soma_par;
    float media, soma_impar;

    printf("Digite 10 números:\n");
    
    impar = 0;
    soma_impar = 0;
    par = 0;
    soma_par = 0;
    for (x = 1; x <= 10; x++){
        scanf("%d", &n);
        if (n % 2 != 0){
            impar += 1;
            soma_impar += n;
        } else{
            par += 1;
            soma_par += n;
        }
    }

    media = soma_impar / impar;

    printf("Impar: %d\n", impar);
    printf("Par: %d\n", par);
    
    printf("Soma dos pares: %d\n", soma_par);
    printf("Média dos Ímpares: %.2f\n", media);
    
    
    return 0;
}

/*
6. Faça um programa que solicite ao usuário 10 números inteiros e, ao final,
informe a quantidade de números ímpares e pares lidos. Calcule também a soma
dos números pares e a média dos números ímpares.*/