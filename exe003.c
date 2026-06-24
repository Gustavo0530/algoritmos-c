#include <stdio.h>

int main (){

    int a[15];
    int b[15];

    printf("Digite um valor inteiro:\n");

    for (int i = 0; i < 15; i++){
        printf("Numero %d = ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\nResultado:\n");

    for (int i = 0; i < 15; i++){
        b[i] = a[i] * a[i];
        printf("\nVetor A = %d // Vetor B = %d", a[i], b[i]);
    }
    return 0;
}