// Configurações do mutirão. Não mexer.
#include "../macros_correcoes.h"
#define LABNUM "lab4-"
#define SOLUTIONFILE "tarefa3.c"


#include <stdio.h>

/* TODO: implemente sua função conta_a aqui */

// Em C podemos usar: \0, NULL, e 0 para representar a mesma coisa!

// Uma string em C nada mais é do que um array do tipo char cujo último elemento é um \0. As duas linhas abaixo tem o mesmo efeito.


// char arr[] = "insper";
// char arr2[] = {'i', 'n', 's', 'p', 'e', 'r', '\0'};
// Claramente a primeira é muito mais conveniente ;)

// char str[10] = "world!";
// printf("hello %s\n", str);

// #define STRING_LEN 10          // Tamanho da string 0..9

// char str[STRING_LEN];
// fgets(str, STRING_LEN, stdin); // precisamos passar o tamanho máximo
//                                // + 1 da nossa string.


// ------------------------------------------------------------------------------------------------

// Crie uma função que:

// recebe uma string de tamanho máximo 100
// conte o número de vezes que a letra "a" aparece
// retorne este valor.
// Implemente no arquivo tarefa3.c e teste com make tarefa3

int conta_a(char str[]){
    int conta = 0;
    for (int i = 0; i < 100; i++){
        if (str[i] != '\0' && str[i] == 'a'){
            conta += 1;
        } else if (str[i] == '\0'){
            break;
        }
    }

    return conta;
}

int main() {
    
    assertEquals("String \"abc\"", conta_a("abc"), 1);
    assertEquals("String \"bccdsfsd123124 sfdf 234\"", conta_a("bccdsfsd123124 sfdf 234"), 0);
    assertEquals("String \"1234354yrkgjdlfjdlk\"", conta_a("1234354yrkgjdlfjdlk"), 0);

    // 'a' != 'A' 
    assertEquals("String \"aAa\"", conta_a("aAa"), 2);

    assertEquals("String \"a a a a  \"", conta_a("a a a a"), 4);

    
    printSummary

    return 0;
}
