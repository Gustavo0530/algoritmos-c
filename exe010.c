#include <stdio.h>

int main(){

    int a[10];
    float b[10];

    printf("Digite um valor inteiro:\n");

    for (int i = 0; i < 10; i++){
        printf("Numero %d = ", i + 1);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 10; i++){
        b[i] = a[i] / 2.0;
    }

    printf("\nResultado:\n");

    for (int i = 0; i < 10; i++){
        printf("Vetor A = %d // Vetor B = %.2f\n", a[i], b[i]);
    }

    return 0;
}