#include <stdio.h>

int main(){
    int vetor[10];
    int i, a;
    char resultado;

    printf("Digite os valores do vetor separados por espaço\n");
    for (i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
    }

    printf("Qual valor vc quer saber o índice? ");
    scanf("%d", &a);
    
    resultado = 0;
    for (i = 0; i < 10; i++){
        if (vetor[i] == a){
            printf("ACHEI");
            resultado = 1;
            break;
        }
        
    }

    if (resultado != 1){
        printf("NÃO ACHEI");
    }

    return 0;
}

/*14.10 Ler um vetor C para armazenar 10 códigos e uma variável A que contenha um código. Escrever a
mensagem ACHEI se o código armazenado em A estiver no vetor C, e NÃO ACHEI caso contrário.
*/