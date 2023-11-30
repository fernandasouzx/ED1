/***
 * UFMT -Ciencia da Computacao
 * Estrutura de Dados
 * Prof Ivairton M. Santos
 * Aluna = Fernanda Lima de Souza
 * Exercicio 12 - exemplo de codigo que manipula vetor
 */

#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 5
int main(){
    int vetor[TAMANHO];
    int i;
    //Preenche o vetor
    for (i=0;i<TAMANHO;i++){
        vetor[i]= TAMANHO + i;
        printf("%d",vetor[i];)
    }
    //imprime o vetor
    for (i=0;i<TAMANHO;i++){
        printf("%d",vetor[i];)
    }
    printf("]\n");
    return 1;
}