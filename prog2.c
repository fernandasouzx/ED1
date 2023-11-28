#include <stdio.h>
int valor;
float preco1, preco2, media;


int main() {
    valor = 10;
    preco1 = 4.5;
    preco2 = 6.8;

    media = (preco1 + preco2) / 2;
    printf("Numero é: %d", valor);
    printf("OS precos sao:\n\tPreço 1 = R$ %f\n\tpPreço 2 = R$ %f\n\tMedia = R$ %f\n", preco1, preco2, media);
    return 1;
}


