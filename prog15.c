/***
 * UFMT -Ciencia da Computacao
 * Estrutura de Dados
 * Prof Ivairton M. Santos
 * Aluna = Fernanda Lima de Souza
 * Exercicio 15 - exemplo de codigo que manipula REGISTRO
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam_str 120
#define tam_vet 10

struct estrutura_produto {
    char nome[tam_str];
    int codigo;
    float preco;

};
typedef struct estrutura_produto tipo_produto

int main(){
    int i;
    //struct estrutura_produto prod1, prod2, prod3; // declara 2 variaveis que sao do tipo definido na estrutura struct
    //struct estrutura_produto vet_produtos[tam_vet];
    tipo_produto prod1, prod2, prod3, vet_produtos[tam_vet];

    strcpy(prod1.nome,"Arroz");
    prod1.codigo = 100;
    prod1.preco = 20.0;

    strcpy(prod2.nome, "Feijao");
    prod2.codigo= 200;
    prod2.preco = 8.0;

    prod3 = prod1;
    prod3.codigo += 10;
    prod3.preco = 27.0;

    //Imprime produtos
    printf("Produto 1:\n\t");
    printf("%s | %d| %.2f\n", prod1.nome, prod1.codigo, prod1.preco);

    printf("Produto 2:\n\t");
    printf("%s | %d | %.2f\n", prod2.nome, prod2.codigo, prod2.preco);

    printf("Produto 3:\n\t");
    printf("%s | %d | %.2f\n", prod3.nome, prod3.codigo, prod3.preco);

    //Usa o vetor de produtos
    vet_produtos[0] = prod1;
    vet_produtos[1] = prod2;
    vet_produtos[2] = prod3;

    //laco que imprime os produtos do vetor
    for(i=0; i<3;i++){
        printf("Produto %d: %s; %d; %.2f\n",
         i+1,
         vet_produtos[i].nome,
         vet_produtos[i].codigo,
         vet_produtos[i].preco);
    }

    return 1;
}
