/***
 * UFMT -Ciencia da Computacao
 * Estrutura de Dados
 * Prof Ivairton M. Santos
 * Aluna = Fernanda Lima de Souza
 * Exercicio 17 - exemplo de codigo que manipula REGISTRO
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum tipo_aluno{ graduacao, pos_graduacao, visitante};

struct est_aluno{
    char nome[120];
    int RA;
    enum tipo_aluno tipo;

};
typedef struct est_aluno tipo_aluno;

int main(){
    tipo_aluno aluno1, aluno2;

    strcpy(aluno1.nome,"João");
    aluno1.RA = 1111;
    aluno1.tipo = graduacao;

    strcpy(aluno2.nome,"Maria");
    aluno2.RA = 2222;
    aluno2.tipo = pos_graduacao;

    printf("Aluno:\n\tNome:%s; RA%d; Tipo%d\n", aluno1.nome, aluno1.RA, aluno1.tipo);
    printf("Aluno:\n\tNome:%s; RA%d; Tipo%d\n", aluno2.nome, aluno2.RA, aluno2.tipo);

    return 1;
}
