#include <stdio.h>
#include <string.h>

//nao considera espaço no inicio e fim

int quantidade_palavras(char *entrada){
    int count = 0;
    size_t i;

    for (i = 0; i < strlen(entrada) - 1; i++){
        if (entrada[i] == ' ' && entrada[i+1] != ' '){
            count++;
        }
    }

    count += 1;

    return count;

}

int main(){
    char entrada[100];
    int palavras;
    
    printf("Digite um texto:\n");
    fgets(entrada, sizeof(entrada), stdin);

    
    if (entrada[strlen(entrada) - 1] == '\n'){
        entrada[strlen(entrada) - 1] = '\0';
    }

    palavras = quantidade_palavras(entrada);

    printf("A quantidade de palavras:\n%d", palavras);


    return 0;
}

/*. Escreva um programa que conte a quantidade de palavras de um
texto digitado pelo teclado. (Uma palavra é qualquer sequência
de caracteres separada por um ou mais espaços). */