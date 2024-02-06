/***
 * UFMT - Universidade Federal de Mato Grosso
 * Campus Universitario do Araguaia
 * Bacharelado em Ciencia da Computacao
 * 
 * Disciplina de ED I
 * Prof. Ivairton M. Santos
 * 
 * Alunos: Fernanda Lima de Souza
 *         Guilherme da Silva Ferraz
 * 
 * Implementacao da função principal
 * Arquivo de cabeçalho MAIN.C
***/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bib.h"
#include "myFuncoes.c"

int main() {
    int qtd=6,mil=1000,dez_mil=10000,cem_mil=100000;
    
    //Nome dos arquivos
    //mudar conforme desejar 
    char texto1[]="1000";
    char texto2[]="10000";
    char texto3[]="100000";

    //chamando a funcao para gerar os arquivos e gravar os numeros aleatoriamente! 
    //gera_arquivo(qtd,mil,texto1);
	//gera_arquivo(qtd,dez_mil,texto2);
	//gera_arquivo(qtd,cem_mil,texto3);

    
    //CRIAÇÃO DA LISTA-----------------------------------------------------------------------------------------
  
    // Cria minha_lista 1000
    tipo_lista lista1_1000;
    tipo_lista lista2_1000;
    tipo_lista lista3_1000;
    tipo_lista lista4_1000;
    tipo_lista lista5_1000;

    //Cria Lista 10 000.
    tipo_lista lista1_10000;
    tipo_lista lista2_10000;
    tipo_lista lista3_10000;
    tipo_lista lista4_10000;
    tipo_lista lista5_10000;

    //Cria Lista 100 000.
    tipo_lista lista1_100000;
    tipo_lista lista2_100000;
    tipo_lista lista3_100000;
    tipo_lista lista4_100000;
    tipo_lista lista5_100000;

    //INICIALIZAÇÃO DA LISTA ------------------------------------------------------------------------------
    
    //Inicialização com 1000
    inicializaLista(&lista1_1000,1000);
    inicializaLista(&lista2_1000,1000);
    inicializaLista(&lista3_1000,1000);
    inicializaLista(&lista4_1000,1000);
    inicializaLista(&lista5_1000,1000);

    //Inicialização com 10 000
    inicializaLista(&lista1_10000,10000);
    inicializaLista(&lista2_10000,10000);
    inicializaLista(&lista3_10000,10000);
    inicializaLista(&lista4_10000,10000);
    inicializaLista(&lista5_10000,10000);

    //Inicialização a Lista com 100 000
    inicializaLista(&lista1_100000,100000);
    inicializaLista(&lista2_100000,100000);
    inicializaLista(&lista3_100000,100000);
    inicializaLista(&lista4_100000,100000);
    inicializaLista(&lista5_100000,100000); 
    

 //-----------LEITURA DOS ARQUIVOS ------------------------------------------------------
    //Leitura dos arquivos de 1000
    le_arquivo("1000-arq1.txt",&lista1_1000);
    le_arquivo("1000-arq2.txt",&lista2_1000);
    le_arquivo("1000-arq3.txt",&lista3_1000);
    le_arquivo("1000-arq4.txt",&lista4_1000);
    le_arquivo("1000-arq5.txt",&lista5_1000);

    //Leitura dos arquivos de 10 000
    le_arquivo("10000-arq1.txt",&lista1_10000);
    le_arquivo("10000-arq2.txt",&lista2_10000);
    le_arquivo("10000-arq3.txt",&lista3_10000);
    le_arquivo("10000-arq4.txt",&lista4_10000);
    le_arquivo("10000-arq5.txt",&lista5_10000);

    //Leitura dos arquivos de 100 000
    le_arquivo("100000-arq1.txt",&lista1_100000);
    le_arquivo("100000-arq2.txt",&lista2_100000);
    le_arquivo("100000-arq3.txt",&lista3_100000);
    le_arquivo("100000-arq4.txt",&lista4_100000);
    le_arquivo("100000-arq5.txt",&lista5_100000);

    printf("\n\n");
    printf("( .∧＿∧)                 \n");
    printf("  (･ω･｡)つ━ ☆・*。       \n");
    printf("  ⊂   ノ       ・゜+.    \n");
    printf("  しーＪ       °。+ *´¨)  \n");
    printf("                         \n");
    printf(".· ´¸.·*´¨) ¸.·*¨)       \n");
    printf("                         \n");
    printf("(¸.·´ (¸.·’*☆ Seja bem-vindo ao nosso trabalho de métodos de ordenação de dados!\n\n");

    //MENU PARA ESCOLHER O MÉTODO DE ORDENAÇÃO
    int escolha;
    double tempo;
    unsigned long long int trocas = 0;
    clock_t begin;
    clock_t end;
    printf("Escolha o método pelo qual você deseja ordenar a lista:: \n\n");

    printf("1 - BUBBLE SORT\n");
    printf("2 - SHELL SORT\n");
    printf("3 - INSERT SORT\n");
    printf("4 - MERGE SORT\n");
    printf("5 - QUICK SORT\n\n");

    scanf("%d", &escolha);
    switch (escolha) {
         case 1:
            printf("\nOrdenando a lista por BUBBLE SORT...\n");
            trocas = 0;
            begin = clock();

            //1000
            trocas += BubbleSort(&lista1_1000);
            trocas += BubbleSort(&lista2_1000);
            trocas += BubbleSort(&lista3_1000);
            trocas += BubbleSort(&lista4_1000);
            trocas += BubbleSort(&lista5_1000);
            //10 000
            trocas += BubbleSort(&lista1_10000);
            trocas += BubbleSort(&lista2_10000);
            trocas += BubbleSort(&lista3_10000);
            trocas += BubbleSort(&lista4_10000);
            trocas += BubbleSort(&lista5_10000);
            //100 000
            trocas += BubbleSort(&lista1_100000);
            trocas += BubbleSort(&lista2_100000);
            trocas += BubbleSort(&lista3_100000);
            trocas += BubbleSort(&lista4_100000);
            trocas += BubbleSort(&lista5_100000);

            end = clock();
            tempo += (double)(end - begin)/CLOCKS_PER_SEC;

            printf("Durante a ordenacao houve %llu trocas\n", trocas);
            printf("A ordenacao durou %f segundos\n", tempo);
            break;

        case 2:
            printf("\nOrdenando a lista por SHELL SORT...\n");
            trocas = 0;
            begin = clock();
            //1000
            trocas += ShellSort(&lista1_1000);
            trocas += ShellSort(&lista2_1000);
            trocas += ShellSort(&lista3_1000);
            trocas += ShellSort(&lista4_1000);
            trocas += ShellSort(&lista5_1000);
            //10 000
            trocas += ShellSort(&lista1_10000);
            trocas += ShellSort(&lista2_10000);
            trocas += ShellSort(&lista3_10000);
            trocas += ShellSort(&lista4_10000);
            trocas += ShellSort(&lista5_10000);
            //100 000
            trocas += ShellSort(&lista1_100000);
            trocas += ShellSort(&lista2_100000);
            trocas += ShellSort(&lista3_100000);
            trocas += ShellSort(&lista4_100000);
            trocas += ShellSort(&lista5_100000);

            end = clock();
            tempo += (double)(end - begin)/CLOCKS_PER_SEC;

            printf("Durante a ordenacao houve %llu trocas\n", trocas);
            printf("A ordenacao durou %f segundos\n", tempo);

            break;

        case 3:
            printf("\nOrdenando a lista por INSERT SORT...\n");
            trocas = 0;
            begin = clock();
            
            //1000
            trocas += InsertSort(&lista1_1000);
            trocas += InsertSort(&lista2_1000);
            trocas += InsertSort(&lista3_1000);
            trocas += InsertSort(&lista4_1000);
            trocas += InsertSort(&lista5_1000);
            //10 000
            trocas += InsertSort(&lista1_10000);
            trocas += InsertSort(&lista2_10000);
            trocas += InsertSort(&lista3_10000);
            trocas += InsertSort(&lista4_10000);
            trocas += InsertSort(&lista5_10000);
            //100 000
            trocas += InsertSort(&lista1_100000);
            trocas += InsertSort(&lista2_100000);
            trocas += InsertSort(&lista3_100000);
            trocas += InsertSort(&lista4_100000);
            trocas += InsertSort(&lista5_100000);
            
            end = clock();
            tempo += (double)(end - begin)/CLOCKS_PER_SEC ;

            printf("Durante a ordenacao houve %llu trocas\n", trocas);
            printf("A ordenacao durou %f segundos\n", tempo);

            break;

        case 4:
            printf("\nOrdenando a lista por MERGE SORT...\n");

            trocas = 0;
            begin = clock();
            //1000
            trocas += MergeSort(&lista1_1000);
            trocas += MergeSort(&lista2_1000);
            trocas += MergeSort(&lista3_1000);
            trocas += MergeSort(&lista4_1000);
            trocas += MergeSort(&lista5_1000);
            //10 000
            trocas += MergeSort(&lista1_10000);
            trocas += MergeSort(&lista2_10000);
            trocas += MergeSort(&lista3_10000);
            trocas += MergeSort(&lista4_10000);
            trocas += MergeSort(&lista5_10000);
            //100 000
            trocas += MergeSort(&lista1_100000);
            trocas += MergeSort(&lista2_100000);
            trocas += MergeSort(&lista3_100000);
            trocas += MergeSort(&lista4_100000);
            trocas += MergeSort(&lista5_100000); 
            
            ordenarEGravar("MIL-arq1_ordenado.txt", &lista1_1000, MergeSort);
            ordenarEGravar("MIL-arq2_ordenado.txt", &lista2_1000, MergeSort);
            ordenarEGravar("MIL-arq3_ordenado.txt", &lista3_1000, MergeSort);
            ordenarEGravar("MIL-arq4_ordenado.txt", &lista4_1000, MergeSort);
            ordenarEGravar("MIL-arq5_ordenado.txt", &lista5_1000, MergeSort);

            ordenarEGravar("DEZMIL-arq1_ordenado.txt", &lista1_10000, MergeSort);
            ordenarEGravar("DEZMIL-arq2_ordenado.txt", &lista2_10000, MergeSort);
            ordenarEGravar("DEZMIL-arq3_ordenado.txt", &lista3_10000, MergeSort);
            ordenarEGravar("DEZMIL-arq4_ordenado.txt", &lista4_10000, MergeSort);
            ordenarEGravar("DEZMIL-arq5_ordenado.txt", &lista5_10000, MergeSort);

            ordenarEGravar("CEM_MIL-arq1_ordenado.txt", &lista1_100000, MergeSort);
            ordenarEGravar("CEM_MIL-arq2_ordenado.txt", &lista2_100000, MergeSort);
            ordenarEGravar("CEM_MIL-arq3_ordenado.txt", &lista3_100000, MergeSort);
            ordenarEGravar("CEM_MIL-arq4_ordenado.txt", &lista4_100000, MergeSort);
            ordenarEGravar("CEM_MIL-arq5_ordenado.txt", &lista5_100000, MergeSort);
            
            end = clock();
            tempo += (double)(end - begin)/CLOCKS_PER_SEC;

            printf("Durante a ordenacao houve %llu trocas\n", trocas);
            printf("A ordenacao durou %f segundos\n", tempo);

            break;

        case 5:
            printf("\nOrdenando a lista por QUICK SORT...\n");

            trocas = 0;
            begin = clock();

            //1000
            trocas += QuickSort(&lista1_1000);
            trocas += QuickSort(&lista2_1000);
            trocas += QuickSort(&lista3_1000);
            trocas += QuickSort(&lista4_1000);
            trocas += QuickSort(&lista5_1000);
            //10 000
            trocas += QuickSort(&lista1_10000);
            trocas += QuickSort(&lista2_10000);
            trocas += QuickSort(&lista3_10000);
            trocas+= QuickSort(&lista4_10000);
            trocas += QuickSort(&lista5_10000);
            //100 000
            trocas += QuickSort(&lista1_100000);
            trocas += QuickSort(&lista2_100000);
            trocas += QuickSort(&lista3_100000);
            trocas += QuickSort(&lista4_100000);
            trocas += QuickSort(&lista5_100000);

            end = clock();
            tempo += (double)(end - begin)/CLOCKS_PER_SEC;
            
            printf("Durante a ordenacao houve %llu trocas\n", trocas);
            printf("A ordenacao durou %f segundos\n", tempo);

            break; 
    }

    return 0;

}