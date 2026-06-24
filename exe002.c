#include <stdio.h>

int main (){

    int a[10];
    int b[10];
    int c[10];

    printf("Vetor A:\n");

    for (int i = 0; i < 10; i++){
        printf("Numero %d = ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\nVetor B:\n");

    for (int i = 0; i < 10; i++){
        printf("Numero %d = ", i + 1);
        scanf("%d", &b[i]);
    }

    printf("\nSubstracao:\n");

    for (int i = 0; i < 10; i++){
        c[i] = a[i] - b[i];
        printf("\n%d - %d = %d", a[i], b[i], c[i]);
    }
    
    return 0;
}