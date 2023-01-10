#include <stdio.h>

int main()
{
    int i;
    
    int precoa;
    float novoprecoa;
    
    printf("Informe o valor do produto A: ");
    scanf("%d", &precoa);
    
    novoprecoa = (precoa * 0.2) / 100;
    
    for (i=1; i<=5; i++)
        printf("Preço do produto A = %f\n", novoprecoa);

    
    return 0;
}