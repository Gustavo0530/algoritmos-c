#include <stdio.h>

int main(){

    int i, s, s_anterior;
    
    s = 0;

    printf("\nSoma dos valores pares de 1 ate 500\n");

    for (i = 2; i <= 500 ; i++){

        if(i % 2 == 0){
            s_anterior = s; 
            s = s_anterior + i;
            printf("Numero Par encontrado: %d\n", i);
            printf("%d + %d = %d\n", s_anterior, i, s);
        }
    }

    printf("A soma dos valores pares e igual a: %d\n", s);
    
    return 0;
}