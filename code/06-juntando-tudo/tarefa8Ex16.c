#include <stdio.h>
#include <math.h>

typedef struct {
    int x;
    int y;
} ponto;


int medio(ponto a, ponto b, ponto *m){
    int xm;
    int ym;
    if (a.x != b.x && a.y != b.y){
        xm = (a.x + b.x)/2;
        ym = (a.y + b.y)/2;
        (*m).x = xm;
        (*m).y = ym;
        return 1;
    } else{
        return 0;
    }

}


int main(){
    ponto p1, p2;
    ponto *ppm;
    ponto pm;

    ppm = &pm; 

    printf("Digite o x do primeiro ponto: ");
    scanf("%d", &p1.x);

    printf("Digite o y do primeiro ponto: ");
    scanf("%d", &p1.y);

    printf("Digite o x do segundo ponto: ");
    scanf("%d", &p2.x);

    printf("Digite o y do segundo ponto: ");
    scanf("%d", &p2.y);

    int resultado = medio(p1, p2, ppm);

    printf("Esse é o retornado: %d\n", resultado);

    if (resultado == 1){
        printf("Esse é o resultado do ponto médio: (%d, %d)\n", pm.x, pm.y);

    }

}