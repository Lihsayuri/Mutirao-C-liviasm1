// Configurações do mutirão. Não mexer.
#include "../macros_correcoes.h"
#define LABNUM "lab2-"
#define SOLUTIONFILE "tarefa7.c"

#include <stdio.h>


void arvore(int numLinhas){
    for(int i = 1; i <= numLinhas; i++){     
        int barra1 = 0;
        int barra2 = 0;
        int espacos = 0;

        for (int espaco = 0; espaco <= numLinhas - i; espaco++){
            printf(" ");
        }

        while (barra1 < i-1){
            printf("/");
            barra1++;
        } 
        printf("|");

        while (barra2 < i-1){
            printf("\\");
            barra2++;
        }
        printf("\n");
    }
        
    

}

// TODO implemente seu programa aqui
int main() {

    arvore(10);
    return 0;
}
