#include <stdio.h>
#include <stdlib.h>


int main() {
    
    float r, c, d;
    
    printf("Digite o valor de dolares que deseja converter: ");
    scanf("%f", &d);
    printf("Digite a cotacao atual do dolar: ");
    scanf("%f", &c);
    
    r = d * c;
    
    printf("O valor de %.2f dolares, convertido para real sera igual a %.2f", d, r);
    
    return 0;
}