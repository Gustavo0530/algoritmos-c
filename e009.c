#include <stdio.h>

int main(){

    int i, atu, ant, pro;

    ant = 1;
    atu = 1;

    printf("Sequencia de Fibonacci ate 15 termos\n");
    printf("Termo 1: %d\n", ant);
    printf("Termo 2: %d\n", atu);
    for (i = 3 ; i <= 15 ; i++) {
        pro = ant + atu;
        printf("Termo %d: %d\n", i, pro);

        ant = atu;
        atu = pro;
    }

    printf("\nFim da sequencia.\n");
    
    return 0;
}