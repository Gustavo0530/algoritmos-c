#include <stdio.h>
#include <math.h>

int main() {
    
    int b, e;
    float r;
    
    printf("Calculo de uma potencia\n");
    printf("Preencha os dados abaixo:\n");
    printf("Numero da base: ");
    scanf("%d", &b);
    printf("Numero do expoente: ");
    scanf("%d", &e);
    
    r = pow(b, e);
    
    printf("O resultado do calculo dessa potencia sera igual a %.0f", r);
    
    return 0;
}
 