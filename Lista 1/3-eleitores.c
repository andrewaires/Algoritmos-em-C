#include <stdio.h>
int main(){
    int eleitores, brancos, nulos, validos;
    float per_brancos, per_nulos, per_validos;

    printf("Digite o número total de eleitores: ");
    scanf("%d", &eleitores);
    printf("Digite o número de votos brancos: ");
    scanf("%d", &brancos);
    printf("Digite o número de votos nulos: ");
    scanf("%d", &nulos);
    printf("Digite o número de votos válidos: ");
    scanf("%d", &validos);

    per_brancos = ((float)brancos / eleitores) * 100;
    per_nulos = ((float)nulos / eleitores) * 100;
    per_validos = ((float)validos / eleitores) * 100;

    printf("A quantidade de votos brancos, nulos e válidos é, respectivamente: %.0f%%, %.0f%%, %.0f%%\n", per_brancos, per_nulos, per_validos);

    return 0;
}

// 3) Escreva um algoritmo para ler o número total de eleitores de um município, o número de votos brancos, nulos e válidos. Calcular e escrever o percentual que cada um representa em relação ao total de eleitores.