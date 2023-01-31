#include <stdio.h>

int main()
{
    int candidato;
    
    printf("Em qual candidato você irá votar? Digite: ");
    scanf("%d", &candidato);
    
    if (candidato==12)
        printf("Você votou em: 12 - José Pedro da Silva!");
    else {
        if (candidato==23)
            printf("Você votou em: 23 - Pedro José da Silva!");
        else {
            if (candidato==34)
                printf("Você votou em: 34 - Silvio das Pedras!");
        }
    }
    
    // votação!

    return 0;
}
