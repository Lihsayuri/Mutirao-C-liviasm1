// Escreva, do zero, um programa que

// Leia um inteiro n do terminal (número de elementos do vetor)
// Leia n números fracionários e guardá-los em um array.
// Chame uma função para calcular a média do vetor.
// Imprima a média calculada.
// Seu programa deverá calcular a média usando uma função avg escrita por você mesmo e pode supor que n < 100. 
// Para facilitar seus testes, escreva dois arquivos de entrada e use < para rodar o programa.

// Atenção, em C não podemos fazer isso:


//     int s;
//     scanf("%d", &s);
//     long vec[s];
// C não suporta alocar memória dinâmica para um vetor. Sugerimos vocês criarem um vetor de uma 
// tamanho maior que o usuário possa querer usar. Existe uma solução, mas vamos ver mais para frente (malloc).

#include <stdio.h>
#include <math.h>


/* TODO: implemente sua função conta_1 aqui */

double mediaCalcula(double vector[100], int n){
    double soma = 0;
    double media = 0;

    for(int i = 0; i < n; i++){
        soma+= vector[i];
    }
    media = soma/n;
    printf("Essa é a soma: %lf\n", soma);
    return media;
}

double varianciaCalcula(double media, double vector[100], int n){
    double somatorio;
    somatorio = 0;
    double diferenca = 0;
    double variancia = 0;

    for (int i = 0; i < n; i++){
        diferenca = (vector[i]-media);
        somatorio+= pow(diferenca, 2);
    }

    variancia = somatorio/n;

    return variancia;
}


void mediaVetor(int n){
    double vector[100]; 
    double num;
    double soma;
    soma = 0;

    for (int i = 0; i < n ; i++){
        printf("Digite um valor ");
        scanf("%lf", &vector[i]);
    }

    double media = mediaCalcula(vector, n);

    printf("Esse é o valor da media: %lf\n", media);

    double variancia = varianciaCalcula(media, vector, n);

    printf("Essa é a variancia:%lf\n", variancia);

}

int main() {
    int n;
    printf("Digite a quantidade de números que você vai digitar: ");
    scanf("%d", &n);

    mediaVetor(n);

    return 0;
}
