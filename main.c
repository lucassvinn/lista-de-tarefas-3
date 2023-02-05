#include <stdio.h>
#include <math.h>

int main() {
    float comp, ab, volume, altura;

    printf("O comprimento da piramide: ");
    scanf("%f", &comp);

    ab = (3 * pow(comp, 2) * sqrt(3)) / 2;

    printf("A area da base: %f\n", ab);

    printf("A altura: ");
    scanf("%f", &altura);

    volume = (1/3) * ab * altura;

    printf("O volume da piramide: %f", volume);

    return 0;
}
