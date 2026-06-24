#include <stdio.h>

int main () {

    int a[12], b[12];

    printf("Digite um valor inteiro:\n");

    for (int i = 0; i < 12; i++){
        printf("Numero %d = ", i + 1);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 12; i++){
        b[i] = a[i];

        if (b[i] % 2 != 0){
            b[i] = b[i] * 2;
        } 
    }

    printf("\nResultado:\n");

    for (int i = 0; i < 12; i++){
        printf("Vetor A = %d // Vetor B = %d\n", a[i], b[i]);
    }

    return 0;
}