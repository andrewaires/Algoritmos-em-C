#include <stdio.h>

int main(){
    int i, intervalo, fora;
    int valores[10];

    fora = 0;
    intervalo = 0;

    printf("Digite 10 valores com espaço entre eles:\n");
    for (i = 0; i < 10; i++){
        scanf("%d", &valores[i]);
    }

    for (i = 0; i < 10; i++){
        if ((valores[i] < 10) || (valores[i] > 20)){
            fora += 1;
        } else{
            intervalo += 1;
        }
    }

    printf("Dentro do intervalo: %d\n", intervalo);
    printf("Fora do intervalo: %d\n", fora);
    

    return 0;

}

/*11.2 Ler 10 valores e contar quantos estão no intervalo [10,20] e quantos deles estão fora deste intervalo.
Escrever o resultado das duas contagens.*/