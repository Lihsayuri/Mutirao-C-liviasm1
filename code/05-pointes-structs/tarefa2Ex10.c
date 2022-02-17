// Escreva um programa completo que:
// usa scanf para ler dois inteiros dados pelo usuário;
// supondo que os dois inteiros representam a altura e a largura de um retângulo, usa uma função para calcular o perímetro e a área desse retângulo;
// usa printf para mostrar os dois resultados.

#include <stdio.h>

void perimetro_area(int altura, int largura, int *pperimetro, int *parea) {
        *pperimetro = 2*altura + 2*largura;
        *parea = altura* largura;
    }


int main() {
    int altura;
    int largura;
    int *pperimetro;
    int *parea;

    // variaveis apontadas por pperimetro e parea são inteiras.

    int perimetro = 0;
    int area = 0;

    pperimetro = &perimetro;
    // a variável apontada por pperimetro é o endereço de perimetro 
    // por isso se mudo o *pperimetro, vou estar mudando o perimetro;
    parea = &area;

    printf("Digite a altura do seu retângulo: ");
    scanf("%d", &altura);

    printf("Digite a largura do seu retângulo: ");
    scanf("%d", &largura);

    perimetro_area(altura, largura, pperimetro, parea);
    
    printf("Esse é o perimetro: %d\n", perimetro);
    printf("Esse é a área: %d\n", area);

    return 0;
}
