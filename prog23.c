/***
 * UFMT - Universidade Ferderal de Mato Grosso
 * Bacharelado em Ciencia da Computacao
 *
 * Disciplina de Estrutura de Dados I
 * Prof Ivairton M. Santos
 * 
 * Aluna: Fernanda Lima de Souza
 * 
 * Exercicio 23 - Fila com alocação 
 */

#include <stdio.h>
#include <stdlib.h>
#define N 10

struct est_fila { 
    int fila[N];
    int contador;
};
typedef struct est_fila tipo_fila;

void insereFila(tipo_fila*, int);
int removeFila(tipo_fila*);
void imprimeFila(tipo_fila);

int main(){
    tipo_fila minha_fila;
    int valor;

    minha_fila.contador = 0;

    insereFila(&minha_fila, 7);
    insereFila(&minha_fila, 1);
    insereFila(&minha_fila, 3);
    insereFila(&minha_fila, 9);

    imprimeFila(minha_fila);

    valor = removeFila(&minha_fila);
    printf("Valor removido da Fila = %d\n", valor);
    valor = removeFila(&minha_fila);
    printf("Valor removido da Fila = %d\n", valor);


    imprimeFila(minha_fila);


    return 0;
}
void insereFila(tipo_fila *fl, int valor){
    if (fl->contador < N) {
        fl-> fila [ fl->contador++] = valor;
    }else{
        printf("[ERRO] Fila cheia. Valor nao inserido.\n");
    }
}


int removeFila(tipo_fila *fl){
int valor, i;
//verifica se a fila esta vazia
if (fl-> contador == 0 ){
    printf("[ERRO] Fila vazia, nao é possivel remover valor.\n");
    return -1;
} else{
    valor = fl->fila[0];
    //Reposiciona os valores da fila
    for (i=0; i<fl->contador - 1; i++) //vai ate a penultima
        fl->fila[i] = fl->fila[i+1];
    fl->contador--;//decrementa o contador
    return valor; // retorna o valor removido
}
}

void imprimeFila(tipo_fila fl){
    int i;
    printf("FILA: <-[");
    for (i=0; i<fl.contador; i++){
        printf("%d", fl.fila[i]);
    }
    printf("] <-\n");
}
