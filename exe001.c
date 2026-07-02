#include <stdio.h>

int main (){

    int a[8];
    int b[8];

    printf("Vetor A:\n");

    for (int i = 0; i < 8; i++){
        printf("Numero %d = ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\nResultado:\n");

    for (int i = 0; i < 8; i++){
        b[i] = a[i] * 3;
        printf("\nVetor A = %d // Vetor B = %d", a[i], b[i]);
    }

    return 0;
}
