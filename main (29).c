#include <stdio.h>

int main()
{
    int x, y, m;
    
    printf("Informe um valor inteiro para X: ");
    scanf("%d", &x);
    
    printf("Informe um valor inteiro para Y: ");
    scanf("%d", &y);
    
    m = (x + y) / 2;
    
    printf("A média aritmética de %d e %d e: %d", x, y, m);

    return 0;
}
