#include <stdio.h>

int main (){

    int a[7][7], b[7][7], s;

    for (int i = 0 ; i < 7 ; i++) {
        for (int j = 0 ; j < 7 ; j++) {
        printf("Digite um valor para a Matriz A = [%d][%d]: ", i, j);
        scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0 ; i < 7 ; i++) {
        for (int j = 0 ; j < 7 ; j++) {
            if (i == j && i % 2 != 0){
                long long f = 1;

                for (int g = a[i][j] ; g >= 1; g--){
                f = f * g;       
                }

                b[i][j] = f;
            } else {

                s = 0;

                for (int k = 0; k <= a[i][j]; k++){
                    s = s + k;
                }
                
                b[i][j] = s;
            }
            
        }
    }
    
    printf("\nMatriz B:\n");
    
    for (int i = 0 ; i < 7 ; i++) {
    
        for (int j = 0 ; j < 7 ; j++) {
        printf("%d\t", b[i][j]);
        }
        
        printf("\n");
    }


    return 0;
}