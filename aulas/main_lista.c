/**
 * Universidade Federal de Mato Grosso
 * Bacharelado em Ciencia da Computacao
 * @file main.c
 * @author Prof. Ivairton
 * @brief Arquivo para testes.
 * @version 0.1
 * @date 2023-12-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<stdio.h>
#include<stdlib.h>

#include "lista.h"
#include "ordenacao.h"

int main(int argc, char *argv[]) {

    tipo_lista minha_lista;
    minha_lista.contador = 0;

    insere_fim_lista(&minha_lista, 40);
    insere_fim_lista(&minha_lista, 50);
    insere_fim_lista(&minha_lista, 60);
    insere_fim_lista(&minha_lista, 12);
    insere_fim_lista(&minha_lista, 75);
    insere_fim_lista(&minha_lista, 33);
    insere_fim_lista(&minha_lista, 11);
    insere_fim_lista(&minha_lista, 24);
    insere_fim_lista(&minha_lista, 56);

    printf("Lista Desordenada!");
    imprime_lista(minha_lista);

    bubbleSort(&minha_lista);
    
    printf("Lista Ordenada!!");
    imprime_lista(minha_lista);

    //shellSort(&minha_lista);

    return EXIT_SUCCESS;
}