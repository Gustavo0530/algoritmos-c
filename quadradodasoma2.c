#include <stdio.h>
#include <math.h>

int main() {
    
    int a, b, c, qs;
    
    printf("Quadrado da Soma\n");
    printf("Digite um valor para A: ");
    scanf("%d", &a);
    printf("Digite um valor para B: ");
    scanf("%d", &b);
    printf("Digite um valor para C: ");
    scanf("%d", &c);
    
    qs = (a + b + c) * (a + b + c);
    
    printf("O quadrado da soma feito entre os valores de A, B e C e igual a %d", qs);
    
    return 0;
}
 