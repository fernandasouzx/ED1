#include <stdio.h>

int main()
{
    double media, a, b;

    scanf("%lf", &a);
    scanf("%lf", &b);

    media = ((3.5 * a) + (7.5 * b)) / 11;
    printf("MEDIA = %.5lf", media);
    return 1;
}