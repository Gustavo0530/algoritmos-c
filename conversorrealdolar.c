#include <stdio.h>
#include <stdlib.h>


int main() {
    
    float r, c, d;
    
    printf("Digite o valor de reais que deseja converter: ");
    scanf("%f", &r);
    printf("Digite a cotacao atual do dolar: ");
    scanf("%f", &c);
    
    d = r / c;
    
    printf("O valor de %f reais, convertido para dolar sera igual a %f", r, d);
    
    return 0;
}