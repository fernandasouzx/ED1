/***
 * UFMT -Ciencia da Computacao
 * Estrutura de Dados
 * Aluna = Fernanda Lima de Souza
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int voto, total_cachorro, total_gato, total_nulo;

    total_cachorro = 0;
    total_gato = 0; 
    total_nulo = 0;
    while (total_cachorro + total_gato + total_nulo < 5) {
        printf("Vote no seu animal de estimação favorito:\n(1)Para cachorro\n(2)Para gato\n(3)Para votar nulo");
        scanf("%d", &voto);

        /*if (voto == 1){
            total_cachorro++;
        }
        else if(voto == 2){

            total_gato++;
        }
        else {
            total_nulo++;
        } */
    
        switch(voto){
            case 1:
                total_cachorro++;
                break;
            case 2:
                total_gato;
                break;
            default:
                total_nulo;
        }
   
    }
    printf("Resultado da votação: %d cachorro, %d gato, %d nulo", total_cachorro, total_gato, total_nulo);
    return 1;

}

