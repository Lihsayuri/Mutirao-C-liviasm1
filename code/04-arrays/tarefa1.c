// Configurações do mutirão. Não mexer.
#include "../macros_correcoes.h"
#define LABNUM "lab4-"
#define SOLUTIONFILE "tarefa1.c"


#include <stdio.h>

int main(int argc, char *argv[]) {

	// long A[100];
	// printf("ESSE É %ld\n", A[3]);
	// scanf("%ld", &vetor[0]);



    /* TODO: conserte o código abaixo */
	long vetor[5];
	int i;

	for (i = 0; i < 5; i++){
		printf("Digite um valor para o seu vetor[%d]", i);
		scanf("%ld", &vetor[i]);
	}
	
	for(i = 0; i < 5; i++) {
		if (vetor[i] % 2 == 0) {
			printf("Par! ");
		}
		printf("i: %d, vetor[i]: %ld\n", i, vetor[i]);
	}

	return 0;
}


// Como podemos ver, o código compila, mas seu comportamento é indefinido por duas razões:

// O vetor não é inicializado com 0 quando é criado.
// A posição vetor[5] não é válida e pode resultar na leitura de dados inválidos da memória.

//TIRAR DUVIDA!

// Conserte o código acima. Você deverá ler as posições do vetor usando scanf em um for e depois consertar o for do exemplo acima para não acessar as posições indevidas.

// Sim, seu programa deverá ter dois for, um para leitura usando scanf que você deverá criar e o outro é o do exemplo acima, que deverá ser consertado.

// Conserte o código acima no arquivo tarefa1.c. Compile e teste sua solução usando make tarefa1.

