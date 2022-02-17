#include <stdio.h>

typedef struct {
    int x;
    int y;
} ponto;


int main() {

    ponto p;
    ponto *pp;

    pp = &p;

    // PRIMEIRA OPÇÃO:

    (*pp).x = 10;
    (*pp).y = 20;

    // SEGUNDA OPÇÃO [USA ESSA, É A MELHOR]:

    pp->x = 10;
    pp->y = 20;


    return 0; 
}


// Por que pp.x não faria sentido no exemplo acima?
// Não faria sentido, pois pp apenas está guardando o endereço do ponto p. E, portanto, não teria o x e nem o y do struct. 
// Pois pp é um ponteiro, e para acessaro valor que um ponteiro aponta temos que usar o *. Caso contrário estaríamos alterando o para onde o ponteiro aponta.

// -------------------------------------------------------------------