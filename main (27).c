#include <stdio.h>

int main()
{
    int vt, option, desc, calc;
    
    printf("Informe o valor total gasto: ");
    scanf("%d", &vt);
    
    printf("Opções de pagamento:\n ");
    printf("Digite 1 para 10 porcento de desconto ou 2 para caso queria dividir em duas vezes: ");
    scanf("%d", &option);
    
    switch (option) {
        case 1:
            desc = vt - (vt * 10 / 100);
            printf("O valor total fica: %d", desc);
        break;
        case 2:
            calc = vt / 2;
            printf("Você irá pagar: %d durante 2 meses!", calc);
    }

    return 0;
}
