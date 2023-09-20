#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct carta{
    char valor[100];
    char naipe[100];
};

char *naipes[] = {"copas", "ouros", "paus", "espadas"};
char *valores[] = {"às", "2", "3", "4", "5", "6", "7", "8", "9", "valete", "dama", "rei"};

int main(){

    srand(time(NULL));

    int i;
    struct carta jogador1, jogador2;

    printf("CARTAS DO JOGADOR 1:\n");
    for (i = 0; i < 5; i++){
        strcpy(jogador1.naipe, naipes[rand() % 4]);
        strcpy(jogador1.valor, valores[rand() % 12]);
        printf("%s %s\n", jogador1.valor, jogador1.naipe);
    }

    printf("\n");
    
    printf("CARTAS DO JOGADOR 2:\n");
    for (i = 0; i < 5; i++){
        strcpy(jogador2.naipe, naipes[rand() % 4]);
        strcpy(jogador2.valor, valores[rand() % 12]);
        printf("%s %s\n", jogador2.valor, jogador2.naipe);
    }

    return 0;
}

/*3) Escolha um jogo de cartas, baseado em um “baralho
tradicional” (cada carta tem seu naipe e seu valor). Crie a estrutura
necessária e implemente a parte de distribuição (sorteio) de cartas
para 2 jogadores, considerando que cada jogador ira receber 5 cartas.
Exiba na tela as cartas que cada um dos jogadores recebeu.*/