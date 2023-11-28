/***
 * UFMT -Ciencia da Computacao
 * Estrutura de Dados
 * Aluna = Fernanda Lima de Souza
 * Exercicio 10 -Exemplo de operadores diversos
 */

#include <stdio.h>
#include <stdlib.h>

#define PI 3.14
int main(){
    int idade, dirige;
    printf("Informe sua idade: ");
    scanf("%d", &idade);
    printf("Sabe dirigir? (1)sim, (2)nao:");
    scanf("%d", &dirige);

    if (idade >= 18 && dirige == 1){
        printf("Vamos viajar!\n");
    }
    else if (idade >= 18 && dirige == 2) {
        printf("Vai tirar a carteira!\n ");
    }

    printf()

    return 1;
}