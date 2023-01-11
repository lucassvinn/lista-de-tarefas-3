#include <stdio.h>

int main()
{
    int x, y, z;
    
    printf("Informe um número inteiro: ");
    scanf("%d", &x);
    
    if ((x>1) && (x<=10))
        for (y=1; y<=10; y++) {
            z = x * y;
            printf("%d * %d = %d\n", x, y, z);
        }
        
    return 0;
}
