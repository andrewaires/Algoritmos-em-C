#include <stdio.h>

#define tam 10

int main(){
    int i;
    int vetD[tam]; 
    int vetE[tam];

    for(i = 0; i < tam; i++){
        printf("Digite um valor:\n");
        scanf("%d", &vetD[i]);
    }

    for(i = 0; i < tam; i++){
        vetE[i] = vetD[i];
    }
    
    for(i = 0; i < tam; i++){
        printf("%d ", vetD[i]);
    }
    printf("\n");

    for(i = 0; i < tam; i++){
        printf("%d ", vetE[i]);
    }
    printf("\n");

    return 0;
}

/*14.5 Ler um vetor D de 10 elementos. Crie um vetor E, com todos os elementos de D (na mesma ordem).
Escrever todo o vetor D e logo após todo o vetor E*/