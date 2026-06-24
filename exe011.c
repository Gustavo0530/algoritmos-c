#include <stdio.h>

int main (){

    int a[10], t;

    printf("Digite um valor inteiro: ");
    scanf("%d", &t);

    for (int i = 0; i < 10; i++){
        a[i] = t * (i + 1); 
    }

    printf("Tabudada de %d\n", t);

    for (int i = 0; i < 10; i++){
        printf("Vetor A = %d\n", a[i]);
    }

    return 0;
}