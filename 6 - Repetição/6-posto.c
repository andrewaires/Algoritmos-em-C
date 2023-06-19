#include <stdio.h>

int main(){
    int diesel, gasol, alcool, confirmacao, tipo;

    diesel = 0;
    gasol = 0;
    alcool = 0;

    confirmacao = 1;
    while (confirmacao != 4){
        printf("Qual o tipo de combustível abastecido? (1.Álcool 2.Gasolina 3.Diesel 4.Fim)\n");
        scanf("%d", &tipo);
        while ((tipo != 1) && (tipo != 2) && (tipo != 3) && (tipo != 4)){
            printf("Digite um valor válido? (1.Álcool 2.Gasolina 3.Diesel 4.Fim)\n");
            scanf("%d", &tipo);
        } 

        switch(tipo){
            case 1:
                printf("Álcool\n");
                alcool += 1;
                break;
            case 2:
                printf("Gasolina\n");
                gasol += 1;
                break;
            case 3:
                printf("Diesel\n");
                diesel += 1;
                break;
            case 4:
                break;
        }
        if (tipo == 4){
            printf("MUITO OBRIGADO\n");
            confirmacao = 4;
        }
        
    }

    printf("Quantidade de Álcool: %d\n", alcool);
    printf("Quantidade de Gasolina: %d\n", gasol);
    printf("Quantidade de Diesel: %d\n", diesel);
    
    return 0;

}

/*9.6.Um Posto de combustíveis deseja determinar qual de seus produtos tem a preferência de seus clientes.
Escreva um algoritmo para ler o tipo de combustível abastecido (codificado da seguinte forma: 1.Álcool
2.Gasolina 3.Diesel 4.Fim). Caso o usuário informe um código inválido (fora da faixa de 1 a 4) deve ser
solicitado um novo código (até que seja válido). Ao ser informado o código do combustível, o seu
respectivo nome deve ser impresso na tela. O programa será encerrado quando o código informado for o
número 4 escrevendo então a mensagem: "MUITO OBRIGADO" e a quantidade de clientes que
abasteceram cada tipo de combustível.
*/