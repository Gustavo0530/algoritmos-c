#include <stdio.h>
#include <stdlib.h>


int main() {
    
    float v, c, l, a;
    
    printf("Digite o comprimento da caixa: ");
    scanf("%f", &c);
    printf("Digite a largura da caixa: ");
    scanf("%f", &l);
    printf("Digite a altura da caixa: ");
    scanf("%f", &a);
    
    v = c * l * a;
    
    printf("O volume dessa caixa retangular e %f", v);
    return 0;
}
 