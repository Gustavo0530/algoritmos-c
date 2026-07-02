#include <stdio.h>

int main () {

    float a[12], b[12], c[12][2];

    for (int i = 0; i < 12 ; i++){
        printf("Digite um valor para o Vetor A = [%d]: ", i+1);
        scanf("%f", &a[i]);
    }

    for (int i = 0; i < 12 ; i++){
        printf("Digite um valor para o Vetor B = [%d]: ", i+1);
        scanf("%f", &b[i]);
    }

    for (int i = 0; i < 12 ; i++){
       c[i][0] = a[i] * 2;

       c[i][1] = b[i] - 5;
    }

    printf("Vetor A:\n");

    for (int i = 0; i < 12; i++){
        printf("[%.2f]\n", a[i]);
    }

    printf("Vetor B:\n");

    for (int i = 0; i < 12; i++){
        printf("[%.2f]\n", b[i]);
    }
    
    printf("Matriz C:\n");
    
    for (int i = 0 ; i < 12 ; i++) {
        for (int j = 0 ; j < 2 ; j++) {
        printf("%.2f\t", c[i][j]);
        }
        
        printf("\n");
    }

    return 0;
}