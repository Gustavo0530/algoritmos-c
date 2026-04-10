#include <stdio.h>

int main() {
	
	int a, b, c, d;
	
	printf("Valores divisiveis por 2 e 3");
	printf("\nDigite um valor para A: ");
	scanf("%d", &a);
	printf("Digite um valor para B: ");
	scanf("%d", &b);
	printf("Digite um valor para C: ");
	scanf("%d", &c);
	printf("Digite um valor para D: ");
	scanf("%d", &d);
	
	if (a % 2 == 0 && a % 3 == 0) {
		
		printf("\nO valor %d e divisvel por 2 e 3", a);
		
	} else {
		
		printf("\nO valor %d nao e divisvel por 2 e 3", a);
	}
	
	
	if (b % 2 == 0 && b % 3 == 0) {
		
		printf("\nO valor %d e divisvel por 2 e 3", b);
		
	} else {
		
		printf("\nO valor %d nao e divisvel por 2 e 3", b);
	}
	
	if (c % 2 == 0 && c % 3 == 0) {
		
		printf("\nO valor %d e divisvel por 2 e 3", c);
		
	} else {
		
		printf("\nO valor %d nao e divisvel por 2 e 3", c);
	}
	
	if (d % 2 == 0 && d % 3 == 0) {
		
		printf("\nO valor %d e divisvel por 2 e 3", d);
		
	} else {
		
		printf("\nO valor %d nao e divisvel por 2 e 3", d);
	}
	
	return 0;
	
}