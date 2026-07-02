#include <stdio.h>
int main (){

    float a[4][4], s;

    for (int i = 0 ; i < 4 ; i++) {

        for (int j = 0 ; j < 4 ; j++) {

        printf("Digite um valor para a Matriz A = [%d][%d]: ", i, j);
        scanf("%f", &a[i][j]);

        }

    }

    s = 0;

    for (int i = 0 ; i < 4 ; i++) {

        for (int j = 0 ; j < 4 ; j++) {

            if (i == j){

                s += a[i][j];

            }
        }
    }


    printf("\nSomatorio:\n");
    printf("%.2f", s);

    return 0;

} 