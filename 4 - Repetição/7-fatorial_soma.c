#include <stdio.h>

int main(){
    
    int n, x, k, fatorial, j, soma;

    printf("Digite 10 números inteiros e positivos:\n");

    for (x = 1; x <= 10; x++){
        scanf("%d", &n); 
        while (n < 0){
            scanf("%d", &n);
        }

        
        if (n < 7){
            fatorial = 1;
            for (k = 1; k <= n; k++){
                fatorial *= k;
            }

            printf("O fatorial de %d é: %d\n", n, fatorial);    
        } else{
            soma = 0;
            for (j = 1; j <= n; j++){
                soma += j;
            }

            printf("%d\n", soma);

        }
    }
    
    
    return 0;
}

/*Faça um programa que leia 10 números, considere que serão lidos números
inteiros e positivos. Se o número lido for menor que 7, calcule o seu fatorial. Se
for maior ou igual a 7, calcule a soma de 1 até o número lido.*/
