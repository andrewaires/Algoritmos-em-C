#include <stdio.h>
#include <string.h>

void inverterString(char *entrada){
    int i, tamanho;
    char inverso;

    tamanho = strlen(entrada);

    for (i = 0; i < tamanho / 2; i++){
        inverso = entrada[i];
        entrada[i] = entrada[tamanho - i - 1];
        entrada[tamanho - i - 1] = inverso;
    }
}

int main(){
    char entrada[100];
    
    printf("Digite um texto:\n");
    fgets(entrada, sizeof(entrada), stdin);
    
    if (entrada[strlen(entrada) - 1] == '\n') {
        entrada[strlen(entrada) - 1] = '\0';
    }
    
    inverterString(entrada);
    printf("O texto invertido é: %s", entrada);

    return 0;
}

/*Escreva um programa que leia um texto pelo teclado. Em
seguida, faça uma função que inverta e exiba-o na tela.
Exemplo: Para a string "Bom dia" o programa imprime "aid
moB" Obs: O objetivo é alterar os caracteres na string, não é
imprimir ao contrário! */