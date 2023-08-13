#include <stdio.h>
int main(){
    float num;

    printf("Digite um número: ");
    scanf("%f", &num);

    if (num <= 10){
        printf("NÃO É MAIOR QUE 10!");
    }else {
        printf("É MAIOR QUE 10!");
    }

    return 0;
}

// 6) Ler um valor e escrever a mensagem É MAIOR QUE 10! se o valor lido for maior que 10, caso contrário escrever NÃO É MAIOR QUE 10!