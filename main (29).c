#include <stdio.h>

int main()
{
    int x, y, media;
    
    printf("Informe um valor inteiro para X: ");
    scanf("%d", &x);
    
    printf("Informe um valor inteiro para Y: ");
    scanf("%d", &y);
    
    media = (x + y) / 2;
    
    printf("A média aritmética de %d e %d e: %d", x, y, media);

    return 0;
}
