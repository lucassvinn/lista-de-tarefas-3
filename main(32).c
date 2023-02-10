#include <stdio.h>

int main() {
    int opt;
    char op;

    printf("Deseja acessar o menu (y / n): ");
    scanf("%c", &op);

    if (op == 'y')
        printf("1 - Inluir Dados\n");
        printf("2 - Alterar Dados\n");
        printf("3 - Consultar\n");
        printf("4 - Excluir Conta\n");

        printf("Digite os numeros para selecionar as opcoes: ");
        scanf("%d", &opt);

        switch (opt) {
            case 1:
                printf("Selecionado - Inluir Dados!");
                break;
            case 2:
                printf("Selecionado - Alterar Dados!");
                break;
            case 3:
                printf("Selecionado - Consultar!");
                break;
            case 4:
                printf("Selecionado - Excluir Conta!");
                break;
        }

    return 0;
}
