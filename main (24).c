#include <stdio.h>

int main()
{
    int num, impp;
    
    printf("Ache os pares ou ímpares da sequeência de 1 a 100 (0/1): ");
    scanf("%d", &impp);


    if ((impp==1) || (impp==0))
        for (num=1; num<=100; num++) {
        if (num%2==impp)
            printf("%d\n", num);
        }
    else {
        if (impp!=1 || 0)
            printf("Você informou o valor o valor incorreto...");
    }
    return 0;
}
