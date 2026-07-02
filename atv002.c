#include<stdio.h>

int main()
{
    int a[7], b[7], c[7][2];
    
    for (int i = 0 ; i < 7 ; i++) {
        printf("Digite um valor para o Vetor A = [%d]: ", i + 1);
        scanf("%d", &a[i]);
    }
    
    for (int i = 0 ; i < 7 ; i++) {
        printf("Digite um valor para o Vetor B = [%d]: ", i + 1);
        scanf("%d", &b[i]);
    }
    
    for (int i = 0 ; i < 7 ; i++) {
        c[i][0] = a[i];
        c[i][1] = b[i];
    }
    
    printf("Matriz C:\n");
    
    for (int i = 0 ; i < 7 ; i++) {
    
        for (int j = 0 ; j < 2 ; j++) {
        printf("%d\t", c[i][j]);
        }
        
        printf("\n");
    }
    
    return 0;
}