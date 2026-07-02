#include <stdio.h>

int main (){

    int a[6][5], b[6][5];

    for (int i = 0 ; i < 6 ; i++) {
        for (int j = 0 ; j < 5 ; j++) {
        printf("Digite um valor para a Matriz A = [%d][%d]: ", i, j);
        scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0 ; i < 6 ; i++) {
        for (int j = 0 ; j < 5 ; j++) {
            if (a[i][j] % 2 == 0){
                b[i][j] = a[i][j] + 5;
            } else {
                b[i][j] = a[i][j] - 4;
            }
            
        }
    }

    printf("\nMatriz A:\n");
    
    for (int i = 0 ; i < 6 ; i++) {
    
        for (int j = 0 ; j < 5 ; j++) {
        printf("%d\t", a[i][j]);
        }
        
        printf("\n");
    }

    printf("\nMatriz B:\n");
    
    for (int i = 0 ; i < 6 ; i++) {
    
        for (int j = 0 ; j < 5 ; j++) {
        printf("%d\t", b[i][j]);
        }
        
        printf("\n");
    }


    return 0;
}