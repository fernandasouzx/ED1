/***
 * UFMT -Ciencia da Computacao
 * Estrutura de Dados
 * Prof Ivairton M. Santos
 * Aluna = Fernanda Lima de Souza
 * Exercicio 16 - exemplo de codigo que manipula REGISTRO
 */

#include <stdio.h>
#include <stdlib.h>


struct est_ponto {
        int x;
        int y;
};
typedef struct est_ponto tipo_ponto;

struct est_reta{
    tipo_ponto p1;
    tipo_ponto p2;
};
typedef struct est_reta tipo_reta;

//Função Principal
int main(){

    tipo_ponto pontoA, pontoB;
    tipo_reta reta;

    // Le dados do ponto A
    printf("Informe o ponto A:");
    printf("x=");
    scanf("%d", &pontoA.x)
    printf("y=");
    scanf("%d", &pontoA.y)

    // Le dados do ponto B
    printf("Informe o ponto B:");
    printf("x=");
    scanf("%d", &pontoB.x)
    printf("y=");
    scanf("%d", &pontoB.y)

    //Cria uma reta com os pontos lidos
     reta.p1 = pontoA;
     reta.p2 = pontoB;

    //Imprime os dados da reta:

     printf("Sua reta é composta pelas extremidades:\n");
     printf ("{ (%d,%d) , (%d, %d)}\n" reta.p1.x, reta.p1.y, reta.p2.x, reta.p2.y);

    return 1;
}
