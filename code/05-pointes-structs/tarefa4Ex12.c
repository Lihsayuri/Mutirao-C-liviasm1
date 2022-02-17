// Escreva um programa completo que:

// usa scanf para ler quatro inteiros dados pelo usuário;

// supondo que esses inteiros representam as coordenadas de dois pontos cartesianos, usa a função anterior para calcular a distância de Manhattan;

// usa printf para mostrar o resultado.

// O printf deve ser realizado dentro na função main!

#include <stdio.h>


typedef struct {
    int x;
    int y;
} ponto;

int modulo(int num){
    int new_num;
    if (num < 0){
        new_num = -1*num;
    }
    else{
        new_num = num;
    }
    return new_num;
}

int manhattan(ponto p1, ponto p2){
    int distancia;
    distancia = modulo(p1.x-p2.x) + modulo(p1.y-p2.y);
    return distancia;

}


int main() {
    
    ponto p1, p2;

    printf("Digite o x do primeiro ponto: ");
    scanf("%d", &p1.x);

    printf("Digite o y do primeiro ponto: ");
    scanf("%d", &p1.y);

    printf("Digite o x do segundo ponto: ");
    scanf("%d", &p2.x);

    printf("Digite o y do segundo ponto: ");
    scanf("%d", &p2.y);

    int distancia = manhattan(p1, p2);

    printf("A distância Manhattan é: %d\n", distancia);
    
    }