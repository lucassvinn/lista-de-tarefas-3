#include <stdio.h>

int main()
{
    float c[10], z[10];
    
    for (c[0]=1.50; c[0]<=10; 2 * c[0]++) {
        printf("%f\n", c[0]);
    }
    
    printf("--------------\n");

    for (z[0]=1.10; z[0]<=10; 3 * z[0]++) {
        printf("%f\n", z[0]);
    }
    
    printf("--------------\n");
    
    if (z[9] > c[10])
        printf("Zé ficará maior que Chico com o passar dos anos.");
    else {
        if (z[9] < c[10])
            printf("Zé não irá ultrapassar a altura do Chico!");
    }
    
  
    
    return 0;
}
