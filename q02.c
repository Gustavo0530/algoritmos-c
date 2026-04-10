#include <stdio.h>

int main () {
	
	int n1;
	
	printf("Digite um numero: ");
	scanf("%d", &n1);
	
	if (n1 < 0) {
		
		n1 = n1 * (-1);
		printf("O valor e: %d", n1);
		
	} else {
		
		printf("O valor e: %d", n1);
		
	}
	
	return 0;
}
