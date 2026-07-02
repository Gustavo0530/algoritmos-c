#include <stdio.h>

int main (){

    int a[7][7], par;

    for (int i = 0 ; i < 7 ; i++) {
        for (int j = 0 ; j < 7 ; j++) {
        printf("Digite um valor para a Matriz A = [%d][%d]: ", i, j);
        scanf("%d", &a[i][j]);
        }
    }

    par = 0;

    for (int i = 0 ; i < 7 ; i++) {
        for (int j = 0 ; j < 7 ; j++) {

            if (a[i][j] % 2 == 0){
                par++;
            } 
        }
    }

    printf("\nMatriz A:\n");

    for (int i = 0 ; i < 7 ; i++) {
    
        for (int j = 0 ; j < 7 ; j++) {
        printf("%.2d\t", a[i][j]);
        }
        
        printf("\n");
    }

    printf("\nPares:\n");
    printf("%.2d", par);

    return 0;
}