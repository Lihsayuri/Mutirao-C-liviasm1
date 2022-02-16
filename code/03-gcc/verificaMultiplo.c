#include <stdio.h>
#include <math.h>    /* <---- precisa incluir!!! */
#include <stdbool.h>



void verificaMultiplo() {
    int num1;
    int num2;

    bool continuaLoop = true;

    while (continuaLoop)
    {
        // int num1;
        // int num2;

        printf("Digite o primeiro número: ");
        scanf("%d", &num1);

        printf("Digite o segundo número: ");
        scanf("%d", &num2);

        if (num1 == 0 && num2 == 0){
            printf("Xii, os dois números são 0!\n");
            continuaLoop = false;
            break;
        }

        else if (num2 == 0){
            printf("Erro!\n");
        } 
        else if (num1 % num2 == 0){
            printf(" %d é múltiplo de %d\n", num1, num2);
        }
       
    }

}



int main() {
    
    verificaMultiplo();
    return 0;

}