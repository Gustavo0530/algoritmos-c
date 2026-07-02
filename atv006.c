#include <stdio.h>

int main (){

    int a[5][5], b[5][5];

    for (int i = 0 ; i < 5 ; i++) {
        for (int j = 0 ; j < 5 ; j++) {
        printf("Digite um valor para a Matriz A = [%d][%d]: ", i, j);
        scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0 ; i < 5 ; i++) {
        for (int j = 0 ; j < 5 ; j++) {
            if (i == j){
                b[i][j] = a[i][j] * 3;
            } else {
                b[i][j] = a[i][j] * 2;
            }
            
        }
    }
    
    printf("\nMatriz B:\n");
    
    for (int i = 0 ; i < 5 ; i++) {
    
        for (int j = 0 ; j < 5 ; j++) {
        printf("%d\t", b[i][j]);
        }
        
        printf("\n");
    }


    return 0;
}