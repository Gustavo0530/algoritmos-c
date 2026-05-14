#include <stdio.h>

int main(){

    int i, j;
    long f;

    printf("\nFatorial dos numeros impares de 1 a 10\n\n");

    for (i = 1 ; i <= 10 ; i++) {

        if(i % 2 != 0){

            f = 1;

            for (j = 1 ; j <= i; j++){

                f *= j;
            }

            printf("O numero %d e impar | Fatorial (%d!) = %lu\n", i, i, f);
        }
    }

    printf("\nFim dos calculos fatoriais.\n");

    return 0;
}

