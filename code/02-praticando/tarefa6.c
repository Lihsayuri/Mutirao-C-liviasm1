// Configurações do mutirão. Não mexer.
#include "../macros_correcoes.h"
#define LABNUM "lab2-"
#define SOLUTIONFILE "tarefa6.c"

#include <stdio.h>

// Escreva uma função que recebe um inteiro n e, para cada inteiro i entre 1 e n, imprime uma string conforme a seguinte regra:

// "nenhum" se i não for múltiplo de 3 nem 5;

// "apenas por três" se i for múltiplo de 3 mas não de 5;

// "apenas por cinco" se i for múltiplo de 5 mas não de 3;

// "por três e por cinco" se i for múltiplo de 3 e 5.

// Escreva duas versões: uma usando whiles e outra usando fors.


void opcao1(int num){
    int i = 1;
    while (i <= num){
        if( i % 3 == 0 && i % 5 == 0){
            printf("por três e por cinco   \n");
        }
        else if(i % 3 == 0){
            printf("apenas por três   \n");
        } 
        else if(i % 5 == 0){
            printf("apenas por cinco   \n");
        } else{
            printf("nenhum   \n");
        }
        i++;
    }
}

void opcao2(int num){
    for (int i = 1; i <= num; i++){
        if( i % 3 == 0 && i % 5 == 0){
            printf("por três e por cinco  \n");
        }
        else if(i % 3 == 0){
            printf("apenas por três  \n");
        } 
        else if(i % 5 == 0){
            printf("apenas por cinco   \n");
        } else{
            printf("nenhum   \n");
        }

    }
}


// TODO implemente seu programa aqui
int main() {

    opcao1(15);
    opcao2(15);

    return 0;
}

// nenhum   
// nenhum   
// apenas por três   
// nenhum   
// apenas por cinco   
// apenas por três   
// nenhum   
// nenhum   
// apenas por três   


