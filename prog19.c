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

    valor = 100;
    printf("2° acesso a posicao de memoria de pt_valor = %d\n", *pt_valor);

    *pt_valor = 500;
    printf("Novo valor de VALOR = %d\n", valor);
    return 1;
}
