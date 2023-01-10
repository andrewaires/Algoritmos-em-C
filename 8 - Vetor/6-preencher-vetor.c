#include <stdio.h>

#define tam 10

int main(){
    int i;
    int vetX[tam]; 
    int vetY[tam];

    for (i = 0; i < tam; i++){
        printf("Digite um valor:\n");
        scanf("%d", &vetX[i]);
    }
    
    for (i = 0; i < tam; i++){
        if (i % 2 == 0){
            vetY[i] = vetX[i] * 2;
        } else{
            vetY[i] = vetX[i] * 3;
        }
    }

    for (i = 0; i < tam; i++){
        printf("%d ", vetY[i]);
    }

    return 0;
}

/*14.6 Ler um vetor X de 10 elementos. Crie um vetor Y da seguinte forma. Os elementos de ordem par de
Y (elementos com índice 0,2,4,6,8) receberão os respectivos elementos de X multiplicados por 2. Os
elementos de ordem ímpar de Y (elementos com índices 1,3,5,7,9) receberão os respectivos elementos de
X multiplicados por 3. Escrever o vetor Y.
*/