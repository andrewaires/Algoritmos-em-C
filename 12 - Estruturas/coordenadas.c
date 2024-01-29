#include <stdio.h>

#define TAM 3

struct coordenada{
    int x, y;
};

void ler(struct coordenada *ponto){
    printf("Digite o ponto X e depois o Y: \n");
    scanf("%d %d", &ponto->x, &ponto->y);
}

void imprimir(struct coordenada ponto){
    printf("Ponto x: %d \nPonto y: %d\n\n", ponto.x, ponto.y);
}

int main(){

    struct coordenada ponto[TAM];

    int i;

    for (i = 0; i < TAM; i++){
        ler(&ponto[i]);
    }

    for (i = 0; i < TAM; i++){
        imprimir(ponto[i]);
    }

    return 0;

}


/*1. Construa uma estrutura para armazenar pontos (coordenadas x e y) no plano cartesiano. Crie
um algoritmo que permita ler, armazenar e imprimir uma quantidade TAM de pontos. */