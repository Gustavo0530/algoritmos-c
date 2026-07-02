#include <stdio.h>

int main (){

    float a[8][6], b[8], sl, s;

    for (int i = 0 ; i < 8 ; i++) {
        for (int j = 0 ; j < 6 ; j++) {
        printf("Digite um valor para a Matriz A = [%d][%d]: ", i, j);
        scanf("%f", &a[i][j]);
        }
    }

    for (int i = 0 ; i < 8 ; i++){
        sl = 0.0;
        
        for (int j = 0 ; j < 6; j++){
            sl += a[i][j];
        }
        
        b[i] = sl;
    }

    s = 0.0;
    for (int i = 0; i < 8; i++) {
        s += b[i];
    }
    
    printf("\nVetor B\n");

    for (int i = 0; i < 8; i++){
        printf("Linha [%d]; %.2f\n", i, b[i]);
    }

    
    printf("\nSomatorio de todos os elementos de B: %.2f\n", s);
    
    return 0;
}