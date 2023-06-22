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

        while ((entrada != 1) && (entrada != 2)){
            printf("Novo cálculo (1.sim 2.não)?\n");
            scanf("%d", &entrada);
        }
    
    }
    

    return 0;
}

/*8.7.Reescreva o algoritmo do exercício 8.6 validando a resposta do usuário para a pergunta Novo Cálculo
(1.sim 2.não)? (aceitar apenas os código 1 ou 2).*/