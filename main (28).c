#include <stdio.h>
#include <math.h>

int main()
{
    int x, y;
    int soma, produto, quadrado, srquad, sen;
    
    printf("Informe um números: ");
    scanf("%d", &x);
    
    printf("Informe outro número: ");
    scanf("%d", &y);
    
    soma = x + y;
    produto = x * pow(y, 2);
    quadrado = pow(x, 2);
    srquad = sqrt(pow(x, 2) + pow(y, 2));
    sen = sin(x - y);
    
    printf("A soma entre os dois números é de: %d\n", soma);
    printf("O produto do primeiro pelo quadrado do segundo é: %d\n", produto);
    printf("O quadrado do primeiro número: %d\n", quadrado);
    printf("A raiz quadrada da soma dos quadrados é de: %d\n", srquad);
    printf("O seno da diferença do primeiro número pelo segundo: %d", sen);
    return 0;
}
