#include <stdio.h>

int main()
{
    float r, a, alateral, abtopo , atotal, clata;
    
    printf("Informe o raio: ");
    scanf("%f", &r);
    
    printf("Informe a a altura: ");
    scanf("%f", &a);
    
    alateral = 2*3.14159* r * a;
    abtopo = 2*3.14159* r * r;
    atotal = alateral + abtopo;
    clata = atotal * 100;
  
  
    printf("O VALOR DO CUSTO E = %.2f\n", ctlata);

    return 0;
}
