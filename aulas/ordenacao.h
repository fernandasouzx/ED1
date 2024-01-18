/***
 * UFMT - Universidade Federal de Mato Grosso
 * Campus Universitario do Araguaia
 * Bacharelado em Ciencia da Computacao
 * 
 * Disciplina de ED I
 * Prof. Ivairton
 * 
 * Implementacao dos algorimtmos de ordenacao
 * Arquivo de cabeçalho ORDENACAO.H
 */

#ifndef __ORDENACAO_H__
#define __ORDENACAO_H__

#include<stdio.h>
#include<stdlib.h>

//Inclui bib que manipula lista com alocacao estatica
#include "lista.h"

//Prototipo dos metodos de ordenacao
void bubbleSort(tipo_lista *);
void shellSort(tipo_lista *);

#endif //FIM __ORDENACAO_H__