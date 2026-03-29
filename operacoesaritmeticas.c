#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float a, b;
    
    printf("Digite os valores para A e B abaixo:\n");
    printf("A: ");
    scanf("%f", &a);
    printf("B: ");
    scanf("%f", &b);
    printf("Resultado das 4 operacoes aritmeticas com os valores de A e B:\n");
    printf("A + B = %.2f", a + b);
    printf("\nA - B = %.2f", a - b);
    printf("\nA x B = %.2f", a * b);
    printf("\nA / B = %.2f", a / b);
    
    
    return 0;
}
 