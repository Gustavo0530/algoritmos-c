#include <stdio.h>

int main (){

    int i, s, s_anterior;

    s = 1;
    s_anterior = 0;

    printf("\nSoma dos 100 primeiros numeros naturais\n\n");

    for (i = 2 ; i <= 100; i++) {
        s_anterior = s; 
        s = s_anterior + i;
        printf("%d + %d = %d\n", s_anterior, i, s);
    }

    printf("O resultado final da soma de 1 ate 100 e: %d\n", s);

    return 0;
}

