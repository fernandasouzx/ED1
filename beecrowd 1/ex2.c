#include <stdio.h>

int main()
{
    double  media, a, b;
    
    scanf("%.1f", &a);
    
    scanf("%.1f", &b);

    media = ((3.5 * a) + (7.5 * b)) / 11;
    printf("MEDIA = %.5f", media);
    return 0;
}