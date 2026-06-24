#include <stdio.h>

int main (){

    int a[6];
    int b[6];
    int c[12];

    printf("Vetor A:\n");

    for (int i = 0; i < 6; i++){
         do {
            printf("Digite o %d valor: ", i + 1);
            scanf("%d", &a[i]);

            if (a[i] % 2 != 0) {
                printf("ERRO! Digite um valor par\n");
            }
        } while (a[i] % 2 != 0);
    }

    printf("\nVetor B:\n");

    for (int i = 0; i < 6; i++){
        do {
            printf("Digite o %d valor: ", i + 1);
            scanf("%d", &b[i]);

            if (b[i] % 2 == 0) {
                printf("ERRO! Digite um valor impar\n");
            }
        } while (b[i] % 2 == 0);
    }
    
    for (int i = 0 ; i < 6 ; i++){
    	c[i] = a[i];
	}
	
	for (int i = 0 ; i < 6 ; i++){
    	c[i + 6] = b[i];
	}
	
	printf("\nCombinacao A e B:\n");
	
	for (int i = 0 ; i < 12 ; i++){
    	printf("Vetor C = %d\n", c[i]);
	}

    return 0;
}