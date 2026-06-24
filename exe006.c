#include <stdio.h>

int main () {

    float a[20];
    float b[20];

    printf("Digite um valor real:\n");

    for (int i = 0; i < 20; i++){
        printf("Numero %d = ", i + 1);
        scanf("%f", &a[i]);
    }

    printf("\nResultado:\n");

    for (int i = 0; i < 20; i++){
        b[i] = a[19 - i];
        printf("\nVetor A = %.1f // Vetor B = %.1f", a[i], b[i]);
    } 


    return 0;
}