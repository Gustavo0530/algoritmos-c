#include <stdio.h>

int main () {

    int a[20], b[20], s;

    printf("Digite um valor inteiro:\n");

    for (int i = 0; i < 20; i++){
        printf("Numero %d = ", i + 1);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 20; i++){
        s = 0;

        for (int j = 1; j <= a[i]; j++){
            s = s + j;
        }
        
        b[i] = s;
    }
    
    for (int i = 0; i < 20; i++){
        printf("Vetor A = %d // Vetor B = %d\n", a[i], b[i]);
    }

    return 0;
}