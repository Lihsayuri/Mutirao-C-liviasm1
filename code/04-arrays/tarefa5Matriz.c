#include <stdio.h>

/* TODO: implemente sua função conta_1 aqui */

int somaColunas(long mat[5][4]){
    int soma = 0;
    int maiorValor = 0;
    int indiceMaior = 0;

    for (int i = 0; i < 4; i++){ // passando pelas colunas
        int somaColunas = 0;
        for (int j = 0; j < 5; j++){
            soma+= mat[j][i];
            somaColunas+= mat[j][i];
        }
        printf("Soma da coluna %d: %d\n", i, somaColunas);
        if (somaColunas > maiorValor){
            maiorValor = somaColunas;
            indiceMaior = i;
        }

    }

    printf("Esse é o resultado da soma total %d\n", soma);
    printf("O maior valor de colunas é %d\n", maiorValor);
    printf("O índice da coluna de maior valor é: %d\n", indiceMaior);

    return soma;
    
}

int main() {
    long matriz[5][4] = {
    {1, 2, 3, 6},
    {4, 5, 1, 7},
    {2, 4, 1, 3},
    {4, 3, 9, 5},
    {2, 5, 6, 2}
    };

    somaColunas(matriz);

    


    return 0;
}
