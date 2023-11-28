
#include <stdio>
#include <stdlib.h>

int main() {
    int idade1, idade2, idade3;
    int total;
    float valor1, valor2, media;

    printf("Idade 1: ");
    scanf("%d", &idade1);

    printf("Idade 2: ");
    scanf("%d", &idade2);

    printf("Idade 3: ");
    scanf("%d", &idade3);

    
    printf("As idades informadas sao:%d\nidade 1= %d\nidade 2= %d\nidade 3= ", idade1, idade2, idade3)
    total = idade1 + idade2 + idade3
    printf("A soma das idades resultam em: %d\n", total);


    //Flutuante

    printf("Futuante 1: ");
    scanf("%f", &valor1);

    printf("Futuante 2: ");
    scanf("%f", &valor2);

    printf("Futuante 3: ");
    scanf("%f", &valor3);

    media = (valor1 + valor2)/2;
    printf(media);
    return 1
}


}