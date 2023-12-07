/***
 * UFMT -Ciencia da Computacao
 * Estrutura de Dados
 * Prof Ivairton M. Santos
 * Aluna: Fernanda Lima de Souza
 * Exercicio 22 - Matriz
 */

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int **matriz;
    int qtd_linhas, qtd_colunas, i, j, contador;
    printf("Informe quantas linhas voce quer: ");

    scanf("%d", &qtd_linhas);

    printf("Informe quantas colunas voce quer: ");
    scanf("%d", &qtd_colunas);


    //aloca matriz dinamicamente

    //aloca o indexador das linhas da matriz
    matriz = (int**) malloc (sizeof(int*) * qtd_linhas);
    //aloca cada linha da matriz e anexa ao indexador
    for(i=0; i<qtd_linhas; i++){
        matriz[i] = (int*) malloc(sizeof(int) * qtd_colunas);

    }
    
    // preenche a matriz com uma contagem especial
    contador = 1;
    for(i=0; i<qtd_linhas; i++){
        for (j=1; j<qtd_colunas; j++){
            matriz[i][j] = contador++;
        }
    }    

    printf("Matriz:\n");
        for(i=0; i<qtd_linhas; i++){
            printf("[ ");
            for (j=0; j<qtd_colunas; j++){
                printf("%d", matriz[i][j]);
            }
            printf(" ]\n");
        }
    
    
    for(i=0; i<qtd_linhas; i++){
        free(matriz[i]);
    free(matriz);
    
    return 0;
}
