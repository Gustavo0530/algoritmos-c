#include <stdio.h>
#include <math.h>


int main() {
    
    float n, n2;
    
    printf("Numeros elevados ao quadrado\n");
    printf("Digite um valor: ");
    scanf("%f", &n);
    
    n2 = pow(n, 2);
    
    printf("O valor %.2f elevado ao quadrado e igual a %.2f", n, n2);
    return 0;
}
 