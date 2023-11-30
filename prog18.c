/***
 * UFMT -Ciencia da Computacao
 * Estrutura de Dados
 * Prof Ivairton M. Santos
 * Aluna = Fernanda Lima de Souza
 * Exercicio 18 - exemplo Funcao com parametro
 */

#include <stdio.h>
#include <stdlib.h>

// Prototipo das funcoes

int func_soma(int, int);

int main(){
    int valor1, valor2, total;

    valor1 = 2;
    valor2 = 4;

    total = func_soma(valor1, valor2);
    printf("Total = %d\n", total);
    return 1;
}
// Funcao de soma
int func_soma(int v1, int v2){
    int soma;
    soma = v1 + v2;
    return soma;

}
