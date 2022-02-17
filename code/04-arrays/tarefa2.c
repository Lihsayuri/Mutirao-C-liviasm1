// Configurações do mutirão. Não mexer.
#include "../macros_correcoes.h"
#define LABNUM "lab4-"
#define SOLUTIONFILE "tarefa2.c"


#include <stdio.h>

/* TODO: implemente sua função soma aqui */
double soma(double arr[], int n){
    double s = 0;
    if (n > 1){
        for (int i = 0; i < n; i++) {
            s += arr[i];
        }
    }
    return s;
}

int main() {
    double arr1[] = {1, 2, 3, 4, 5, 6};
    assertEquals("Chamada simples", soma(arr1, 6), 21);
    assertEquals("Subvetor", soma(arr1, 2), 3.0);
    assertEquals("Subvetor II", soma(arr1+2, 3), 12.0);
    assertEquals("Array vazio", soma(arr1, 0), 0.0);
    assertEquals("Tamanho inválido", soma(arr1, -1), 0.0);

    printSummary

    return 0;
}

// Abra-o e implemente, no local indicado, a função soma com a assinatura acima.
// Lembre-se que em C arrays não conhecem seu tamanho, então é de sua responsabilidade acessar somente elementos válidos 
// e checar se o vetor não está vazio (ou seja, n < 1)

// O arquivo usado acima contém vários testes na função main. Leia a função main e escreva abaixo a notação usada para inicializar um 
// array com valores constantes. Como você inicializaria um vetor de int com os valores 0, 2, 3, 2, 5?

// int vec[] = {0, 2, 3, 2, 5};
