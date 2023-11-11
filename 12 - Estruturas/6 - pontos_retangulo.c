#include <stdio.h>

#define TAM 2

struct Pontos {
    int x, y;
};

struct Retangulo{
    struct Pontos superiorDireito;
    struct Pontos inferiorEsquerdo;
};

void ler(struct Retangulo *retangulo){
    printf("Digite o ponto X e Y do ponto superior direito (separado por espaço) do retângulo:\n");
    scanf("%d %d", &retangulo->superiorDireito.x, &retangulo->superiorDireito.y);
    printf("Digite o ponto X e Y do ponto inferior esquerdo (separado por espaço) do retângulo:\n");
    scanf("%d %d", &retangulo->inferiorEsquerdo.x, &retangulo->inferiorEsquerdo.y);
}


void imprimir(struct Retangulo retangulo){
    int x, y;
    printf("Digite o ponto X e Y que deseja verificar se está dentro do retângulo:\n");
    scanf("%d %d", &x, &y);
    if (x <= retangulo.superiorDireito.x && x >= retangulo.inferiorEsquerdo.x && 
    y <= retangulo.superiorDireito.y && y >= retangulo.inferiorEsquerdo.y){
        printf("Os pontos digitados pertencem ao retângulo.\n");
    } else {
        printf("Pontos não pertencem.\n");
    }
}

int main(){
    struct Retangulo pontosRetangulo[TAM];

    for (int i = 0; i < TAM; i++){
        ler(&pontosRetangulo[i]);
    } 
    for (int i = 0; i < TAM; i++){
        imprimir(pontosRetangulo[i]);
    } 

    return 0;
}

/*6. Utilizando as estruturas apropriadas definidas nos exercícios anteriores, crie um algoritmo
que leia as coordenadas de um retângulo e um conjunto de pontos (determinados por um
valor sentinela) e informe para cada ponto lido se está dentro ou fora do retângulo. Imprima
a quantidade de pontos dentro e fora do retângulo. */