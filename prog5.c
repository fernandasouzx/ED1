#include <stdio.h>

int main() {
    char letra1, letra2;



    fflush(stdin);
    printf("Informe uma letra: ");
    scanf("%c", &letra1);
    fflush(stdin);
    scanf("%c", &letra2);
    printf("as letras sao: ", letra1,letra2);
}