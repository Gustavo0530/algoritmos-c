#include <stdio.h>

int main () {

    int a[8];
    int b[8];
    
    for (int i = 0; i < 8; i++){
        printf("Numero %d = ", i + 1);
        scanf("%d", &a[i]);
    }
    
    for (int i = 0; i < 8; i++){
    	b[i] = a[i] * 3;
    	printf("\nValor %d = %d", i + 1, b[i]);
	}
	
    return 0;
}