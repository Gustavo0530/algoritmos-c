#include <stdio.h>

int main() {
    
    int i, n;

    printf("\nTabuada de Multiplicacao\n");
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    printf("\nTabuada de %d\n\n", n);

    for (i = 1; i <= 10; i++) {

        printf("%d x %.2d = %.2d\n", n, i, n * i);

    }

    printf("\nFim Tabuada.");

    return 0;
}

