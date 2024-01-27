#include <stdio.h>
#include <stdlib.h>

struct Hora {
    int hora; 
    int min;
    int seg;
};


int main(){
    struct Hora Hora1;
    struct Hora Hora2;

    printf("Digite a hora, minutos e segundos nesse formato: hh:mm:ss\n");
    scanf("%d:%d:%d", &Hora1.hora, &Hora1.min, &Hora1.seg);

    printf("Digite novamente a hora, minutos e segundos nesse formato: hh:mm:ss\n");
    scanf("%d:%d:%d", &Hora2.hora, &Hora2.min, &Hora2.seg);

    int difhoras = abs(Hora2.hora - Hora1.hora);
    int difmin = abs(Hora2.min - Hora1.min);
    int difseg = abs(Hora2.seg - Hora1.seg);
    

    printf("A diferença em horas:minutos:seguntos é: %02d:%02d:%02d", difhoras, difmin, difseg);


    return 0;
}

/*1) Faça um programa que possua uma estrutura para armazenar 2
horários (hora, minuto, segundo). Esse programa deve ler esses dois
horários e informar a diferença entre eles (informar a diferença no
formato hh:mm:ss). */