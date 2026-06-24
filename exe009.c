#include <stdio.h>

int main(){

    int a[10], b[10];
	
	printf("Digite um valor positivo:\n");
	
    for (int i = 0; i < 10; i++)
    {
        do {
            printf("Digite o %d valor: ", i + 1);
            scanf("%d", &a[i]);

            if (a[i] <= 0) {
                printf("ERRO! Digite um valor Positivo\n");
            }
        } while (a[i] <= 0);
    }

    for (int i = 0; i < 10; i++){
        b[i] = -a[i];
    }
	
	printf("\nResultado: \n");
	
    for (int i = 0; i < 10; i++){
        printf("Vetor A = %d // Vetor B = %d\n", a[i], b[i]);
    }
    
    return 0;
}