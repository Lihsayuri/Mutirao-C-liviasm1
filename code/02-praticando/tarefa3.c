// Configurações do mutirão. Não mexer.
#include "../macros_correcoes.h"
#define LABNUM "lab2-"
#define SOLUTIONFILE "tarefa3.c"

#include <stdio.h>
#include <math.h>    /* <---- precisa incluir!!! */

#define PI 3.141592

void print_trigo(int a) {
    double anguloRadianos;
    anguloRadianos = PI/180 * a; 
    printf("seno: %lf, cosseno: %lf\n", sin(anguloRadianos), cos(anguloRadianos));
}

int main() {
    int angle;

    printf("Digite um ângulo em graus: ");
    scanf("%d", &angle);

    print_trigo(angle);

    return 0;
}

// gcc -Og -Wall tarefa3.c -o tarefa3-sem-make -lm -lsystemd