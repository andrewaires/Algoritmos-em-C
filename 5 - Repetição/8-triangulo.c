#include <stdio.h>

int main(){
    int lado1, lado2, lado3, confirmacao;


    printf("Digite os 3 lados do triângulo:\n");
    scanf("%d", &lado1);
    scanf("%d", &lado2);
    scanf("%d", &lado3);
    
    printf("Os dados informados estão corretos (1.sim 2.não)?\n");
    scanf("%d", &confirmacao);
    while (confirmacao == 2){
        printf("Digite os 3 lados do triângulo:\n");
        scanf("%d", &lado1);
        scanf("%d", &lado2);
        scanf("%d", &lado3);

        printf("Os dados informados estão corretos (1.sim 2.não)?\n");
        scanf("%d", &confirmacao);
    }

    if ((lado1 == lado2) && (lado1 == lado3)){
        printf("Equilátero");
    } else if ((lado1 != lado2) && (lado1 != lado3) && (lado2 != lado3)){
        printf("Escaleno");
    } else{
        printf("Isósceles");
    }

    return 0;

}

/*8.8. Reescreva o algoritmo do exercício 7.4 (triângulo equilátero, isósceles e escaleno) para que após a
leitura dos dados ( a medida dos 3 lados do triângulo) seja impressa a mensagem Os dados informados
estão corretos (1.sim/2.não)? solicitando ao usuário uma resposta. Caso a resposta seja 1 a execução deve
continuar normalmente escrevendo o tipo de triângulo, caso contrário a leitura dos dados (a medida dos 3
lados) deverá ser repetida. */