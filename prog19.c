/***
 * UFMT -Ciencia da Computacao
 * Estrutura de Dados
 * Prof Ivairton M. Santos
 * Aluna = Fernanda Lima de Souza
 * Exercicio 19 - exemplo de PONTEIRO
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor;
    int *pt_valor;

    valor = 5;
    pt_valor = &valor;
    
    printf("Valor = %d\n", valor);
    printf("Endereço da variavel VALOR = %d\n", &valor);
    printf("Valor em pt_valor = %d\n", pt_valor);

    // Acessa a posicao de memoria do ponteiro
    printf("Acesso a posicao de memoria de pt_valor = %d\n", *pt_valor);
    return 1;
}
