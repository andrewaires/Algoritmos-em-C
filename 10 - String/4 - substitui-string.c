#include <stdio.h>
#include <string.h>

void substituir(char *entrada, char a, char b){
    size_t i;
    
    for (i = 0; i < strlen(entrada); i++){
        if (entrada[i] == a){
            entrada[i] = b;
        }
    }
}

int main(){
    char entrada[1000];
    char a, b;

    printf("Digite um texto:\n");
    fgets(entrada, sizeof(entrada), stdin);

    if (entrada[strlen(entrada) - 1] == '\n'){
        entrada[strlen(entrada) - 1] = '\0';
    }

    printf("Digite a caractere que será substituída:\n");
    scanf(" %c", &a);

    printf("Digite a nova caractere:\n");
    scanf(" %c", &b);

    substituir(entrada, a, b);

    printf("A nova frase: %s", entrada);

    return 0;
}

/*4. Construa um programa que leia uma string s, e dois caracteres a
e b. Em seguida, o programa deve substituir todas as ocorrências
do caractere a na string s pelo caractere b. (Observação: a e b
são informados pelo usuário e podem ser qualquer letra) */