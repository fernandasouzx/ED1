/***
*Aluna: Fernanda Lima de Souza
***/

#include "ordenacao.h"

/**
 * @brief Método de ordenação Bubble Sort (complexidade 0(n^2))
 * @param lst - ponteiro para estrutura para o tipo Lista (tipo_lista)
 */
void bubbleSort (tipo_lista *lst){
    int flag_troca, i, aux;
    do {
        flag_troca = 0;
        for (i=0; i < lst->contador-1; i++){
            if (lst->lista[i] > lst->lista[i+1]){
                aux = lst->lista[i];
                lst->lista[i] = lst->lista[i+1];
                lst->lista[i+1] = aux;
                flag_troca++;
            }
        }
    } while (flag_troca != 0);
}

/**
 * @brief Função que ordena a lista pelo método Shell Sort(complexidade o(n^2)).
 * 
 * @param lst - ponteiro para estrutura para o tipo Lista (tipo_lista)
 */
    
    void shellSort (tipo_lista *lst){
    int salto, i,flag_troca, aux ;

    salto = (int) lst->contador / 2;

    while(salto > 1){
        for (i=0; i < lst->contador-1; i++){
            if (lst->lista[i] > lst->lista[i+salto]){
                aux = lst->lista[i];
                lst->lista[i] = lst->lista[i+salto];
                lst->lista[i+salto] = aux;
            }
        } salto = (int) salto / 2;
    } 


    //Etapa equivalente ao Bubble Sort (salto = 1)
    do { //realiza ao menos 1 passagem
        flag_troca = 0;
        for (i=0; i < lst->contador-1; i++){
            if (lst->lista[i] > lst->lista[i+salto]){
                aux = lst->lista[i+salto];
                lst->lista[i+salto] = lst->lista[i];
                lst->lista[i] = aux;
                flag_troca++; // modifica a flag troca
            }
        }
    } while (flag_troca != 0);
}   