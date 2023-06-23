#include <stdio.h>

int main(){
    int entrada;
    float n1, n2, media;

    entrada = 1;
    while (entrada == 1){
        printf("Digite a primeira nota:\n");
        scanf("%f", &n1);

        while ((n1 < 0) || (n1 > 10)){
            printf("Nota inválida\n");
            scanf("%f", &n1);
        }

        printf("Digite a segunda nota:\n");
        scanf("%f", &n2);

        while ((n2 < 0) || (n2 > 10)){
            printf("Nota inválida\n");
            scanf("%f", &n2);
        }

        media = (n1 + n2) / 2;

        printf("%.1f\n", media);
        
        printf("Novo cálculo (1.sim 2.não)?\n");
        scanf("%d", &entrada);
    
    }
    

    return 0;
}

/*8.6.Reescreva o algoritmo para o problema 8.5 para que no final seja impressa a mensagem Novo cálculo
(1.sim 2.não) solicitando ao usuário que informe um código (1 ou 2) indicando se ele deseja ou não
executar o algoritmo novamente. Se for informado o código 1 deve ser repetida a execução de todo o
algoritmo para permitir um novo cálculo, caso contrário ele deve ser encerrado. */