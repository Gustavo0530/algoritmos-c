#include <stdio.h>

int main(){

    int i, j, n;
    unsigned long long f, s;
    s = 0;
    f = 0;
    
    printf("Somatorio de 15 fatoriais\n\n");

    for (i = 1 ; i <= 15 ; i++ ) {

        printf("Digite o %do inteiro: ", i);
        scanf("%d", &n);

        f = 1;

        for (j = 1 ; j <= n ; j++) {
            f *= j;
        }

        s += f;

        printf("Fatorial de %d = %llu\n", n, f);
    }

    printf("Somatorio total dos fatorials: %llu", s);



    return 0;
}

