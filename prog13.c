/***
 * UFMT -Ciencia da Computacao
 * Estrutura de Dados
 * Prof Ivairton M. Santos
 * Aluna = Fernanda Lima de Souza
 * Exercicio 13 - exemplo de codigo que manipula matriz
 */

#include <stdio.h>
#include <stdlib.h>
#define t_linha 3
#define t_coluna 4

int main(){
    int i,j;
    int matriz[t_linha][t_coluna];

    contador = 1;
    
    for(i=0; i<t_linha; i++) {
        for(j=0; J<t_coluna;J++){
            matriz[i][j]=contador++; /
    
        }
    }
    printf("Matriz\n");

    for(i=0;i,t_linha;i++) {
        printf("[");
        for(j=0; j<t_coluna;j++){
            printf("%d", matriz[i][j]);
            printf(']\n');
        }
    }
    return 1;
}