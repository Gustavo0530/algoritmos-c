#include <stdio.h>

int main() {
    int n;

    printf("Digite um inteiro impar N (1 <= N <= 19): ");
    scanf("%d", &n);

    if (n < 1 || n > 19 || n % 2 == 0) {
        printf("ERRO - N deve ser impar e entre 1 e 19.\n");
        return 1;
    }

    for (int astericos = 1; astericos <= n; astericos += 2) {
        
        int espacos = (n - astericos) / 2; 

        for (int i = 0; i < espacos; i++) {
            printf(" ");
        }

        for (int i = 0; i < astericos; i++) {
            printf("*");
        }

        printf("\n");
    }

    for (int astericos = n - 2; astericos >= 1; astericos -= 2) {
        
        int espacos = (n - astericos) / 2;

        for (int i = 0; i < espacos; i++) {
            printf(" ");
        }

        for (int i = 0; i < astericos; i++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

