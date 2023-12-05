/***
 * UFMT - Universidade Ferderal de Mato Grosso
 * Bacharelado em Ciencia da Computacao
 *
 * Disciplina de Estrutura de Dados I
 * Prof Ivairton M. Santos
 * 
 * Aluna: Fernanda Lima de Souza
 * 
 * Exercicio 21 - exemplo de alocacao dinamica de memoria
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, soma;
    int *pt_valor1, *pt_valor2;
    int *vetor;

    pt_valor1 = (int*) malloc( sizeof(int) );
    pt_valor2 = (int*) malloc( sizeof(int) );

    *pt_valor1 = 50;
    *pt_valor2 = 100;

    soma = *pt_valor1 + *pt_valor2;
    printf("Valor 1 = %d\nValor 2 = %d\nSoma = %d\n", *pt_valor1, *pt_valor2, soma);

    free(pt_valor1);
    free(pt_valor2);

    vetor = (int*) malloc( sizeof(int) *10);
    for (i=0; i<10; i++)
        vetor[i] = i+1;

    // Imprime vetor

    printf("Vetor = [");
    for (i=0; i<10; i++)
        printf("%d", vetor[i]);
    printf("]\n");

    pt_valor1 = &vetor[3];
    printf("Imprimindo por meio de PT_VALOR1: \n");
    printf("pos 0 = %d\n", pt_valor1[0]);
    printf("pos 1 = %d\n", pt_valor1[1]);
    printf("pos 2 = %d\n", pt_valor1[2]);
    printf("pos 3 = %d\n", pt_valor1[3]);

    free(vetor);

    return 0;
}
