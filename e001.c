#include <stdio.h>

int main() {

    int i;
    long quadrado;

    printf("\nLista quadrado dos numeros de 15 a 200\n");

    for (i = 15; i <= 200; i++) {

        quadrado = (long)i * i;

        printf("O quadrado de %d e: %ld \n", i, quadrado);

    }

    printf("\nFim da lista.\n");

    return 0;
}

