#include <stdio.h>

int main(){
    int senha, n;

    printf("Digite a senha:\n");
    scanf("%d", &senha);

    n = 0;
    while (senha != 2009){
        printf("ACESSO NEGADO\n");
        printf("Digite a senha novamente:\n");
        scanf("%d", &senha);
        n += 1;
    }
    printf("ACESSO PERMITIDO\n");
    printf("Vezes que a senha foi digitada incorretamente: %d", n);
    
    return 0;

}

/*9.4.Escreva um algoritmo que verifique a validade de uma senha fornecida pelo usuário. A senha válida é
o número 2009.
OBS: Se a senha informada pelo usuário for inválida, a mensagem "ACESSO NEGADO" deve ser
impressa e repetida a solicitação de uma nova senha até que ela seja válida. Caso contrário deve ser
impressa a mensagem "ACESSO PERMITIDO" junto com um número que representa quantas vezes a
senha foi informada.*/