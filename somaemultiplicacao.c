#include <stdio.h>

int main() {
    
    int a, b, c, d;
    
    printf("Escolha um valor para A: ");
    scanf("%d", &a);
    printf("Escolha um valor para B: ");
    scanf("%d", &b);
    printf("Escolha um valor para C: ");
    scanf("%d", &c);
    printf("Escolha um valor para D: ");
    scanf("%d", &d);
    
    printf("\nSoma:\n");  
    printf("\nA + B = %d\n", a + b);
    printf("A + C = %d\n", a + c);
    printf("A + D = %d\n", a + d);
    printf("B + C = %d\n", b + c);
    printf("B + D = %d\n", b + d);
    printf("C + D = %d\n", c + d);
    
    printf("\nMultiplicacao:\n");
    printf("\nA x B = %d\n", a * b);
    printf("A x C = %d\n", a * c);
    printf("A x D = %d\n", a * d);
    printf("B x C = %d\n", b * c);
    printf("B x D = %d\n", b * d);
    printf("C x D = %d\n", c * d);
    
    return 0;
}
 