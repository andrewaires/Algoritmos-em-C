#include <stdio.h>

int main(){
    int i, valor1, valor2, soma;
    

    printf("Digite o primeiro valor:\n");
    scanf("%d", &valor1);

    printf("Digite o segundo valor:\n");
    scanf("%d", &valor2);

    soma = 0;
    if (valor2 < valor1){
        for (i = valor2; i <= valor1; i++){
        soma += i;
        }
    } else {
        for (i = valor1; i <= valor2; i++){
        soma += i;
        }
    }
    
    printf("%d", soma);

    return 0;
}

/*11.6 Reescreva o exercício anterior considerando que o primeiro pode ser maior que o segundo e viceversa.*/