#include <stdio.h>

//  &abobrinha lê-se "endereço de abobrinha"
// int *p significa "variável apontada por p é inteira".

void sum_sub(int a, int b, int *psum, int *psub) {
        *psum = a + b;
        *psub = a - b;
    }

// Escreva um programa completo que:
// usa scanf para ler dois inteiros dados pelo usuário;
// usa sum_sub para calcular a soma e a subtração desses dois inteiros;
// usa printf para mostrar os dois resultados.

int main() {
    int n1;
    int n2;
    int *psum;
    int *psub;

    // variaveis apontadas por psum e psub são inteiras.

    int sum = 0;
    int sub = 0;

    psum = &sum;
    // a variável apontada por psum é o endereço de sum 
    // por isso se mudo o *psum, vou estar mudando o sum;
    psub = &sub;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    sum_sub(n1, n2, psum, psub);
    
    printf("Esse é o resultado da soma: %d\n", sum);
    printf("Esse é o resultado da subtração\n: %d", sub);

    return 0;
}
