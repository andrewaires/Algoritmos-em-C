#include <stdio.h>
#include <stdlib.h>

struct dma {
    int dia, mes, ano;
};

int dif_dias(struct dma Data1, struct dma Data2){
    int dias;
    
    // considerando 30 dias para cada mes
    dias = abs((Data1.dia + Data1.mes*30 + Data1.ano*360) - (Data2.dia + Data2.mes*30 + Data2.ano*360));
    return dias;
}


int main(){
    struct dma Data1, Data2;
    int resultado;

    printf("Digite a primeira data no formato dd/mes/ano:\n");    
    scanf("%d/%d/%d", &Data1.dia, &Data1.mes, &Data1.ano);
    while ((Data1.dia < 1 || Data1.dia > 31) || (Data1.mes < 1 || Data1.mes > 12) || (Data1.ano < 0)){
        printf("Digite um formato correto de data:\n");
        scanf("%d/%d/%d", &Data1.dia, &Data1.mes, &Data1.ano);
    }

    printf("Digite a segunda data no formato dd/mes/ano:\n");
    scanf("%d/%d/%d", &Data2.dia, &Data2.mes, &Data2.ano);
    while ((Data2.dia < 1 || Data2.dia > 31) || (Data2.mes < 1 || Data2.mes > 12) || (Data2.ano < 0)){
        printf("Digite um formato correto de data:\n");
        scanf("%d/%d/%d", &Data2.dia, &Data2.mes, &Data2.ano);
    }

    resultado = dif_dias(Data1, Data2);
    printf("A diferença é de: %d", resultado);



    return 0;
}

/*4) Escreva um programa que receba dois structs do tipo dma, cada um
representando uma data válida, e calcule o número de dias que
decorreram entre as duas datas. OBS: Garanta que a estrutura só
armazenará datas válidas*/