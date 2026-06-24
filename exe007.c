#include <stdio.h>

int main (){

    float a[5], b[5], c[5], d[15];

    printf("Vetor A:\n");

    for (int i = 0; i < 5; i++){
        printf("Numero %d = ", i + 1);
        scanf("%f", &a[i]);
    }

    printf("\nVetor B:\n");

    for (int i = 0; i < 5; i++){
        printf("Numero %d = ", i + 1);
        scanf("%f", &b[i]);
    }
    
    printf("\nVetor C:\n");

    for (int i = 0; i < 5; i++){
        printf("Numero %d = ", i + 1);
        scanf("%f", &c[i]);
    }

    printf("\nJuncao entre A, B e C:\n");

    for (int i = 0; i < 5; i++) {
        d[i] = a[i];
    }
    
    for (int i = 0; i < 5; i++) {
        d[i + 5] = b[i];
    }
    
    for (int i = 0; i < 5; i++) {
        d[i + 10] = c[i];
    }

    for (int i = 0; i < 15; i++){
        printf("Vetor D = %.1f\n", d[i]);
    }
    
    

    return 0;
}