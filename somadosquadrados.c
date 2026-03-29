#include <stdio.h>
#include <math.h>

int main() {
    
    float a, b, c, a2, b2, c2, sq;
    
    printf("Numeros elevados ao quadrado\n");
    printf("Digite um valor para A: ");
    scanf("%f", &a);
    printf("Digite um valor para B: ");
    scanf("%f", &b);
    printf("Digite um valor para C: ");
    scanf("%f", &c);
    
    a2 = pow(a, 2);
    b2 = pow(b, 2);
    c2 = pow(c, 2);
    sq = a2 + b2 + c2;
    
    
    printf("O valores de A, B e C elevados ao quadrado e somados e igual a %.2f", sq);
    return 0;
}
 