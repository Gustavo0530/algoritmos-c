#include <stdio.h>

int main (){

    int a[15];
    int b[15];
    int c[30];

    printf("Vetor A:\n");

    for (int i = 0; i < 15; i++){
        printf("Numero %d = ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\nVetor B:\n");

    for (int i = 0; i < 15; i++){
        printf("Numero %d = ", i + 1);
        scanf("%d", &b[i]);
    }

    printf("\nJuncao A e B:\n");

    for (int i = 0; i < 15; i++){
        c[i] = a[i];
    }

    
    for (int i = 0; i < 15; i++){
        c[i + 15] = b[i];
    }

    for (int i = 0; i < 30; i++){
        printf("\nVetor C = %d", c[i]);
    }
    
    return 0;
}