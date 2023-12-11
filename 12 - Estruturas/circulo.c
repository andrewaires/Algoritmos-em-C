#include <stdio.h>

#define TAM 3

struct circulo {
    int raio, ponto_central;
};

void ler(struct circulo *circulos){
    printf("Digite o raio:\n");
    scanf("%d", &circulos->raio);

    printf("Digite o ponto central:\n");
    scanf("%d", &circulos->ponto_central);
}

void imprimir(struct circulo circulo){
    printf("Ponto Central: %d\n", circulo.ponto_central);
    printf("Raio: %d\n", circulo.raio);

}

int main(){
    struct circulo entrada[TAM];
    int i;

    for (i = 0; i < TAM; i++){
        ler(&entrada[i]);
    }
    for (i = 0; i < TAM; i++){
        imprimir(entrada[i]);
    }

    return 0;
}

/*2. Crie uma estrutura para armazenar os dados de círculos (ponto central e raio). Crie um
algoritmo que permita ler, armazenar e imprimir uma quantidade TAM de círculos. */