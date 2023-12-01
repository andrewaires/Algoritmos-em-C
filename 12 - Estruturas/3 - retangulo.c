#include <stdio.h>

#define TAM 3

struct Retangulo{
    int inferiorEsquerda, superiorDireita;
};

void ler(struct Retangulo *pontos){
    printf("Digite o ponto inferior esquerdo:\n");
    scanf("%d", &pontos->inferiorEsquerda);
    printf("Digite o ponto superior direito:\n");
    scanf("%d", &pontos->superiorDireita);
}
void imprimir(struct Retangulo pontos){
    printf("Ponto inferior esquerdo: %d\n", pontos.inferiorEsquerda);
    printf("Ponto superior direito: %d\n", pontos.superiorDireita);
}

int main(){
    struct Retangulo Retangulo1[TAM];
    
    for (int i = 0; i < TAM; i++){
        ler(&Retangulo1[i]);
    }

    for (int i = 0; i < TAM; i++){
        printf("Triângulo: %d\n", i + 1);
        imprimir(Retangulo1[i]);
        
    }


    return 0;
}


/*3. Crie uma estrutura para armazenar os dados de retângulos (pontos diagonais inferioresquerda e superior-direita). Crie um algoritmo que permita ler, armazenar e imprimir uma
quantidade TAM de retângulos. */