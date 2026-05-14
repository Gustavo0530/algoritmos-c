#include <stdio.h>
#include <math.h>

int main(){

    int i, p;

    printf("Potencia de base 3 elevado a valores de 0 ate 15\n");

    for (i = 0 ; i <= 15 ; i++ ) {
        p = pow(3, i);
        printf("\nPotencia de 3 elevado a %d = %d", i, p);
    }

    return 0;
}

