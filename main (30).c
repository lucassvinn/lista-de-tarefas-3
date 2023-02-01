#include <stdio.h>

int main()
{
    float Raio, Altura, AreaLateral, AreaBaseTopo, AreaTotal, CustoLata;
    
    scanf("%f", &Raio);
    scanf("%f", &Altura);
    
    AreaLateral = 2*3.14159*Raio*Altura;
    AreaBaseTopo = 2*3.14159*Raio*Raio;
    AreaTotal = AreaLateral + AreaBaseTopo;
    CustoLata = AreaTotal*100;
  
  
    printf("O VALOR DO CUSTO E = %.2f\n", CustoLata);

    return 0;
}
