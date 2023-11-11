#include <stdio.h>

#define TAM 3

struct Ponto {
    int x, y;
};

struct Retangulo{
    struct Ponto inferiorEsquerda;
    struct Ponto superiorDireita;
};

void ler(struct Retangulo *pontos){
    printf("Digite o ponto x e y inferior esquerdo:\n");
    scanf("%d %d", &pontos->inferiorEsquerda.x, &pontos->inferiorEsquerda.y);
    printf("Digite o ponto x e y superior direito:\n");
    scanf("%d %d", &pontos->superiorDireita.x, &pontos->superiorDireita.y);
}
void imprimir(struct Retangulo pontos){
    printf("Ponto x e y inferior esquerdo: %d %d\n", pontos.inferiorEsquerda.x, pontos.inferiorEsquerda.y);
    printf("Ponto x e y superior direito: %d %d\n", pontos.superiorDireita.x, pontos.superiorDireita.y);
}

int main(){
    struct Retangulo Retangulo1[TAM];
    
    for (int i = 0; i < TAM; i++){
        ler(&Retangulo1[i]);
    }

    for (int i = 0; i < TAM; i++){
        printf("Retângulo: %d\n", i + 1);
        imprimir(Retangulo1[i]);
        
    }


    return 0;
}


/*3. Crie uma estrutura para armazenar os dados de retângulos (pontos diagonais inferioresquerda e superior-direita). Crie um algoritmo que permita ler, armazenar e imprimir uma
quantidade TAM de retângulos. */