#include <stdio.h>

int main (){

    int i;
    unsigned long long g, s;
    g = 1;
    s = 0;

    printf("Problema dos graos de trigo no xadrez\n\n");
    
    for (i = 1 ; i <= 64 ; i++ ) {

        s += g;

        printf("Casa %2d: %lld graos | Total de graos acumulado: %llu\n", i, g, s);
        
        g *= 2;
    }

    printf("Resultado final (64 casas): %llu graos", s);

    return 0;
}

