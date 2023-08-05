#include <stdio.h>

int main(){
    int x, y;

    printf("Digite o valor do X:\n");
    scanf("%d", &x);
    printf("Digite o valor do Y:\n");
    scanf("%d", &y);

    printf("\n");

    if ((x > 0) && (y > 0)){
        printf("I");
    } else if ((x < 0) && (y > 0)){
        printf("II");
    } else if ((x < 0) && (y < 0)){
        printf("III");
    } else {
        printf("IV");
    }
    
    
    return 0;
}

/*4.9.Escreva um algoritmo para ler as coordenadas (X,Y) de um ponto no sistema cartesiano e escrever o
quadrante ao qual o ponto pertence. Considere que o usuário não informará nenhuma coordenada igual a
zero*/