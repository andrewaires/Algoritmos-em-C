#include <stdio.h>
#include <string.h>
#include <ctype.h>

void trim(char *entrada){
    int start = 0, end;

    while(isspace(entrada[start])){
        start++;
    }

    if (entrada[start] == '\0'){
        entrada[0] = '\0';
        return;
    }

    end = strlen(entrada) - 1;
    while(isspace(entrada[end])){
        end--;
    }
    
    int i, j = 0;
    for (i = start; i <= end; i++){
        entrada[j] = entrada[i];
        j++;
    }
    entrada[j] = '\0';
}

int main(){
    char entrada[100];
    
    printf("Digite um texto:\n");
    fgets(entrada, sizeof(entrada), stdin);

    
    if (entrada[strlen(entrada) - 1] == '\n'){
        entrada[strlen(entrada) - 1] = '\0';
    }

    trim(entrada);

    printf("\n%s", entrada);


    return 0;
}

/*Uma operação muito comum de manipulação de strings é
conhecida como TRIM. Trata-se de uma função que recebe uma
string e remove todos os espaços no início e no fim da string.
Elabore uma função que realiza esta tarefa. */