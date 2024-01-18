#include "lista.h"

/**
 * @brief Funcao que insere no inicio da lista.
 * 
 * @param tipo_lista *lista - Estrutura da lista
 * @param int valor - valor a ser inserido na lista
 * 
 * @return int - verdadeiro se insercao com sucesso, falso caso contrário
 */
int insere_inicio_lista(tipo_lista *lst, int valor) {
    int pos;
    if (lst->contador < N) {
        pos = lst->contador;
        while (pos > 0) {
            lst->lista[pos] = lst->lista[pos-1];
            pos--;
        }
        lst->lista[0] = valor;
        lst->contador++;
        return lst->contador;
    } else {
        return 0;
    }
}

/**
 * @brief FUncao que insere o novo valor no fim da lista.
 * 
 * @param tipo_lista *lst - Estrutura da Lista 
 * @param int valor - Valor a ser inserido
 * @return int - verdadeiro se insercao com sucesso, falso caso contrario
 */
int insere_fim_lista(tipo_lista *lst, int valor) {
    if (lst->contador < N) {
        lst->lista[lst->contador++] = valor;
        return 1;
    }
    return 0;
}

/*
int insere_pos_lista(tipo_lista*, int, int);
int remove_inicio_lista(tipo_lista*);
int remove_fim_lista(tipo_lista*);
int remove_pos_lista(tipo_lista*, int);
int remove_valor_lista(tipo_lista*, int);
int busca_pos_lista(tipo_lista, int);
int busca_valor_lista(tipo_lista, int);
int busca_maior_lista(tipo_lista);
int busca_menor_lista(tipo_lista);
*/

/**
 * @brief Procedimento que imprime a lista.
 * 
 * @param tipo_lista lst - Estrutura da lista.
 */
void imprime_lista(tipo_lista lst) {
    int i;
    printf("Quantidade de elementos da lista = %d\n", lst.contador);
    printf("Lista: [ ");
    for (i=0; i<lst.contador; i++)
        printf("%d ", lst.lista[i]);
    printf("]\n");
}

