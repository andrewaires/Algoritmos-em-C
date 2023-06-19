#include <stdio.h>

int main(){
    int total, vitorias_gremio, vitorias_inter, empate, confirmacao, gols_inter, gols_gremio;

    vitorias_gremio = 0;
    vitorias_inter = 0;
    empate = 0;
    total = 0;

    confirmacao = 1;
    while (confirmacao == 1){
        printf("Quantos gols o inter fez?\n");
        scanf("%d", &gols_inter);

        printf("Quantos gols o grêmio fez?\n");
        scanf("%d", &gols_gremio);

        if (gols_gremio > gols_inter){
            vitorias_gremio += 1;
            printf("Grêmio\n");
        } else if(gols_inter > gols_gremio){
            vitorias_inter += 1;
            printf("Inter\n");
        } else{
            empate += 1;
            printf("Empate\n");
        }

        printf("Novo GRENAL (1.sim 2.não)?\n");
        scanf("%d", &confirmacao);

        total += 1;
    }
    
    printf("%d quantidade de grenais\n", total);
    printf("%d vitórias do Inter\n", vitorias_inter);
    printf("%d vitórias do Grêmio\n", vitorias_gremio);
    printf("%d empates\n", empate);
    if (vitorias_gremio > vitorias_inter){
        printf("Grêmio venceu mais grenais\n");
    } else if (vitorias_gremio < vitorias_inter){
        printf("Inter venceu mais grenais\n");
    }


    return 0;

}

/*
9.5.A Federação Gaúcha de Futebol contratou você para escrever um programa para fazer uma estatística
do resultado de vários GRENAIS. Escreva um algoritmo para ler o número de gols marcados pelo Inter, o
número de gols marcados pelo GRÊMIO em um GRENAL, imprimindo o nome do time vitorioso ou a
palavra EMPATE. Logo após escrever a mensagem "Novo GRENAL 1.Sim 2.Não?" e solicitar uma
resposta. Se a resposta for 1, o algoritmo deve ser executado novamente solicitando o número de gols
marcados pelos times em uma nova partida, caso contrário deve ser encerrado imprimindo:
-Quantos GRENAIS fizeram parte da estatística.
-O número de vitórias do Inter.
-O número de vitórias do Grêmio.
-O número de Empates.
- Uma mensagem indicando qual o time que venceu o maior número de GRENAIS (ou NÃO HOUVE
VENCEDOR)
*/