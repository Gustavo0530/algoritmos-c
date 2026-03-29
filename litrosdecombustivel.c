#include <stdio.h>
#include <stdlib.h>


int main() {
    
    float t, v, d, lu;
    
    printf("Quantas horas foram necessarias para fazer esta viagem: ");
    scanf("%f", &t);
    printf("Qual foi a velocidade media em km/h do veiculo durante a viagem: ");
    scanf("%f", &v);
    
    d = t * v;
    lu = d / 12;
    
    printf("A quantidade de litros de combustivel gasto(s) nessa viagem de %.2f km foi de %.2f litro(s)",d, lu);
    
    return 0;
}
 