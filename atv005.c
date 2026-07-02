#include <stdio.h>

int main (){

    float a[5][4], b[5][4];

    for (int i = 0 ; i < 5 ; i++) {
        for (int j = 0 ; j < 4 ; j++) {
        printf("Digite um valor para a Matriz A = [%d][%d]: ", i, j);
        scanf("%f", &a[i][j]);
        }
    }

    for (int i = 0 ; i < 5 ; i++) {
        for (int j = 0 ; j < 4 ; j++) {
        b[i][j] = (a[i][j] * 9 / 5.0) + 32; 
        }
    }
    
    printf("Matriz A:\n");
    
    for (int i = 0 ; i < 5 ; i++) {
    
        for (int j = 0 ; j < 4 ; j++) {
        printf("%f\t", a[i][j]);
        }
        
        printf("\n");
    }

    printf("Matriz B:\n");
    
    for (int i = 0 ; i < 5 ; i++) {
        for (int j = 0 ; j < 4 ; j++) {
        printf("%.2f\t", b[i][j]);
        }
        
        printf("\n");
    }

    return 0;
}