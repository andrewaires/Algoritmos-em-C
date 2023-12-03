#include <stdio.h>

#define TAM 2

struct Ponto {
    int x, y;
};

struct Triangulo {
    struct Ponto vertice[3];
};

void ler(struct Triangulo *triangulo){
    printf("Digite o ponto x e y (separado por espaço) do da primeira vertice:\n");
    scanf("%d %d", &triangulo->vertice[0].x, &triangulo->vertice[0].y);
    printf("Digite o ponto x e y (separado por espaço) do da primeira vertice:\n");
    scanf("%d %d", &triangulo->vertice[1].x, &triangulo->vertice[1].y);
    printf("Digite o ponto x e y (separado por espaço) do da primeira vertice:\n");
    scanf("%d %d", &triangulo->vertice[2].x, &triangulo->vertice[2].y);
}

void imprimir(struct Triangulo triangulo){
    printf("%d %d\n", triangulo.vertice[0].x, triangulo.vertice[0].y);
    printf("%d %d\n", triangulo.vertice[1].x, triangulo.vertice[1].y);
    printf("%d %d\n", triangulo.vertice[2].x, triangulo.vertice[2].y);
}

int main(){
    struct Triangulo quantidade[TAM];

    for (int i = 0; i < TAM; i++){
        ler(&quantidade[i]);
    }
    for (int i = 0; i < TAM; i++){
        printf("Triangulo #%d\n", i+1);
        imprimir(quantidade[i]);
    }

    return 0;
}



/*4. Crie uma estrutura para armazenar os dados de triângulos. Crie um algoritmo que permita
ler, armazenar e imprimir uma quantidade TAM de triângulos. */