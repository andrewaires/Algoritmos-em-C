#include <stdio.h>

int main(){
    int i, valor1, valor2, soma;
    

    printf("Digite o primeiro valor:\n");
    scanf("%d", &valor1);

    printf("Digite o segundo valor:\n");
    scanf("%d", &valor2);

    soma = 0;
    for (i = valor1; i <= valor2; i++){
        soma += i;
    }
    
    printf("%d", soma);

    return 0;
}

/*11.5 Ler 2 valores (considere que o primeiro valor lido sempre será menor que o segundo), calcular e
escrever a soma dos números inteiros existentes entre eles(incluindo os 2 valores lidos na soma).*/