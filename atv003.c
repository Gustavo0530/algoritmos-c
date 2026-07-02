#include <stdio.h>

int main (){

    int a[10], c[10][3];

    for (int i = 0; i < 10 ; i++){
        printf("Digite um valor para o Vetor A = [%d]: ", i+1);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 10 ; i++){
       c[i][0] = a[i] + 5;

       long long f = 1;

       for (int j = a[i] ; j >= 1; j--){
          f = f * j;       
       }

       c[i][1] = f;

       c[i][2] = a[i] * a[i];
    }

    printf("Matriz C:\n");
    
    for (int i = 0 ; i < 10 ; i++) {
    
        for (int j = 0 ; j < 3 ; j++) {
        printf("%d\t", c[i][j]);
        }
        
        printf("\n");
    }

    return 0;
}