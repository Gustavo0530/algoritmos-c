#include <stdio.h>

int main() {

    int i, b, e;
    long long p;

    p = 1;
    

    printf("Digite o valor da base: ");
    scanf("%d", &b);
    printf("Digite o valor do expoente: ");
    scanf("%d", &e);
    
    for (i = 1 ; i <= e; i++) {
        p = p * b;
        printf("Passo %d: %lld\n", i, p);
    }

    printf("\nResultado: %d elevado a %d e igual a: %lld", b, e, p);

}