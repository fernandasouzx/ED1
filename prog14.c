/***
 * UFMT -Ciencia da Computacao
 * Estrutura de Dados
 * Prof Ivairton M. Santos
 * Aluna = Fernanda Lima de Souza
 * Exercicio 14 - exemplo de codigo que manipula STRING 
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TAM_STR 100

int main(){
    char strA[TAM_STR],strB[TAM_STR];
    char *pt_string;
    int i;

    //incializa o vetor de caracteres
    for(i = 0; i < TAM_STR; i++){
        strA[i] = ' ';
    }

    printf("Informe uma palavra/frase:");
    //scanf("%s",strA);
    gets(strA);
    
    //Imprime caracter por caracter
    for(i = 0; i < TAM_STR; i++){
        printf("%c", strA[i]);
    }

    printf("Frase escrita (strA) = %s\n", strA);

    //copia a string A para a string b
    strcpy(strB, strA);
    printf("String B = %s\n", strB);

    //Verifica o comprimento da string
    i= strlen(strB);
    printf("O comprimento da strB = %d\n", i);

    //Verifica a comparacao entre strings
    strcat(strB, "utação");
    printf("Nova string B = %s\n", strB);
    i = strcmp (strA, strB);
    printf("O resultado da comparação das strings = %d\n", i);

    //Encontra uma posição da string que possui a subs
    pt_string = strchr(strB, 'c');
    printf("Caracter encontrada = %s\n", pt_string);

    pt_string = strstr(strB, "computação");
    printf("Caracter encontrada = %s\n", pt_string);

    return 1;
}
