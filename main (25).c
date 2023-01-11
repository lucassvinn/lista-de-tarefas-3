#include <stdio.h>

int main()
{
    int numero, cont, resultado;
    
    printf("Informe um número inteiro: ");
    scanf("%d", &numero);
    
    if ((numero>1) && (numero<=10))
        for (cont=1; cont<=10; cont++) {
            resultado = numero * cont;
            printf("%d * %d = %d\n", numero, cont, resultado);
        }
    else
        printf("\n o número não está entre 1 e 10!");
        
    return 0;
}
