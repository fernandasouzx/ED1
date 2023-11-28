/***
 * UFMT -Ciencia da Computacao
 * Estrutura de Dados
 * Aluna = Fernanda Lima de Souza
 * Exercicio 9
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade;
    int nota, aprovado; // aprovado sera 1 se veradeiro, ezero 
    printf("Informe sua idade: ");
    scanf("%d", &idade);

    idade < 18 ? //Exp1 (antecede o ?)
        printf("Vc é menor de idade!\n") :
        printf("Vc ja pode ser preso!\n"); 

    printf("Informe sua nota final:\n");
    scanf("%d", &nota);

    aprovado = (nota >= 5) ? 1: 0;
    if (aprovado)
        printf("Parabens!!\n");
    else
        printf("Deu ruim!! :(\n");
    return 1;
}