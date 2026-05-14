#include <stdio.h>

int main() {

    int i, s,c;
    float m;

    s = 0;
    c = 0;

    printf("Analise de Numeros Pares entre 50 e 70\n\n");

    for (i = 50 ; i <= 70 ; i++){

        if(i % 2 == 0){

            s += i;
            c++;
            
            printf("Numero par encontrado: %d\n", i);
            printf("Soma Parcial: %d\n", s);
        }
    }

    if (c > 0) {

        m = s / c;

        printf("\nResultado finais:");
        printf("\nTotal de numeros pares: %d", c);
        printf("\nSoma de todos os pares: %d", s);
        printf("\nMedia aritmetica: %.2f", m);
    }

    return 0;
}


