#include <stdio.h>

int main() {
    
    int a, b, c, d, p, s;
    
    printf("Digite um valor inteiro para cada variavel abaixo:\n");
    printf("A: ");
    scanf("%d", &a);
    printf("B: ");
    scanf("%d", &b);
    printf("C: ");
    scanf("%d", &c);
    printf("D: ");
    scanf("%d", &d);
    
    p = a * c;
    s = b + d;
    
    printf("\nCalculo do Produto entre A e C\n");
    printf("O resultado do Produto entre %d e %d e igual a %d\n", a, c, p);
    
    printf("\nCalculo da Soma entre B e D\n");
    printf("O resultado da Soma entre %d e %d e igual a %d", b, d, s);
    
    return 0;
}
 