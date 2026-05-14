#include <stdio.h>

int main(){

    int i;
    float v, s, m;
    v = 0;
    s = 0;
    
    printf("Somatorio da media de 10 numeros\n\n");

    for (i = 1 ; i <= 10 ; i++ ) {

        printf("Digite o %do valor: ", i);
        scanf("%f", &v);

        s += v;
        m = s / i;

        printf("Rodada %d | Soma atual: %.2f | Media parcial: %.2f\n\n", i, s, m);

    }

    printf("Somatorio total das medias:");
    printf("Total acumulado: %.2f\n", s);
    printf("Media final: %.2f\n", m);

    return 0; 
}

