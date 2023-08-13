#include <stdio.h>
int main(){
    float preco_final, custo_fabrica;

    printf("Qual o custo de fábrica? ");
    scanf("%f", &custo_fabrica);

    preco_final = custo_fabrica + (custo_fabrica * 73 / 100); // 28% + 45%
    printf("O preço final é de: R$%.2f\n", preco_final);

    return 0;
}

/*
4) O custo de um carro novo ao consumidor é a soma do custo de fábrica com a
porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo
que o percentual do distribuidor seja de 28% e os impostos de 45%, escrever um
algoritmo para ler o custo de fábrica de um carro, calcular e escrever o custo final ao
consumidor.
*/