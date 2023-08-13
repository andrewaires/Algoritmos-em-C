#include <stdio.h>

int main(){
	int base, altura;
	float area;

	printf("Digite o valor da base: ");
	scanf("%d", &base);
	printf("Digite o valor da altura: ");
	scanf("%d", &altura);
	
	area = base * altura;
	printf("A área é %.2f\n", area);

	return 0;	
}

// 1) Escreva um algoritmo para ler as dimensões de um retângulo (base e altura), calcular e escrever a área do retângulo.