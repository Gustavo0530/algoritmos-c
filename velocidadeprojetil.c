#include <stdio.h>

int main() {
    
    float v, d, t;
    
    printf("Calculo da velocidade de um projetil\n");
    printf("Preencha os dados abaixo:\n");
    printf("Distancia (Km): ");
    scanf("%f", &d);
    printf("Tempo (min): ");
    scanf("%f", &t);
    
    v = (d * 1000) / (t * 60);
    
    printf("a velocidade desse projetil e de %.2f m/s", v);

    return 0;
}
 