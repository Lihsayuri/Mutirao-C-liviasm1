// Refaça os dois exercícios anteriores, substituindo a distância de Manhattan pela distância Euclidiana. (pesquise)

#include <stdio.h>
#include <math.h>


typedef struct {
    int x;
    int y;
} ponto;

double euclidiana(ponto p1, ponto p2){
    double distancia;
    int diferenca1;
    int diferenca2;
    diferenca1 = p1.x - p2.x;
    diferenca2 = p1.y - p2.y;
    distancia = sqrt(pow(diferenca1,2) + pow(diferenca2,2));
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

    double distancia = euclidiana(p1, p2);

    printf("A distância Euclidiana é: %lf\n", distancia);
    
    }