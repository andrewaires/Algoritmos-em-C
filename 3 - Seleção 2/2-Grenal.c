#include <stdio.h>

int main(){
    int gol_gremio, gol_inter;

    printf("Gols marcados pelo Grêmio:\n");
    scanf("%d", &gol_gremio);

    printf("Gols marcados pelo Inter:\n");
    scanf("%d", &gol_inter);

    if (gol_gremio == gol_inter){
        printf("Empate\n");
    } else if (gol_gremio > gol_inter){
        printf("Grêmio\n");
    } else{
        printf("Inter\n");
    }

    return 0;
}

/*4.2.Escreva um algoritmo para ler o número de gols marcados pelo Grêmio e o número de gols marcados
pelo Inter em um GRENAL. Escrever o nome do vencedor. Caso não haja vencedor deverá ser impresso a
palavra EMPATE.*/