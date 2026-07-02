#include<stdio.h>

int main()
{
    int a[5][3], b[5][3], c[5][3];
    
    for (int i = 0 ; i < 5 ; i++) {
    
        for (int j = 0 ; j < 3 ; j++) {
        printf("Digite um valor para a Matriz A = [%d][%d]: ", i, j);
        scanf("%d", &a[i][j]);
        }
    }
    
    for (int i = 0 ; i < 5 ; i++) {
    
        for (int j = 0 ; j < 3 ; j++) {
        printf("Digite um valor para a Matriz B = [%d][%d]: ", i, j);
        scanf("%d", &b[i][j]);
        }
    }
    
    for (int i = 0 ; i < 5 ; i++) {
    
        for (int j = 0 ; j < 3 ; j++) {
        c[i][j] = a[i][j] + b[i][j];
        }
    }
    
    printf("Matriz C:\n");
    
    for (int i = 0 ; i < 5 ; i++) {
    
        for (int j = 0 ; j < 3 ; j++) {
        printf("%d\t", c[i][j]);
        }
        
        printf("\n");
    }
    
    return 0;
}