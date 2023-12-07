/***
 * UFMT - Universidade Ferderal de Mato Grosso
 * Bacharelado em Ciencia da Computacao
 *
 * Disciplina de Estrutura de Dados I
 * Prof Ivairton M. Santos
 * 
 * Aluna: Fernanda Lima de Souza
 * 
 * Exercicio 21 - Pilha com alocação 
 */

#include <stdio.h>
#include <stdlib.h>
#define N 10

struct est_pilha { 
    int pilha[N];
    int contador;
};
typedef struct est_pilha tipo_pilha;

//Prototipo das funcoes
void empilha(tipo_pilha*, int);
int topo(tipo_pilha);
int desempilha(tipo_pilha*);
void imprimePilha(tipo_pilha);

int main(){
    tipo_pilha minha_pilha;
    int valor;

    minha_pilha.contador = 0;

    empilha(&minha_pilha, 2);
    empilha(&minha_pilha, 5);
    empilha(&minha_pilha, 3);
    empilha(&minha_pilha, 1);

    imprimePilha(minha_pilha);
    

    valor = desempilha(&minha_pilha);
    printf("Valor desempilhado = %d\n", valor);
    valor = desempilha(&minha_pilha);
    printf("Valor desempilhado = %d\n", valor);
    valor = topo(&minha_pilha);
    printf("Valor no topo = %d\n", valor);


    imprimePilha(minha_pilha);


    return 0;
}

//Funcao que e=insere um novo valor na pilha
void empilha(tipo_pilha *pl, int valor){
    if (pl->contador < N) {
        pl-> pilha [ pl->contador++] = valor;
    }else{
        printf("[ERRO] Pilha cheia. Valor nao empilhado.\n");
    }
}


int desempilha(tipo_pilha *pl){
    int valor;

    if (pl->contador == 0 ){
        printf("[ERRO] Pilha vazia, nao é possivel desempilhar valor.\n");
        return -1;
    } else{
        valor = pl->pilha[ --pl->contador];
        //decrementa o contador
        return valor; // retorna o valor removido
    }
}


int topo(tipo_pilha pl){
    if(pilha.contador >0){
        return pilha.pilha[pilha.contador -1];
    } else{
        printf("Pilha vazia. Nao existe elemento no topo.\n")
        return -1;
    }

}

void imprimePilha(tipo_pilha pl){
    int i;
    printf("Pilha: (base) [");
    for (i=0; i<pl.contador; i++){
        printf("%d", pl.pilha[i]);
    }
    printf("] <-\n");
}
